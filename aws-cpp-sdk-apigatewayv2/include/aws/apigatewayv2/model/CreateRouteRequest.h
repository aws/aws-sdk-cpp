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
   */
  class AWS_APIGATEWAYV2_API CreateRouteRequest : public ApiGatewayV2Request
  {
  public:
    CreateRouteRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateRoute"; }

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
    inline CreateRouteRequest& WithApiId(const Aws::String& value) { SetApiId(value); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateRouteRequest& WithApiId(Aws::String&& value) { SetApiId(std::move(value)); return *this;}

    /**
     * <p>The API identifier.</p>
     */
    inline CreateRouteRequest& WithApiId(const char* value) { SetApiId(value); return *this;}


    /**
     * <p>Specifies whether an API key is required for the route.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether an API key is required for the route.</p>
     */
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }

    /**
     * <p>Specifies whether an API key is required for the route.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether an API key is required for the route.</p>
     */
    inline CreateRouteRequest& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = value; }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::move(value); }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline CreateRouteRequest& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline CreateRouteRequest& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline CreateRouteRequest& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline CreateRouteRequest& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>The authorization scopes supported by this
 route.</p>
     */
    inline CreateRouteRequest& AddAuthorizationScopes(const char* value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.push_back(value); return *this; }


    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = value; }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline CreateRouteRequest& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer.</p>
     */
    inline CreateRouteRequest& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline CreateRouteRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline CreateRouteRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline CreateRouteRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The model selection expression for the route.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline bool ModelSelectionExpressionHasBeenSet() const { return m_modelSelectionExpressionHasBeenSet; }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = value; }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression = std::move(value); }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpressionHasBeenSet = true; m_modelSelectionExpression.assign(value); }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


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
    inline CreateRouteRequest& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline CreateRouteRequest& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline CreateRouteRequest& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>The request models for the route.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>The request models for the route.</p>
     */
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }

    /**
     * <p>The request models for the route.</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModelsHasBeenSet = true; m_requestModels = value; }

    /**
     * <p>The request models for the route.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::move(value); }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(const char* key, Aws::String&& value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(Aws::String&& key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline CreateRouteRequest& AddRequestModels(const char* key, const char* value) { m_requestModelsHasBeenSet = true; m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>The request parameters for the route.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_requestParametersHasBeenSet = true; m_requestParameters = value; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::move(value); }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& WithRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& WithRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(const Aws::String& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(Aws::String&& key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(const Aws::String& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(Aws::String&& key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(const char* key, ParameterConstraints&& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline CreateRouteRequest& AddRequestParameters(const char* key, const ParameterConstraints& value) { m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this; }


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
    inline CreateRouteRequest& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline CreateRouteRequest& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline CreateRouteRequest& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}


    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline const Aws::String& GetRouteResponseSelectionExpression() const{ return m_routeResponseSelectionExpression; }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline bool RouteResponseSelectionExpressionHasBeenSet() const { return m_routeResponseSelectionExpressionHasBeenSet; }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(const Aws::String& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = value; }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(Aws::String&& value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression = std::move(value); }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(const char* value) { m_routeResponseSelectionExpressionHasBeenSet = true; m_routeResponseSelectionExpression.assign(value); }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithRouteResponseSelectionExpression(const Aws::String& value) { SetRouteResponseSelectionExpression(value); return *this;}

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithRouteResponseSelectionExpression(Aws::String&& value) { SetRouteResponseSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline CreateRouteRequest& WithRouteResponseSelectionExpression(const char* value) { SetRouteResponseSelectionExpression(value); return *this;}


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
    inline CreateRouteRequest& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline CreateRouteRequest& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline CreateRouteRequest& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    Aws::String m_apiId;
    bool m_apiIdHasBeenSet;

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
