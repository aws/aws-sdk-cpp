/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */


#include <gtest/gtest.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/http/standard/StandardHttpRequest.h>
#include <memory>

using namespace Aws::Client;
AWS_CORE_API extern const char MESSAGE_LOWER_CASE[];
AWS_CORE_API extern const char MESSAGE_CAMEL_CASE[];
AWS_CORE_API extern const char ERROR_TYPE_HEADER[];
AWS_CORE_API extern const char REQUEST_ID_HEADER[];
AWS_CORE_API extern const char QUERY_ERROR_HEADER[];
AWS_CORE_API extern const char TYPE[];

enum JsonErrorResponseStyle
{
    LowerCaseMessage = 1, // error message is in JSON body keyed with "message"
    UpperCaseMessage = 2, // error message is in JSON body keyed with "MESSAGE"
    Header = 4, // exception is stated in the header
    ResponseCode = 8 // exception should be derived from HTTP response code
};

enum XmlErrorResponseStyle
{
    SingularErrorNode = 1,
    PluralErrorNode = 2,
    IllFormed = 4
};

static const char ERROR_MARSHALLER_TEST_ALLOC_TAG[] = "ErrorMarshllerTestAllocTag";

static Aws::UniquePtr<Aws::Http::HttpResponse> BuildHttpResponse(const Aws::String& exception, const Aws::String& message, const Aws::String& requestId, int style = LowerCaseMessage, const Aws::String& queryErrorCode = "")
{
    using namespace Aws::Http;
    using namespace Aws::Http::Standard;
    auto fakeRequest = Aws::MakeShared<StandardHttpRequest>(ERROR_MARSHALLER_TEST_ALLOC_TAG,
            "/some/uri", Aws::Http::HttpMethod::HTTP_GET);
    auto ss = Aws::New<Aws::StringStream>(ERROR_MARSHALLER_TEST_ALLOC_TAG);
    fakeRequest->SetResponseStreamFactory([=] { return ss; });
    if (style & LowerCaseMessage)
    {
        *ss << "{\"" << MESSAGE_LOWER_CASE << "\":\"" << message << "\"";
    }
    else
    {
        *ss << "{\"" << MESSAGE_CAMEL_CASE << "\":\"" << message << "\"";
    }

    Aws::UniquePtr<Aws::Http::HttpResponse> response = Aws::MakeUnique<StandardHttpResponse>(ERROR_MARSHALLER_TEST_ALLOC_TAG, fakeRequest);
    response->AddHeader(REQUEST_ID_HEADER, requestId);

    if (!(style & Header))
    {
        *ss << ",\"" << TYPE << "\":\"" << exception << "\"}";
    }
    else
    {
        *ss << "}";
        response->AddHeader(ERROR_TYPE_HEADER, exception);
    }

    if (!queryErrorCode.empty())
    {
        response->AddHeader(QUERY_ERROR_HEADER, queryErrorCode);
    }

    return response;
}

static Aws::UniquePtr<Aws::Http::HttpResponse> BuildHttpXmlResponse(const Aws::String& exception, const Aws::String& message, const Aws::String& requestId, int style = SingularErrorNode)
{
    using namespace Aws::Http;
    using namespace Aws::Http::Standard;
    auto fakeRequest = Aws::MakeShared<StandardHttpRequest>(ERROR_MARSHALLER_TEST_ALLOC_TAG,
            "/some/uri", Aws::Http::HttpMethod::HTTP_GET);
    auto ss = Aws::New<Aws::StringStream>(ERROR_MARSHALLER_TEST_ALLOC_TAG);
    fakeRequest->SetResponseStreamFactory([=] { return ss; });
    Aws::UniquePtr<Aws::Http::HttpResponse> response = Aws::MakeUnique<StandardHttpResponse>(ERROR_MARSHALLER_TEST_ALLOC_TAG, fakeRequest);

    *ss << "<?xml version=\"1.0\" encoding=\"UTF-8\"?>";
    if (style & PluralErrorNode)
    {
        *ss << "<OtherRoot> <Errors>";
    }

    *ss << "<Error>";

    if (style & IllFormed)
    {
        response->SetResponseCode(HttpResponseCode::SERVICE_UNAVAILABLE);
    }
    else
    {
        *ss << "<Code>" << exception << "</Code>";
    }

    *ss << "<Message>" << message << "</Message>"
        << "<Resource>/mybucket/myfoto.jpg</Resource>";

    if (style & SingularErrorNode)
    {
        *ss << "<RequestId>" << requestId << "</RequestId>";
    }

    *ss << "</Error>";

    if (style & PluralErrorNode)
    {
        *ss << "</Errors>";
        *ss << "<RequestId>" << requestId << "</RequestId>";
        *ss << "</OtherRoot>";
    }
    return response;
}

// Expose protected member functions to public for testing purposes.
class MockedAWSError : public AWSError<CoreErrors>
{
public:
    MockedAWSError(AWSError<CoreErrors>&& error) : AWSError<CoreErrors>(error) {}
    inline ErrorPayloadType GetErrorPayloadType() { return AWSError<CoreErrors>::GetErrorPayloadType(); }
    inline Aws::Utils::Xml::XmlDocument GetXmlPayload() { return AWSError<CoreErrors>::GetXmlPayload(); }
    inline Aws::Utils::Json::JsonValue GetJsonPayload() { return AWSError<CoreErrors>::GetJsonPayload(); }
};

