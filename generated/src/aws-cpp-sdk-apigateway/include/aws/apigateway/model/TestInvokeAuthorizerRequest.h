/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apigateway/APIGateway_EXPORTS.h>
#include <aws/apigateway/APIGatewayRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace APIGateway
{
namespace Model
{

  /**
   * <p>Make a request to simulate the invocation of an Authorizer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apigateway-2015-07-09/TestInvokeAuthorizerRequest">AWS
   * API Reference</a></p>
   */
  class TestInvokeAuthorizerRequest : public APIGatewayRequest
  {
  public:
    AWS_APIGATEWAY_API TestInvokeAuthorizerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeAuthorizer"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const { return m_restApiId; }
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }
    template<typename RestApiIdT = Aws::String>
    void SetRestApiId(RestApiIdT&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::forward<RestApiIdT>(value); }
    template<typename RestApiIdT = Aws::String>
    TestInvokeAuthorizerRequest& WithRestApiId(RestApiIdT&& value) { SetRestApiId(std::forward<RestApiIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline const Aws::String& GetAuthorizerId() const { return m_authorizerId; }
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }
    template<typename AuthorizerIdT = Aws::String>
    void SetAuthorizerId(AuthorizerIdT&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::forward<AuthorizerIdT>(value); }
    template<typename AuthorizerIdT = Aws::String>
    TestInvokeAuthorizerRequest& WithAuthorizerId(AuthorizerIdT&& value) { SetAuthorizerId(std::forward<AuthorizerIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMultiValueHeaders() const { return m_multiValueHeaders; }
    inline bool MultiValueHeadersHasBeenSet() const { return m_multiValueHeadersHasBeenSet; }
    template<typename MultiValueHeadersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    void SetMultiValueHeaders(MultiValueHeadersT&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = std::forward<MultiValueHeadersT>(value); }
    template<typename MultiValueHeadersT = Aws::Map<Aws::String, Aws::Vector<Aws::String>>>
    TestInvokeAuthorizerRequest& WithMultiValueHeaders(MultiValueHeadersT&& value) { SetMultiValueHeaders(std::forward<MultiValueHeadersT>(value)); return *this;}
    template<typename MultiValueHeadersKeyT = Aws::String, typename MultiValueHeadersValueT = Aws::Vector<Aws::String>>
    TestInvokeAuthorizerRequest& AddMultiValueHeaders(MultiValueHeadersKeyT&& key, MultiValueHeadersValueT&& value) {
      m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::forward<MultiValueHeadersKeyT>(key), std::forward<MultiValueHeadersValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline const Aws::String& GetPathWithQueryString() const { return m_pathWithQueryString; }
    inline bool PathWithQueryStringHasBeenSet() const { return m_pathWithQueryStringHasBeenSet; }
    template<typename PathWithQueryStringT = Aws::String>
    void SetPathWithQueryString(PathWithQueryStringT&& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = std::forward<PathWithQueryStringT>(value); }
    template<typename PathWithQueryStringT = Aws::String>
    TestInvokeAuthorizerRequest& WithPathWithQueryString(PathWithQueryStringT&& value) { SetPathWithQueryString(std::forward<PathWithQueryStringT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const { return m_stageVariables; }
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetStageVariables(StageVariablesT&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::forward<StageVariablesT>(value); }
    template<typename StageVariablesT = Aws::Map<Aws::String, Aws::String>>
    TestInvokeAuthorizerRequest& WithStageVariables(StageVariablesT&& value) { SetStageVariables(std::forward<StageVariablesT>(value)); return *this;}
    template<typename StageVariablesKeyT = Aws::String, typename StageVariablesValueT = Aws::String>
    TestInvokeAuthorizerRequest& AddStageVariables(StageVariablesKeyT&& key, StageVariablesValueT&& value) {
      m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::forward<StageVariablesKeyT>(key), std::forward<StageVariablesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalContext() const { return m_additionalContext; }
    inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }
    template<typename AdditionalContextT = Aws::Map<Aws::String, Aws::String>>
    void SetAdditionalContext(AdditionalContextT&& value) { m_additionalContextHasBeenSet = true; m_additionalContext = std::forward<AdditionalContextT>(value); }
    template<typename AdditionalContextT = Aws::Map<Aws::String, Aws::String>>
    TestInvokeAuthorizerRequest& WithAdditionalContext(AdditionalContextT&& value) { SetAdditionalContext(std::forward<AdditionalContextT>(value)); return *this;}
    template<typename AdditionalContextKeyT = Aws::String, typename AdditionalContextValueT = Aws::String>
    TestInvokeAuthorizerRequest& AddAdditionalContext(AdditionalContextKeyT&& key, AdditionalContextValueT&& value) {
      m_additionalContextHasBeenSet = true; m_additionalContext.emplace(std::forward<AdditionalContextKeyT>(key), std::forward<AdditionalContextValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline const Aws::String& GetRequestBody() const { return m_requestBody; }
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }
    template<typename RequestBodyT = Aws::String>
    void SetRequestBody(RequestBodyT&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::forward<RequestBodyT>(value); }
    template<typename RequestBodyT = Aws::String>
    TestInvokeAuthorizerRequest& WithRequestBody(RequestBodyT&& value) { SetRequestBody(std::forward<RequestBodyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const { return m_requestHeaders; }
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    void SetRequestHeaders(RequestHeadersT&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::forward<RequestHeadersT>(value); }
    template<typename RequestHeadersT = Aws::Map<Aws::String, Aws::String>>
    TestInvokeAuthorizerRequest& WithRequestHeaders(RequestHeadersT&& value) { SetRequestHeaders(std::forward<RequestHeadersT>(value)); return *this;}
    template<typename RequestHeadersKeyT = Aws::String, typename RequestHeadersValueT = Aws::String>
    TestInvokeAuthorizerRequest& AddRequestHeaders(RequestHeadersKeyT&& key, RequestHeadersValueT&& value) {
      m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::forward<RequestHeadersKeyT>(key), std::forward<RequestHeadersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_restApiId;
    bool m_restApiIdHasBeenSet = false;

    Aws::String m_authorizerId;
    bool m_authorizerIdHasBeenSet = false;

    Aws::Map<Aws::String, Aws::Vector<Aws::String>> m_multiValueHeaders;
    bool m_multiValueHeadersHasBeenSet = false;

    Aws::String m_pathWithQueryString;
    bool m_pathWithQueryStringHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_stageVariables;
    bool m_stageVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_additionalContext;
    bool m_additionalContextHasBeenSet = false;

    Aws::String m_requestBody;
    bool m_requestBodyHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_requestHeaders;
    bool m_requestHeadersHasBeenSet = false;
  };

} // namespace Model
} // namespace APIGateway
} // namespace Aws
