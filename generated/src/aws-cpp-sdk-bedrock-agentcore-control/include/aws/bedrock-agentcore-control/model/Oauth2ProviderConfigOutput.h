/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/CustomOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/GoogleOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/GithubOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/SlackOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/SalesforceOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/MicrosoftOauth2ProviderConfigOutput.h>
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
   * <p>Contains the output configuration for an OAuth2 provider.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2ProviderConfigOutput">AWS
   * API Reference</a></p>
   */
  class Oauth2ProviderConfigOutput
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigOutput() = default;
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Oauth2ProviderConfigOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The output configuration for a custom OAuth2 provider.</p>
     */
    inline const CustomOauth2ProviderConfigOutput& GetCustomOauth2ProviderConfig() const { return m_customOauth2ProviderConfig; }
    inline bool CustomOauth2ProviderConfigHasBeenSet() const { return m_customOauth2ProviderConfigHasBeenSet; }
    template<typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigOutput>
    void SetCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) { m_customOauth2ProviderConfigHasBeenSet = true; m_customOauth2ProviderConfig = std::forward<CustomOauth2ProviderConfigT>(value); }
    template<typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) { SetCustomOauth2ProviderConfig(std::forward<CustomOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for a Google OAuth2 provider.</p>
     */
    inline const GoogleOauth2ProviderConfigOutput& GetGoogleOauth2ProviderConfig() const { return m_googleOauth2ProviderConfig; }
    inline bool GoogleOauth2ProviderConfigHasBeenSet() const { return m_googleOauth2ProviderConfigHasBeenSet; }
    template<typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigOutput>
    void SetGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) { m_googleOauth2ProviderConfigHasBeenSet = true; m_googleOauth2ProviderConfig = std::forward<GoogleOauth2ProviderConfigT>(value); }
    template<typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) { SetGoogleOauth2ProviderConfig(std::forward<GoogleOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for a GitHub OAuth2 provider.</p>
     */
    inline const GithubOauth2ProviderConfigOutput& GetGithubOauth2ProviderConfig() const { return m_githubOauth2ProviderConfig; }
    inline bool GithubOauth2ProviderConfigHasBeenSet() const { return m_githubOauth2ProviderConfigHasBeenSet; }
    template<typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigOutput>
    void SetGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) { m_githubOauth2ProviderConfigHasBeenSet = true; m_githubOauth2ProviderConfig = std::forward<GithubOauth2ProviderConfigT>(value); }
    template<typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) { SetGithubOauth2ProviderConfig(std::forward<GithubOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for a Slack OAuth2 provider.</p>
     */
    inline const SlackOauth2ProviderConfigOutput& GetSlackOauth2ProviderConfig() const { return m_slackOauth2ProviderConfig; }
    inline bool SlackOauth2ProviderConfigHasBeenSet() const { return m_slackOauth2ProviderConfigHasBeenSet; }
    template<typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigOutput>
    void SetSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) { m_slackOauth2ProviderConfigHasBeenSet = true; m_slackOauth2ProviderConfig = std::forward<SlackOauth2ProviderConfigT>(value); }
    template<typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) { SetSlackOauth2ProviderConfig(std::forward<SlackOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for a Salesforce OAuth2 provider.</p>
     */
    inline const SalesforceOauth2ProviderConfigOutput& GetSalesforceOauth2ProviderConfig() const { return m_salesforceOauth2ProviderConfig; }
    inline bool SalesforceOauth2ProviderConfigHasBeenSet() const { return m_salesforceOauth2ProviderConfigHasBeenSet; }
    template<typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigOutput>
    void SetSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) { m_salesforceOauth2ProviderConfigHasBeenSet = true; m_salesforceOauth2ProviderConfig = std::forward<SalesforceOauth2ProviderConfigT>(value); }
    template<typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) { SetSalesforceOauth2ProviderConfig(std::forward<SalesforceOauth2ProviderConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The output configuration for a Microsoft OAuth2 provider.</p>
     */
    inline const MicrosoftOauth2ProviderConfigOutput& GetMicrosoftOauth2ProviderConfig() const { return m_microsoftOauth2ProviderConfig; }
    inline bool MicrosoftOauth2ProviderConfigHasBeenSet() const { return m_microsoftOauth2ProviderConfigHasBeenSet; }
    template<typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigOutput>
    void SetMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) { m_microsoftOauth2ProviderConfigHasBeenSet = true; m_microsoftOauth2ProviderConfig = std::forward<MicrosoftOauth2ProviderConfigT>(value); }
    template<typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigOutput>
    Oauth2ProviderConfigOutput& WithMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) { SetMicrosoftOauth2ProviderConfig(std::forward<MicrosoftOauth2ProviderConfigT>(value)); return *this;}
    ///@}
  private:

    CustomOauth2ProviderConfigOutput m_customOauth2ProviderConfig;
    bool m_customOauth2ProviderConfigHasBeenSet = false;

    GoogleOauth2ProviderConfigOutput m_googleOauth2ProviderConfig;
    bool m_googleOauth2ProviderConfigHasBeenSet = false;

    GithubOauth2ProviderConfigOutput m_githubOauth2ProviderConfig;
    bool m_githubOauth2ProviderConfigHasBeenSet = false;

    SlackOauth2ProviderConfigOutput m_slackOauth2ProviderConfig;
    bool m_slackOauth2ProviderConfigHasBeenSet = false;

    SalesforceOauth2ProviderConfigOutput m_salesforceOauth2ProviderConfig;
    bool m_salesforceOauth2ProviderConfigHasBeenSet = false;

    MicrosoftOauth2ProviderConfigOutput m_microsoftOauth2ProviderConfig;
    bool m_microsoftOauth2ProviderConfigHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
