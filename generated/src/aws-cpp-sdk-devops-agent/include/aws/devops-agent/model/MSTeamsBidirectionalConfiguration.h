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
 * <p>Configuration for bidirectional communication with a Microsoft Teams channel.
 * When enabled, the agent receives and responds to mentions in the configured
 * channel in addition to sending notifications.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/devops-agent-2026-01-01/MSTeamsBidirectionalConfiguration">AWS
 * API Reference</a></p>
 */
class MSTeamsBidirectionalConfiguration {
 public:
  AWS_DEVOPSAGENT_API MSTeamsBidirectionalConfiguration() = default;
  AWS_DEVOPSAGENT_API MSTeamsBidirectionalConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API MSTeamsBidirectionalConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_DEVOPSAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that the agent assumes to
   * exchange messages with the Microsoft Teams team for this association.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  MSTeamsBidirectionalConfiguration& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether bidirectional communication is enabled for this
   * association. If you set this value to <code>true</code>, you can mention the
   * agent in the configured Microsoft Teams channel and it responds in that channel.
   * If you omit this parameter or set it to <code>false</code>, the agent only sends
   * one-way notifications.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline MSTeamsBidirectionalConfiguration& WithEnabled(bool value) {
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
