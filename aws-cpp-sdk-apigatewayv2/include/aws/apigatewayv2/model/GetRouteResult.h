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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigatewayv2/model/AuthorizationType.h>
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
  class AWS_APIGATEWAYV2_API GetRouteResult
  {
  public:
    GetRouteResult();
    GetRouteResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    GetRouteResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Specifies whether an API key is required for this route.</p>
     */
    inline bool GetApiKeyRequired() const{ return m_apiKeyRequired; }

    /**
     * <p>Specifies whether an API key is required for this route.</p>
     */
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequired = value; }

    /**
     * <p>Specifies whether an API key is required for this route.</p>
     */
    inline GetRouteResult& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}


    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const{ return m_authorizationScopes; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline void SetAuthorizationScopes(const Aws::Vector<Aws::String>& value) { m_authorizationScopes = value; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline void SetAuthorizationScopes(Aws::Vector<Aws::String>&& value) { m_authorizationScopes = std::move(value); }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline GetRouteResult& WithAuthorizationScopes(const Aws::Vector<Aws::String>& value) { SetAuthorizationScopes(value); return *this;}

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline GetRouteResult& WithAuthorizationScopes(Aws::Vector<Aws::String>&& value) { SetAuthorizationScopes(std::move(value)); return *this;}

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline GetRouteResult& AddAuthorizationScopes(const Aws::String& value) { m_authorizationScopes.push_back(value); return *this; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline GetRouteResult& AddAuthorizationScopes(Aws::String&& value) { m_authorizationScopes.push_back(std::move(value)); return *this; }

    /**
     * <p>A list of authorization scopes configured on a route. The scopes are used
     * with a
 COGNITO_USER_POOLS authorizer to authorize the method invocation. The
     * authorization
 works by matching the route scopes against the scopes parsed from
     * the access token in
 the incoming request. The method invocation is authorized
     * if any route scope matches
 a claimed scope in the access token. Otherwise, the
     * invocation is not authorized.
 When the route scope is configured, the client
     * must provide an access token instead
 of an identity token for authorization
     * purposes.</p>
     */
    inline GetRouteResult& AddAuthorizationScopes(const char* value) { m_authorizationScopes.push_back(value); return *this; }


    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer</p>
     */
    inline const AuthorizationType& GetAuthorizationType() const{ return m_authorizationType; }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer</p>
     */
    inline void SetAuthorizationType(const AuthorizationType& value) { m_authorizationType = value; }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer</p>
     */
    inline void SetAuthorizationType(AuthorizationType&& value) { m_authorizationType = std::move(value); }

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer</p>
     */
    inline GetRouteResult& WithAuthorizationType(const AuthorizationType& value) { SetAuthorizationType(value); return *this;}

    /**
     * <p>The authorization type for the route. Valid values are NONE for open
 access,
     * AWS_IAM for using AWS IAM permissions, and CUSTOM
 for using a Lambda

     * authorizer</p>
     */
    inline GetRouteResult& WithAuthorizationType(AuthorizationType&& value) { SetAuthorizationType(std::move(value)); return *this;}


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
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerId = value; }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerId = std::move(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerId.assign(value); }

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline GetRouteResult& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline GetRouteResult& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Authorizer resource to be associated with this
 route,
     * if the authorizationType is CUSTOM
 . The authorizer identifier is generated by
     * API Gateway
 when you created the authorizer.</p>
     */
    inline GetRouteResult& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The model selection expression for the route.</p>
     */
    inline const Aws::String& GetModelSelectionExpression() const{ return m_modelSelectionExpression; }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(const Aws::String& value) { m_modelSelectionExpression = value; }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(Aws::String&& value) { m_modelSelectionExpression = std::move(value); }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline void SetModelSelectionExpression(const char* value) { m_modelSelectionExpression.assign(value); }

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline GetRouteResult& WithModelSelectionExpression(const Aws::String& value) { SetModelSelectionExpression(value); return *this;}

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline GetRouteResult& WithModelSelectionExpression(Aws::String&& value) { SetModelSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The model selection expression for the route.</p>
     */
    inline GetRouteResult& WithModelSelectionExpression(const char* value) { SetModelSelectionExpression(value); return *this;}


    /**
     * <p>The operation name for the route.</p>
     */
    inline const Aws::String& GetOperationName() const{ return m_operationName; }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(const Aws::String& value) { m_operationName = value; }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(Aws::String&& value) { m_operationName = std::move(value); }

    /**
     * <p>The operation name for the route.</p>
     */
    inline void SetOperationName(const char* value) { m_operationName.assign(value); }

    /**
     * <p>The operation name for the route.</p>
     */
    inline GetRouteResult& WithOperationName(const Aws::String& value) { SetOperationName(value); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline GetRouteResult& WithOperationName(Aws::String&& value) { SetOperationName(std::move(value)); return *this;}

    /**
     * <p>The operation name for the route.</p>
     */
    inline GetRouteResult& WithOperationName(const char* value) { SetOperationName(value); return *this;}


    /**
     * <p>The request models for the route.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const{ return m_requestModels; }

    /**
     * <p>The request models for the route.</p>
     */
    inline void SetRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { m_requestModels = value; }

    /**
     * <p>The request models for the route.</p>
     */
    inline void SetRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { m_requestModels = std::move(value); }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& WithRequestModels(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestModels(value); return *this;}

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& WithRequestModels(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestModels(std::move(value)); return *this;}

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(const Aws::String& key, const Aws::String& value) { m_requestModels.emplace(key, value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(Aws::String&& key, const Aws::String& value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(const Aws::String& key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(Aws::String&& key, Aws::String&& value) { m_requestModels.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(const char* key, Aws::String&& value) { m_requestModels.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(Aws::String&& key, const char* value) { m_requestModels.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request models for the route.</p>
     */
    inline GetRouteResult& AddRequestModels(const char* key, const char* value) { m_requestModels.emplace(key, value); return *this; }


    /**
     * <p>The request parameters for the route.</p>
     */
    inline const Aws::Map<Aws::String, ParameterConstraints>& GetRequestParameters() const{ return m_requestParameters; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline void SetRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { m_requestParameters = value; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline void SetRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { m_requestParameters = std::move(value); }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& WithRequestParameters(const Aws::Map<Aws::String, ParameterConstraints>& value) { SetRequestParameters(value); return *this;}

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& WithRequestParameters(Aws::Map<Aws::String, ParameterConstraints>&& value) { SetRequestParameters(std::move(value)); return *this;}

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(const Aws::String& key, const ParameterConstraints& value) { m_requestParameters.emplace(key, value); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(Aws::String&& key, const ParameterConstraints& value) { m_requestParameters.emplace(std::move(key), value); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(const Aws::String& key, ParameterConstraints&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(Aws::String&& key, ParameterConstraints&& value) { m_requestParameters.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(const char* key, ParameterConstraints&& value) { m_requestParameters.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The request parameters for the route.</p>
     */
    inline GetRouteResult& AddRequestParameters(const char* key, const ParameterConstraints& value) { m_requestParameters.emplace(key, value); return *this; }


    /**
     * <p>The route ID.</p>
     */
    inline const Aws::String& GetRouteId() const{ return m_routeId; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const Aws::String& value) { m_routeId = value; }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(Aws::String&& value) { m_routeId = std::move(value); }

    /**
     * <p>The route ID.</p>
     */
    inline void SetRouteId(const char* value) { m_routeId.assign(value); }

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResult& WithRouteId(const Aws::String& value) { SetRouteId(value); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResult& WithRouteId(Aws::String&& value) { SetRouteId(std::move(value)); return *this;}

    /**
     * <p>The route ID.</p>
     */
    inline GetRouteResult& WithRouteId(const char* value) { SetRouteId(value); return *this;}


    /**
     * <p>The route key for the route.</p>
     */
    inline const Aws::String& GetRouteKey() const{ return m_routeKey; }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(const Aws::String& value) { m_routeKey = value; }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(Aws::String&& value) { m_routeKey = std::move(value); }

    /**
     * <p>The route key for the route.</p>
     */
    inline void SetRouteKey(const char* value) { m_routeKey.assign(value); }

    /**
     * <p>The route key for the route.</p>
     */
    inline GetRouteResult& WithRouteKey(const Aws::String& value) { SetRouteKey(value); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline GetRouteResult& WithRouteKey(Aws::String&& value) { SetRouteKey(std::move(value)); return *this;}

    /**
     * <p>The route key for the route.</p>
     */
    inline GetRouteResult& WithRouteKey(const char* value) { SetRouteKey(value); return *this;}


    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline const Aws::String& GetRouteResponseSelectionExpression() const{ return m_routeResponseSelectionExpression; }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(const Aws::String& value) { m_routeResponseSelectionExpression = value; }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(Aws::String&& value) { m_routeResponseSelectionExpression = std::move(value); }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline void SetRouteResponseSelectionExpression(const char* value) { m_routeResponseSelectionExpression.assign(value); }

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline GetRouteResult& WithRouteResponseSelectionExpression(const Aws::String& value) { SetRouteResponseSelectionExpression(value); return *this;}

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline GetRouteResult& WithRouteResponseSelectionExpression(Aws::String&& value) { SetRouteResponseSelectionExpression(std::move(value)); return *this;}

    /**
     * <p>The route response selection expression for the route.</p>
     */
    inline GetRouteResult& WithRouteResponseSelectionExpression(const char* value) { SetRouteResponseSelectionExpression(value); return *this;}


    /**
     * <p>The target for the route.</p>
     */
    inline const Aws::String& GetTarget() const{ return m_target; }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(const Aws::String& value) { m_target = value; }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(Aws::String&& value) { m_target = std::move(value); }

    /**
     * <p>The target for the route.</p>
     */
    inline void SetTarget(const char* value) { m_target.assign(value); }

    /**
     * <p>The target for the route.</p>
     */
    inline GetRouteResult& WithTarget(const Aws::String& value) { SetTarget(value); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline GetRouteResult& WithTarget(Aws::String&& value) { SetTarget(std::move(value)); return *this;}

    /**
     * <p>The target for the route.</p>
     */
    inline GetRouteResult& WithTarget(const char* value) { SetTarget(value); return *this;}

  private:

    bool m_apiKeyRequired;

    Aws::Vector<Aws::String> m_authorizationScopes;

    AuthorizationType m_authorizationType;

    Aws::String m_authorizerId;

    Aws::String m_modelSelectionExpression;

    Aws::String m_operationName;

    Aws::Map<Aws::String, Aws::String> m_requestModels;

    Aws::Map<Aws::String, ParameterConstraints> m_requestParameters;

    Aws::String m_routeId;

    Aws::String m_routeKey;

    Aws::String m_routeResponseSelectionExpression;

    Aws::String m_target;
  };

} // namespace Model
} // namespace ApiGatewayV2
} // namespace Aws
