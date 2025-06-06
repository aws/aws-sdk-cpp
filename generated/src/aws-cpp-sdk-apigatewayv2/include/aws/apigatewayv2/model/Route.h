﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigatewayv2/ApiGatewayV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/AuthorizationType.h>
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
   * <p>Represents a route.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigatewayv2-2018-11-29/Route">AWS
   * API Reference</a></p>
   */
  class Route
  {
  public:
    AWS_APIGATEWAYV2_API Route() = default;
    AWS_APIGATEWAYV2_API Route(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Route& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAYV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specifies whether a route is managed by API Gateway. If you created an API
     * using quick create, the $default route is managed by API Gateway. You can't
     * modify the $default route key.</p>
     */
    inline bool GetApiGatewayManaged() const { return m_apiGatewayManaged; }
    inline bool ApiGatewayManagedHasBeenSet() const { return m_apiGatewayManagedHasBeenSet; }
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }
    inline Route& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether an API key is required for this route. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetApiKeyRequired() const { return m_apiKeyRequired; }
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }
    inline Route& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const { return m_authorizationScopes; }
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }
    template<typename AuthorizationScopesT = Aws::Vector<Aws::String>>
    void SetAuthorizationScopes(AuthorizationScopesT&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::forward<AuthorizationScopesT>(value); }
    template<typename AuthorizationScopesT = Aws::Vector<Aws::String>>
    Route& WithAuthorizationScopes(AuthorizationScopesT&& value) { SetAuthorizationScopes(std::forward<AuthorizationScopesT>(value)); return *this;}
    template<typename AuthorizationScopesT = Aws::String>
    Route& AddAuthorizationScopes(AuthorizationScopesT&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.emplace_back(std::forward<AuthorizationScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline AuthorizationType GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    inline void SetAuthorizationType(AuthorizationType value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }
    inline Route& WithAuthorizationType(AuthorizationType value) { SetAuthorizationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline const Aws::String& GetAuthorizerId() const { return m_authorizerId; }
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }
    template<typename AuthorizerIdT = Aws::String>
    void SetAuthorizerId(AuthorizerIdT&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::forward<AuthorizerIdT>(value); }
    template<typename AuthorizerIdT = Aws::String>
    Route& WithAuthorizerId(AuthorizerIdT&& value) { SetAuthorizerId(std::forward<AuthorizerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const { return m_modelSelectionExpression; }
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }
    template<typename ModelSelectionExpressionT = Aws::String>
    void SetModelSelectionExpression(ModelSelectionExpressionT&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::forward<ModelSelectionExpressionT>(value); }
    template<typename ModelSelectionExpressionT = Aws::String>
    Route& WithModelSelectionExpression(ModelSelectionExpressionT&& value) { SetModelSelectionExpression(std::forward<ModelSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The operation name for the route.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    Route& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const { return m_requestModels; }
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }
    template<typename RequestModelsT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestModels(RequestModelsT&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::forward<RequestModelsT>(value); }
    template<typename RequestModelsT = Aws::Map<Aws::String, Aws::String>>
    Route& WithRequestModels(RequestModelsT&& value) { SetRequestModels(std::forward<RequestModelsT>(value)); return *this;}
    template<typename RequestModelsKeyT = Aws::String, typename RequestModelsValueT = Aws::String>
    Route& AddRequestModels(RequestModelsKeyT&& key, RequestModelsValueT&& value) {
      m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::forward<RequestModelsKeyT>(key), std::forward<RequestModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetRequestParameters() const { return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    template<typename RequestParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    void SetRequestParameters(RequestParametersT&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::forward<RequestParametersT>(value); }
    template<typename RequestParametersT = Aws::Map<Aws::String, ParameterConstraints>>
    Route& WithRequestParameters(RequestParametersT&& value) { SetRequestParameters(std::forward<RequestParametersT>(value)); return *this;}
    template<typename RequestParametersKeyT = Aws::String, typename RequestParametersValueT = ParameterConstraints>
    Route& AddRequestParameters(RequestParametersKeyT&& key, RequestParametersValueT&& value) {
      m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::forward<RequestParametersKeyT>(key), std::forward<RequestParametersValueT>(value)); return *this;
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
    Route& WithRouteId(RouteIdT&& value) { SetRouteId(std::forward<RouteIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route key for the route.</p>
     */
    inline const Aws::String& GetRouteKey() const { return m_routeKey; }
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }
    template<typename RouteKeyT = Aws::String>
    void SetRouteKey(RouteKeyT&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::forward<RouteKeyT>(value); }
    template<typename RouteKeyT = Aws::String>
    Route& WithRouteKey(RouteKeyT&& value) { SetRouteKey(std::forward<RouteKeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteResponseSelectionExpression() const { return m_routeResponseSelectionExpression; }
    inline bool RouteResponseSelectionExpressionHasBeenSet() const { return m_routeResponseSelectionExpressionHasBeenSet; }
    template<typename RouteResponseSelectionExpressionT = Aws::String>
    void SetRouteResponseSelectionExpression(RouteResponseSelectionExpressionT&& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = std::forward<RouteResponseSelectionExpressionT>(value); }
    template<typename RouteResponseSelectionExpressionT = Aws::String>
    Route& WithRouteResponseSelectionExpression(RouteResponseSelectionExpressionT&& value) { SetRouteResponseSelectionExpression(std::forward<RouteResponseSelectionExpressionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The target for the route.</p>
     */
    inline const Aws::String& GetTarget() const { return m_target; }
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }
    template<typename TargetT = Aws::String>
    void SetTarget(TargetT&& value) { m_targetHasBeenSet = true; m_target = std::forward<TargetT>(value); }
    template<typename TargetT = Aws::String>
    Route& WithTarget(TargetT&& value) { SetTarget(std::forward<TargetT>(value)); return *this;}
    ///@}
  private:

    bool m_apiGatewayManaged{false};
    bool m_apiGatewayManagedHasBeenSet = false;

    bool m_apiKeyRequired{false};
    bool m_apiKeyRequiredHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet = false;

    AuthorizationType m_authorizationType{AuthorizationType::NOT_SET};
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
