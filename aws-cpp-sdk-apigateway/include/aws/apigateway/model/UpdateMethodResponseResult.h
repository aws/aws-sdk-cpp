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
   * <p>Represents a method response. Amazon API Gateway sends back the status code
   * to the caller as the HTTP status code. Parameters and models can be used to
   * transform the response from the method's integration.</p>
   */
  class AWS_APIGATEWAY_API UpdateMethodResponseResult
  {
  public:
    UpdateMethodResponseResult();
    UpdateMethodResponseResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    UpdateMethodResponseResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCode = value; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCode = value; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCode.assign(value); }

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline UpdateMethodResponseResult& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline UpdateMethodResponseResult& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline UpdateMethodResponseResult& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(const Aws::String& key, bool value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(Aws::String&& key, bool value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a boolean flag as the value, which is used to specify
     * whether the parameter is required. A destination must match the pattern
     * <code>method.response.header.{name}</code>, where <code>name</code> is a valid,
     * unique header name. Destinations specified here are available to the integration
     * for mapping from integration response parameters.</p>
     */
    inline UpdateMethodResponseResult& AddResponseParameters(const char* key, bool value) { m_responseParameters[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const char* key, Aws::String&& value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(Aws::String&& key, const char* value) { m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content-type.
     * Response models are represented as a key/value map, with a content-type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline UpdateMethodResponseResult& AddResponseModels(const char* key, const char* value) { m_responseModels[key] = value; return *this; }

  private:
    Aws::String m_statusCode;
    Aws::Map<Aws::String, bool> m_responseParameters;
    Aws::Map<Aws::String, Aws::String> m_responseModels;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
