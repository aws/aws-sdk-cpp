/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/BedrockAgentCoreRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock-agentcore/model/Oauth2FlowType.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

  /**
   */
  class GetResourceOauth2TokenRequest : public BedrockAgentCoreRequest
  {
  public:
    AWS_BEDROCKAGENTCORE_API GetResourceOauth2TokenRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetResourceOauth2Token"; }

    AWS_BEDROCKAGENTCORE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identity token of the workload you want to retrive the Oauth2 Token
     * of.</p>
     */
    inline const Aws::String& GetWorkloadIdentityToken() const { return m_workloadIdentityToken; }
    inline bool WorkloadIdentityTokenHasBeenSet() const { return m_workloadIdentityTokenHasBeenSet; }
    template<typename WorkloadIdentityTokenT = Aws::String>
    void SetWorkloadIdentityToken(WorkloadIdentityTokenT&& value) { m_workloadIdentityTokenHasBeenSet = true; m_workloadIdentityToken = std::forward<WorkloadIdentityTokenT>(value); }
    template<typename WorkloadIdentityTokenT = Aws::String>
    GetResourceOauth2TokenRequest& WithWorkloadIdentityToken(WorkloadIdentityTokenT&& value) { SetWorkloadIdentityToken(std::forward<WorkloadIdentityTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Reference to the credential provider</p>
     */
    inline const Aws::String& GetResourceCredentialProviderName() const { return m_resourceCredentialProviderName; }
    inline bool ResourceCredentialProviderNameHasBeenSet() const { return m_resourceCredentialProviderNameHasBeenSet; }
    template<typename ResourceCredentialProviderNameT = Aws::String>
    void SetResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) { m_resourceCredentialProviderNameHasBeenSet = true; m_resourceCredentialProviderName = std::forward<ResourceCredentialProviderNameT>(value); }
    template<typename ResourceCredentialProviderNameT = Aws::String>
    GetResourceOauth2TokenRequest& WithResourceCredentialProviderName(ResourceCredentialProviderNameT&& value) { SetResourceCredentialProviderName(std::forward<ResourceCredentialProviderNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The OAuth scopes requested</p>
     */
    inline const Aws::Vector<Aws::String>& GetScopes() const { return m_scopes; }
    inline bool ScopesHasBeenSet() const { return m_scopesHasBeenSet; }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    void SetScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes = std::forward<ScopesT>(value); }
    template<typename ScopesT = Aws::Vector<Aws::String>>
    GetResourceOauth2TokenRequest& WithScopes(ScopesT&& value) { SetScopes(std::forward<ScopesT>(value)); return *this;}
    template<typename ScopesT = Aws::String>
    GetResourceOauth2TokenRequest& AddScopes(ScopesT&& value) { m_scopesHasBeenSet = true; m_scopes.emplace_back(std::forward<ScopesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The type of flow to be performed</p>
     */
    inline Oauth2FlowType GetOauth2Flow() const { return m_oauth2Flow; }
    inline bool Oauth2FlowHasBeenSet() const { return m_oauth2FlowHasBeenSet; }
    inline void SetOauth2Flow(Oauth2FlowType value) { m_oauth2FlowHasBeenSet = true; m_oauth2Flow = value; }
    inline GetResourceOauth2TokenRequest& WithOauth2Flow(Oauth2FlowType value) { SetOauth2Flow(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Callback url to redirect after token retrieval completes. Should be one of
     * the provideded urls during WorkloadIdentity creation</p>
     */
    inline const Aws::String& GetResourceOauth2ReturnUrl() const { return m_resourceOauth2ReturnUrl; }
    inline bool ResourceOauth2ReturnUrlHasBeenSet() const { return m_resourceOauth2ReturnUrlHasBeenSet; }
    template<typename ResourceOauth2ReturnUrlT = Aws::String>
    void SetResourceOauth2ReturnUrl(ResourceOauth2ReturnUrlT&& value) { m_resourceOauth2ReturnUrlHasBeenSet = true; m_resourceOauth2ReturnUrl = std::forward<ResourceOauth2ReturnUrlT>(value); }
    template<typename ResourceOauth2ReturnUrlT = Aws::String>
    GetResourceOauth2TokenRequest& WithResourceOauth2ReturnUrl(ResourceOauth2ReturnUrlT&& value) { SetResourceOauth2ReturnUrl(std::forward<ResourceOauth2ReturnUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If true, always initiate a new 3LO flow</p>
     */
    inline bool GetForceAuthentication() const { return m_forceAuthentication; }
    inline bool ForceAuthenticationHasBeenSet() const { return m_forceAuthenticationHasBeenSet; }
    inline void SetForceAuthentication(bool value) { m_forceAuthenticationHasBeenSet = true; m_forceAuthentication = value; }
    inline GetResourceOauth2TokenRequest& WithForceAuthentication(bool value) { SetForceAuthentication(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Gives the ability to send extra/custom parameters to the resource credentials
     * provider during the authorization process. Standard OAuth2 flow parameters will
     * not be overriden.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetCustomParameters() const { return m_customParameters; }
    inline bool CustomParametersHasBeenSet() const { return m_customParametersHasBeenSet; }
    template<typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
    void SetCustomParameters(CustomParametersT&& value) { m_customParametersHasBeenSet = true; m_customParameters = std::forward<CustomParametersT>(value); }
    template<typename CustomParametersT = Aws::Map<Aws::String, Aws::String>>
    GetResourceOauth2TokenRequest& WithCustomParameters(CustomParametersT&& value) { SetCustomParameters(std::forward<CustomParametersT>(value)); return *this;}
    template<typename CustomParametersKeyT = Aws::String, typename CustomParametersValueT = Aws::String>
    GetResourceOauth2TokenRequest& AddCustomParameters(CustomParametersKeyT&& key, CustomParametersValueT&& value) {
      m_customParametersHasBeenSet = true; m_customParameters.emplace(std::forward<CustomParametersKeyT>(key), std::forward<CustomParametersValueT>(value)); return *this;
    }
    ///@}
  private:

    Aws::String m_workloadIdentityToken;
    bool m_workloadIdentityTokenHasBeenSet = false;

    Aws::String m_resourceCredentialProviderName;
    bool m_resourceCredentialProviderNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_scopes;
    bool m_scopesHasBeenSet = false;

    Oauth2FlowType m_oauth2Flow{Oauth2FlowType::NOT_SET};
    bool m_oauth2FlowHasBeenSet = false;

    Aws::String m_resourceOauth2ReturnUrl;
    bool m_resourceOauth2ReturnUrlHasBeenSet = false;

    bool m_forceAuthentication{false};
    bool m_forceAuthenticationHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_customParameters;
    bool m_customParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
