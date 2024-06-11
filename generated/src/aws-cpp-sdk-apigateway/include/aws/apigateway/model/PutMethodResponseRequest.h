/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Request to add a MethodResponse to an existing Method resource.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/PutMethodResponseRequest">AWS
   * API Reference</a></p>
   */
  class PutMethodResponseRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API PutMethodResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "PutMethodResponse"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }
    inline PutMethodResponseRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}
    inline PutMethodResponseRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}
    inline PutMethodResponseRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Resource identifier for the Method resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline bool ResourceIdHasBeenSet() const { return m_resourceIdHasBeenSet; }
    inline void SetResourceId(const Aws::String& value) { m_resourceIdHasBeenSet = true; m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceIdHasBeenSet = true; m_resourceId.assign(value); }
    inline PutMethodResponseRequest& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline PutMethodResponseRequest& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline PutMethodResponseRequest& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The HTTP verb of the Method resource.</p>
     */
    inline const Aws::String& GetHttpMethod() const{ return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    inline void SetHttpMethod(const Aws::String& value) { m_httpMethodHasBeenSet = true; m_httpMethod = value; }
    inline void SetHttpMethod(Aws::String&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::move(value); }
    inline void SetHttpMethod(const char* value) { m_httpMethodHasBeenSet = true; m_httpMethod.assign(value); }
    inline PutMethodResponseRequest& WithHttpMethod(const Aws::String& value) { SetHttpMethod(value); return *this;}
    inline PutMethodResponseRequest& WithHttpMethod(Aws::String&& value) { SetHttpMethod(std::move(value)); return *this;}
    inline PutMethodResponseRequest& WithHttpMethod(const char* value) { SetHttpMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method response's status code.</p>
     */
    inline const Aws::String& GetStatusCode() const{ return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(const Aws::String& value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline void SetStatusCode(Aws::String&& value) { m_statusCodeHasBeenSet = true; m_statusCode = std::move(value); }
    inline void SetStatusCode(const char* value) { m_statusCodeHasBeenSet = true; m_statusCode.assign(value); }
    inline PutMethodResponseRequest& WithStatusCode(const Aws::String& value) { SetStatusCode(value); return *this;}
    inline PutMethodResponseRequest& WithStatusCode(Aws::String&& value) { SetStatusCode(std::move(value)); return *this;}
    inline PutMethodResponseRequest& WithStatusCode(const char* value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
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
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, bool>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, bool>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline PutMethodResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, bool>& value) { SetResponseParameters(value); return *this;}
    inline PutMethodResponseRequest& WithResponseParameters(Aws::Map<Aws::String, bool>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline PutMethodResponseRequest& AddResponseParameters(const Aws::String& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline PutMethodResponseRequest& AddResponseParameters(Aws::String&& key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseRequest& AddResponseParameters(const char* key, bool value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the Model resources used for the response's content type. Response
     * models are represented as a key/value map, with a content type as the key and a
     * Model name as the value.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }
    inline PutMethodResponseRequest& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}
    inline PutMethodResponseRequest& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline PutMethodResponseRequest& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_statusCode;
    bool m_statusCodeHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
