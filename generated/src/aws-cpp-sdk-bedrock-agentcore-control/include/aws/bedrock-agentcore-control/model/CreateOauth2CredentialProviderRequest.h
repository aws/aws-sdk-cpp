/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControlRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock-agentcore-control/model/CredentialProviderVendorType.h>
#include <aws/bedrock-agentcore-control/model/Oauth2ProviderConfigInput.h>
#include <utility>

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   */
  class CreateOauth2CredentialProviderRequest : public BedrockAgentCoreControlRequest
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API CreateOauth2CredentialProviderRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateOauth2CredentialProvider"; }

    AWS_BEDROCKAGENTCORECONTROL_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the OAuth2 credential provider. The name must be unique within
     * your account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateOauth2CredentialProviderRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The vendor of the OAuth2 credential provider. This specifies which OAuth2
     * implementation to use.</p>
     */
    inline CredentialProviderVendorType GetCredentialProviderVendor() const { return m_credentialProviderVendor; }
    inline bool CredentialProviderVendorHasBeenSet() const { return m_credentialProviderVendorHasBeenSet; }
    inline void SetCredentialProviderVendor(CredentialProviderVendorType value) { m_credentialProviderVendorHasBeenSet = true; m_credentialProviderVendor = value; }
    inline CreateOauth2CredentialProviderRequest& WithCredentialProviderVendor(CredentialProviderVendorType value) { SetCredentialProviderVendor(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration settings for the OAuth2 provider, including client ID,
     * client secret, and other vendor-specific settings.</p>
     */
    inline const Oauth2ProviderConfigInput& GetOauth2ProviderConfigInput() const { return m_oauth2ProviderConfigInput; }
    inline bool Oauth2ProviderConfigInputHasBeenSet() const { return m_oauth2ProviderConfigInputHasBeenSet; }
    template<typename Oauth2ProviderConfigInputT = Oauth2ProviderConfigInput>
    void SetOauth2ProviderConfigInput(Oauth2ProviderConfigInputT&& value) { m_oauth2ProviderConfigInputHasBeenSet = true; m_oauth2ProviderConfigInput = std::forward<Oauth2ProviderConfigInputT>(value); }
    template<typename Oauth2ProviderConfigInputT = Oauth2ProviderConfigInput>
    CreateOauth2CredentialProviderRequest& WithOauth2ProviderConfigInput(Oauth2ProviderConfigInputT&& value) { SetOauth2ProviderConfigInput(std::forward<Oauth2ProviderConfigInputT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    CredentialProviderVendorType m_credentialProviderVendor{CredentialProviderVendorType::NOT_SET};
    bool m_credentialProviderVendorHasBeenSet = false;

    Oauth2ProviderConfigInput m_oauth2ProviderConfigInput;
    bool m_oauth2ProviderConfigInputHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
