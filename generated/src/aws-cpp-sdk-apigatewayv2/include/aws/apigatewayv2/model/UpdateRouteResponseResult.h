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
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ApiGatewayV2
{
namespace Model
{
  class UpdateRouteResponseResult
  {
  public:
    AWS_APIGATEWAYV2_API UpdateRouteResponseResult() = default;
    AWS_APIGATEWAYV2_API UpdateRouteResponseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APIGATEWAYV2_API UpdateRouteResponseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Represents the model selection expression of a route response. Supported only
     * for WebSocket APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const { return m_modelSelectionExpression; }
    template<typename ModelSelectionExpressionT = Aws::String>
    void SetModelSelectionExpression(ModelSelectionExpressionT&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::forward<ModelSelectionExpressionT>(value); }
    template<typename ModelSelectionExpressionT = Aws::String>
    UpdateRouteResponseResult& WithModelSelectionExpression(ModelSelectionExpressionT&& value) { SetModelSelectionExpression(std::forward<ModelSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const { return m_responseModels; }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    void SetResponseModels(ResponseModelsT&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::forward<ResponseModelsT>(value); }
    template<typename ResponseModelsT = Aws::Map<Aws::String, Aws::String>>
    UpdateRouteResponseResult& WithResponseModels(ResponseModelsT&& value) { SetResponseModels(std::forward<ResponseModelsT>(value)); return *this;}
    template<typename ResponseModelsKeyT = Aws::String, typename ResponseModelsValueT = Aws::String>
    UpdateRouteResponseResult& AddResponseModels(ResponseModelsKeyT&& key, ResponseModelsValueT&& value) {
      m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::forward<ResponseModelsKeyT>(key), std::forward<ResponseModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const { return m_responseParameters; }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    void SetResponseParameters(ResponseParametersT&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::forward<ResponseParametersT>(value); }
    template<typename ResponseParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    UpdateRouteResponseResult& WithResponseParameters(ResponseParametersT&& value) { SetResponseParameters(std::forward<ResponseParametersT>(value)); return *this;}
    template<typename ResponseParametersKeyT = Aws::String, typename ResponseParametersValueT = ParameterConstraints>
    UpdateRouteResponseResult& AddResponseParameters(ResponseParametersKeyT&& key, ResponseParametersValueT&& value) {
      m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::forward<ResponseParametersKeyT>(key), std::forward<ResponseParametersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseId() const { return m_routeResponseId; }
    template<typename RouteResponseIdT = Aws::String>
    void SetRouteResponseId(RouteResponseIdT&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::forward<RouteResponseIdT>(value); }
    template<typename RouteResponseIdT = Aws::String>
    UpdateRouteResponseResult& WithRouteResponseId(RouteResponseIdT&& value) { SetRouteResponseId(std::forward<RouteResponseIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const { return m_routeResponseKey; }
    template<typename RouteResponseKeyT = Aws::String>
    void SetRouteResponseKey(RouteResponseKeyT&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::forward<RouteResponseKeyT>(value); }
    template<typename RouteResponseKeyT = Aws::String>
    UpdateRouteResponseResult& WithRouteResponseKey(RouteResponseKeyT&& value) { SetRouteResponseKey(std::forward<RouteResponseKeyT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    UpdateRouteResponseResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
