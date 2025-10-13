/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore/model/SessionStatus.h>
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
namespace BedrockAgentCore
{
namespace Model
{
  class GetResourceOauth2TokenResult
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetResourceOauth2TokenResult() = default;
    AWS_BEDROCKAGENTCORE_API GetResourceOauth2TokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORE_API GetResourceOauth2TokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The URL to initiate the authorization process, provided when the access token
     * requires user authorization.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
    template<typename AuthorizationUrlT = Aws::String>
    void SetAuthorizationUrl(AuthorizationUrlT&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::forward<AuthorizationUrlT>(value); }
    template<typename AuthorizationUrlT = Aws::String>
    GetResourceOauth2TokenResult& WithAuthorizationUrl(AuthorizationUrlT&& value) { SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth 2.0 access token to use.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    GetResourceOauth2TokenResult& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Unique identifier for the user's authorization session for retrieving OAuth2
     * tokens. This matches the sessionId from the request and can be used to track the
     * session state.</p>
     */
    inline const Aws::String& GetSessionUri() const { return m_sessionUri; }
    template<typename SessionUriT = Aws::String>
    void SetSessionUri(SessionUriT&& value) { m_sessionUriHasBeenSet = true; m_sessionUri = std::forward<SessionUriT>(value); }
    template<typename SessionUriT = Aws::String>
    GetResourceOauth2TokenResult& WithSessionUri(SessionUriT&& value) { SetSessionUri(std::forward<SessionUriT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status indicating whether the user's authorization session is in progress or
     * has failed. This helps determine the next steps in the OAuth2 authentication
     * flow.</p>
     */
    inline SessionStatus GetSessionStatus() const { return m_sessionStatus; }
    inline void SetSessionStatus(SessionStatus value) { m_sessionStatusHasBeenSet = true; m_sessionStatus = value; }
    inline GetResourceOauth2TokenResult& WithSessionStatus(SessionStatus value) { SetSessionStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetResourceOauth2TokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_authorizationUrl;
    bool m_authorizationUrlHasBeenSet = false;

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_sessionUri;
    bool m_sessionUriHasBeenSet = false;

    SessionStatus m_sessionStatus{SessionStatus::NOT_SET};
    bool m_sessionStatusHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
