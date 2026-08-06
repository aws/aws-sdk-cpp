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
 * <p>The configuration that manages the lifecycle of instances in a capacity
 * provider, including idle timeout and maximum lifetime.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/InstanceLifecycleConfiguration">AWS
 * API Reference</a></p>
 */
class InstanceLifecycleConfiguration {
 public:
  AWS_BEDROCKAGENTCORECONTROL_API InstanceLifecycleConfiguration() = default;
  AWS_BEDROCKAGENTCORECONTROL_API InstanceLifecycleConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API InstanceLifecycleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of seconds an instance can remain idle before it is stopped. An
   * instance is considered idle when all of its agents are idle. The default is 900
   * seconds (15 minutes).</p>
   */
  inline int GetIdleInstanceTimeout() const { return m_idleInstanceTimeout; }
  inline bool IdleInstanceTimeoutHasBeenSet() const { return m_idleInstanceTimeoutHasBeenSet; }
  inline void SetIdleInstanceTimeout(int value) {
    m_idleInstanceTimeoutHasBeenSet = true;
    m_idleInstanceTimeout = value;
  }
  inline InstanceLifecycleConfiguration& WithIdleInstanceTimeout(int value) {
    SetIdleInstanceTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum lifetime of an instance, in seconds. When an instance reaches
   * this limit, the service terminates it regardless of activity. The default is
   * 28800 seconds (8 hours). The maximum is 1209600 seconds (14 days).</p>
   */
  inline int GetMaxLifetime() const { return m_maxLifetime; }
  inline bool MaxLifetimeHasBeenSet() const { return m_maxLifetimeHasBeenSet; }
  inline void SetMaxLifetime(int value) {
    m_maxLifetimeHasBeenSet = true;
    m_maxLifetime = value;
  }
  inline InstanceLifecycleConfiguration& WithMaxLifetime(int value) {
    SetMaxLifetime(value);
    return *this;
  }
  ///@}
 private:
  int m_idleInstanceTimeout{0};

  int m_maxLifetime{0};
  bool m_idleInstanceTimeoutHasBeenSet = false;
  bool m_maxLifetimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace BedrockAgentCoreControl
}  // namespace Aws
