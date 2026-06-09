/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentLifecycleHookAction.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>The timeout configuration for a deployment lifecycle hook. This determines
 * how long Amazon ECS waits for the hook to complete before taking the specified
 * timeout action.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentLifecycleHookTimeoutConfiguration">AWS
 * API Reference</a></p>
 */
class DeploymentLifecycleHookTimeoutConfiguration {
 public:
  AWS_ECS_API DeploymentLifecycleHookTimeoutConfiguration() = default;
  AWS_ECS_API DeploymentLifecycleHookTimeoutConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DeploymentLifecycleHookTimeoutConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of minutes Amazon ECS waits for the lifecycle hook to complete
   * before taking the timeout action.</p>
   */
  inline int GetTimeoutInMinutes() const { return m_timeoutInMinutes; }
  inline bool TimeoutInMinutesHasBeenSet() const { return m_timeoutInMinutesHasBeenSet; }
  inline void SetTimeoutInMinutes(int value) {
    m_timeoutInMinutesHasBeenSet = true;
    m_timeoutInMinutes = value;
  }
  inline DeploymentLifecycleHookTimeoutConfiguration& WithTimeoutInMinutes(int value) {
    SetTimeoutInMinutes(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action Amazon ECS takes when the lifecycle hook times out. Valid values
   * are:</p> <ul> <li> <p> <code>CONTINUE</code> - Proceeds the deployment to the
   * next lifecycle stage.</p> </li> <li> <p> <code>ROLLBACK</code> - Rolls back the
   * deployment to the previous service revision.</p> </li> </ul>
   */
  inline DeploymentLifecycleHookAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(DeploymentLifecycleHookAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline DeploymentLifecycleHookTimeoutConfiguration& WithAction(DeploymentLifecycleHookAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  int m_timeoutInMinutes{0};

  DeploymentLifecycleHookAction m_action{DeploymentLifecycleHookAction::NOT_SET};
  bool m_timeoutInMinutesHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
