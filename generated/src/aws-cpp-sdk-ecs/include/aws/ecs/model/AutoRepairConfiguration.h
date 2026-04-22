/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/AutoRepairActionsStatus.h>

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
 * <p>The auto repair configuration for an Amazon ECS Managed Instances capacity
 * provider. When enabled, Amazon ECS automatically replaces container instances
 * that are detected as unhealthy based on container instance health checks,
 * including accelerated compute device and daemon health checks.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/AutoRepairConfiguration">AWS
 * API Reference</a></p>
 */
class AutoRepairConfiguration {
 public:
  AWS_ECS_API AutoRepairConfiguration() = default;
  AWS_ECS_API AutoRepairConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API AutoRepairConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The status of auto repair actions for the capacity provider. When set to
   * <code>ENABLED</code>, Amazon ECS automatically replaces container instances with
   * an <code>IMPAIRED</code> health status. When set to <code>DISABLED</code>,
   * Amazon ECS still monitors container instance health but does not automatically
   * replace impaired instances.</p>
   */
  inline AutoRepairActionsStatus GetActionsStatus() const { return m_actionsStatus; }
  inline bool ActionsStatusHasBeenSet() const { return m_actionsStatusHasBeenSet; }
  inline void SetActionsStatus(AutoRepairActionsStatus value) {
    m_actionsStatusHasBeenSet = true;
    m_actionsStatus = value;
  }
  inline AutoRepairConfiguration& WithActionsStatus(AutoRepairActionsStatus value) {
    SetActionsStatus(value);
    return *this;
  }
  ///@}
 private:
  AutoRepairActionsStatus m_actionsStatus{AutoRepairActionsStatus::NOT_SET};
  bool m_actionsStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
