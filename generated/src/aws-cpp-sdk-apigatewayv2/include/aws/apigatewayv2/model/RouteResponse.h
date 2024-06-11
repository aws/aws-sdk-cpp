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
    AWS_APIGATEWAYV2_API RouteResponse();
    AWS_APIGATEWAYV2_API RouteResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API RouteResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents the model selection expression of a route response. Supported only
     * for WebSocket APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }
    inline RouteResponse& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}
    inline RouteResponse& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}
    inline RouteResponse& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }
    inline RouteResponse& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}
    inline RouteResponse& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}
    inline RouteResponse& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    inline RouteResponse& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline RouteResponse& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline RouteResponse& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }
    inline RouteResponse& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }
    inline RouteResponse& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }
    inline RouteResponse& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const{ return m_responseParameters; }
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }
    inline void SetResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }
    inline void SetResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }
    inline RouteResponse& WithResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetResponseParameters(value); return *this;}
    inline RouteResponse& WithResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetResponseParameters(std::move(value)); return *this;}
    inline RouteResponse& AddResponseParameters(const Aws::String& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    inline RouteResponse& AddResponseParameters(Aws::String&& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }
    inline RouteResponse& AddResponseParameters(const Aws::String& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline RouteResponse& AddResponseParameters(Aws::String&& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline RouteResponse& AddResponseParameters(const char* key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }
    inline RouteResponse& AddResponseParameters(const char* key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = value; }
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::move(value); }
    inline void SetRouteResponseId(const char* value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId.assign(value); }
    inline RouteResponse& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}
    inline RouteResponse& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}
    inline RouteResponse& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const{ return m_routeResponseKey; }
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }
    inline void SetRouteResponseKey(const Aws::String& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = value; }
    inline void SetRouteResponseKey(Aws::String&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::move(value); }
    inline void SetRouteResponseKey(const char* value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey.assign(value); }
    inline RouteResponse& WithRouteResponseKey(const Aws::String& value) { SetRouteResponseKey(value); return *this;}
    inline RouteResponse& WithRouteResponseKey(Aws::String&& value) { SetRouteResponseKey(std::move(value)); return *this;}
    inline RouteResponse& WithRouteResponseKey(const char* value) { SetRouteResponseKey(value); return *this;}
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
