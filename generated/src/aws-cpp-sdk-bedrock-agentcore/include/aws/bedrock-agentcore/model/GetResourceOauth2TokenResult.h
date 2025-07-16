/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
     * <p>The URL for the authorization process, provided if the Access token requires
     * user Authorization.</p>
     */
    inline const Aws::String& GetAuthorizationUrl() const { return m_authorizationUrl; }
    template<typename AuthorizationUrlT = Aws::String>
    void SetAuthorizationUrl(AuthorizationUrlT&& value) { m_authorizationUrlHasBeenSet = true; m_authorizationUrl = std::forward<AuthorizationUrlT>(value); }
    template<typename AuthorizationUrlT = Aws::String>
    GetResourceOauth2TokenResult& WithAuthorizationUrl(AuthorizationUrlT&& value) { SetAuthorizationUrl(std::forward<AuthorizationUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>OAuth2 token ready for use</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    GetResourceOauth2TokenResult& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
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

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
