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
   */
  class AWS_APIGATEWAYV2_API UpdateRouteResponseRequest : public ApiGatewayV2Request
  {
  public:
    UpdateRouteResponseRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRouteResponse"; }

    Aws::String SerializePayload() const override;


    /**
     * <p>The API identifier.</p>
     */
    inline const Aws::String& GetApiId() const{ return m_apiId; }

    /**
     * <p>The API identifier.</p>
     */
    inline bool ApiIdHasBeenSet() const { return m_apiIdHasBeenSet; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const Aws::String& value) { m_apiIdHasBeenSet = true; m_apiId = value; }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(Aws::String&& value) { m_apiIdHasBeenSet = true; m_apiId = std::move(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline void SetApiId(const char* value) { m_apiIdHasBeenSet = true; m_apiId.assign(value); }

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateRouteResponseRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateRouteResponseRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline UpdateRouteResponseRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The model selection expression for the route response.</p>
     */
    inline UpdateRouteResponseRequest& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


    /**
     * <p>The response models for the route response.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetResponseModels() const{ return m_responseModels; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline bool ResponseModelsHasBeenSet() const { return m_responseModelsHasBeenSet; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline void SetResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { m_responseModelsHasBeenSet = true; m_responseModels = value; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline void SetResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { m_responseModelsHasBeenSet = true; m_responseModels = std::move(value); }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& WithResponseModels(const Aws::Map<Aws::String, Aws::String>& value) { SetResponseModels(value); return *this;}

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& WithResponseModels(Aws::Map<Aws::String, Aws::String>&& value) { SetResponseModels(std::move(value)); return *this;}

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(const Aws::String& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, const Aws::String& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(const Aws::String& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(const char* key, Aws::String&& value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(Aws::String&& key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The response models for the route response.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseModels(const char* key, const char* value) { m_responseModelsHasBeenSet = true; m_responseModels.emplace(key, value); return *this; }


    /**
     * <p>The route response parameters.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetResponseParameters() const{ return m_responseParameters; }

    /**
     * <p>The route response parameters.</p>
     */
    inline bool ResponseParametersHasBeenSet() const { return m_responseParametersHasBeenSet; }

    /**
     * <p>The route response parameters.</p>
     */
    inline void SetResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_responseParametersHasBeenSet = true; m_responseParameters = value; }

    /**
     * <p>The route response parameters.</p>
     */
    inline void SetResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_responseParametersHasBeenSet = true; m_responseParameters = std::move(value); }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& WithResponseParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetResponseParameters(value); return *this;}

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& WithResponseParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetResponseParameters(std::move(value)); return *this;}

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(const Aws::String& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(Aws::String&& key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(const Aws::String& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(Aws::String&& key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(const char* key, ParameterConstraints&& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The route response parameters.</p>
     */
    inline UpdateRouteResponseRequest& AddResponseParameters(const char* key, const ParameterConstraints& value) { m_responseParametersHasBeenSet = true; m_responseParameters.emplace(key, value); return *this; }


    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The route ID.</p>
     */
    inline bool RouteIdHasBeenSet() const { return m_routeIdHasBeenSet; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeIdHasBeenSet = true; m_routeId = value; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeIdHasBeenSet = true; m_routeId = std::move(value); }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const char* value) { m_routeIdHasBeenSet = true; m_routeId.assign(value); }

    /**
     * <p>The route ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route response ID.</p>
     */
    inline const Aws::String& GetRouteResponseId() const{ return m_routeResponseId; }

    /**
     * <p>The route response ID.</p>
     */
    inline bool RouteResponseIdHasBeenSet() const { return m_routeResponseIdHasBeenSet; }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(const Aws::String& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = value; }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(Aws::String&& value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId = std::move(value); }

    /**
     * <p>The route response ID.</p>
     */
    inline void SetRouteResponseId(const char* value) { m_routeResponseIdHasBeenSet = true; m_routeResponseId.assign(value); }

    /**
     * <p>The route response ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseId(const Aws::String& value) { SetRouteResponseId(value); return *this;}

    /**
     * <p>The route response ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseId(Aws::String&& value) { SetRouteResponseId(std::move(value)); return *this;}

    /**
     * <p>The route response ID.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseId(const char* value) { SetRouteResponseId(value); return *this;}


    /**
     * <p>The route response key.</p>
     */
    inline const Aws::String& GetRouteResponseKey() const{ return m_routeResponseKey; }

    /**
     * <p>The route response key.</p>
     */
    inline bool RouteResponseKeyHasBeenSet() const { return m_routeResponseKeyHasBeenSet; }

    /**
     * <p>The route response key.</p>
     */
    inline void SetRouteResponseKey(const Aws::String& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = value; }

    /**
     * <p>The route response key.</p>
     */
    inline void SetRouteResponseKey(Aws::String&& value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey = std::move(value); }

    /**
     * <p>The route response key.</p>
     */
    inline void SetRouteResponseKey(const char* value) { m_routeResponseKeyHasBeenSet = true; m_routeResponseKey.assign(value); }

    /**
     * <p>The route response key.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseKey(const Aws::String& value) { SetRouteResponseKey(value); return *this;}

    /**
     * <p>The route response key.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseKey(Aws::String&& value) { SetRouteResponseKey(std::move(value)); return *this;}

    /**
     * <p>The route response key.</p>
     */
    inline UpdateRouteResponseRequest& WithRouteResponseKey(const char* value) { SetRouteResponseKey(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_responseModels;
    bool m_responseModelsHasBeenSet;

    Aws::Map<Aws::String, ParameterConstraints> m_responseParameters;
    bool m_responseParametersHasBeenSet;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet;

    Aws::String m_routeResponseId;
    bool m_routeResponseIdHasBeenSet;

    Aws::String m_routeResponseKey;
    bool m_routeResponseKeyHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
