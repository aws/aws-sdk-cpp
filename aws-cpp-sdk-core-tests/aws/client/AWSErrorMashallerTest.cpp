/*
 * Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * 
 * Licensed under the Apache License, Version 2.0 (the "License").
 * You may not use this file except in compliance with the License.
 * A copy of the License is located at
 * 
 *  http://aws.amazon.com/apache2.0
 * 
 * or in the "license" file accompanying this file. This file is distributed
 * on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 * express or implied. See the License for the specific language governing
 * permissions and limitations under the License.
 */


#include <aws/external/gtest.h>
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

static Aws::UniquePtr<Aws::Http::HttpResponse> BuildHttpResponse(const Aws::String& exception, const Aws::String& message, int style = LowerCaseMessage)
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

    if (!(style & Header)) 
    {
        *ss << ",\"" << TYPE << "\":\"" << exception << "\"}";
    }
    else 
    {
        *ss << "}";
        response->AddHeader(ERROR_TYPE_HEADER, exception);
    }

    return response;
}

static Aws::UniquePtr<Aws::Http::HttpResponse> BuildHttpXmlResponse(const Aws::String& exception, const Aws::String& message, int style = SingularErrorNode)
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
        << "<Resource>/mybucket/myfoto.jpg</Resource> "
        << "<RequestId>4442587FB7D0A2F9</RequestId>"
        << "</Error>";
    if (style & PluralErrorNode)
    {
        *ss << "</Errors> </OtherRoot>";
    }
    return response;
}

TEST(XmlErrorMarshallerTest, TestXmlErrorPayload)
{
    XmlErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message, PluralErrorNode));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpXmlResponse("IncompleteSignatureException", message, IllFormed));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("", error.GetExceptionName());
    ASSERT_EQ("", error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());
}

TEST(JsonErrorMashallerTest, TestCombinationsOfJsonErrorPayload)
{
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "blahblahblah#";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message, UpperCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, LowerCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, Header|UpperCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message, Header|LowerCaseMessage));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());
}

TEST(JsonErrorMashallerTest, TestErrorsWithPrefixParse)
{
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "blahblahblah#";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalFailure", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalServerError", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalError", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidAction", message));
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenId", message));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenIdException", message));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterCombination", message));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterValue", message));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameter", message));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameterException", message));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryString", message));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryStringException", message));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationToken", message));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationTokenException", message));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingParameterException", message));
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "OptInRequired", message));
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpired", message));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpiredException", message));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailable", message));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailableException", message));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "Throttling", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ThrottlingException", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationError", message));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationErrorException", message));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDenied", message));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFound", message));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFoundException", message));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClient", message));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClientException", message));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestTimeout", message));
    ASSERT_EQ(CoreErrors::REQUEST_TIMEOUT, error.GetErrorType());
    ASSERT_EQ("RequestTimeout", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IDon'tExist", "JunkMessage"));
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());
}

