/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore/BedrockAgentCore_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>OAuth2 authentication information for third-party providers.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-2024-02-28/OAuth2Authentication">AWS
 * API Reference</a></p>
 */
class OAuth2Authentication {
 public:
  AWS_BEDROCKAGENTCORE_API OAuth2Authentication() = default;
  AWS_BEDROCKAGENTCORE_API OAuth2Authentication(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API OAuth2Authentication& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The subject (sub) claim from the OAuth2 provider. Uniquely identifies the
   * user at the provider.</p>
   */
  inline const Aws::String& GetSub() const { return m_sub; }
  inline bool SubHasBeenSet() const { return m_subHasBeenSet; }
  template <typename SubT = Aws::String>
  void SetSub(SubT&& value) {
    m_subHasBeenSet = true;
    m_sub = std::forward<SubT>(value);
  }
  template <typename SubT = Aws::String>
  OAuth2Authentication& WithSub(SubT&& value) {
    SetSub(std::forward<SubT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The email address from the OAuth2 provider.</p>
   */
  inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
  inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
  template <typename EmailAddressT = Aws::String>
  void SetEmailAddress(EmailAddressT&& value) {
    m_emailAddressHasBeenSet = true;
    m_emailAddress = std::forward<EmailAddressT>(value);
  }
  template <typename EmailAddressT = Aws::String>
  OAuth2Authentication& WithEmailAddress(EmailAddressT&& value) {
    SetEmailAddress(std::forward<EmailAddressT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user's name from the OAuth2 provider.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  OAuth2Authentication& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The username from the OAuth2 provider.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  OAuth2Authentication& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sub;

  Aws::String m_emailAddress;

  Aws::String m_name;

  Aws::String m_username;
  bool m_subHasBeenSet = false;
  bool m_emailAddressHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCore
}  // namespace Aws
