/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>Authentication configuration for accessing a private git
 * repository.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/HarnessSkillGitAuth">AWS
 * API Reference</a></p>
 */
class HarnessSkillGitAuth {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillGitAuth() = default;
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillGitAuth(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API HarnessSkillGitAuth& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the credential in AgentCore Identity containing the password or
   * personal access token.</p>
   */
  inline const Aws::String& GetCredentialArn() const { return m_credentialArn; }
  inline bool CredentialArnHasBeenSet() const { return m_credentialArnHasBeenSet; }
  template <typename CredentialArnT = Aws::String>
  void SetCredentialArn(CredentialArnT&& value) {
    m_credentialArnHasBeenSet = true;
    m_credentialArn = std::forward<CredentialArnT>(value);
  }
  template <typename CredentialArnT = Aws::String>
  HarnessSkillGitAuth& WithCredentialArn(CredentialArnT&& value) {
    SetCredentialArn(std::forward<CredentialArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Username for authentication. Defaults to 'oauth2' if not specified.</p>
   */
  inline const Aws::String& GetUsername() const { return m_username; }
  inline bool UsernameHasBeenSet() const { return m_usernameHasBeenSet; }
  template <typename UsernameT = Aws::String>
  void SetUsername(UsernameT&& value) {
    m_usernameHasBeenSet = true;
    m_username = std::forward<UsernameT>(value);
  }
  template <typename UsernameT = Aws::String>
  HarnessSkillGitAuth& WithUsername(UsernameT&& value) {
    SetUsername(std::forward<UsernameT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_credentialArn;

  Aws::String m_username;
  bool m_credentialArnHasBeenSet = false;
  bool m_usernameHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
