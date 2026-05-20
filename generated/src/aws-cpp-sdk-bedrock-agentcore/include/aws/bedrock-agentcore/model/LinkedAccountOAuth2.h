/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/OAuth2Authentication.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BedrockAgentCore {
namespace Model {

/**
 * <p>Authentication method using OAuth2 providers. Supports Google, Apple, X,
 * Telegram, and GitHub providers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LinkedAccountOAuth2">AWS
 * API Reference</a></p>
 */
class LinkedAccountOAuth2 {
 public:
  AWS_BEDROCKAGENTCORE_API LinkedAccountOAuth2() = default;
  AWS_BEDROCKAGENTCORE_API LinkedAccountOAuth2(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API LinkedAccountOAuth2& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Google OAuth2 authentication.</p>
   */
  inline const OAuth2Authentication& GetGoogle() const { return m_google; }
  inline bool GoogleHasBeenSet() const { return m_googleHasBeenSet; }
  template <typename GoogleT = OAuth2Authentication>
  void SetGoogle(GoogleT&& value) {
    m_googleHasBeenSet = true;
    m_google = std::forward<GoogleT>(value);
  }
  template <typename GoogleT = OAuth2Authentication>
  LinkedAccountOAuth2& WithGoogle(GoogleT&& value) {
    SetGoogle(std::forward<GoogleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Apple OAuth2 authentication.</p>
   */
  inline const OAuth2Authentication& GetApple() const { return m_apple; }
  inline bool AppleHasBeenSet() const { return m_appleHasBeenSet; }
  template <typename AppleT = OAuth2Authentication>
  void SetApple(AppleT&& value) {
    m_appleHasBeenSet = true;
    m_apple = std::forward<AppleT>(value);
  }
  template <typename AppleT = OAuth2Authentication>
  LinkedAccountOAuth2& WithApple(AppleT&& value) {
    SetApple(std::forward<AppleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>X (formerly Twitter) OAuth2 authentication.</p>
   */
  inline const OAuth2Authentication& GetX() const { return m_x; }
  inline bool XHasBeenSet() const { return m_xHasBeenSet; }
  template <typename XT = OAuth2Authentication>
  void SetX(XT&& value) {
    m_xHasBeenSet = true;
    m_x = std::forward<XT>(value);
  }
  template <typename XT = OAuth2Authentication>
  LinkedAccountOAuth2& WithX(XT&& value) {
    SetX(std::forward<XT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Telegram OAuth2 authentication.</p>
   */
  inline const OAuth2Authentication& GetTelegram() const { return m_telegram; }
  inline bool TelegramHasBeenSet() const { return m_telegramHasBeenSet; }
  template <typename TelegramT = OAuth2Authentication>
  void SetTelegram(TelegramT&& value) {
    m_telegramHasBeenSet = true;
    m_telegram = std::forward<TelegramT>(value);
  }
  template <typename TelegramT = OAuth2Authentication>
  LinkedAccountOAuth2& WithTelegram(TelegramT&& value) {
    SetTelegram(std::forward<TelegramT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>GitHub OAuth2 authentication.</p>
   */
  inline const OAuth2Authentication& GetGithub() const { return m_github; }
  inline bool GithubHasBeenSet() const { return m_githubHasBeenSet; }
  template <typename GithubT = OAuth2Authentication>
  void SetGithub(GithubT&& value) {
    m_githubHasBeenSet = true;
    m_github = std::forward<GithubT>(value);
  }
  template <typename GithubT = OAuth2Authentication>
  LinkedAccountOAuth2& WithGithub(GithubT&& value) {
    SetGithub(std::forward<GithubT>(value));
    return *this;
  }
  ///@}
 private:
  OAuth2Authentication m_google;

  OAuth2Authentication m_apple;

  OAuth2Authentication m_x;

  OAuth2Authentication m_telegram;

  OAuth2Authentication m_github;
  bool m_googleHasBeenSet = false;
  bool m_appleHasBeenSet = false;
  bool m_xHasBeenSet = false;
  bool m_telegramHasBeenSet = false;
  bool m_githubHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
