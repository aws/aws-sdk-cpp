/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/client/AWSErrorMarshaller.h>
#include <aws/core/http/HttpClientFactory.h>
#include <aws/core/http/standard/StandardHttpResponse.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/NoResult.h>

using namespace Aws;
using namespace Aws::Client;
using namespace Aws::Http;
using namespace Aws::Utils;

static const char ALLOCATION_TAG[] = "OutcomeTest";
static const char EXCEPTION_NAME[] = "Exception name";
static const char ERROR_MESSAGE[] = "Error message";
static const char HEADER_KEY_1[] = "test1";
static const char HEADER_VALUE_1[] = "testValue1";
static const char HEADER_KEY_2[] = "test2";
static const char HEADER_VALUE_2[] = "testValue2";
static const char RESPONSE_PAYLOAD[] = "Response payload";
static const char XML_RESULT_PAYLOAD[] =
    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
    <ServiceOperation xmlns=\"http://some/url/\">\
        <OperationInfo>Detailed info</OperationInfo>\
    </ServiceOperation>";
static const char XML_ERROR_PAYLOAD[] =
    "<?xml version=\"1.0\" encoding=\"UTF-8\"?>\
    <Error>\
        <Code>ServiceSpecificException</Code>\
        <Message>Error message</Message>\
        <RequestId>Request ID</RequestId>\
        <ExceptionInfo>Detailed info</ExceptionInfo>\
    </Error>";
static const char JSON_RESULT_PAYLOAD[] =
    "{\"OperationInfo\":\"Detailed info\"}";
static const char JSON_ERROR_PAYLOAD[] =
    "{\"__type\":\"ServiceSpecificException\",\
      \"message\":\"Error message\",\
      \"ExceptionInfo\":\"Detailed info\"}";

namespace Aws
{
    namespace Utils
    {
        namespace Stream
        {
            class ResponseStream;
        }
    }
}

enum class ServiceErrors
{
    //From Core//
    //////////////////////////////////////////////////////////////////////////////////////////
    INCOMPLETE_SIGNATURE = 0,
    INTERNAL_FAILURE = 1,
    INVALID_ACTION = 2,
    INVALID_CLIENT_TOKEN_ID = 3,
    INVALID_PARAMETER_COMBINATION = 4,
    INVALID_QUERY_PARAMETER = 5,
    INVALID_PARAMETER_VALUE = 6,
    MISSING_ACTION = 7, // SDK should never allow
    MISSING_AUTHENTICATION_TOKEN = 8, // SDK should never allow
    MISSING_PARAMETER = 9, // SDK should never allow
    OPT_IN_REQUIRED = 10,
    REQUEST_EXPIRED = 11,
    SERVICE_UNAVAILABLE = 12,
    THROTTLING = 13,
    VALIDATION = 14,
    ACCESS_DENIED = 15,
    RESOURCE_NOT_FOUND = 16,
    UNRECOGNIZED_CLIENT = 17,
    MALFORMED_QUERY_STRING = 18,
    SLOW_DOWN = 19,
    REQUEST_TIME_TOO_SKEWED = 20,
    INVALID_SIGNATURE = 21,
    SIGNATURE_DOES_NOT_MATCH = 22,
    INVALID_ACCESS_KEY_ID = 23,
    REQUEST_TIMEOUT = 24,
    NETWORK_CONNECTION = 99,

    UNKNOWN = 100,
    ///////////////////////////////////////////////////////////////////////////////////////////

    SERVICE_SPECIFIC_EXCEPTION = static_cast<int>(Aws::Client::CoreErrors::SERVICE_EXTENSION_START_RANGE) + 1
};

class XmlServiceOperationResult
{
public:
    XmlServiceOperationResult();
    XmlServiceOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result) { *this = result; };
    XmlServiceOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result)
    {
        const Xml::XmlDocument& xmlDocument = result.GetPayload();
        Xml::XmlNode resultNode = xmlDocument.GetRootElement();

        if(!resultNode.IsNull())
        {
            Xml::XmlNode operationInfoNode = resultNode.FirstChild("OperationInfo");
            if(!operationInfoNode.IsNull())
            {
                m_operationInfo = operationInfoNode.GetText();
            }
        }

        return *this;
    };
    inline const Aws::String& GetOperationInfo() const{ return m_operationInfo; }
