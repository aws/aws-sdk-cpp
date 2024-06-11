﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/apigatewayv2/ApiGatewayV2Request.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/AuthorizationType.h>
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
   * <p>Updates a Route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/UpdateRouteRequest">AWS
   * API Reference</a></p>
   */
  class UpdateRouteRequest : public ApiGatewayV2Request
  {
  public:
    AWS_APIGATEWAYV2_API UpdateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateRoute"; }

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
    inline UpdateRouteRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}
    inline UpdateRouteRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithApiId(const char* value) { SetApiId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an API key is required for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }
    inline UpdateRouteRequest& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The authorization scopes supported by this route.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = value; }
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::move(value); }
    inline UpdateRouteRequest& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}
    inline UpdateRouteRequest& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}
    inline UpdateRouteRequest& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }
    inline UpdateRouteRequest& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(std::move(value)); return *this; }
    inline UpdateRouteRequest& AddAuthorizationScopes(const char* value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }
    inline UpdateRouteRequest& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}
    inline UpdateRouteRequest& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }
    inline UpdateRouteRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}
    inline UpdateRouteRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }
    inline UpdateRouteRequest& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}
    inline UpdateRouteRequest& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation name for the route.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }
    inline UpdateRouteRequest& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}
    inline UpdateRouteRequest& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithOperationName(const char* value) { SetOperationName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::move(value); }
    inline UpdateRouteRequest& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}
    inline UpdateRouteRequest& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}
    inline UpdateRouteRequest& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }
    inline UpdateRouteRequest& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }
    inline UpdateRouteRequest& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }
    inline UpdateRouteRequest& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetRequestParameters() const{ return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    inline void SetRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }
    inline void SetRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }
    inline UpdateRouteRequest& WithRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetRequestParameters(value); return *this;}
    inline UpdateRouteRequest& WithRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetRequestParameters(std::move(value)); return *this;}
    inline UpdateRouteRequest& AddRequestParameters(const Aws::String& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
    inline UpdateRouteRequest& AddRequestParameters(Aws::String&& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }
    inline UpdateRouteRequest& AddRequestParameters(const Aws::String& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestParameters(Aws::String&& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestParameters(const char* key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }
    inline UpdateRouteRequest& AddRequestParameters(const char* key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }
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
    inline UpdateRouteRequest& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}
    inline UpdateRouteRequest& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithRouteId(const char* value) { SetRouteId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route key for the route.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }
    inline void SetRouteKey(const Aws::String& value) { m_routeKeyHasBeenSet = true; m_routeKey = value; }
    inline void SetRouteKey(Aws::String&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::move(value); }
    inline void SetRouteKey(const char* value) { m_routeKeyHasBeenSet = true; m_routeKey.assign(value); }
    inline UpdateRouteRequest& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}
    inline UpdateRouteRequest& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteResponseSelectionExpression() const{ return m_routeResponseSelectionExpression; }
    inline bool RouteResponseSelectionExpressionHasBeenSet() const { return m_routeResponseSelectionExpressionHasBeenSet; }
    inline void SetRouteResponseSelectionExpression(const Aws::String& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = value; }
    inline void SetRouteResponseSelectionExpression(Aws::String&& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = std::move(value); }
    inline void SetRouteResponseSelectionExpression(const char* value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression.assign(value); }
    inline UpdateRouteRequest& WithRouteResponseSelectionExpression(const Aws::String& value) { SetRouteResponseSelectionExpression(value); return *this;}
    inline UpdateRouteRequest& WithRouteResponseSelectionExpression(Aws::String&& value) { SetRouteResponseSelectionExpression(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithRouteResponseSelectionExpression(const char* value) { SetRouteResponseSelectionExpression(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target for the route.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }
    inline UpdateRouteRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}
    inline UpdateRouteRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}
    inline UpdateRouteRequest& WithTarget(const char* value) { SetTarget(value); return *this;}
    ///@}
  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet = false;

    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet = false;

    AuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet = false;

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet = false;

    Aws::Map<Aws::String, ParameterConstraints> m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet = false;

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet = false;

    Aws::String m_routeResponseSelectionExpression;
    bool m_routeResponseSelectionExpressionHasBeenSet = false;

    Aws::String m_target;
    bool m_targetHasBeenSet = false;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
