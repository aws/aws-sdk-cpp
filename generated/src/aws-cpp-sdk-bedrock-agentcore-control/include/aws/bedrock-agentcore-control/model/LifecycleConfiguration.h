/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock-agentcore-control/BedrockAgentCoreControl_EXPORTS.h>

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
   * <p>LifecycleConfiguration lets you manage the lifecycle of runtime sessions and
   * resources in AgentCore Runtime. This configuration helps optimize resource
   * utilization by automatically cleaning up idle sessions and preventing
   * long-running instances from consuming resources indefinitely.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bedrock-agentcore-control-2023-06-05/LifecycleConfiguration">AWS
   * API Reference</a></p>
   */
  class LifecycleConfiguration
  {
  public:
    AWS_BEDROCKAGENTCORECONTROL_API LifecycleConfiguration() = default;
    AWS_BEDROCKAGENTCORECONTROL_API LifecycleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API LifecycleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BEDROCKAGENTCORECONTROL_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timeout in seconds for idle runtime sessions. When a session remains idle for
     * this duration, it will be automatically terminated. Default: 900 seconds (15
     * minutes).</p>
     */
    inline int GetIdleRuntimeSessionTimeout() const { return m_idleRuntimeSessionTimeout; }
    inline bool IdleRuntimeSessionTimeoutHasBeenSet() const { return m_idleRuntimeSessionTimeoutHasBeenSet; }
    inline void SetIdleRuntimeSessionTimeout(int value) { m_idleRuntimeSessionTimeoutHasBeenSet = true; m_idleRuntimeSessionTimeout = value; }
    inline LifecycleConfiguration& WithIdleRuntimeSessionTimeout(int value) { SetIdleRuntimeSessionTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Maximum lifetime for the instance in seconds. Once reached, instances will be
     * automatically terminated and replaced. Default: 28800 seconds (8 hours).</p>
     */
    inline int GetMaxLifetime() const { return m_maxLifetime; }
    inline bool MaxLifetimeHasBeenSet() const { return m_maxLifetimeHasBeenSet; }
    inline void SetMaxLifetime(int value) { m_maxLifetimeHasBeenSet = true; m_maxLifetime = value; }
    inline LifecycleConfiguration& WithMaxLifetime(int value) { SetMaxLifetime(value); return *this;}
    ///@}
  private:

    int m_idleRuntimeSessionTimeout{0};
    bool m_idleRuntimeSessionTimeoutHasBeenSet = false;

    int m_maxLifetime{0};
    bool m_maxLifetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
