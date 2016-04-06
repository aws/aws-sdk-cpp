/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apigateway/model/IntegrationType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Represents a put integration request.</p>
   */
  class AWS_APIGATEWAY_API PutIntegrationRequest : public APIGatewayRequest
  {
  public:
    PutIntegrationRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration request's API identifier.</p>
     */
    inline PutIntegrationRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration request's resource ID.</p>
     */
    inline PutIntegrationRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration request's HTTP method.</p>
     */
    inline PutIntegrationRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline const IntegrationType& GetType() const{ return m_type; }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline void SetType(const IntegrationType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline void SetType(IntegrationType&& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(const IntegrationType& value) { SetType(value); return *this;}

    /**
     * <p>Specifies a put integration input's type.</p>
     */
    inline PutIntegrationRequest& WithType(IntegrationType&& value) { SetType(value); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline const Aws::String& GetIntegrationHttpMethod() const{ return m_integrationHttpMethod; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const Aws::String& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = value; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(Aws::String&& value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod = value; }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline void SetIntegrationHttpMethod(const char* value) { m_integrationHttpMethodHasBeenSet = true; m_integrationHttpMethod.assign(value); }

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const Aws::String& value) { SetIntegrationHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(Aws::String&& value) { SetIntegrationHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration HTTP method. When the integration type is HTTP or
     * AWS, this field is required.</p>
     */
    inline PutIntegrationRequest& WithIntegrationHttpMethod(const char* value) { SetIntegrationHttpMethod(value); return *this;}

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline const Aws::String& GetUri() const{ return m_uri; }

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline void SetUri(const Aws::String& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline void SetUri(Aws::String&& value) { m_uriHasBeenSet = true; m_uri = value; }

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline void SetUri(const char* value) { m_uriHasBeenSet = true; m_uri.assign(value); }

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline PutIntegrationRequest& WithUri(const Aws::String& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline PutIntegrationRequest& WithUri(Aws::String&& value) { SetUri(value); return *this;}

    /**
     * <p>Specifies a put integration input's Uniform Resource Identifier (URI). When
     * the integration type is HTTP or AWS, this field is required. For integration
     * with Lambda as an AWS service proxy, this value is of the
     * 'arn:aws:apigateway:&lt;region&gt;:lambda:path/2015-03-31/functions/&lt;functionArn&gt;/invocations'
     * format.</p>
     */
    inline PutIntegrationRequest& WithUri(const char* value) { SetUri(value); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline const Aws::String& GetCredentials() const{ return m_credentials; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const Aws::String& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(Aws::String&& value) { m_credentialsHasBeenSet = true; m_credentials = value; }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline void SetCredentials(const char* value) { m_credentialsHasBeenSet = true; m_credentials.assign(value); }

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const Aws::String& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(Aws::String&& value) { SetCredentials(value); return *this;}

    /**
     * <p>Specifies whether credentials are required for a put integration.</p>
     */
    inline PutIntegrationRequest& WithCredentials(const char* value) { SetCredentials(value); return *this;}

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& WithRequestParameters(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& WithRequestParameters(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const Aws::String& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(const Aws::String& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(const char* key, Aws::String&& value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(Aws::String&& key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that are sent with the backend request. Request
     * parameters are represented as a key/value map, with a destination as the key and
     * a source as the value. A source must match an existing method request parameter,
     * or a static value. Static values must be enclosed with single quotes, and be
     * pre-encoded based on their destination in the request. The destination must
     * match the pattern <code>integration.request.{location}.{name}</code>, where
     * <code>location</code> is either querystring, path, or header. <code>name</code>
     * must be a valid, unique parameter name.</p>
     */
    inline PutIntegrationRequest& AddRequestParameters(const char* key, const char* value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestTemplates() const{ return m_requestTemplates; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline void SetRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline void SetRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates = value; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& WithRequestTemplates(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestTemplates(value); return *this;}

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const Aws::String& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const Aws::String& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, Aws::String&& value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(Aws::String&& key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies the templates used to transform the method request body. Request
     * templates are represented as a key/value map, with a content-type as the key and
     * a template as the value.</p>
     */
    inline PutIntegrationRequest& AddRequestTemplates(const char* key, const char* value) { m_requestTemplatesHasBeenSet = true; m_requestTemplates[key] = value; return *this; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline const Aws::String& GetCacheNamespace() const{ return m_cacheNamespace; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(const Aws::String& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(Aws::String&& value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace = value; }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline void SetCacheNamespace(const char* value) { m_cacheNamespaceHasBeenSet = true; m_cacheNamespace.assign(value); }

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const Aws::String& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(Aws::String&& value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache namespace.</p>
     */
    inline PutIntegrationRequest& WithCacheNamespace(const char* value) { SetCacheNamespace(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCacheKeyParameters() const{ return m_cacheKeyParameters; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(const Aws::Vector<Aws::String>& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline void SetCacheKeyParameters(Aws::Vector<Aws::String>&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters = value; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(const Aws::Vector<Aws::String>& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& WithCacheKeyParameters(Aws::Vector<Aws::String>&& value) { SetCacheKeyParameters(value); return *this;}

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const Aws::String& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(Aws::String&& value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

    /**
     * <p>Specifies a put integration input's cache key parameters.</p>
     */
    inline PutIntegrationRequest& AddCacheKeyParameters(const char* value) { m_cacheKeyParametersHasBeenSet = true; m_cacheKeyParameters.push_back(value); return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    IntegrationType m_type;
    bool m_typeHasBeenSet;
    Aws::String m_integrationHttpMethod;
    bool m_integrationHttpMethodHasBeenSet;
    Aws::String m_uri;
    bool m_uriHasBeenSet;
    Aws::String m_credentials;
    bool m_credentialsHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestParameters;
    bool m_requestParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestTemplates;
    bool m_requestTemplatesHasBeenSet;
    Aws::String m_cacheNamespace;
    bool m_cacheNamespaceHasBeenSet;
    Aws::Vector<Aws::String> m_cacheKeyParameters;
    bool m_cacheKeyParametersHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
