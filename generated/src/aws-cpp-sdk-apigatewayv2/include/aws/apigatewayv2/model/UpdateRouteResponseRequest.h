/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/ParameterConstraints.h>
#include <utility>

namespace Aws
{
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Updates a RouteResponse.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteResponseRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRouteResponseRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateRouteResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRouteResponse"; }

    AWS_APIGATEWAYV2_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }
    inline UpdateRouteResponseRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateRouteResponseRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model selection expression for the route response. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response models for the route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }
    inline UpdateRouteResponseRequest& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}
    inline UpdateRouteResponseRequest& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline UpdateRouteResponseRequest& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route response parameters.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const{ return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline UpdateRouteResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetResponseParameters(value); return *this;}
    inline UpdateRouteResponseRequest& WithResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& AddResponseParameters(const Aws::String& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline UpdateRouteResponseRequest& AddResponseParameters(Aws::String&& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline UpdateRouteResponseRequest& AddResponseParameters(const Aws::String& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseParameters(Aws::String&& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseParameters(const char* key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteResponseRequest& AddResponseParameters(const char* key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }
    inline UpdateRouteResponseRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline UpdateRouteResponseRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response ID.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = value; }
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::move(value); }
    inline void SetRouteResponseId(const char* value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId.assign(value); }
    inline UpdateRouteResponseRequest& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}
    inline UpdateRouteResponseRequest& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response key.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const{ return m_routeResponseKey; }
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }
    inline void SetRouteResponseKey(const Aws::String& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = value; }
    inline void SetRouteResponseKey(Aws::String&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::move(value); }
    inline void SetRouteResponseKey(const char* value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey.assign(value); }
    inline UpdateRouteResponseRequest& WithRouteResponseKey(const Aws::String& value) { SetRouteResponseKey(value); return *this;}
    inline UpdateRouteResponseRequest& WithRouteResponseKey(Aws::String&& value) { SetRouteResponseKey(std::move(value)); return *this;}
    inline UpdateRouteResponseRequest& WithRouteResponseKey(const char* value) { SetRouteResponseKey(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConstraints> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;

    Aws::String m_routeResponseId;
    bool m_routeResponseIdHasBeenSet = false;

    Aws::String m_routeResponseKey;
    bool m_routeResponseKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
