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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/GatewayResponse.h>
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
   * <p>The collection of the <a>GatewayResponse</a> instances of a <a>RestApi</a> as
   * a <code>responseType</code>-to-<a>GatewayResponse</a> object map of key-value
   * pairs. As such, pagination is not supported for querying this collection.</p>
   * <div class="remarks"> For more information about valid gateway response types,
   * see <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/supported-gateway-response-types.html">Gateway
   * Response Types Supported by API Gateway</a> <div class="example"> <h4>Example:
   * Get the collection of gateway responses of an API</h4> <h5>Request</h5> <p>This
   * example request shows how to retrieve the <a>GatewayResponses</a> collection
   * from an API.</p> <pre><code>GET /restapis/o81lxisefl/gatewayresponses HTTP/1.1
   * Host: beta-apigateway.us-east-1.amazonaws.com Content-Type: application/json
   * X-Amz-Date: 20170503T220604Z Authorization: AWS4-HMAC-SHA256
   * Credential={access-key-id}/20170503/us-east-1/apigateway/aws4_request,
   * SignedHeaders=content-type;host;x-amz-date,
   * Signature=59b42fe54a76a5de8adf2c67baa6d39206f8e9ad49a1d77ccc6a5da3103a398a
   * Cache-Control: no-cache Postman-Token: 5637af27-dc29-fc5c-9dfe-0645d52cb515
   * </code></pre> <p></p> <h5>Response</h5> <p>The successful operation returns the
   * <code>200 OK</code> status code and a payload similar to the following:</p>
   * <pre><code>{ "_links": { "curies": { "href":
   * "http://docs.aws.amazon.com/apigateway/latest/developerguide/restapi-gatewayresponse-{rel}.html",
   * "name": "gatewayresponse", "templated": true }, "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses" }, "first": { "href":
   * "/restapis/o81lxisefl/gatewayresponses" }, "gatewayresponse:by-type": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "item": [ { "href": "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_FAILURE"
   * }, { "href": "/restapis/o81lxisefl/gatewayresponses/RESOURCE_NOT_FOUND" }, {
   * "href": "/restapis/o81lxisefl/gatewayresponses/REQUEST_TOO_LARGE" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/THROTTLED" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNSUPPORTED_MEDIA_TYPE" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_CONFIGURATION_ERROR" }, {
   * "href": "/restapis/o81lxisefl/gatewayresponses/DEFAULT_5XX" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/DEFAULT_4XX" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_PARAMETERS" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_BODY" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/EXPIRED_TOKEN" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/ACCESS_DENIED" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INVALID_API_KEY" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNAUTHORIZED" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/API_CONFIGURATION_ERROR" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/QUOTA_EXCEEDED" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_TIMEOUT" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" }, {
   * "href": "/restapis/o81lxisefl/gatewayresponses/INVALID_SIGNATURE" }, { "href":
   * "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_FAILURE" } ] }, "_embedded": {
   * "item": [ { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_FAILURE" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_FAILURE" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "INTEGRATION_FAILURE", "statusCode": "504" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/RESOURCE_NOT_FOUND" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/RESOURCE_NOT_FOUND" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "RESOURCE_NOT_FOUND", "statusCode": "404" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/REQUEST_TOO_LARGE" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/REQUEST_TOO_LARGE" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "REQUEST_TOO_LARGE", "statusCode": "413" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/THROTTLED" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/THROTTLED" } }, "defaultResponse": true,
   * "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "THROTTLED",
   * "statusCode": "429" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNSUPPORTED_MEDIA_TYPE" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNSUPPORTED_MEDIA_TYPE" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "UNSUPPORTED_MEDIA_TYPE", "statusCode": "415" }, { "_links": {
   * "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_CONFIGURATION_ERROR" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_CONFIGURATION_ERROR" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "AUTHORIZER_CONFIGURATION_ERROR", "statusCode": "500" }, {
   * "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/DEFAULT_5XX" }, "gatewayresponse:put": {
   * "href": "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated":
   * true }, "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/DEFAULT_5XX" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "DEFAULT_5XX" },
   * { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/DEFAULT_4XX" }, "gatewayresponse:put": {
   * "href": "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated":
   * true }, "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/DEFAULT_4XX" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "DEFAULT_4XX" },
   * { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_PARAMETERS" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_PARAMETERS" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "BAD_REQUEST_PARAMETERS", "statusCode": "400" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_BODY" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/BAD_REQUEST_BODY" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType":
   * "BAD_REQUEST_BODY", "statusCode": "400" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/EXPIRED_TOKEN" }, "gatewayresponse:put":
   * { "href": "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated":
   * true }, "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/EXPIRED_TOKEN" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "EXPIRED_TOKEN",
   * "statusCode": "403" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/ACCESS_DENIED" }, "gatewayresponse:put":
   * { "href": "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated":
   * true }, "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/ACCESS_DENIED" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "ACCESS_DENIED",
   * "statusCode": "403" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INVALID_API_KEY" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INVALID_API_KEY" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType":
   * "INVALID_API_KEY", "statusCode": "403" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNAUTHORIZED" }, "gatewayresponse:put": {
   * "href": "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated":
   * true }, "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/UNAUTHORIZED" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType": "UNAUTHORIZED",
   * "statusCode": "401" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/API_CONFIGURATION_ERROR" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/API_CONFIGURATION_ERROR" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "API_CONFIGURATION_ERROR", "statusCode": "500" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/QUOTA_EXCEEDED" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/QUOTA_EXCEEDED" } }, "defaultResponse":
   * true, "responseParameters": {}, "responseTemplates": { "application/json":
   * "{\"message\":$context.error.messageString}" }, "responseType":
   * "QUOTA_EXCEEDED", "statusCode": "429" }, { "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_TIMEOUT" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INTEGRATION_TIMEOUT" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "INTEGRATION_TIMEOUT", "statusCode": "504" }, { "_links": {
   * "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/MISSING_AUTHENTICATION_TOKEN" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "MISSING_AUTHENTICATION_TOKEN", "statusCode": "403" }, {
   * "_links": { "self": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INVALID_SIGNATURE" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/INVALID_SIGNATURE" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "INVALID_SIGNATURE", "statusCode": "403" }, { "_links": {
   * "self": { "href": "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_FAILURE" },
   * "gatewayresponse:put": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/{response_type}", "templated": true },
   * "gatewayresponse:update": { "href":
   * "/restapis/o81lxisefl/gatewayresponses/AUTHORIZER_FAILURE" } },
   * "defaultResponse": true, "responseParameters": {}, "responseTemplates": {
   * "application/json": "{\"message\":$context.error.messageString}" },
   * "responseType": "AUTHORIZER_FAILURE", "statusCode": "500" } ] } }</code></pre>
   * <p></p> </div> </div> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/customize-gateway-responses.html">Customize
   * Gateway Responses</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/GatewayResponses">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API GetGatewayResponsesResult
  {
  public:
    GetGatewayResponsesResult();
    GetGatewayResponsesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetGatewayResponsesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetPosition() const{ return m_position; }

    
    inline void SetPosition(const Aws::String& value) { m_position = value; }

    
    inline void SetPosition(Aws::String&& value) { m_position = std::move(value); }

    
    inline void SetPosition(const char* value) { m_position.assign(value); }

    
    inline GetGatewayResponsesResult& WithPosition(const Aws::String& value) { SetPosition(value); return *this;}

    
    inline GetGatewayResponsesResult& WithPosition(Aws::String&& value) { SetPosition(std::move(value)); return *this;}

    
    inline GetGatewayResponsesResult& WithPosition(const char* value) { SetPosition(value); return *this;}


    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline const Aws::Vector<GatewayResponse>& GetItems() const{ return m_items; }

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline void SetItems(const Aws::Vector<GatewayResponse>& value) { m_items = value; }

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline void SetItems(Aws::Vector<GatewayResponse>&& value) { m_items = std::move(value); }

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline GetGatewayResponsesResult& WithItems(const Aws::Vector<GatewayResponse>& value) { SetItems(value); return *this;}

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline GetGatewayResponsesResult& WithItems(Aws::Vector<GatewayResponse>&& value) { SetItems(std::move(value)); return *this;}

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline GetGatewayResponsesResult& AddItems(const GatewayResponse& value) { m_items.push_back(value); return *this; }

    /**
     * <p>Returns the entire collection, because of no pagination support.</p>
     */
    inline GetGatewayResponsesResult& AddItems(GatewayResponse&& value) { m_items.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_position;

    Aws::Vector<GatewayResponse> m_items;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