TEST(XmlErrorMarshallerTest, TestXmlErrorPayload)
{
    XmlErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String requestId = "Request Id";
    Aws::String remoteHostIpAddress = "127.0.0.1";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message, requestId));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message, requestId, PluralErrorNode));
    error.SetRemoteHostIpAddress(remoteHostIpAddress);
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_EQ(remoteHostIpAddress, error.GetRemoteHostIpAddress());
    ASSERT_FALSE(error.ShouldRetry());

    MockedAWSError mockedError(std::move(error));
    ASSERT_EQ(ErrorPayloadType::XML, mockedError.GetErrorPayloadType());
    Aws::Utils::Xml::XmlDocument xmlPayload(mockedError.GetXmlPayload());
    ASSERT_TRUE(xmlPayload.WasParseSuccessful());
    auto errorCodeNode = xmlPayload.GetRootElement().FirstChild().FirstChild().FirstChild();
    ASSERT_STREQ("Code", errorCodeNode.GetName().c_str());
    ASSERT_STREQ("IncompleteSignatureException", errorCodeNode.GetText().c_str());

    Aws::StringStream ss;
    ss << mockedError;
    Aws::String errorOutputString = ss.str();
    ss.str("");
    ss << "HTTP response code: " << static_cast<int>(Aws::Http::HttpResponseCode::REQUEST_NOT_MADE) << "\n"
       << "Resolved remote host IP address: " << remoteHostIpAddress << "\n"
       << "Request ID: " << requestId << "\n"
       << "Exception name: " << "IncompleteSignatureException" << "\n"
       << "Error message: " << message << "\n"
       << "0 response headers:";
    ASSERT_STREQ(ss.str().c_str(), errorOutputString.c_str());

    error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message, requestId, IllFormed));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("", error.GetExceptionName());
    ASSERT_EQ("", error.GetMessage());
    ASSERT_EQ("", error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());
}

TEST(JsonErrorMashallerTest, TestCombinationsOfJsonErrorPayload)
{
    AWSError<CoreErrors> error2(CoreErrors::INCOMPLETE_SIGNATURE, false);
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "blahblahblah#";
    Aws::String requestId = "Request Id";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message, requestId, UpperCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());
    MockedAWSError mockedError(std::move(error));
    ASSERT_EQ(ErrorPayloadType::JSON, mockedError.GetErrorPayloadType());
    Aws::Utils::Json::JsonValue jsonPayload(mockedError.GetJsonPayload());
    ASSERT_TRUE(jsonPayload.WasParseSuccessful());
    ASSERT_STREQ("blahblahblah#IncompleteSignatureException", jsonPayload.View().GetString(TYPE).c_str());
    ASSERT_STREQ("Test Message", jsonPayload.View().GetString(MESSAGE_CAMEL_CASE).c_str());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, requestId, LowerCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, requestId, Header|UpperCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, requestId, Header|LowerCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());
}

TEST(JsonErrorMashallerTest, TestErrorsWithPrefixParse)
{
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "blahblahblah#";
    Aws::String requestId = "Request Id";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message, requestId));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, requestId));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalFailure", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalServerError", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalError", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidAction", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenId", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenIdException", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterCombination", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterValue", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameter", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameterException", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryString", message, requestId));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryStringException", message, requestId));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationToken", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationTokenException", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingParameterException", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "OptInRequired", message, requestId));
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpired", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpiredException", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailable", message, requestId));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailableException", message, requestId));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "Throttling", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ThrottlingException", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationError", message, requestId));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationErrorException", message, requestId));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDenied", message, requestId));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message, requestId));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFound", message, requestId));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFoundException", message, requestId));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClient", message, requestId));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClientException", message, requestId));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestTimeout", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_TIMEOUT, error.GetErrorType());
    ASSERT_EQ("RequestTimeout", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IDon'tExist", "JunkMessage", requestId));
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message, requestId, LowerCaseMessage, "AwsQueryErrorCode"));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AwsQueryErrorCode", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());
}

TEST(AWSErrorMashallerTest, TestErrorsWithoutPrefixParse)
{
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "";
    Aws::String requestId = "Request Id";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message, requestId));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, requestId));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalFailure", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalServerError", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalError", message, requestId));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidAction", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenId", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenIdException", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterCombination", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterValue", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameter", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameterException", message, requestId));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryString", message, requestId));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryStringException", message, requestId));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationToken", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationTokenException", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingParameterException", message, requestId));
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "OptInRequired", message, requestId));
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpired", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpiredException", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailable", message, requestId));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailableException", message, requestId));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "Throttling", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ThrottlingException", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationError", message, requestId));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationErrorException", message, requestId));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDenied", message, requestId));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message, requestId));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFound", message, requestId));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFoundException", message, requestId));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClient", message, requestId));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClientException", message, requestId));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestTimeout", message, requestId));
    ASSERT_EQ(CoreErrors::REQUEST_TIMEOUT, error.GetErrorType());
    ASSERT_EQ("RequestTimeout", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestThrottledException", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("RequestThrottledException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestThrottled", message, requestId));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("RequestThrottled", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_TRUE(error.ShouldRetry());


    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IDon'tExist", "JunkMessage", requestId));
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message, requestId, LowerCaseMessage, "AwsQueryErrorCode"));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AwsQueryErrorCode", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_EQ(requestId, error.GetRequestId());
    ASSERT_FALSE(error.ShouldRetry());
}