TEST(AWSErrorMashallerTest, TestErrorsWithoutPrefixParse)
{
    JsonErrorMarshaller awsErrorMarshaller;
    Aws::String message = "Test Message";
    Aws::String exceptionPrefix = "";
    AWSError<CoreErrors> error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignatureException", message));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignatureException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IncompleteSignature", message));
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, error.GetErrorType());
    ASSERT_EQ("IncompleteSignature", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalFailure", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalFailure", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalServerError", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalServerError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InternalError", message));
    ASSERT_EQ(CoreErrors::INTERNAL_FAILURE, error.GetErrorType());
    ASSERT_EQ("InternalError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidAction", message));
    ASSERT_EQ(CoreErrors::INVALID_ACTION, error.GetErrorType());
    ASSERT_EQ("InvalidAction", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenId", message));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenId", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidClientTokenIdException", message));
    ASSERT_EQ(CoreErrors::INVALID_CLIENT_TOKEN_ID, error.GetErrorType());
    ASSERT_EQ("InvalidClientTokenIdException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterCombination", message));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_COMBINATION, error.GetErrorType());
    ASSERT_EQ("InvalidParameterCombination", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidParameterValue", message));
    ASSERT_EQ(CoreErrors::INVALID_PARAMETER_VALUE, error.GetErrorType());
    ASSERT_EQ("InvalidParameterValue", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameter", message));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameter", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "InvalidQueryParameterException", message));
    ASSERT_EQ(CoreErrors::INVALID_QUERY_PARAMETER, error.GetErrorType());
    ASSERT_EQ("InvalidQueryParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryString", message));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryString", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MalformedQueryStringException", message));
    ASSERT_EQ(CoreErrors::MALFORMED_QUERY_STRING, error.GetErrorType());
    ASSERT_EQ("MalformedQueryStringException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationToken", message));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationToken", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingAuthenticationTokenException", message));
    ASSERT_EQ(CoreErrors::MISSING_AUTHENTICATION_TOKEN, error.GetErrorType());
    ASSERT_EQ("MissingAuthenticationTokenException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "MissingParameterException", message));
    ASSERT_EQ(CoreErrors::MISSING_PARAMETER, error.GetErrorType());
    ASSERT_EQ("MissingParameterException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "OptInRequired", message));
    ASSERT_EQ(CoreErrors::OPT_IN_REQUIRED, error.GetErrorType());
    ASSERT_EQ("OptInRequired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpired", message));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpired", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestExpiredException", message));
    ASSERT_EQ(CoreErrors::REQUEST_EXPIRED, error.GetErrorType());
    ASSERT_EQ("RequestExpiredException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailable", message));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailable", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ServiceUnavailableException", message));
    ASSERT_EQ(CoreErrors::SERVICE_UNAVAILABLE, error.GetErrorType());
    ASSERT_EQ("ServiceUnavailableException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "Throttling", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("Throttling", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ThrottlingException", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("ThrottlingException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationError", message));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationError", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ValidationErrorException", message));
    ASSERT_EQ(CoreErrors::VALIDATION, error.GetErrorType());
    ASSERT_EQ("ValidationErrorException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDenied", message));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDenied", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "AccessDeniedException", message));
    ASSERT_EQ(CoreErrors::ACCESS_DENIED, error.GetErrorType());
    ASSERT_EQ("AccessDeniedException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFound", message));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFound", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "ResourceNotFoundException", message));
    ASSERT_EQ(CoreErrors::RESOURCE_NOT_FOUND, error.GetErrorType());
    ASSERT_EQ("ResourceNotFoundException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClient", message));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClient", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "UnrecognizedClientException", message));
    ASSERT_EQ(CoreErrors::UNRECOGNIZED_CLIENT, error.GetErrorType());
    ASSERT_EQ("UnrecognizedClientException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestTimeout", message));
    ASSERT_EQ(CoreErrors::REQUEST_TIMEOUT, error.GetErrorType());
    ASSERT_EQ("RequestTimeout", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestThrottledException", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("RequestThrottledException", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());

    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "RequestThrottled", message));
    ASSERT_EQ(CoreErrors::THROTTLING, error.GetErrorType());
    ASSERT_EQ("RequestThrottled", error.GetExceptionName());
    ASSERT_EQ(message, error.GetMessage());
    ASSERT_TRUE(error.ShouldRetry());


    error = awsErrorMarshaller.Marshall(*BuildHttpResponse(exceptionPrefix + "IDon'tExist", "JunkMessage"));
    ASSERT_EQ(CoreErrors::UNKNOWN, error.GetErrorType());
    ASSERT_EQ(exceptionPrefix + "IDon'tExist", error.GetExceptionName());
    ASSERT_EQ("Unable to parse ExceptionName: " + exceptionPrefix + "IDon'tExist Message: JunkMessage", error.GetMessage());
    ASSERT_FALSE(error.ShouldRetry());

}