private:
    Aws::String m_operationInfo;
};

class XmlServiceSpecificException
{
public:
    XmlServiceSpecificException();
    XmlServiceSpecificException(const Xml::XmlNode& xmlNode) { *this = xmlNode; }
    XmlServiceSpecificException& operator=(const Xml::XmlNode& xmlNode)
    {
        Xml::XmlNode resultNode = xmlNode;
        if(!resultNode.IsNull())
        {
            Xml::XmlNode exceptionInfoNode = resultNode.FirstChild("ExceptionInfo");
            if(!exceptionInfoNode.IsNull())
            {
                m_exceptionInfo = exceptionInfoNode.GetText();
            }
        }
        return *this;
    };
    inline const Aws::String& GetExceptionInfo() const{ return m_exceptionInfo; }
private:
    Aws::String m_exceptionInfo;
};

class XmlServiceError : public Aws::Client::AWSError<ServiceErrors>
{
public:
    XmlServiceError() {}
    XmlServiceError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    XmlServiceError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    XmlServiceError(const Aws::Client::AWSError<ServiceErrors>& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    XmlServiceError(Aws::Client::AWSError<ServiceErrors>&& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}

    template <typename T>
    T GetModeledError();
};

template<>
XmlServiceSpecificException XmlServiceError::GetModeledError()
{
    assert(this->GetErrorType() == ServiceErrors::SERVICE_SPECIFIC_EXCEPTION);
    return XmlServiceSpecificException(this->GetXmlPayload().GetRootElement());
}

class XmlServiceErrorMarshaller : public XmlErrorMarshaller
{
public:
    AWSError<CoreErrors> FindErrorByName(const char* errorName) const override
    {
        if (Aws::String(errorName) == Aws::String("ServiceSpecificException"))
        {
            return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION), false);
        }
        else
        {
            return AWSErrorMarshaller::FindErrorByName(errorName);
        }
    }
};

class JsonServiceOperationResult
{
public:
    JsonServiceOperationResult();
    JsonServiceOperationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result) { *this = result; }
    JsonServiceOperationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result)
    {
        Json::JsonView jsonValue = result.GetPayload().View();
        if(jsonValue.ValueExists("OperationInfo"))
        {
            m_operationInfo = jsonValue.GetString("OperationInfo");
        }
        return *this;
    }
    inline const Aws::String& GetOperationInfo() const{ return m_operationInfo; }
private:
    Aws::String m_operationInfo;
};

