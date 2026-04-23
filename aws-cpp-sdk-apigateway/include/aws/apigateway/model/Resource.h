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
#include <aws/apigateway/model/Method.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents an API resource.</p> <div class="seeAlso"> <a
   * href="https://docs.aws.amazon.com/apigateway/latest/developerguide/how-to-create-api.html">Create
   * an API</a> </div><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Resource">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API Resource
  {
  public:
    Resource();
    Resource(Aws::Utils::Json::JsonView jsonValue);
    Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The resource's identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The resource's identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The resource's identifier.</p>
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The parent resource's identifier.</p>
     */
    inline const Aws::String& GetParentId() const{ return m_parentId; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline bool ParentIdHasBeenSet() const { return m_parentIdHasBeenSet; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const Aws::String& value) { m_parentIdHasBeenSet = true; m_parentId = value; }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(Aws::String&& value) { m_parentIdHasBeenSet = true; m_parentId = std::move(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline void SetParentId(const char* value) { m_parentIdHasBeenSet = true; m_parentId.assign(value); }

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(const Aws::String& value) { SetParentId(value); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(Aws::String&& value) { SetParentId(std::move(value)); return *this;}

    /**
     * <p>The parent resource's identifier.</p>
     */
    inline Resource& WithParentId(const char* value) { SetParentId(value); return *this;}


    /**
     * <p>The last path segment for this resource.</p>
     */
    inline const Aws::String& GetPathPart() const{ return m_pathPart; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline bool PathPartHasBeenSet() const { return m_pathPartHasBeenSet; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const Aws::String& value) { m_pathPartHasBeenSet = true; m_pathPart = value; }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(Aws::String&& value) { m_pathPartHasBeenSet = true; m_pathPart = std::move(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline void SetPathPart(const char* value) { m_pathPartHasBeenSet = true; m_pathPart.assign(value); }

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(const Aws::String& value) { SetPathPart(value); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(Aws::String&& value) { SetPathPart(std::move(value)); return *this;}

    /**
     * <p>The last path segment for this resource.</p>
     */
    inline Resource& WithPathPart(const char* value) { SetPathPart(value); return *this;}


    /**
     * <p>The full path for this resource.</p>
     */
    inline const Aws::String& GetPath() const{ return m_path; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline bool PathHasBeenSet() const { return m_pathHasBeenSet; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const Aws::String& value) { m_pathHasBeenSet = true; m_path = value; }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(Aws::String&& value) { m_pathHasBeenSet = true; m_path = std::move(value); }

    /**
     * <p>The full path for this resource.</p>
     */
    inline void SetPath(const char* value) { m_pathHasBeenSet = true; m_path.assign(value); }

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(const Aws::String& value) { SetPath(value); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(Aws::String&& value) { SetPath(std::move(value)); return *this;}

    /**
     * <p>The full path for this resource.</p>
     */
    inline Resource& WithPath(const char* value) { SetPath(value); return *this;}


    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline const Aws::Map<Aws::String, Method>& GetResourceMethods() const{ return m_resourceMethods; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline bool ResourceMethodsHasBeenSet() const { return m_resourceMethodsHasBeenSet; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline void SetResourceMethods(const Aws::Map<Aws::String, Method>& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = value; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline void SetResourceMethods(Aws::Map<Aws::String, Method>&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods = std::move(value); }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& WithResourceMethods(const Aws::Map<Aws::String, Method>& value) { SetResourceMethods(value); return *this;}

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& WithResourceMethods(Aws::Map<Aws::String, Method>&& value) { SetResourceMethods(std::move(value)); return *this;}

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(const Aws::String& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, value); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(Aws::String&& key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(std::move(key), value); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(const Aws::String& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(Aws::String&& key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(const char* key, Method&& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Gets an API resource's method of a given HTTP verb.</p> <div class="remarks">
     * <p>The resource methods are a map of methods indexed by methods' HTTP verbs
     * enabled on the resource. This method map is included in the <code>200 OK</code>
     * response of the <code>GET /restapis/{restapi_id}/resources/{resource_id}</code>
     * or <code>GET /restapis/{restapi_id}/resources/{resource_id}?embed=methods</code>
     * request.</p> <h4>Example: Get the GET method of an API resource</h4>
     * <h5>Request</h5> <pre><code>GET
     * /restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET HTTP/1.1 Content-Type:
     * application/json Host: apigateway.us-east-1.amazonaws.com X-Amz-Date:
     * 20170223T031827Z Authorization: AWS4-HMAC-SHA256
     * Credential={access_key_ID}/20170223/us-east-1/apigateway/aws4_request,
     * SignedHeaders=content-type;host;x-amz-date, Signature={sig4_hash}</code></pre>
     * <h5>Response</h5> <pre><code>{ "_links": { "curies": [ { "href":
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
     * "templated": true } }, "apiKeyRequired": false, "authorizationType": "NONE",
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
     * "$util.urlDecode(\"%3CkinesisStreams%3E#foreach($stream in
     * $input.path('$.StreamNames'))%3Cstream%3E%3Cname%3E$stream%3C/name%3E%3C/stream%3E#end%3C/kinesisStreams%3E\")\n"
     * }, "statusCode": "200" } } }, "method:responses": { "_links": { "self": {
     * "href": "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200",
     * "name": "200", "title": "200" }, "methodresponse:delete": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" },
     * "methodresponse:update": { "href":
     * "/restapis/fugvjdxtri/resources/3kzxbg5sa2/methods/GET/responses/200" } },
     * "responseModels": { "application/json": "Empty" }, "responseParameters": {
     * "method.response.header.Content-Type": false }, "statusCode": "200" } }
     * }</code></pre> <p>If the <code>OPTIONS</code> is enabled on the resource, you
     * can follow the example here to get that method. Just replace the
     * <code>GET</code> of the last path segment in the request URL with
     * <code>OPTIONS</code>.</p> </div> <div class="seeAlso"> </div>
     */
    inline Resource& AddResourceMethods(const char* key, const Method& value) { m_resourceMethodsHasBeenSet = true; m_resourceMethods.emplace(key, value); return *this; }

  private:

    Aws::String m_id;
    bool m_idHasBeenSet;

    Aws::String m_parentId;
    bool m_parentIdHasBeenSet;

    Aws::String m_pathPart;
    bool m_pathPartHasBeenSet;

    Aws::String m_path;
    bool m_pathHasBeenSet;

    Aws::Map<Aws::String, Method> m_resourceMethods;
    bool m_resourceMethodsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
