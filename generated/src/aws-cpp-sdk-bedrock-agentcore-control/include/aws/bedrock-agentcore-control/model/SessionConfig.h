/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
 * <p> The configuration that defines how agent sessions are detected and when they
 * are considered complete for evaluation. </p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/SessionConfig">AWS
 * API Reference</a></p>
 */
class SessionConfig {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfig() = default;
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API SessionConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p> The number of minutes of inactivity after which an agent session is
   * considered complete and ready for evaluation. Default is 15 minutes. </p>
   */
  inline int GetSessionTimeoutMinutes() const { return m_sessionTimeoutMinutes; }
  inline bool SessionTimeoutMinutesHasBeenSet() const { return m_sessionTimeoutMinutesHasBeenSet; }
  inline void SetSessionTimeoutMinutes(int value) {
    m_sessionTimeoutMinutesHasBeenSet = true;
    m_sessionTimeoutMinutes = value;
  }
  inline SessionConfig& WithSessionTimeoutMinutes(int value) {
    SetSessionTimeoutMinutes(value);
    return *this;
  }
  ///@}
 private:
  int m_sessionTimeoutMinutes{0};
  bool m_sessionTimeoutMinutesHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