class JsonServiceError : public Aws::Client::AWSError<ServiceErrors>
{
public:
    JsonServiceError() {}
    JsonServiceError(const Aws::Client::AWSError<Aws::Client::CoreErrors>& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    JsonServiceError(Aws::Client::AWSError<Aws::Client::CoreErrors>&& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    JsonServiceError(const Aws::Client::AWSError<ServiceErrors>& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}
    JsonServiceError(Aws::Client::AWSError<ServiceErrors>&& rhs) : Aws::Client::AWSError<ServiceErrors>(rhs) {}

    template <typename T>
    T GetModeledError();
};

class JsonServiceSpecificException
{
public:
    JsonServiceSpecificException();
    JsonServiceSpecificException(Json::JsonView jsonValue) { *this = jsonValue; }
    JsonServiceSpecificException& operator=(Json::JsonView jsonValue)
    {
        if(jsonValue.ValueExists("ExceptionInfo"))
        {
            m_exceptionInfo = jsonValue.GetString("ExceptionInfo");
        }
        return *this;
    };
    inline const Aws::String& GetExceptionInfo() const{ return m_exceptionInfo; }
private:
    Aws::String m_exceptionInfo;
};

template<>
JsonServiceSpecificException JsonServiceError::GetModeledError()
{
    assert(this->GetErrorType() == ServiceErrors::SERVICE_SPECIFIC_EXCEPTION);
    return JsonServiceSpecificException(this->GetJsonPayload().View());
}

class JsonServiceErrorMarshaller : public JsonErrorMarshaller
{
public:
    AWSError<CoreErrors> FindErrorByName(const char* errorName) const override
    {
        if (Aws::String(errorName) == Aws::String("ServiceSpecificException"))
        {
            return AWSError<CoreErrors>(static_cast<CoreErrors>(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION), false);
        }
        else
        {
            return AWSErrorMarshaller::FindErrorByName(errorName);
        }
    }
};

static std::shared_ptr<HttpResponse> CreateHttpResponse(const char* payloadString = "", HttpResponseCode httpResponseCode = HttpResponseCode::OK)
{
    std::shared_ptr<HttpRequest> httpRequest = CreateHttpRequest(URI("http://www.uri.com/path/to/res"),
        HttpMethod::HTTP_GET, Aws::Utils::Stream::DefaultResponseStreamFactoryMethod);
    auto httpResponse = Aws::MakeShared<Standard::StandardHttpResponse>(ALLOCATION_TAG, httpRequest);
    httpResponse->SetResponseCode(httpResponseCode);
    httpResponse->GetResponseBody() << payloadString;
    HeaderValueCollection headerValues;
    httpResponse->AddHeader(HEADER_KEY_1, HEADER_VALUE_1);
    httpResponse->AddHeader(HEADER_KEY_2, HEADER_VALUE_2);
    return httpResponse;
}

template<typename PAYLOAD_TYPE>
static AmazonWebServiceResult<PAYLOAD_TYPE> CreateAmazonWebServiceResult(PAYLOAD_TYPE payload, HttpResponseCode httpResponseCode)
{
    HeaderValueCollection headers;
    headers[HEADER_KEY_1] = HEADER_VALUE_1;
    headers[HEADER_KEY_2] = HEADER_VALUE_2;
    return AmazonWebServiceResult<PAYLOAD_TYPE>(payload, headers, httpResponseCode);
}

static AWSError<CoreErrors> CreateAwsError()
{
    return Aws::Client::AWSError<CoreErrors>(CoreErrors::INCOMPLETE_SIGNATURE, EXCEPTION_NAME, ERROR_MESSAGE, false);
}

typedef Outcome<std::shared_ptr<Aws::Http::HttpResponse>, AWSError<CoreErrors>> HttpResponseOutcome;
typedef Outcome<AmazonWebServiceResult<Stream::ResponseStream>, AWSError<CoreErrors>> StreamOutcome;
typedef Outcome<AmazonWebServiceResult<Xml::XmlDocument>, AWSError<CoreErrors>> XmlOutcome;
typedef Outcome<AmazonWebServiceResult<Json::JsonValue>, AWSError<CoreErrors>> JsonOutcome;
typedef Outcome<XmlServiceOperationResult, XmlServiceError> XmlServiceOperationOutcome;
typedef Outcome<JsonServiceOperationResult, JsonServiceError> JsonServiceOperationOutcome;
typedef Outcome<NoResult, XmlServiceError> XmlServiceNoResultOperationOutcome;
typedef Outcome<NoResult, JsonServiceError> JsonServiceNoResultOperationOutcome;

TEST(HttpResponseOutcomeTest, TestMoveFromHttpResponse)
{
    HttpResponseOutcome httpResponseOutcome(CreateHttpResponse());
    AWS_ASSERT_SUCCESS(httpResponseOutcome);
    ASSERT_EQ(HttpResponseCode::OK, httpResponseOutcome.GetResult()->GetResponseCode());
    ASSERT_TRUE(httpResponseOutcome.GetResult()->HasHeader(HEADER_KEY_1));
    ASSERT_STREQ(HEADER_VALUE_1, httpResponseOutcome.GetResult()->GetHeader(HEADER_KEY_1).c_str());
    ASSERT_TRUE(httpResponseOutcome.GetResult()->HasHeader(HEADER_KEY_2));
    ASSERT_STREQ(HEADER_VALUE_2, httpResponseOutcome.GetResult()->GetHeader(HEADER_KEY_2).c_str());
}

TEST(HttpResponseOutcomeTest, TestMoveFromAWSError)
{
    HttpResponseOutcome httpResponseOutcome(CreateAwsError());
    ASSERT_FALSE(httpResponseOutcome.IsSuccess());
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, httpResponseOutcome.GetError().GetErrorType());
    ASSERT_STREQ(EXCEPTION_NAME, httpResponseOutcome.GetError().GetExceptionName().c_str());
    ASSERT_STREQ(ERROR_MESSAGE, httpResponseOutcome.GetError().GetMessage().c_str());
}

TEST(StreamOutcomeTest, TestMoveFromAmazonWebServiceResult)
{
    auto httpResponse = CreateHttpResponse(RESPONSE_PAYLOAD);
    StreamOutcome streamOutcome(AmazonWebServiceResult<Stream::ResponseStream>(httpResponse->SwapResponseStreamOwnership(),
        httpResponse->GetHeaders(), httpResponse->GetResponseCode()));
    AWS_ASSERT_SUCCESS(streamOutcome);
    ASSERT_EQ(HttpResponseCode::OK, streamOutcome.GetResult().GetResponseCode());
    HeaderValueCollection headers = streamOutcome.GetResult().GetHeaderValueCollection();
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_1));
    ASSERT_STREQ(HEADER_VALUE_1, headers[HEADER_KEY_1].c_str());
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_2));
    ASSERT_STREQ(HEADER_VALUE_2, headers[HEADER_KEY_2].c_str());
    Aws::StringStream ss;
    ss << streamOutcome.GetResult().GetPayload().GetUnderlyingStream().rdbuf();
    ASSERT_STREQ(RESPONSE_PAYLOAD, ss.str().c_str());
}

