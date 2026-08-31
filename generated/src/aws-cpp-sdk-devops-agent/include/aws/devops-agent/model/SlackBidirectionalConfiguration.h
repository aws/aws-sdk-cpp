/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/devops-agent/DevOpsAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace DevOpsAgent {
namespace Model {

/**
 * <p>Configuration for bidirectional Slack communication.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/SlackBidirectionalConfiguration">AWS
 * API Reference</a></p>
 */
class SlackBidirectionalConfiguration {
 public:
  AWS_DEVOPSAGENT_API SlackBidirectionalConfiguration() = default;
  AWS_DEVOPSAGENT_API SlackBidirectionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API SlackBidirectionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>IAM role ARN that AWS DevOps Agent assumes to exchange messages with your
   * Slack workspace on behalf of this association.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  SlackBidirectionalConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Whether bidirectional communication is enabled for this association. When you
   * set this value to true, you can mention the agent in a configured Slack channel
   * and it responds in that channel. When you omit this value or set it to false,
   * the agent ignores mentions and only sends notifications.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SlackBidirectionalConfiguration& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_roleArn;

  bool m_enabled{false};
  bool m_roleArnHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
};

}  // namespace Model
}  // namespace DevOpsAgent
}  // namespace Aws
