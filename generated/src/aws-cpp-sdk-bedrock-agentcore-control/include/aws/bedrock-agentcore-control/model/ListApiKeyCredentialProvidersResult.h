/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialProviderItem.h>
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
  class ListApiKeyCredentialProvidersResult
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API ListApiKeyCredentialProvidersResult() = default;
    AWS_BEDROCKAGENTCORECONTROL_API ListApiKeyCredentialProvidersResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCKAGENTCORECONTROL_API ListApiKeyCredentialProvidersResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of API key credential providers.</p>
     */
    inline const Aws::Vector<ApiKeyCredentialProviderItem>& GetCredentialProviders() const { return m_credentialProviders; }
    template<typename CredentialProvidersT = Aws::Vector<ApiKeyCredentialProviderItem>>
    void SetCredentialProviders(CredentialProvidersT&& value) { m_credentialProvidersHasBeenSet = true; m_credentialProviders = std::forward<CredentialProvidersT>(value); }
    template<typename CredentialProvidersT = Aws::Vector<ApiKeyCredentialProviderItem>>
    ListApiKeyCredentialProvidersResult& WithCredentialProviders(CredentialProvidersT&& value) { SetCredentialProviders(std::forward<CredentialProvidersT>(value)); return *this;}
    template<typename CredentialProvidersT = ApiKeyCredentialProviderItem>
    ListApiKeyCredentialProvidersResult& AddCredentialProviders(CredentialProvidersT&& value) { m_credentialProvidersHasBeenSet = true; m_credentialProviders.emplace_back(std::forward<CredentialProvidersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Pagination token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListApiKeyCredentialProvidersResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListApiKeyCredentialProvidersResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ApiKeyCredentialProviderItem> m_credentialProviders;
    bool m_credentialProvidersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
