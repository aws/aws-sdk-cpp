/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomOauth2ProviderConfigInput.h>
#include <aws/bedrock-agentcore-control/model/GoogleOauth2ProviderConfigInput.h>
#include <aws/bedrock-agentcore-control/model/GithubOauth2ProviderConfigInput.h>
#include <aws/bedrock-agentcore-control/model/SlackOauth2ProviderConfigInput.h>
#include <aws/bedrock-agentcore-control/model/SalesforceOauth2ProviderConfigInput.h>
#include <aws/bedrock-agentcore-control/model/MicrosoftOauth2ProviderConfigInput.h>
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
namespace BedrockAgentCoreControl
{
namespace Model
{

  /**
   * <p>Contains the input configuration for an OAuth2 provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2ProviderConfigInput">AWS
   * API Reference</a></p>
   */
  class Oauth2ProviderConfigInput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigInput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigInput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigInput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The configuration for a custom OAuth2 provider.</p>
     */
    inline const CustomOauth2ProviderConfigInput& GetCustomOauth2ProviderConfig() const { return m_customOauth2ProviderConfig; }
    inline bool CustomOauth2ProviderConfigHasBeenSet() const { return m_customOauth2ProviderConfigHasBeenSet; }
    template<typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigInput>
    void SetCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) { m_customOauth2ProviderConfigHasBeenSet = true; m_customOauth2ProviderConfig = std::forward<CustomOauth2ProviderConfigT>(value); }
    template<typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) { SetCustomOauth2ProviderConfig(std::forward<CustomOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Google OAuth2 provider.</p>
     */
    inline const GoogleOauth2ProviderConfigInput& GetGoogleOauth2ProviderConfig() const { return m_googleOauth2ProviderConfig; }
    inline bool GoogleOauth2ProviderConfigHasBeenSet() const { return m_googleOauth2ProviderConfigHasBeenSet; }
    template<typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigInput>
    void SetGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) { m_googleOauth2ProviderConfigHasBeenSet = true; m_googleOauth2ProviderConfig = std::forward<GoogleOauth2ProviderConfigT>(value); }
    template<typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) { SetGoogleOauth2ProviderConfig(std::forward<GoogleOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a GitHub OAuth2 provider.</p>
     */
    inline const GithubOauth2ProviderConfigInput& GetGithubOauth2ProviderConfig() const { return m_githubOauth2ProviderConfig; }
    inline bool GithubOauth2ProviderConfigHasBeenSet() const { return m_githubOauth2ProviderConfigHasBeenSet; }
    template<typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigInput>
    void SetGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) { m_githubOauth2ProviderConfigHasBeenSet = true; m_githubOauth2ProviderConfig = std::forward<GithubOauth2ProviderConfigT>(value); }
    template<typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) { SetGithubOauth2ProviderConfig(std::forward<GithubOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Slack OAuth2 provider.</p>
     */
    inline const SlackOauth2ProviderConfigInput& GetSlackOauth2ProviderConfig() const { return m_slackOauth2ProviderConfig; }
    inline bool SlackOauth2ProviderConfigHasBeenSet() const { return m_slackOauth2ProviderConfigHasBeenSet; }
    template<typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigInput>
    void SetSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) { m_slackOauth2ProviderConfigHasBeenSet = true; m_slackOauth2ProviderConfig = std::forward<SlackOauth2ProviderConfigT>(value); }
    template<typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) { SetSlackOauth2ProviderConfig(std::forward<SlackOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Salesforce OAuth2 provider.</p>
     */
    inline const SalesforceOauth2ProviderConfigInput& GetSalesforceOauth2ProviderConfig() const { return m_salesforceOauth2ProviderConfig; }
    inline bool SalesforceOauth2ProviderConfigHasBeenSet() const { return m_salesforceOauth2ProviderConfigHasBeenSet; }
    template<typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigInput>
    void SetSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) { m_salesforceOauth2ProviderConfigHasBeenSet = true; m_salesforceOauth2ProviderConfig = std::forward<SalesforceOauth2ProviderConfigT>(value); }
    template<typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) { SetSalesforceOauth2ProviderConfig(std::forward<SalesforceOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The configuration for a Microsoft OAuth2 provider.</p>
     */
    inline const MicrosoftOauth2ProviderConfigInput& GetMicrosoftOauth2ProviderConfig() const { return m_microsoftOauth2ProviderConfig; }
    inline bool MicrosoftOauth2ProviderConfigHasBeenSet() const { return m_microsoftOauth2ProviderConfigHasBeenSet; }
    template<typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigInput>
    void SetMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) { m_microsoftOauth2ProviderConfigHasBeenSet = true; m_microsoftOauth2ProviderConfig = std::forward<MicrosoftOauth2ProviderConfigT>(value); }
    template<typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigInput>
    Oauth2ProviderConfigInput& WithMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) { SetMicrosoftOauth2ProviderConfig(std::forward<MicrosoftOauth2ProviderConfigT>(value)); return *this;}
    ///@}
  private:

    CustomOauth2ProviderConfigInput m_customOauth2ProviderConfig;
    bool m_customOauth2ProviderConfigHasBeenSet = false;

    GoogleOauth2ProviderConfigInput m_googleOauth2ProviderConfig;
    bool m_googleOauth2ProviderConfigHasBeenSet = false;

    GithubOauth2ProviderConfigInput m_githubOauth2ProviderConfig;
    bool m_githubOauth2ProviderConfigHasBeenSet = false;

    SlackOauth2ProviderConfigInput m_slackOauth2ProviderConfig;
    bool m_slackOauth2ProviderConfigHasBeenSet = false;

    SalesforceOauth2ProviderConfigInput m_salesforceOauth2ProviderConfig;
    bool m_salesforceOauth2ProviderConfigHasBeenSet = false;

    MicrosoftOauth2ProviderConfigInput m_microsoftOauth2ProviderConfig;
    bool m_microsoftOauth2ProviderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