TEST(StreamOutcomeTest, TestMoveFromHttpResponseOutcome)
{
    HttpResponseOutcome httpResponseOutcome(CreateAwsError());
    // Only AWSError will be moved to streamOutcome, because there is no conversion from std::shared_ptr<HttpResponse> to AmazonWebServiceResult<ResponseStream>
    StreamOutcome streamOutcome(std::move(httpResponseOutcome));
    ASSERT_FALSE(streamOutcome.IsSuccess());
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, streamOutcome.GetError().GetErrorType());
    ASSERT_STREQ(EXCEPTION_NAME, streamOutcome.GetError().GetExceptionName().c_str());
    ASSERT_STREQ(ERROR_MESSAGE, streamOutcome.GetError().GetMessage().c_str());
}

TEST(XmlOutcomeTest, TestMoveFromAmazonWebServiceResult)
{
    Xml::XmlDocument xmlDocument = Xml::XmlDocument::CreateFromXmlString(XML_RESULT_PAYLOAD);
    XmlOutcome xmlOutcome(CreateAmazonWebServiceResult<Xml::XmlDocument>(xmlDocument, HttpResponseCode::OK));
    AWS_ASSERT_SUCCESS(xmlOutcome);
    HeaderValueCollection headers = xmlOutcome.GetResult().GetHeaderValueCollection();
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_1));
    ASSERT_STREQ(HEADER_VALUE_1, headers[HEADER_KEY_1].c_str());
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_2));
    ASSERT_STREQ(HEADER_VALUE_2, headers[HEADER_KEY_2].c_str());
}

TEST(XmlOutcomeTest, TestMoveFromHttpResponseOutcome)
{
    HttpResponseOutcome httpResponseOutcome(CreateAwsError());
    // Only AWSError will be moved to streamOutcome, because there is no conversion from std::shared_ptr<HttpResponse> to AmazonWebServiceResult<XmlDocument>
    XmlOutcome xmlOutcome(std::move(httpResponseOutcome));
    ASSERT_FALSE(xmlOutcome.IsSuccess());
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, xmlOutcome.GetError().GetErrorType());
    ASSERT_STREQ(EXCEPTION_NAME, xmlOutcome.GetError().GetExceptionName().c_str());
    ASSERT_STREQ(ERROR_MESSAGE, xmlOutcome.GetError().GetMessage().c_str());
}

