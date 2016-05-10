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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Integration.h>
#include <aws/apigateway/model/MethodResponse.h>

namespace Aws
{
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
   * <p>Represents a method.</p>
   */
  class AWS_APIGATEWAY_API Method
  {
  public:
    Method();
    Method(const Aws::Utils::Json::JsonValue& jsonValue);
    Method& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;

    /**
     * <p>The HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The HTTP method.</p>
     */
    inline Method& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP method.</p>
     */
    inline Method& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP method.</p>
     */
    inline Method& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationTypeHasBeenSet = true; m_authorizationType.assign(value); }

    /**
     * <p>The method's authorization type.</p>
     */
    inline Method& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline Method& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline Method& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline Method& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline Method& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline Method& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline Method& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline Method& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline Method& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(const Aws::String& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(Aws::String&& key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

    /**
     * <p>Represents request parameters that can be accepted by Amazon API Gateway.
     * Request parameters are represented as a key/value map, with a source as the key
     * and a Boolean flag as the value. The Boolean flag is used to specify whether the
     * parameter is required. A source must match the pattern
     * <code>method.request.{location}.{name}</code>, where <code>location</code> is
     * either querystring, path, or header. <code>name</code> is a valid, unique
     * parameter name. Sources specified here are available to the integration for
     * mapping to integration request parameters or templates.</p>
     */
    inline Method& AddRequestParameters(const char* key, bool value) { m_requestParametersHasBeenSet = true; m_requestParameters[key] = value; return *this; }

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
    inline Method& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline Method& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline const Aws::Map<Aws::String, MethodResponse>& GetMethodResponses() const{ return m_methodResponses; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline void SetMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { m_methodResponsesHasBeenSet = true; m_methodResponses = value; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline void SetMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses = value; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& WithMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& WithMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(const Aws::String& key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(Aws::String&& key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(const Aws::String& key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(Aws::String&& key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(const char* key, MethodResponse&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline Method& AddMethodResponses(const char* key, const MethodResponse& value) { m_methodResponsesHasBeenSet = true; m_methodResponses[key] = value; return *this; }

    /**
     * <p>The method's integration.</p>
     */
    inline const Integration& GetMethodIntegration() const{ return m_methodIntegration; }

    /**
     * <p>The method's integration.</p>
     */
    inline void SetMethodIntegration(const Integration& value) { m_methodIntegrationHasBeenSet = true; m_methodIntegration = value; }

    /**
     * <p>The method's integration.</p>
     */
    inline void SetMethodIntegration(Integration&& value) { m_methodIntegrationHasBeenSet = true; m_methodIntegration = value; }

    /**
     * <p>The method's integration.</p>
     */
    inline Method& WithMethodIntegration(const Integration& value) { SetMethodIntegration(value); return *this;}

    /**
     * <p>The method's integration.</p>
     */
    inline Method& WithMethodIntegration(Integration&& value) { SetMethodIntegration(value); return *this;}

  private:
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
    Aws::Map<Aws::String, MethodResponse> m_methodResponses;
    bool m_methodResponsesHasBeenSet;
    Integration m_methodIntegration;
    bool m_methodIntegrationHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
