/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigatewayv2/model/ParameterConstraints.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{

  /**
   * <p>Represents a route response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/RouteResponse">AWS
   * API Reference</a></p>
   */
  class RouteResponse
  {
  public:
    AWS_APIGATEWAYV2_API RouteResponse() = default;
    AWS_APIGATEWAYV2_API RouteResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RouteResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the model selection expression of a route response. Supported only
     * for WebSocket APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const { return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    template<typename ModelSelectionExpressionT = Aws::String>
    void SetModelSelectionExpression(ModelSelectionExpressionT&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::forward<ModelSelectionExpressionT>(value); }
    template<typename ModelSelectionExpressionT = Aws::String>
    RouteResponse& WithModelSelectionExpression(ModelSelectionExpressionT&& value) { SetModelSelectionExpression(std::forward<ModelSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const { return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseModels(ResponseModelsT&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::forward<ResponseModelsT>(value); }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    RouteResponse& WithResponseModels(ResponseModelsT&& value) { SetResponseModels(std::forward<ResponseModelsT>(value)); return *this;}
    template<typename ResponseModelsKeyT = Aws::String, typename ResponseModelsValueT = Aws::String>
    RouteResponse& AddResponseModels(ResponseModelsKeyT&& key, ResponseModelsValueT&& value) {
      m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::forward<ResponseModelsKeyT>(key), std::forward<ResponseModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const { return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    RouteResponse& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = ParameterConstraints>
    RouteResponse& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseId() const { return m_routeResponseId; }
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }
    template<typename RouteResponseIdT = Aws::String>
    void SetRouteResponseId(RouteResponseIdT&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::forward<RouteResponseIdT>(value); }
    template<typename RouteResponseIdT = Aws::String>
    RouteResponse& WithRouteResponseId(RouteResponseIdT&& value) { SetRouteResponseId(std::forward<RouteResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const { return m_routeResponseKey; }
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }
    template<typename RouteResponseKeyT = Aws::String>
    void SetRouteResponseKey(RouteResponseKeyT&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::forward<RouteResponseKeyT>(value); }
    template<typename RouteResponseKeyT = Aws::String>
    RouteResponse& WithRouteResponseKey(RouteResponseKeyT&& value) { SetRouteResponseKey(std::forward<RouteResponseKeyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConstraints> m_responseParameters;
    bool m_responseParametersHasBeenSet = false;

    Aws::String m_routeResponseId;
    bool m_routeResponseIdHasBeenSet = false;

    Aws::String m_routeResponseKey;
    bool m_routeResponseKeyHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
