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
  class AWS_APIGATEWAYV2_API Route
  {
  public:
    Route();
    Route(Aws::Utils::Json::JsonView jsonValue);
    Route& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specifies whether a route is managed by API Gateway. If you created an API
     * using quick create, the $default route is managed by API Gateway. You can't
     * modify the $default route key.</p>
     */
    inline bool GetApiGatewayManaged() const{ return m_apiGatewayManaged; }

    /**
     * <p>Specifies whether a route is managed by API Gateway. If you created an API
     * using quick create, the $default route is managed by API Gateway. You can't
     * modify the $default route key.</p>
     */
    inline bool ApiGatewayManagedHasBeenSet() const { return m_apiGatewayManagedHasBeenSet; }

    /**
     * <p>Specifies whether a route is managed by API Gateway. If you created an API
     * using quick create, the $default route is managed by API Gateway. You can't
     * modify the $default route key.</p>
     */
    inline void SetApiGatewayManaged(bool value) { m_apiGatewayManagedHasBeenSet = true; m_apiGatewayManaged = value; }

    /**
     * <p>Specifies whether a route is managed by API Gateway. If you created an API
     * using quick create, the $default route is managed by API Gateway. You can't
     * modify the $default route key.</p>
     */
    inline Route& WithApiGatewayManaged(bool value) { SetApiGatewayManaged(value); return *this;}


    /**
     * <p>Specifies whether an API key is required for this route. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether an API key is required for this route. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }

    /**
     * <p>Specifies whether an API key is required for this route. Supported only for
     * WebSocket APIs.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether an API key is required for this route. Supported only for
     * WebSocket APIs.</p>
     */
    inline Route& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = value; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::move(value); }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline Route& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline Route& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline Route& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline Route& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a JWT authorizer to authorize the method invocation. The authorization
     * works by matching the route scopes against the scopes parsed from the access
     * token in the incoming request. The method invocation is authorized if any route
     * scope matches a claimed scope in the access token. Otherwise, the invocation is
     * not authorized. When the route scope is configured, the client must provide an
     * access token instead of an identity token for authorization purposes.</p>
     */
    inline Route& AddAuthorizationScopes(const char* value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }


    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline Route& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type for the route. For WebSocket APIs, valid values are
     * NONE for open access, AWS_IAM for using AWS IAM permissions, and CUSTOM for
     * using a Lambda authorizer For HTTP APIs, valid values are NONE for open access,
     * JWT for using JSON Web Tokens, AWS_IAM for using AWS IAM permissions, and CUSTOM
     * for using a Lambda authorizer.</p>
     */
    inline Route& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline Route& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline Route& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this route.
     * The authorizer identifier is generated by API Gateway when you created the
     * authorizer.</p>
     */
    inline Route& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline Route& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline Route& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The model selection expression for the route. Supported only for WebSocket
     * APIs.</p>
     */
    inline Route& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


    /**
     * <p>The operation name for the route.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>The operation name for the route.</p>
     */
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationNameHasBeenSet = true; m_operationName = value; }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationNameHasBeenSet = true; m_operationName = std::move(value); }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(const char* value) { m_operationNameHasBeenSet = true; m_operationName.assign(value); }

    /**
     * <p>The operation name for the route.</p>
     */
    inline Route& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline Route& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline Route& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::move(value); }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& WithRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& WithRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(const Aws::String& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(Aws::String&& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(const Aws::String& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(Aws::String&& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(const char* key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route. Supported only for WebSocket APIs.</p>
     */
    inline Route& AddRequestParameters(const char* key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


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
    inline Route& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline Route& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline Route& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route key for the route.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }

    /**
     * <p>The route key for the route.</p>
     */
    inline bool RouteKeyHasBeenSet() const { return m_routeKeyHasBeenSet; }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(const Aws::String& value) { m_routeKeyHasBeenSet = true; m_routeKey = value; }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(Aws::String&& value) { m_routeKeyHasBeenSet = true; m_routeKey = std::move(value); }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(const char* value) { m_routeKeyHasBeenSet = true; m_routeKey.assign(value); }

    /**
     * <p>The route key for the route.</p>
     */
    inline Route& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline Route& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline Route& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}


    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline const Aws::String& GetRouteResponseSelectionExpression() const{ return m_routeResponseSelectionExpression; }

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline bool RouteResponseSelectionExpressionHasBeenSet() const { return m_routeResponseSelectionExpressionHasBeenSet; }

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline void SetRouteResponseSelectionExpression(const Aws::String& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = value; }

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline void SetRouteResponseSelectionExpression(Aws::String&& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = std::move(value); }

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline void SetRouteResponseSelectionExpression(const char* value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression.assign(value); }

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline Route& WithRouteResponseSelectionExpression(const Aws::String& value) { SetRouteResponseSelectionExpression(value); return *this;}

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline Route& WithRouteResponseSelectionExpression(Aws::String&& value) { SetRouteResponseSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route response selection expression for the route. Supported only for
     * WebSocket APIs.</p>
     */
    inline Route& WithRouteResponseSelectionExpression(const char* value) { SetRouteResponseSelectionExpression(value); return *this;}


    /**
     * <p>The target for the route.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target for the route.</p>
     */
    inline bool TargetHasBeenSet() const { return m_targetHasBeenSet; }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_targetHasBeenSet = true; m_target = value; }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_targetHasBeenSet = true; m_target = std::move(value); }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(const char* value) { m_targetHasBeenSet = true; m_target.assign(value); }

    /**
     * <p>The target for the route.</p>
     */
    inline Route& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline Route& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline Route& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    bool m_apiGatewayManaged;
    bool m_apiGatewayManagedHasBeenSet;

    bool m_apiKeyRequired;
    bool m_apiKeyRequiredHasBeenSet;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet;

    AuthorizationType m_authorizationType;
    bool m_authorizationTypeHasBeenSet;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet;

    Aws::String m_modelSelectionExpression;
    bool m_modelSelectionExpressionHasBeenSet;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet;

    Aws::Map<Aws::String, ParameterConstraints> m_requestParameters;
    bool m_requestParametersHasBeenSet;

    Aws::String m_routeId;
    bool m_routeIdHasBeenSet;

    Aws::String m_routeKey;
    bool m_routeKeyHasBeenSet;

    Aws::String m_routeResponseSelectionExpression;
    bool m_routeResponseSelectionExpressionHasBeenSet;

    Aws::String m_target;
    bool m_targetHasBeenSet;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
