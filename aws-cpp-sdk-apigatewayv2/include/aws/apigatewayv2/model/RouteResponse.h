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
  class AWS_APIGATEWAYV2_API RouteResponse
  {
  public:
    RouteResponse();
    RouteResponse(Aws::Utils::Json::JsonView jsonValue);
    RouteResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline RouteResponse& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline RouteResponse& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>Represents the model selection expression of a route response.</p>
     */
    inline RouteResponse& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response models of a route response.</p>
     */
    inline RouteResponse& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }


    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& WithResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& WithResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(const Aws::String& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(Aws::String&& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(const Aws::String& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(Aws::String&& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(const char* key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Represents the response parameters of a route response.</p>
     */
    inline RouteResponse& AddResponseParameters(const char* key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = value; }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::move(value); }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline void SetRouteResponseId(const char* value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId.assign(value); }

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}

    /**
     * <p>Represents the identifier of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}


    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const{ return m_routeResponseKey; }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(const Aws::String& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = value; }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(Aws::String&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::move(value); }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline void SetRouteResponseKey(const char* value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey.assign(value); }

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseKey(const Aws::String& value) { SetRouteResponseKey(value); return *this;}

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseKey(Aws::String&& value) { SetRouteResponseKey(std::move(value)); return *this;}

    /**
     * <p>Represents the route response key of a route response.</p>
     */
    inline RouteResponse& WithRouteResponseKey(const char* value) { SetRouteResponseKey(value); return *this;}

  private:

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet;

    Aws::Map<Aws::String, ParameterConstraints> m_responseParameters;
    bool m_responseParametersHasBeenSet;

    Aws::String m_routeResponseId;
    bool m_routeResponseIdHasBeenSet;

    Aws::String m_routeResponseKey;
    bool m_routeResponseKeyHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
