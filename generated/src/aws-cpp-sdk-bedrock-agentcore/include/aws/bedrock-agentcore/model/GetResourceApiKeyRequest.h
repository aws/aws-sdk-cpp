/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class GetResourceApiKeyRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetResourceApiKeyRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceApiKey"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identity token of the workload you want to get the API Key of.</p>
     */
    inline const Aws::String& GetWorkloadIdentityToken() const { return m_workloadIdentityToken; }
    inline bool WorkloadIdentityTokenHasBeenSet() const { return m_workloadIdentityTokenHasBeenSet; }
    template<typename WorkloadIdentityTokenT = Aws::String>
    void SetWorkloadIdentityToken(WorkloadIdentityTokenT&& value) { m_workloadIdentityTokenHasBeenSet = true; m_workloadIdentityToken = std::forward<WorkloadIdentityTokenT>(value); }
    template<typename WorkloadIdentityTokenT = Aws::String>
    GetResourceApiKeyRequest& WithWorkloadIdentityToken(WorkloadIdentityTokenT&& value) { SetWorkloadIdentityToken(std::forward<WorkloadIdentityTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The credential provider name of the resource you are retrieving the API Key
     * of.</p>
     */
    inline const Aws::String& GetResourceCredentialProviderName() const { return m_resourceCredentialProviderName; }
    inline bool ResourceCredentialProviderNameHasBeenSet() const { return m_resourceCredentialProviderNameHasBeenSet; }
    template<typename ResourceCredentialProviderNameT = Aws::String>
    void SetResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) { m_resourceCredentialProviderNameHasBeenSet = true; m_resourceCredentialProviderName = std::forward<ResourceCredentialProviderNameT>(value); }
    template<typename ResourceCredentialProviderNameT = Aws::String>
    GetResourceApiKeyRequest& WithResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) { SetResourceCredentialProviderName(std::forward<ResourceCredentialProviderNameT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadIdentityToken;
    bool m_workloadIdentityTokenHasBeenSet = false;

    Aws::String m_resourceCredentialProviderName;
    bool m_resourceCredentialProviderNameHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
