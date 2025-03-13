/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/apigateway/model/Integration.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/apigateway/model/MethodResponse.h>
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
namespace APIGateway
{
namespace Model
{

  /**
   * <p> Represents a client-facing interface by which the client calls the API to
   * access back-end resources. A Method resource is integrated with an Integration
   * resource. Both consist of a request and one or more responses. The method
   * request takes the client input that is passed to the back end through the
   * integration request. A method response returns the output from the back end to
   * the client through an integration response. A method request is embodied in a
   * Method resource, whereas an integration request is embodied in an Integration
   * resource. On the other hand, a method response is represented by a
   * MethodResponse resource, whereas an integration response is represented by an
   * IntegrationResponse resource. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/Method">AWS
   * API Reference</a></p>
   */
  class Method
  {
  public:
    AWS_APIGATEWAY_API Method() = default;
    AWS_APIGATEWAY_API Method(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Method& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APIGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The method's HTTP verb.</p>
     */
    inline const Aws::String& GetHttpMethod() const { return m_httpMethod; }
    inline bool HttpMethodHasBeenSet() const { return m_httpMethodHasBeenSet; }
    template<typename HttpMethodT = Aws::String>
    void SetHttpMethod(HttpMethodT&& value) { m_httpMethodHasBeenSet = true; m_httpMethod = std::forward<HttpMethodT>(value); }
    template<typename HttpMethodT = Aws::String>
    Method& WithHttpMethod(HttpMethodT&& value) { SetHttpMethod(std::forward<HttpMethodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method's authorization type. Valid values are <code>NONE</code> for open
     * access, <code>AWS_IAM</code> for using AWS IAM permissions, <code>CUSTOM</code>
     * for using a custom authorizer, or <code>COGNITO_USER_POOLS</code> for using a
     * Cognito user pool.</p>
     */
    inline const Aws::String& GetAuthorizationType() const { return m_authorizationType; }
    inline bool AuthorizationTypeHasBeenSet() const { return m_authorizationTypeHasBeenSet; }
    template<typename AuthorizationTypeT = Aws::String>
    void SetAuthorizationType(AuthorizationTypeT&& value) { m_authorizationTypeHasBeenSet = true; m_authorizationType = std::forward<AuthorizationTypeT>(value); }
    template<typename AuthorizationTypeT = Aws::String>
    Method& WithAuthorizationType(AuthorizationTypeT&& value) { SetAuthorizationType(std::forward<AuthorizationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Authorizer to use on this method. The
     * <code>authorizationType</code> must be <code>CUSTOM</code>.</p>
     */
    inline const Aws::String& GetAuthorizerId() const { return m_authorizerId; }
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }
    template<typename AuthorizerIdT = Aws::String>
    void SetAuthorizerId(AuthorizerIdT&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::forward<AuthorizerIdT>(value); }
    template<typename AuthorizerIdT = Aws::String>
    Method& WithAuthorizerId(AuthorizerIdT&& value) { SetAuthorizerId(std::forward<AuthorizerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean flag specifying whether a valid ApiKey is required to invoke this
     * method.</p>
     */
    inline bool GetApiKeyRequired() const { return m_apiKeyRequired; }
    inline bool ApiKeyRequiredHasBeenSet() const { return m_apiKeyRequiredHasBeenSet; }
    inline void SetApiKeyRequired(bool value) { m_apiKeyRequiredHasBeenSet = true; m_apiKeyRequired = value; }
    inline Method& WithApiKeyRequired(bool value) { SetApiKeyRequired(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of a RequestValidator for request validation.</p>
     */
    inline const Aws::String& GetRequestValidatorId() const { return m_requestValidatorId; }
    inline bool RequestValidatorIdHasBeenSet() const { return m_requestValidatorIdHasBeenSet; }
    template<typename RequestValidatorIdT = Aws::String>
    void SetRequestValidatorId(RequestValidatorIdT&& value) { m_requestValidatorIdHasBeenSet = true; m_requestValidatorId = std::forward<RequestValidatorIdT>(value); }
    template<typename RequestValidatorIdT = Aws::String>
    Method& WithRequestValidatorId(RequestValidatorIdT&& value) { SetRequestValidatorId(std::forward<RequestValidatorIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-friendly operation identifier for the method. For example, you can
     * assign the <code>operationName</code> of <code>ListPets</code> for the <code>GET
     * /pets</code> method in the <code>PetStore</code> example.</p>
     */
    inline const Aws::String& GetOperationName() const { return m_operationName; }
    inline bool OperationNameHasBeenSet() const { return m_operationNameHasBeenSet; }
    template<typename OperationNameT = Aws::String>
    void SetOperationName(OperationNameT&& value) { m_operationNameHasBeenSet = true; m_operationName = std::forward<OperationNameT>(value); }
    template<typename OperationNameT = Aws::String>
    Method& WithOperationName(OperationNameT&& value) { SetOperationName(std::forward<OperationNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map defining required or optional method request parameters that
     * can be accepted by API Gateway. A key is a method request parameter name
     * matching the pattern of <code>method.request.{location}.{name}</code>, where
     * <code>location</code> is <code>querystring</code>, <code>path</code>, or
     * <code>header</code> and <code>name</code> is a valid and unique parameter name.
     * The value associated with the key is a Boolean flag indicating whether the
     * parameter is required (<code>true</code>) or optional (<code>false</code>). The
     * method request parameter names defined here are available in Integration to be
     * mapped to integration request parameters or templates.</p>
     */
    inline const Aws::Map<Aws::String, bool>& GetRequestParameters() const { return m_requestParameters; }
    inline bool RequestParametersHasBeenSet() const { return m_requestParametersHasBeenSet; }
    template<typename RequestParametersT = Aws::Map<Aws::String, bool>>
    void SetRequestParameters(RequestParametersT&& value) { m_requestParametersHasBeenSet = true; m_requestParameters = std::forward<RequestParametersT>(value); }
    template<typename RequestParametersT = Aws::Map<Aws::String, bool>>
    Method& WithRequestParameters(RequestParametersT&& value) { SetRequestParameters(std::forward<RequestParametersT>(value)); return *this;}
    inline Method& AddRequestParameters(Aws::String key, bool value) {
      m_requestParametersHasBeenSet = true; m_requestParameters.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A key-value map specifying data schemas, represented by Model resources, (as
     * the mapped value) of the request payloads of given content types (as the mapping
     * key).</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestModels() const { return m_requestModels; }
    inline bool RequestModelsHasBeenSet() const { return m_requestModelsHasBeenSet; }
    template<typename RequestModelsT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestModels(RequestModelsT&& value) { m_requestModelsHasBeenSet = true; m_requestModels = std::forward<RequestModelsT>(value); }
    template<typename RequestModelsT = Aws::Map<Aws::String, Aws::String>>
    Method& WithRequestModels(RequestModelsT&& value) { SetRequestModels(std::forward<RequestModelsT>(value)); return *this;}
    template<typename RequestModelsKeyT = Aws::String, typename RequestModelsValueT = Aws::String>
    Method& AddRequestModels(RequestModelsKeyT&& key, RequestModelsValueT&& value) {
      m_requestModelsHasBeenSet = true; m_requestModels.emplace(std::forward<RequestModelsKeyT>(key), std::forward<RequestModelsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Gets a method response associated with a given HTTP status code. </p>
     */
    inline const Aws::Map<Aws::String, MethodResponse>& GetMethodResponses() const { return m_methodResponses; }
    inline bool MethodResponsesHasBeenSet() const { return m_methodResponsesHasBeenSet; }
    template<typename MethodResponsesT = Aws::Map<Aws::String, MethodResponse>>
    void SetMethodResponses(MethodResponsesT&& value) { m_methodResponsesHasBeenSet = true; m_methodResponses = std::forward<MethodResponsesT>(value); }
    template<typename MethodResponsesT = Aws::Map<Aws::String, MethodResponse>>
    Method& WithMethodResponses(MethodResponsesT&& value) { SetMethodResponses(std::forward<MethodResponsesT>(value)); return *this;}
    template<typename MethodResponsesKeyT = Aws::String, typename MethodResponsesValueT = MethodResponse>
    Method& AddMethodResponses(MethodResponsesKeyT&& key, MethodResponsesValueT&& value) {
      m_methodResponsesHasBeenSet = true; m_methodResponses.emplace(std::forward<MethodResponsesKeyT>(key), std::forward<MethodResponsesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Gets the method's integration responsible for passing the client-submitted
     * request to the back end and performing necessary transformations to make the
     * request compliant with the back end.</p>
     */
    inline const Integration& GetMethodIntegration() const { return m_methodIntegration; }
    inline bool MethodIntegrationHasBeenSet() const { return m_methodIntegrationHasBeenSet; }
    template<typename MethodIntegrationT = Integration>
    void SetMethodIntegration(MethodIntegrationT&& value) { m_methodIntegrationHasBeenSet = true; m_methodIntegration = std::forward<MethodIntegrationT>(value); }
    template<typename MethodIntegrationT = Integration>
    Method& WithMethodIntegration(MethodIntegrationT&& value) { SetMethodIntegration(std::forward<MethodIntegrationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of authorization scopes configured on the method. The scopes are used
     * with a <code>COGNITO_USER_POOLS</code> authorizer to authorize the method
     * invocation. The authorization works by matching the method scopes against the
     * scopes parsed from the access token in the incoming request. The method
     * invocation is authorized if any method scopes matches a claimed scope in the
     * access token. Otherwise, the invocation is not authorized. When the method scope
     * is configured, the client must provide an access token instead of an identity
     * token for authorization purposes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorizationScopes() const { return m_authorizationScopes; }
    inline bool AuthorizationScopesHasBeenSet() const { return m_authorizationScopesHasBeenSet; }
    template<typename AuthorizationScopesT = Aws::Vector<Aws::String>>
    void SetAuthorizationScopes(AuthorizationScopesT&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes = std::forward<AuthorizationScopesT>(value); }
    template<typename AuthorizationScopesT = Aws::Vector<Aws::String>>
    Method& WithAuthorizationScopes(AuthorizationScopesT&& value) { SetAuthorizationScopes(std::forward<AuthorizationScopesT>(value)); return *this;}
    template<typename AuthorizationScopesT = Aws::String>
    Method& AddAuthorizationScopes(AuthorizationScopesT&& value) { m_authorizationScopesHasBeenSet = true; m_authorizationScopes.emplace_back(std::forward<AuthorizationScopesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    Method& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_httpMethod;
    bool m_httpMethodHasBeenSet = false;

    Aws::String m_authorizationType;
    bool m_authorizationTypeHasBeenSet = false;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet = false;

    bool m_apiKeyRequired{false};
    bool m_apiKeyRequiredHasBeenSet = false;

    Aws::String m_requestValidatorId;
    bool m_requestValidatorIdHasBeenSet = false;

    Aws::String m_operationName;
    bool m_operationNameHasBeenSet = false;

    Aws::Map<Aws::String, bool> m_requestParameters;
    bool m_requestParametersHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestModels;
    bool m_requestModelsHasBeenSet = false;

    Aws::Map<Aws::String, MethodResponse> m_methodResponses;
    bool m_methodResponsesHasBeenSet = false;

    Integration m_methodIntegration;
    bool m_methodIntegrationHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorizationScopes;
    bool m_authorizationScopesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
