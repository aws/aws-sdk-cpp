/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/bedrock-agentcore/model/LinkedAccountDeveloperJwt.h>
#include <aws/bedrock-agentcore/model/LinkedAccountEmail.h>
#include <aws/bedrock-agentcore/model/LinkedAccountOAuth2.h>
#include <aws/bedrock-agentcore/model/LinkedAccountSms.h>

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
 * <p>Represents different linkedAccounts that can be linked to an embedded wallet.
 * This union supports multiple linkedAccount approaches: email, SMS, JWT, and
 * OAuth2.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/LinkedAccount">AWS
 * API Reference</a></p>
 */
class LinkedAccount {
 public:
  AWS_BEDROCKAGENTCORE_API LinkedAccount() = default;
  AWS_BEDROCKAGENTCORE_API LinkedAccount(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API LinkedAccount& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Email-based linkedAccount</p>
   */
  inline const LinkedAccountEmail& GetEmail() const { return m_email; }
  inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
  template <typename EmailT = LinkedAccountEmail>
  void SetEmail(EmailT&& value) {
    m_emailHasBeenSet = true;
    m_email = std::forward<EmailT>(value);
  }
  template <typename EmailT = LinkedAccountEmail>
  LinkedAccount& WithEmail(EmailT&& value) {
    SetEmail(std::forward<EmailT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>SMS-based linkedAccount using phone number</p>
   */
  inline const LinkedAccountSms& GetSms() const { return m_sms; }
  inline bool SmsHasBeenSet() const { return m_smsHasBeenSet; }
  template <typename SmsT = LinkedAccountSms>
  void SetSms(SmsT&& value) {
    m_smsHasBeenSet = true;
    m_sms = std::forward<SmsT>(value);
  }
  template <typename SmsT = LinkedAccountSms>
  LinkedAccount& WithSms(SmsT&& value) {
    SetSms(std::forward<SmsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Developer JWT linkedAccount with key ID and subject</p>
   */
  inline const LinkedAccountDeveloperJwt& GetDeveloperJwt() const { return m_developerJwt; }
  inline bool DeveloperJwtHasBeenSet() const { return m_developerJwtHasBeenSet; }
  template <typename DeveloperJwtT = LinkedAccountDeveloperJwt>
  void SetDeveloperJwt(DeveloperJwtT&& value) {
    m_developerJwtHasBeenSet = true;
    m_developerJwt = std::forward<DeveloperJwtT>(value);
  }
  template <typename DeveloperJwtT = LinkedAccountDeveloperJwt>
  LinkedAccount& WithDeveloperJwt(DeveloperJwtT&& value) {
    SetDeveloperJwt(std::forward<DeveloperJwtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth2 provider linkedAccount (Google, Apple, X, Telegram, GitHub)</p>
   */
  inline const LinkedAccountOAuth2& GetOAuth2() const { return m_oAuth2; }
  inline bool OAuth2HasBeenSet() const { return m_oAuth2HasBeenSet; }
  template <typename OAuth2T = LinkedAccountOAuth2>
  void SetOAuth2(OAuth2T&& value) {
    m_oAuth2HasBeenSet = true;
    m_oAuth2 = std::forward<OAuth2T>(value);
  }
  template <typename OAuth2T = LinkedAccountOAuth2>
  LinkedAccount& WithOAuth2(OAuth2T&& value) {
    SetOAuth2(std::forward<OAuth2T>(value));
    return *this;
  }
  ///@}
 private:
  LinkedAccountEmail m_email;

  LinkedAccountSms m_sms;

  LinkedAccountDeveloperJwt m_developerJwt;

  LinkedAccountOAuth2 m_oAuth2;
  bool m_emailHasBeenSet = false;
  bool m_smsHasBeenSet = false;
  bool m_developerJwtHasBeenSet = false;
  bool m_oAuth2HasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
