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
   * <p>Request to add a <a>MethodResponse</a> to an existing <a>Method</a>
   * resource.</p>
   */
  class AWS_APIGATEWAY_API PutMethodResponseRequest : public APIGatewayRequest
  {
  public:
    PutMethodResponseRequest();
    Aws::String SerializePayload() const override;

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>RestApi</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(value); return *this;}

    /**
     * <p>The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The HTTP verb that identifies the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>The method response's status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(value); return *this;}

    /**
     * <p>The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline PutMethodResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline PutMethodResponseRequest& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(const Aws::String& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(Aws::String&& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Represents response parameters that can be sent back to the caller by Amazon
     * API Gateway. Response parameters are represented as a key/value map, with a
     * destination as the key and a Boolean flag as the value. The Boolean flag is used
     * to specify whether the parameter is required. A destination must match the
     * pattern <code>method.response.header.{name}</code>, where <code>name</code> is a
     * valid, unique header name. Destinations specified here are available to the
     * integration for mapping from integration response parameters.</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(const char* key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels[key] = value; return *this; }

  private:
    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet;
    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet;
    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet;
    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet;
    Aws::Map<Aws::String, bool> m_responseParameters;
    bool m_responseParametersHasBeenSet;
    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
