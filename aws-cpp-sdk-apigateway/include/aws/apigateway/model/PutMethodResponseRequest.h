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
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Request to add a <a>MethodResponse</a> to an existing <a>Method</a>
   * resource.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethodResponseRequest">AWS
   * API Reference</a></p>
   */
  class AWS_APIGATEWAY_API PutMethodResponseRequest : public APIGatewayRequest
  {
  public:
    PutMethodResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMethodResponse"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>[Required] The string identifier of the associated <a>RestApi</a>.</p>
     */
    inline PutMethodResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}

    /**
     * <p>[Required] The <a>Resource</a> identifier for the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}


    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}

    /**
     * <p>[Required] The HTTP verb of the <a>Method</a> resource.</p>
     */
    inline PutMethodResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}


    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}

    /**
     * <p>[Required] The method response's status code.</p>
     */
    inline PutMethodResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}


    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline PutMethodResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline PutMethodResponseRequest& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(const Aws::String& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(Aws::String&& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map specifying required or optional response parameters that API
     * Gateway can send back to the caller. A key defines a method response header name
     * and the associated value is a Boolean flag indicating whether the method
     * response parameter is required or not. The method response header names must
     * match the pattern of <code>method.response.header.{name}</code>, where
     * <code>name</code> is a valid and unique header name. The response parameter
     * names defined here are available in the integration response to be mapped from
     * an integration response header expressed in
     * <code>integration.response.header.{name}</code>, a static value enclosed within
     * a pair of single quotes (e.g., <code>'application/json'</code>), or a JSON
     * expression from the back-end response payload in the form of
     * <code>integration.response.body.{JSON-expression}</code>, where
     * <code>JSON-expression</code> is a valid JSON expression without the
     * <code>$</code> prefix.)</p>
     */
    inline PutMethodResponseRequest& AddResponseParameters(const char* key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


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
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }

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
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }

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
    inline PutMethodResponseRequest& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Specifies the <a>Model</a> resources used for the response's content type.
     * Response models are represented as a key/value map, with a content type as the
     * key and a <a>Model</a> name as the value.</p>
     */
    inline PutMethodResponseRequest& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }

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
