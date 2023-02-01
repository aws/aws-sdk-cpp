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
    AWS_APIGATEWAY_API TestInvokeAuthorizerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "TestInvokeAuthorizer"; }

    AWS_APIGATEWAY_API Aws::String SerializePayload() const override;


    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline const Aws::String& GetRestApiId() const{ return m_restApiId; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline bool RestApiIdHasBeenSet() const { return m_restApiIdHasBeenSet; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const Aws::String& value) { m_restApiIdHasBeenSet = true; m_restApiId = value; }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(Aws::String&& value) { m_restApiIdHasBeenSet = true; m_restApiId = std::move(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline void SetRestApiId(const char* value) { m_restApiIdHasBeenSet = true; m_restApiId.assign(value); }

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRestApiId(const Aws::String& value) { SetRestApiId(value); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRestApiId(Aws::String&& value) { SetRestApiId(std::move(value)); return *this;}

    /**
     * <p>The string identifier of the associated RestApi.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRestApiId(const char* value) { SetRestApiId(value); return *this;}


    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline const Aws::String& GetAuthorizerId() const{ return m_authorizerId; }

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline bool AuthorizerIdHasBeenSet() const { return m_authorizerIdHasBeenSet; }

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline void SetAuthorizerId(const Aws::String& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = value; }

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline void SetAuthorizerId(Aws::String&& value) { m_authorizerIdHasBeenSet = true; m_authorizerId = std::move(value); }

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline void SetAuthorizerId(const char* value) { m_authorizerIdHasBeenSet = true; m_authorizerId.assign(value); }

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(const Aws::String& value) { SetAuthorizerId(value); return *this;}

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(Aws::String&& value) { SetAuthorizerId(std::move(value)); return *this;}

    /**
     * <p>Specifies a test invoke authorizer request's Authorizer ID.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAuthorizerId(const char* value) { SetAuthorizerId(value); return *this;}


    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& GetMultiValueHeaders() const{ return m_multiValueHeaders; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline bool MultiValueHeadersHasBeenSet() const { return m_multiValueHeadersHasBeenSet; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline void SetMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = value; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline void SetMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders = std::move(value); }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& WithMultiValueHeaders(const Aws::Map<Aws::String, Aws::Vector<Aws::String>>& value) { SetMultiValueHeaders(value); return *this;}

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& WithMultiValueHeaders(Aws::Map<Aws::String, Aws::Vector<Aws::String>>&& value) { SetMultiValueHeaders(std::move(value)); return *this;}

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(const Aws::String& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, value); return *this; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(Aws::String&& key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(const Aws::String& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(Aws::String&& key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(const char* key, Aws::Vector<Aws::String>&& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>The headers as a map from string to list of values to simulate an incoming
     * invocation request. This is where the incoming authorization token, or identity
     * source, may be specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddMultiValueHeaders(const char* key, const Aws::Vector<Aws::String>& value) { m_multiValueHeadersHasBeenSet = true; m_multiValueHeaders.emplace(key, value); return *this; }


    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline const Aws::String& GetPathWithQueryString() const{ return m_pathWithQueryString; }

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline bool PathWithQueryStringHasBeenSet() const { return m_pathWithQueryStringHasBeenSet; }

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline void SetPathWithQueryString(const Aws::String& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = value; }

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline void SetPathWithQueryString(Aws::String&& value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString = std::move(value); }

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline void SetPathWithQueryString(const char* value) { m_pathWithQueryStringHasBeenSet = true; m_pathWithQueryString.assign(value); }

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(const Aws::String& value) { SetPathWithQueryString(value); return *this;}

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(Aws::String&& value) { SetPathWithQueryString(std::move(value)); return *this;}

    /**
     * <p>The URI path, including query string, of the simulated invocation request.
     * Use this to specify path parameters and query string parameters.</p>
     */
    inline TestInvokeAuthorizerRequest& WithPathWithQueryString(const char* value) { SetPathWithQueryString(value); return *this;}


    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetStageVariables() const{ return m_stageVariables; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline bool StageVariablesHasBeenSet() const { return m_stageVariablesHasBeenSet; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline void SetStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = value; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline void SetStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables = std::move(value); }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& WithStageVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetStageVariables(value); return *this;}

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& WithStageVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetStageVariables(std::move(value)); return *this;}

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(const Aws::String& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, const Aws::String& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(const Aws::String& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(const char* key, Aws::String&& value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(Aws::String&& key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of stage variables to simulate an invocation on a deployed
     * Stage.</p>
     */
    inline TestInvokeAuthorizerRequest& AddStageVariables(const char* key, const char* value) { m_stageVariablesHasBeenSet = true; m_stageVariables.emplace(key, value); return *this; }


    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAdditionalContext() const{ return m_additionalContext; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline bool AdditionalContextHasBeenSet() const { return m_additionalContextHasBeenSet; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline void SetAdditionalContext(const Aws::Map<Aws::String, Aws::String>& value) { m_additionalContextHasBeenSet = true; m_additionalContext = value; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline void SetAdditionalContext(Aws::Map<Aws::String, Aws::String>&& value) { m_additionalContextHasBeenSet = true; m_additionalContext = std::move(value); }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAdditionalContext(const Aws::Map<Aws::String, Aws::String>& value) { SetAdditionalContext(value); return *this;}

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& WithAdditionalContext(Aws::Map<Aws::String, Aws::String>&& value) { SetAdditionalContext(std::move(value)); return *this;}

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const Aws::String& key, const Aws::String& value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, const Aws::String& value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const Aws::String& key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const char* key, Aws::String&& value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(Aws::String&& key, const char* value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of additional context variables.</p>
     */
    inline TestInvokeAuthorizerRequest& AddAdditionalContext(const char* key, const char* value) { m_additionalContextHasBeenSet = true; m_additionalContext.emplace(key, value); return *this; }


    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline const Aws::String& GetRequestBody() const{ return m_requestBody; }

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline bool RequestBodyHasBeenSet() const { return m_requestBodyHasBeenSet; }

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline void SetRequestBody(const Aws::String& value) { m_requestBodyHasBeenSet = true; m_requestBody = value; }

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline void SetRequestBody(Aws::String&& value) { m_requestBodyHasBeenSet = true; m_requestBody = std::move(value); }

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline void SetRequestBody(const char* value) { m_requestBodyHasBeenSet = true; m_requestBody.assign(value); }

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRequestBody(const Aws::String& value) { SetRequestBody(value); return *this;}

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRequestBody(Aws::String&& value) { SetRequestBody(std::move(value)); return *this;}

    /**
     * <p>The simulated request body of an incoming invocation request.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRequestBody(const char* value) { SetRequestBody(value); return *this;}


    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRequestHeaders() const{ return m_requestHeaders; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline bool RequestHeadersHasBeenSet() const { return m_requestHeadersHasBeenSet; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline void SetRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = value; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline void SetRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders = std::move(value); }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRequestHeaders(const Aws::Map<Aws::String, Aws::String>& value) { SetRequestHeaders(value); return *this;}

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& WithRequestHeaders(Aws::Map<Aws::String, Aws::String>&& value) { SetRequestHeaders(std::move(value)); return *this;}

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(const Aws::String& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(Aws::String&& key, const Aws::String& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(const Aws::String& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(Aws::String&& key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(const char* key, Aws::String&& value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(Aws::String&& key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(std::move(key), value); return *this; }

    /**
     * <p>A key-value map of headers to simulate an incoming invocation request. This
     * is where the incoming authorization token, or identity source, should be
     * specified.</p>
     */
    inline TestInvokeAuthorizerRequest& AddRequestHeaders(const char* key, const char* value) { m_requestHeadersHasBeenSet = true; m_requestHeaders.emplace(key, value); return *this; }

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
