/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/bedrock-agentcore-control/model/AtlassianOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/CustomOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/GithubOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/GoogleOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/IncludedOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/LinkedinOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/MicrosoftOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/SalesforceOauth2ProviderConfigOutput.h>
#include <aws/bedrock-agentcore-control/model/SlackOauth2ProviderConfigOutput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCoreControl {
namespace Model {

/**
 * <p>Contains the output configuration for an OAuth2 provider.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/Oauth2ProviderConfigOutput">AWS
 * API Reference</a></p>
 */
class Oauth2ProviderConfigOutput {
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
  template <typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigOutput>
  void SetCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) {
    m_customOauth2ProviderConfigHasBeenSet = true;
    m_customOauth2ProviderConfig = std::forward<CustomOauth2ProviderConfigT>(value);
  }
  template <typename CustomOauth2ProviderConfigT = CustomOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithCustomOauth2ProviderConfig(CustomOauth2ProviderConfigT&& value) {
    SetCustomOauth2ProviderConfig(std::forward<CustomOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for a Google OAuth2 provider.</p>
   */
  inline const GoogleOauth2ProviderConfigOutput& GetGoogleOauth2ProviderConfig() const { return m_googleOauth2ProviderConfig; }
  inline bool GoogleOauth2ProviderConfigHasBeenSet() const { return m_googleOauth2ProviderConfigHasBeenSet; }
  template <typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigOutput>
  void SetGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) {
    m_googleOauth2ProviderConfigHasBeenSet = true;
    m_googleOauth2ProviderConfig = std::forward<GoogleOauth2ProviderConfigT>(value);
  }
  template <typename GoogleOauth2ProviderConfigT = GoogleOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithGoogleOauth2ProviderConfig(GoogleOauth2ProviderConfigT&& value) {
    SetGoogleOauth2ProviderConfig(std::forward<GoogleOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for a GitHub OAuth2 provider.</p>
   */
  inline const GithubOauth2ProviderConfigOutput& GetGithubOauth2ProviderConfig() const { return m_githubOauth2ProviderConfig; }
  inline bool GithubOauth2ProviderConfigHasBeenSet() const { return m_githubOauth2ProviderConfigHasBeenSet; }
  template <typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigOutput>
  void SetGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) {
    m_githubOauth2ProviderConfigHasBeenSet = true;
    m_githubOauth2ProviderConfig = std::forward<GithubOauth2ProviderConfigT>(value);
  }
  template <typename GithubOauth2ProviderConfigT = GithubOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithGithubOauth2ProviderConfig(GithubOauth2ProviderConfigT&& value) {
    SetGithubOauth2ProviderConfig(std::forward<GithubOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for a Slack OAuth2 provider.</p>
   */
  inline const SlackOauth2ProviderConfigOutput& GetSlackOauth2ProviderConfig() const { return m_slackOauth2ProviderConfig; }
  inline bool SlackOauth2ProviderConfigHasBeenSet() const { return m_slackOauth2ProviderConfigHasBeenSet; }
  template <typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigOutput>
  void SetSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) {
    m_slackOauth2ProviderConfigHasBeenSet = true;
    m_slackOauth2ProviderConfig = std::forward<SlackOauth2ProviderConfigT>(value);
  }
  template <typename SlackOauth2ProviderConfigT = SlackOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithSlackOauth2ProviderConfig(SlackOauth2ProviderConfigT&& value) {
    SetSlackOauth2ProviderConfig(std::forward<SlackOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for a Salesforce OAuth2 provider.</p>
   */
  inline const SalesforceOauth2ProviderConfigOutput& GetSalesforceOauth2ProviderConfig() const { return m_salesforceOauth2ProviderConfig; }
  inline bool SalesforceOauth2ProviderConfigHasBeenSet() const { return m_salesforceOauth2ProviderConfigHasBeenSet; }
  template <typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigOutput>
  void SetSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) {
    m_salesforceOauth2ProviderConfigHasBeenSet = true;
    m_salesforceOauth2ProviderConfig = std::forward<SalesforceOauth2ProviderConfigT>(value);
  }
  template <typename SalesforceOauth2ProviderConfigT = SalesforceOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithSalesforceOauth2ProviderConfig(SalesforceOauth2ProviderConfigT&& value) {
    SetSalesforceOauth2ProviderConfig(std::forward<SalesforceOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The output configuration for a Microsoft OAuth2 provider.</p>
   */
  inline const MicrosoftOauth2ProviderConfigOutput& GetMicrosoftOauth2ProviderConfig() const { return m_microsoftOauth2ProviderConfig; }
  inline bool MicrosoftOauth2ProviderConfigHasBeenSet() const { return m_microsoftOauth2ProviderConfigHasBeenSet; }
  template <typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigOutput>
  void SetMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) {
    m_microsoftOauth2ProviderConfigHasBeenSet = true;
    m_microsoftOauth2ProviderConfig = std::forward<MicrosoftOauth2ProviderConfigT>(value);
  }
  template <typename MicrosoftOauth2ProviderConfigT = MicrosoftOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithMicrosoftOauth2ProviderConfig(MicrosoftOauth2ProviderConfigT&& value) {
    SetMicrosoftOauth2ProviderConfig(std::forward<MicrosoftOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the Atlassian OAuth2 provider.</p>
   */
  inline const AtlassianOauth2ProviderConfigOutput& GetAtlassianOauth2ProviderConfig() const { return m_atlassianOauth2ProviderConfig; }
  inline bool AtlassianOauth2ProviderConfigHasBeenSet() const { return m_atlassianOauth2ProviderConfigHasBeenSet; }
  template <typename AtlassianOauth2ProviderConfigT = AtlassianOauth2ProviderConfigOutput>
  void SetAtlassianOauth2ProviderConfig(AtlassianOauth2ProviderConfigT&& value) {
    m_atlassianOauth2ProviderConfigHasBeenSet = true;
    m_atlassianOauth2ProviderConfig = std::forward<AtlassianOauth2ProviderConfigT>(value);
  }
  template <typename AtlassianOauth2ProviderConfigT = AtlassianOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithAtlassianOauth2ProviderConfig(AtlassianOauth2ProviderConfigT&& value) {
    SetAtlassianOauth2ProviderConfig(std::forward<AtlassianOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration details for the LinkedIn OAuth2 provider.</p>
   */
  inline const LinkedinOauth2ProviderConfigOutput& GetLinkedinOauth2ProviderConfig() const { return m_linkedinOauth2ProviderConfig; }
  inline bool LinkedinOauth2ProviderConfigHasBeenSet() const { return m_linkedinOauth2ProviderConfigHasBeenSet; }
  template <typename LinkedinOauth2ProviderConfigT = LinkedinOauth2ProviderConfigOutput>
  void SetLinkedinOauth2ProviderConfig(LinkedinOauth2ProviderConfigT&& value) {
    m_linkedinOauth2ProviderConfigHasBeenSet = true;
    m_linkedinOauth2ProviderConfig = std::forward<LinkedinOauth2ProviderConfigT>(value);
  }
  template <typename LinkedinOauth2ProviderConfigT = LinkedinOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithLinkedinOauth2ProviderConfig(LinkedinOauth2ProviderConfigT&& value) {
    SetLinkedinOauth2ProviderConfig(std::forward<LinkedinOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for a non-custom OAuth2 provider. This includes the
   * configuration details for supported OAuth2 providers that have built-in
   * integration support.</p>
   */
  inline const IncludedOauth2ProviderConfigOutput& GetIncludedOauth2ProviderConfig() const { return m_includedOauth2ProviderConfig; }
  inline bool IncludedOauth2ProviderConfigHasBeenSet() const { return m_includedOauth2ProviderConfigHasBeenSet; }
  template <typename IncludedOauth2ProviderConfigT = IncludedOauth2ProviderConfigOutput>
  void SetIncludedOauth2ProviderConfig(IncludedOauth2ProviderConfigT&& value) {
    m_includedOauth2ProviderConfigHasBeenSet = true;
    m_includedOauth2ProviderConfig = std::forward<IncludedOauth2ProviderConfigT>(value);
  }
  template <typename IncludedOauth2ProviderConfigT = IncludedOauth2ProviderConfigOutput>
  Oauth2ProviderConfigOutput& WithIncludedOauth2ProviderConfig(IncludedOauth2ProviderConfigT&& value) {
    SetIncludedOauth2ProviderConfig(std::forward<IncludedOauth2ProviderConfigT>(value));
    return *this;
  }
  ///@}
 private:
  CustomOauth2ProviderConfigOutput m_customOauth2ProviderConfig;

  GoogleOauth2ProviderConfigOutput m_googleOauth2ProviderConfig;

  GithubOauth2ProviderConfigOutput m_githubOauth2ProviderConfig;

  SlackOauth2ProviderConfigOutput m_slackOauth2ProviderConfig;

  SalesforceOauth2ProviderConfigOutput m_salesforceOauth2ProviderConfig;

  MicrosoftOauth2ProviderConfigOutput m_microsoftOauth2ProviderConfig;

  AtlassianOauth2ProviderConfigOutput m_atlassianOauth2ProviderConfig;

  LinkedinOauth2ProviderConfigOutput m_linkedinOauth2ProviderConfig;

  IncludedOauth2ProviderConfigOutput m_includedOauth2ProviderConfig;
  bool m_customOauth2ProviderConfigHasBeenSet = false;
  bool m_googleOauth2ProviderConfigHasBeenSet = false;
  bool m_githubOauth2ProviderConfigHasBeenSet = false;
  bool m_slackOauth2ProviderConfigHasBeenSet = false;
  bool m_salesforceOauth2ProviderConfigHasBeenSet = false;
  bool m_microsoftOauth2ProviderConfigHasBeenSet = false;
  bool m_atlassianOauth2ProviderConfigHasBeenSet = false;
  bool m_linkedinOauth2ProviderConfigHasBeenSet = false;
  bool m_includedOauth2ProviderConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
