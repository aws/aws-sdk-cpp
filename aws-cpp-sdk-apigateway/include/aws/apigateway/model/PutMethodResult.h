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
   * <p>Represents a method.</p>
   */
  class AWS_APIGATEWAY_API PutMethodResult
  {
  public:
    PutMethodResult();
    PutMethodResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    PutMethodResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The HTTP method.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethod = value; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethod = value; }

    /**
     * <p>The HTTP method.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethod.assign(value); }

    /**
     * <p>The HTTP method.</p>
     */
    inline PutMethodResult& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP method.</p>
     */
    inline PutMethodResult& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP method.</p>
     */
    inline PutMethodResult& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline const Aws::String& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(const Aws::String& value) { m_authorizationType = value; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(Aws::String&& value) { m_authorizationType = value; }

    /**
     * <p>The method's authorization type.</p>
     */
    inline void SetAuthorizationType(const char* value) { m_authorizationType.assign(value); }

    /**
     * <p>The method's authorization type.</p>
     */
    inline PutMethodResult& WithAuthorizationType(const Aws::String& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline PutMethodResult& WithAuthorizationType(Aws::String&& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The method's authorization type.</p>
     */
    inline PutMethodResult& WithAuthorizationType(const char* value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerId = value; }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerId.assign(value); }

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline PutMethodResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline PutMethodResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies the identifier of an <a>Authorizer</a> to use on this Method. The
     * authorizationType must be CUSTOM.</p>
     */
    inline PutMethodResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether the method requires a valid <a>ApiKey</a>.</p>
     */
    inline PutMethodResult& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}

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
    inline void SetRequestParameters(const Aws::Map<Aws::String, bool>& value) { m_requestParameters = value; }

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
    inline void SetRequestParameters(Aws::Map<Aws::String, bool>&& value) { m_requestParameters = value; }

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
    inline PutMethodResult& WithRequestParameters(const Aws::Map<Aws::String, bool>& value) { SetRequestParameters(value); return *this;}

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
    inline PutMethodResult& WithRequestParameters(Aws::Map<Aws::String, bool>&& value) { SetRequestParameters(value); return *this;}

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
    inline PutMethodResult& AddRequestParameters(const Aws::String& key, bool value) { m_requestParameters[key] = value; return *this; }

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
    inline PutMethodResult& AddRequestParameters(Aws::String&& key, bool value) { m_requestParameters[key] = value; return *this; }

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
    inline PutMethodResult& AddRequestParameters(const char* key, bool value) { m_requestParameters[key] = value; return *this; }

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
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(const char* key, Aws::String&& value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(Aws::String&& key, const char* value) { m_requestModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the request's content type.
     * Request models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResult& AddRequestModels(const char* key, const char* value) { m_requestModels[key] = value; return *this; }

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
    inline void SetMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { m_methodResponses = value; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline void SetMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { m_methodResponses = value; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& WithMethodResponses(const Aws::Map<Aws::String, MethodResponse>& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& WithMethodResponses(Aws::Map<Aws::String, MethodResponse>&& value) { SetMethodResponses(value); return *this;}

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(const Aws::String& key, const MethodResponse& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(Aws::String&& key, const MethodResponse& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(const Aws::String& key, MethodResponse&& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(Aws::String&& key, MethodResponse&& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(const char* key, MethodResponse&& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>Represents available responses that can be sent to the caller. Method
     * responses are represented as a key/value map, with an HTTP status code as the
     * key and a <a>MethodResponse</a> as the value. The status codes are available for
     * the <a>Integration</a> responses to map to.</p>
     */
    inline PutMethodResult& AddMethodResponses(const char* key, const MethodResponse& value) { m_methodResponses[key] = value; return *this; }

    /**
     * <p>The method's integration.</p>
     */
    inline const Integration& GetMethodIntegration() const{ return m_methodIntegration; }

    /**
     * <p>The method's integration.</p>
     */
    inline void SetMethodIntegration(const Integration& value) { m_methodIntegration = value; }

    /**
     * <p>The method's integration.</p>
     */
    inline void SetMethodIntegration(Integration&& value) { m_methodIntegration = value; }

    /**
     * <p>The method's integration.</p>
     */
    inline PutMethodResult& WithMethodIntegration(const Integration& value) { SetMethodIntegration(value); return *this;}

    /**
     * <p>The method's integration.</p>
     */
    inline PutMethodResult& WithMethodIntegration(Integration&& value) { SetMethodIntegration(value); return *this;}

  private:
    Aws::String m_httpMethod;
    Aws::String m_authorizationType;
    Aws::String m_authorizerId;
    bool m_apiKeyRequired;
    Aws::Map<Aws::String, bool> m_requestParameters;
    Aws::Map<Aws::String, Aws::String> m_requestModels;
    Aws::Map<Aws::String, MethodResponse> m_methodResponses;
    Integration m_methodIntegration;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