TEST(JsonOutcomeTest, TestMoveFromAmazonWebServiceResult)
{
    Json::JsonValue jsonValue(JSON_RESULT_PAYLOAD);
    JsonOutcome jsonOutcome(CreateAmazonWebServiceResult<Json::JsonValue>(jsonValue, HttpResponseCode::OK));
    AWS_ASSERT_SUCCESS(jsonOutcome);
    HeaderValueCollection headers = jsonOutcome.GetResult().GetHeaderValueCollection();
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_1));
    ASSERT_STREQ(HEADER_VALUE_1, headers[HEADER_KEY_1].c_str());
    ASSERT_NE(headers.end(), headers.find(HEADER_KEY_2));
    ASSERT_STREQ(HEADER_VALUE_2, headers[HEADER_KEY_2].c_str());
}

TEST(JsonOutcomeTest, TestMoveFromHttpResponseOutcome)
{
    HttpResponseOutcome httpResponseOutcome(CreateAwsError());
    // Only AWSError will be moved to streamOutcome, because there is no conversion from std::shared_ptr<HttpResponse> to AmazonWebServiceResult<JsonValue>
    JsonOutcome jsonOutcome(std::move(httpResponseOutcome));
    ASSERT_FALSE(jsonOutcome.IsSuccess());
    ASSERT_EQ(CoreErrors::INCOMPLETE_SIGNATURE, jsonOutcome.GetError().GetErrorType());
    ASSERT_STREQ(EXCEPTION_NAME, jsonOutcome.GetError().GetExceptionName().c_str());
    ASSERT_STREQ(ERROR_MESSAGE, jsonOutcome.GetError().GetMessage().c_str());
}

// AmazonWebServiceResult<XmlDocument> is converted to XmlServiceOperationResult and AWSError<CoreErrors> is converted to XmlServiceError.
TEST(XmlServiceOperationOutcomeTest, TestMoveFromXmlOutcome)
{
    // Success case
    Xml::XmlDocument xmlDocument = Xml::XmlDocument::CreateFromXmlString(XML_RESULT_PAYLOAD);
    XmlServiceOperationOutcome xmlServiceOperationOutcome(XmlOutcome(CreateAmazonWebServiceResult<Xml::XmlDocument>(xmlDocument, HttpResponseCode::OK)));
    AWS_ASSERT_SUCCESS(xmlServiceOperationOutcome);
    ASSERT_STREQ("Detailed info", xmlServiceOperationOutcome.GetResult().GetOperationInfo().c_str());

    // Failure case
    XmlServiceErrorMarshaller errorMarshaller;
    xmlServiceOperationOutcome = XmlServiceOperationOutcome(XmlOutcome(errorMarshaller.Marshall(*CreateHttpResponse(XML_ERROR_PAYLOAD, HttpResponseCode::BAD_REQUEST))));
    ASSERT_FALSE(xmlServiceOperationOutcome.IsSuccess());
    XmlServiceError serviceError = xmlServiceOperationOutcome.GetError();
    ASSERT_EQ(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION, serviceError.GetErrorType());
    ASSERT_STREQ("ServiceSpecificException", serviceError.GetExceptionName().c_str());
    ASSERT_STREQ("Error message", serviceError.GetMessage().c_str());
    ASSERT_STREQ("Request ID", serviceError.GetRequestId().c_str());
    ASSERT_STREQ("Detailed info", xmlServiceOperationOutcome.GetError<XmlServiceSpecificException>().GetExceptionInfo().c_str());
}

// AmazonWebServiceResult<JsonValue> is converted to JsonServiceOperationResult and AWSError<CoreErrors> is converted to JsonServiceError.
TEST(JsonServiceOperationOutcomeTest, TestMoveFromJsonOutcome)
{
    // Success case
    Json::JsonValue jsonValue(JSON_RESULT_PAYLOAD);
    JsonServiceOperationOutcome jsonServiceOperationOutcome(JsonOutcome(CreateAmazonWebServiceResult<Json::JsonValue>(jsonValue, HttpResponseCode::OK)));
    AWS_ASSERT_SUCCESS(jsonServiceOperationOutcome);
    ASSERT_STREQ("Detailed info", jsonServiceOperationOutcome.GetResult().GetOperationInfo().c_str());

    // Failure case
    JsonServiceErrorMarshaller errorMarshaller;
    jsonServiceOperationOutcome = JsonServiceOperationOutcome(JsonOutcome(errorMarshaller.Marshall(*CreateHttpResponse(JSON_ERROR_PAYLOAD, HttpResponseCode::BAD_REQUEST))));
    ASSERT_FALSE(jsonServiceOperationOutcome.IsSuccess());
    XmlServiceError serviceError = jsonServiceOperationOutcome.GetError();
    ASSERT_EQ(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION, serviceError.GetErrorType());
    ASSERT_STREQ("ServiceSpecificException", serviceError.GetExceptionName().c_str());
    ASSERT_STREQ("Error message", serviceError.GetMessage().c_str());
    ASSERT_STREQ("Detailed info", jsonServiceOperationOutcome.GetError<JsonServiceSpecificException>().GetExceptionInfo().c_str());
}

