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
    AWS_APIGATEWAYV2_API UpdateRouteResponseRequest() = default;

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
    inline const Aws::String& GetApiId() const { return m_apiId; }
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }
    template<typename ApiIdT = Aws::String>
    void SetApiId(ApiIdT&& value) { m_apiIdHasBeenSet = true; m_apiId = std::forward<ApiIdT>(value); }
    template<typename ApiIdT = Aws::String>
    UpdateRouteResponseRequest& WithApiId(ApiIdT&& value) { SetApiId(std::forward<ApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model selection expression for the route response. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const { return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    template<typename ModelSelectionExpressionT = Aws::String>
    void SetModelSelectionExpression(ModelSelectionExpressionT&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::forward<ModelSelectionExpressionT>(value); }
    template<typename ModelSelectionExpressionT = Aws::String>
    UpdateRouteResponseRequest& WithModelSelectionExpression(ModelSelectionExpressionT&& value) { SetModelSelectionExpression(std::forward<ModelSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The response models for the route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const { return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseModels(ResponseModelsT&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::forward<ResponseModelsT>(value); }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    UpdateRouteResponseRequest& WithResponseModels(ResponseModelsT&& value) { SetResponseModels(std::forward<ResponseModelsT>(value)); return *this;}
    template<typename ResponseModelsKeyT = Aws::String, typename ResponseModelsValueT = Aws::String>
    UpdateRouteResponseRequest& AddResponseModels(ResponseModelsKeyT&& key, ResponseModelsValueT&& value) {
      m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::forward<ResponseModelsKeyT>(key), std::forward<ResponseModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The route response parameters.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const { return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    UpdateRouteResponseRequest& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = ParameterConstraints>
    UpdateRouteResponseRequest& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const { return m_routeId; }
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }
    template<typename RouteIdT = Aws::String>
    void SetRouteId(RouteIdT&& value) { m_routeIdHasBeenSet = true; m_routeId = std::forward<RouteIdT>(value); }
    template<typename RouteIdT = Aws::String>
    UpdateRouteResponseRequest& WithRouteId(RouteIdT&& value) { SetRouteId(std::forward<RouteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response ID.</p>
     */
    inline const Aws::String& GetRouteResponseId() const { return m_routeResponseId; }
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }
    template<typename RouteResponseIdT = Aws::String>
    void SetRouteResponseId(RouteResponseIdT&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::forward<RouteResponseIdT>(value); }
    template<typename RouteResponseIdT = Aws::String>
    UpdateRouteResponseRequest& WithRouteResponseId(RouteResponseIdT&& value) { SetRouteResponseId(std::forward<RouteResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response key.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const { return m_routeResponseKey; }
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }
    template<typename RouteResponseKeyT = Aws::String>
    void SetRouteResponseKey(RouteResponseKeyT&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::forward<RouteResponseKeyT>(value); }
    template<typename RouteResponseKeyT = Aws::String>
    UpdateRouteResponseRequest& WithRouteResponseKey(RouteResponseKeyT&& value) { SetRouteResponseKey(std::forward<RouteResponseKeyT>(value)); return *this;}
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
