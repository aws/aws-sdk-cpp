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
#include <aws/core/utils/memory/stl/AWSMap.h>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to add a method to an existing <a>Resource</a> resource.</p>
   */
  class AWS_APIGATEWAY_API PutMethodRequest : public APIGatewayRequest
  {
  public:
    PutMethodRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the new <a>Method</a> resource.</p>
     */
    inline PutMethodRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the method request's HTTP method type.</p>
     */
    inline PutMethodRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationTypeHasBeenSet = true; m_authorizationType.assign(value); }

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the type of authorization used for the method.</p>
     */
    inline PutMethodRequest& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method, if
     * the type is CUSTOM.</p>
     */
    inline PutMethodRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether the method required a valid <a>ApiKey</a>.</p>
     */
    inline PutMethodRequest& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(const Aws::String& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(Aws::String&& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by Amazon API Gateway. A key defines a method request parameter
     * name matching the pattern of <code>method.request.{location}.{name}</code>,
     * where <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in <a>Integration</a>
     * to be mapped to integration request parameters or body-mapping templates.</p>
     */
    inline PutMethodRequest& AddRequestParameters(const char* key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodRequest& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet;
    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;
    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet;
    Aws::Map<Aws::String, bool> m_requestParameters;
    bool m_requestParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