// AmazonWebServiceResult<XmlDocument> is converted to NoResult and AWSError<CoreErrors> is converted to XmlServiceError.
TEST(XmlServiceNoResultOperationOutcomeTest, TestMoveFromXmlOutcome)
{
    // Success case
    Xml::XmlDocument xmlDocument = Xml::XmlDocument::CreateFromXmlString(XML_RESULT_PAYLOAD);
    XmlServiceNoResultOperationOutcome xmlServiceNoResultOperationOutcome(XmlOutcome(CreateAmazonWebServiceResult<Xml::XmlDocument>(xmlDocument, HttpResponseCode::OK)));
    AWS_ASSERT_SUCCESS(xmlServiceNoResultOperationOutcome);

    // Failure case
    XmlServiceErrorMarshaller errorMarshaller;
    xmlServiceNoResultOperationOutcome = XmlServiceNoResultOperationOutcome(XmlOutcome(errorMarshaller.Marshall(*CreateHttpResponse(XML_ERROR_PAYLOAD, HttpResponseCode::BAD_REQUEST))));
    ASSERT_FALSE(xmlServiceNoResultOperationOutcome.IsSuccess());
    XmlServiceError serviceError = xmlServiceNoResultOperationOutcome.GetError();
    ASSERT_EQ(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION, serviceError.GetErrorType());
    ASSERT_STREQ("ServiceSpecificException", serviceError.GetExceptionName().c_str());
    ASSERT_STREQ("Error message", serviceError.GetMessage().c_str());
    ASSERT_STREQ("Request ID", serviceError.GetRequestId().c_str());
    ASSERT_STREQ("Detailed info", xmlServiceNoResultOperationOutcome.GetError<XmlServiceSpecificException>().GetExceptionInfo().c_str());
}

// AmazonWebServiceResult<JsonValue> is converted to NoResult and AWSError<CoreErrors> is converted to JsonServiceError.
TEST(JsonServiceNoResultOperationOutcomeTest, TestMoveFromJsonOutcome)
{
    // Success case
    Json::JsonValue jsonValue;
    JsonServiceNoResultOperationOutcome jsonServiceNoResultOperationOutcome(JsonOutcome(CreateAmazonWebServiceResult<Json::JsonValue>(jsonValue, HttpResponseCode::OK)));
    AWS_ASSERT_SUCCESS(jsonServiceNoResultOperationOutcome);

    // Failure case
    JsonServiceErrorMarshaller errorMarshaller;
    jsonServiceNoResultOperationOutcome = JsonServiceNoResultOperationOutcome(JsonOutcome(errorMarshaller.Marshall(*CreateHttpResponse(JSON_ERROR_PAYLOAD, HttpResponseCode::BAD_REQUEST))));
    ASSERT_FALSE(jsonServiceNoResultOperationOutcome.IsSuccess());
    XmlServiceError serviceError = jsonServiceNoResultOperationOutcome.GetError();
    ASSERT_EQ(ServiceErrors::SERVICE_SPECIFIC_EXCEPTION, serviceError.GetErrorType());
    ASSERT_STREQ("ServiceSpecificException", serviceError.GetExceptionName().c_str());
    ASSERT_STREQ("Error message", serviceError.GetMessage().c_str());
    ASSERT_STREQ("Detailed info", jsonServiceNoResultOperationOutcome.GetError<JsonServiceSpecificException>().GetExceptionInfo().c_str());
}