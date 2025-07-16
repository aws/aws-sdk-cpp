/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/Oauth2CredentialProviderItem.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{
  class ListOauth2CredentialProvidersResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListOauth2CredentialProvidersResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListOauth2CredentialProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListOauth2CredentialProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of OAuth2 credential providers.</p>
     */
    inline const Aws::Vector<Oauth2CredentialProviderItem>& GetCredentialProviders() const { return m_credentialProviders; }
    template<typename CredentialProvidersT = Aws::Vector<Oauth2CredentialProviderItem>>
    void SetCredentialProviders(CredentialProvidersT&& value) { m_credentialProvidersHasBeenSet = true; m_credentialProviders = std::forward<CredentialProvidersT>(value); }
    template<typename CredentialProvidersT = Aws::Vector<Oauth2CredentialProviderItem>>
    ListOauth2CredentialProvidersResult& WithCredentialProviders(CredentialProvidersT&& value) { SetCredentialProviders(std::forward<CredentialProvidersT>(value)); return *this;}
    template<typename CredentialProvidersT = Oauth2CredentialProviderItem>
    ListOauth2CredentialProvidersResult& AddCredentialProviders(CredentialProvidersT&& value) { m_credentialProvidersHasBeenSet = true; m_credentialProviders.emplace_back(std::forward<CredentialProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListOauth2CredentialProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListOauth2CredentialProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Oauth2CredentialProviderItem> m_credentialProviders;
    bool m_credentialProvidersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
