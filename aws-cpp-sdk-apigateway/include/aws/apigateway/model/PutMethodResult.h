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

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Integration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/MethodResponse.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{
  /**
   * <p> Represents a client-facing interface by which the client calls the API to
   * access back-end resources. A <b>Method</b> resource is integrated with an
   * <a>Integration</a> resource. Both consist of a request and one or more
   * responses. The method request takes the client input that is passed to the back
   * end through the integration request. A method response returns the output from
   * the back end to the client through an integration response. A method request is
   * embodied in a <b>Method</b> resource, whereas an integration request is embodied
   * in an <a>Integration</a> resource. On the other hand, a method response is
   * represented by a <a>MethodResponse</a> resource, whereas an integration response
   * is represented by an <a>IntegrationResponse</a> resource. </p> <div
   * class="remarks"> <p/> <h4>Example: Retrive the GET method on a specified
   * resource</h4> <h5>Request</h5> <p>The following example request retrieves the
   * information about the GET method on an API resource (<code>3kzxbg5sa2</code>) of
   * an API (<code>fugvjdxtri</code>). </p> <pre><code>GET
   * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
   * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
   * 20160603T210259Z Authorization: AWS4-HMAC-SHA256
   * Credential={access_key_ID}/20160603/us-east-1/apigateway/aws4_request,
   * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
   * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
   * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
   * "curies": [ { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
   * "name": "integration", "templated": true }, { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
   * "name": "integrationresponse", "templated": true }, { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-{rel}.html",
   * "name": "method", "templated": true }, { "href":
   * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
   * "name": "methodresponse", "templated": true } ], "self": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET", "name": "GET", "title":
   * "GET" }, "integration:put": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration" },
   * "method:delete": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET" }, "method:integration":
   * { "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration" },
   * "method:responses": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200", "name":
   * "200", "title": "200" }, "method:update": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET" }, "methodresponse:put":
   * { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/{status_code}",
   * "templated": true } }, "apiKeyRequired": true, "authorizationType": "NONE",
   * "httpMethod": "GET", "_embedded": { "method:integration": { "_links": { "self":
   * { "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration" },
   * "integration:delete": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration" },
   * "integration:responses": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
   * "name": "200", "title": "200" }, "integration:update": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration" },
   * "integrationresponse:put": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/{status_code}",
   * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "3kzxbg5sa2",
   * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
   * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestParameters": {
   * "integration.request.header.Content-Type": "'application/x-amz-json-1.1'" },
   * "requestTemplates": { "application/json": "{\n}" }, "type": "AWS", "uri":
   * "arn:aws:apigateway:us-east-1:kinesis:action/ListStreams", "_embedded": {
   * "integration:responses": { "_links": { "self": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200",
   * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
   * }, "integrationresponse:update": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/integration/responses/200"
   * } }, "responseParameters": { "method.response.header.Content-Type":
   * "'application/xml'" }, "responseTemplates": { "application/json":
   * "$util.urlDecode(\"%3CkinesisStreams%3E%23foreach(%24stream%20in%20%24input.path(%27%24.StreamNames%27))%3Cstream%3E%3Cname%3E%24stream%3C%2Fname%3E%3C%2Fstream%3E%23end%3C%2FkinesisStreams%3E\")"
   * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
   * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
   * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
   * "methodresponse:update": { "href":
   * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
   * "responseModels": { "application/json": "Empty" }, "responseParameters": {
   * "method.response.header.Content-Type": false }, "statusCode": "200" } }
   * }</code></pre> <p>In the example above, the response template for the <code>200
   * OK</code> response maps the JSON output from the <code>ListStreams</code> action
   * in the back end to an XML output. The mapping template is URL-encoded as
   * <code>%3CkinesisStreams%3E%23foreach(%24stream%20in%20%24input.path(%27%24.StreamNames%27))%3Cstream%3E%3Cname%3E%24stream%3C%2Fname%3E%3C%2Fstream%3E%23end%3C%2FkinesisStreams%3E</code>
   * and the output is decoded using the <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/api-gateway-mapping-template-reference.html#util-templat-reference">$util.urlDecode()</a>
   * helper function.</p> </div> <div class="seeAlso"> <a>MethodResponse</a>,
   * <a>Integration</a>, <a>IntegrationResponse</a>, <a>Resource</a>, <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-method-settings.html">Set
   * up an API's method</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Method">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutMethodResult
  {
  public:
    PutMethodResult();
    PutMethodResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutMethodResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The method's HTTP verb.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethod = value; }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethod = std::move(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethod.assign(value); }

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline PutMethodResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline PutMethodResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>The method's HTTP verb.</p>
     */
    inline PutMethodResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationType = value; }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationType = std::move(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationType.assign(value); }

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline PutMethodResult& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline PutMethodResult& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(std::move(value)); return *this;}

    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline PutMethodResult& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}


    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerId = value; }

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerId.assign(value); }

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline PutMethodResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline PutMethodResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an <a>Authorizer</a> to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline PutMethodResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>A boolean flag specifying whether a valid <a>ApiKey</a> is required to invoke
     * this method.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>A boolean flag specifying whether a valid <a>ApiKey</a> is required to invoke
     * this method.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequired = value; }

    /**
     * <p>A boolean flag specifying whether a valid <a>ApiKey</a> is required to invoke
     * this method.</p>
     */
    inline PutMethodResult& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const{ return m_requestValidatorId; }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline void SetRequestValidatorId(const Aws::String& value) { m_requestValidatorId = value; }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline void SetRequestValidatorId(Aws::String&& value) { m_requestValidatorId = std::move(value); }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline void SetRequestValidatorId(const char* value) { m_requestValidatorId.assign(value); }

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline PutMethodResult& WithRequestValidatorId(const Aws::String& value) { SetRequestValidatorId(value); return *this;}

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline PutMethodResult& WithRequestValidatorId(Aws::String&& value) { SetRequestValidatorId(std::move(value)); return *this;}

    /**
     * <p>The identifier of a <a>RequestValidator</a> for request validation.</p>
     */
    inline PutMethodResult& WithRequestValidatorId(const char* value) { SetRequestValidatorId(value); return *this;}


    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationName = value; }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationName = std::move(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline void SetOperationName(const char* value) { m_operationName.assign(value); }

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodResult& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodResult& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline PutMethodResult& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParameters = value; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParameters = std::move(value); }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline PutMethodResult& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline PutMethodResult& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline PutMethodResult& AddRequestParameters(const Aws::String& key, bool value) { m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline PutMethodResult& AddRequestParameters(Aws::String&& key, bool value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or templates.</p>
     */
    inline PutMethodResult& AddRequestParameters(const char* key, bool value) { m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModels = value; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModels = std::move(value); }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(const char* key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, const char* value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying data schemas, represented by <a>Model</a>
     * resources, (as the mapped value) of the request payloads of given content types
     * (as the mapping key).</p>
     */
    inline PutMethodResult& AddRequestModels(const char* key, const char* value) { m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline const Aws::Map<Aws::String, MethodResponse>& GetMethodResponses() const{ return m_methodResponses; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline void SetMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { m_methodResponses = value; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline void SetMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { m_methodResponses = std::move(value); }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& WithMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& WithMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { SetMethodResponses(std::move(value)); return *this;}

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(const Aws::String& key, const MethodResponse& value) { m_methodResponses.emplace(key, value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(Aws::String&& key, const MethodResponse& value) { m_methodResponses.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(const Aws::String& key, MethodResponse&& value) { m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(Aws::String&& key, MethodResponse&& value) { m_methodResponses.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(const char* key, MethodResponse&& value) { m_methodResponses.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets a method response associated with a given HTTP status code. </p> <div
     * class="remarks"> <p>The collection of method responses are encapsulated in a
     * key-value map, where the key is a response's HTTP status code and the value is a
     * <a>MethodResponse</a> resource that specifies the response returned to the
     * caller from the back end through the integration response.</p> <h4>Example: Get
     * a 200 OK response of a GET method</h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200 HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T215008Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-method-response-{rel}.html",
     * "name": "methodresponse", "templated": true }, "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200", "title":
     * "200" }, "methodresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.operator": false, "method.response.header.operand_2":
     * false, "method.response.header.operand_1": false }, "statusCode": "200"
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-method-response.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& AddMethodResponses(const char* key, const MethodResponse& value) { m_methodResponses.emplace(key, value); return *this; }


    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p> <div class="remarks"> <p/> <h4>Example:
     * </h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T213210Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": [ { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
     * "name": "integration", "templated": true }, { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true } ], "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:responses": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integration:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integrationresponse:put": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/{status_code}",
     * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "0cjtch",
     * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
     * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestTemplates": {
     * "application/json": "{\n \"a\": \"$input.params('operand1')\",\n \"b\":
     * \"$input.params('operand2')\", \n \"op\": \"$input.params('operator')\" \n}" },
     * "type": "AWS", "uri":
     * "arn:aws:apigateway:us-west-2:lambda:path//2015-03-31/functions/arn:aws:lambda:us-west-2:123456789012:function:Calc/invocations",
     * "_embedded": { "integration:responses": { "_links": { "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" },
     * "integrationresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" }
     * }, "responseParameters": { "method.response.header.operator":
     * "integration.response.body.op", "method.response.header.operand_2":
     * "integration.response.body.b", "method.response.header.operand_1":
     * "integration.response.body.a" }, "responseTemplates": { "application/json":
     * "#set($res = $input.path('$'))\n{\n \"result\": \"$res.a, $res.b, $res.op =>
     * $res.c\",\n \"a\" : \"$res.a\",\n \"b\" : \"$res.b\",\n \"op\" : \"$res.op\",\n
     * \"c\" : \"$res.c\"\n}" }, "selectionPattern": "", "statusCode": "200" } }
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-integration.html">AWS
     * CLI</a> </div>
     */
    inline const Integration& GetMethodIntegration() const{ return m_methodIntegration; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p> <div class="remarks"> <p/> <h4>Example:
     * </h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T213210Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": [ { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
     * "name": "integration", "templated": true }, { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true } ], "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:responses": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integration:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integrationresponse:put": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/{status_code}",
     * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "0cjtch",
     * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
     * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestTemplates": {
     * "application/json": "{\n \"a\": \"$input.params('operand1')\",\n \"b\":
     * \"$input.params('operand2')\", \n \"op\": \"$input.params('operator')\" \n}" },
     * "type": "AWS", "uri":
     * "arn:aws:apigateway:us-west-2:lambda:path//2015-03-31/functions/arn:aws:lambda:us-west-2:123456789012:function:Calc/invocations",
     * "_embedded": { "integration:responses": { "_links": { "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" },
     * "integrationresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" }
     * }, "responseParameters": { "method.response.header.operator":
     * "integration.response.body.op", "method.response.header.operand_2":
     * "integration.response.body.b", "method.response.header.operand_1":
     * "integration.response.body.a" }, "responseTemplates": { "application/json":
     * "#set($res = $input.path('$'))\n{\n \"result\": \"$res.a, $res.b, $res.op =>
     * $res.c\",\n \"a\" : \"$res.a\",\n \"b\" : \"$res.b\",\n \"op\" : \"$res.op\",\n
     * \"c\" : \"$res.c\"\n}" }, "selectionPattern": "", "statusCode": "200" } }
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-integration.html">AWS
     * CLI</a> </div>
     */
    inline void SetMethodIntegration(const Integration& value) { m_methodIntegration = value; }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p> <div class="remarks"> <p/> <h4>Example:
     * </h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T213210Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": [ { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
     * "name": "integration", "templated": true }, { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true } ], "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:responses": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integration:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integrationresponse:put": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/{status_code}",
     * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "0cjtch",
     * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
     * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestTemplates": {
     * "application/json": "{\n \"a\": \"$input.params('operand1')\",\n \"b\":
     * \"$input.params('operand2')\", \n \"op\": \"$input.params('operator')\" \n}" },
     * "type": "AWS", "uri":
     * "arn:aws:apigateway:us-west-2:lambda:path//2015-03-31/functions/arn:aws:lambda:us-west-2:123456789012:function:Calc/invocations",
     * "_embedded": { "integration:responses": { "_links": { "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" },
     * "integrationresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" }
     * }, "responseParameters": { "method.response.header.operator":
     * "integration.response.body.op", "method.response.header.operand_2":
     * "integration.response.body.b", "method.response.header.operand_1":
     * "integration.response.body.a" }, "responseTemplates": { "application/json":
     * "#set($res = $input.path('$'))\n{\n \"result\": \"$res.a, $res.b, $res.op =>
     * $res.c\",\n \"a\" : \"$res.a\",\n \"b\" : \"$res.b\",\n \"op\" : \"$res.op\",\n
     * \"c\" : \"$res.c\"\n}" }, "selectionPattern": "", "statusCode": "200" } }
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-integration.html">AWS
     * CLI</a> </div>
     */
    inline void SetMethodIntegration(Integration&& value) { m_methodIntegration = std::move(value); }

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p> <div class="remarks"> <p/> <h4>Example:
     * </h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T213210Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": [ { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
     * "name": "integration", "templated": true }, { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true } ], "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:responses": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integration:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integrationresponse:put": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/{status_code}",
     * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "0cjtch",
     * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
     * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestTemplates": {
     * "application/json": "{\n \"a\": \"$input.params('operand1')\",\n \"b\":
     * \"$input.params('operand2')\", \n \"op\": \"$input.params('operator')\" \n}" },
     * "type": "AWS", "uri":
     * "arn:aws:apigateway:us-west-2:lambda:path//2015-03-31/functions/arn:aws:lambda:us-west-2:123456789012:function:Calc/invocations",
     * "_embedded": { "integration:responses": { "_links": { "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" },
     * "integrationresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" }
     * }, "responseParameters": { "method.response.header.operator":
     * "integration.response.body.op", "method.response.header.operand_2":
     * "integration.response.body.b", "method.response.header.operand_1":
     * "integration.response.body.a" }, "responseTemplates": { "application/json":
     * "#set($res = $input.path('$'))\n{\n \"result\": \"$res.a, $res.b, $res.op =>
     * $res.c\",\n \"a\" : \"$res.a\",\n \"b\" : \"$res.b\",\n \"op\" : \"$res.op\",\n
     * \"c\" : \"$res.c\"\n}" }, "selectionPattern": "", "statusCode": "200" } }
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-integration.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& WithMethodIntegration(const Integration& value) { SetMethodIntegration(value); return *this;}

    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p> <div class="remarks"> <p/> <h4>Example:
     * </h4> <h5>Request</h5> <p/> <pre><code>GET
     * /restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration HTTP/1.1
     * Content-Type: application/json Host: apigateway.us-east-1.amazonaws.com
     * Content-Length: 117 X-Amz-Date: 20160613T213210Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20160613/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <p>The successful response returns a <code>200 OK</code>
     * status code and a payload similar to the following:</p> <pre><code>{ "_links": {
     * "curies": [ { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-{rel}.html",
     * "name": "integration", "templated": true }, { "href":
     * "https://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-integration-response-{rel}.html",
     * "name": "integrationresponse", "templated": true } ], "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integration:responses": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integration:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration" },
     * "integrationresponse:put": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/{status_code}",
     * "templated": true } }, "cacheKeyParameters": [], "cacheNamespace": "0cjtch",
     * "credentials": "arn:aws:iam::123456789012:role/apigAwsProxyRole", "httpMethod":
     * "POST", "passthroughBehavior": "WHEN_NO_MATCH", "requestTemplates": {
     * "application/json": "{\n \"a\": \"$input.params('operand1')\",\n \"b\":
     * \"$input.params('operand2')\", \n \"op\": \"$input.params('operator')\" \n}" },
     * "type": "AWS", "uri":
     * "arn:aws:apigateway:us-west-2:lambda:path//2015-03-31/functions/arn:aws:lambda:us-west-2:123456789012:function:Calc/invocations",
     * "_embedded": { "integration:responses": { "_links": { "self": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200",
     * "name": "200", "title": "200" }, "integrationresponse:delete": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" },
     * "integrationresponse:update": { "href":
     * "/restapis/uojnr9hd57/resources/0cjtch/methods/GET/integration/responses/200" }
     * }, "responseParameters": { "method.response.header.operator":
     * "integration.response.body.op", "method.response.header.operand_2":
     * "integration.response.body.b", "method.response.header.operand_1":
     * "integration.response.body.a" }, "responseTemplates": { "application/json":
     * "#set($res = $input.path('$'))\n{\n \"result\": \"$res.a, $res.b, $res.op =>
     * $res.c\",\n \"a\" : \"$res.a\",\n \"b\" : \"$res.b\",\n \"op\" : \"$res.op\",\n
     * \"c\" : \"$res.c\"\n}" }, "selectionPattern": "", "statusCode": "200" } }
     * }</code></pre> <p/> </div> <div class="seeAlso"> <a
     * href="https://docs.aws.amazon.com/cli/latest/reference/apigateway/get-integration.html">AWS
     * CLI</a> </div>
     */
    inline PutMethodResult& WithMethodIntegration(Integration&& value) { SetMethodIntegration(std::move(value)); return *this;}


    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopes = value; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopes = std::move(value); }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodResult& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodResult& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodResult& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopes.push_back(value); return *this; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodResult& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline PutMethodResult& AddAuthorizationScopes(const char* value) { m_authorizationScopes.push_back(value); return *this; }

  private:

    Aws::String m_httpMethod;

    Aws::String m_authorizationType;

    Aws::String m_authorizerId;

    bool m_apiKeyRequired;

    Aws::String m_requestValidatorId;

    Aws::String m_operationName;

    Aws::Map<Aws::String, bool> m_requestParameters;

    Aws::Map<Aws::String, Aws::String> m_requestModels;

    Aws::Map<Aws::String, MethodResponse> m_methodResponses;

    Integration m_methodIntegration;

    Aws::Vector<Aws::String> m_authorizationScopes;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
