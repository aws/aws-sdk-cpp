/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ServiceRevisionCleanup.h>

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
 * <p> <p>You can use early success criteria only with rolling deployment
 * strategy.</p>  <p>The configuration that determines when a rolling update
 * deployment is considered successful. Early success criteria defines the
 * percentage of tasks that must be healthy before a deployment completes. It also
 * controls whether Amazon ECS must remove the previous tasks before a deployment
 * completes.</p></p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentEarlySuccessCriteria">AWS
 * API Reference</a></p>
 */
class DeploymentEarlySuccessCriteria {
 public:
  AWS_ECS_API DeploymentEarlySuccessCriteria() = default;
  AWS_ECS_API DeploymentEarlySuccessCriteria(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DeploymentEarlySuccessCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Specifies whether to use the early success criteria for the service
   * deployment. When set to <code>false</code>, the deployment uses the default
   * behavior, where Amazon ECS considers the deployment successful when the target
   * service revision fully stabilizes and the previous tasks are removed. The
   * default value is <code>false</code>.</p> <p>When set to <code>true</code>,
   * Amazon ECS monitors the deployment to meet early success criteria. You must also
   * specify <code>healthyPercent</code> and
   * <code>sourceServiceRevisionCleanup</code>.</p>
   */
  inline bool GetEnable() const { return m_enable; }
  inline bool EnableHasBeenSet() const { return m_enableHasBeenSet; }
  inline void SetEnable(bool value) {
    m_enableHasBeenSet = true;
    m_enable = value;
  }
  inline DeploymentEarlySuccessCriteria& WithEnable(bool value) {
    SetEnable(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The percentage of healthy tasks that the target service revision must reach
   * before Amazon ECS considers the deployment successful. This percentage is
   * relative to the service's <code>desiredCount</code> and must be an integer
   * between <code>0</code> and <code>100</code>. This value must be greater than or
   * equal to the <code>minimumHealthyPercent</code> value.</p> <p>After this
   * percentage of tasks is healthy and the bake time elapses, Amazon ECS completes
   * the deployment. Amazon ECS continues to scale the target service revision to 100
   * percent in the background.</p>
   */
  inline int GetHealthyPercent() const { return m_healthyPercent; }
  inline bool HealthyPercentHasBeenSet() const { return m_healthyPercentHasBeenSet; }
  inline void SetHealthyPercent(int value) {
    m_healthyPercentHasBeenSet = true;
    m_healthyPercent = value;
  }
  inline DeploymentEarlySuccessCriteria& WithHealthyPercent(int value) {
    SetHealthyPercent(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when Amazon ECS removes the source revisions' tasks relative to
   * deployment completion. The valid values are:</p> <ul> <li> <p>
   * <code>BLOCKING</code>—Amazon ECS removes the previous tasks before it marks the
   * deployment as successful.</p> </li> <li> <p> <code>DEFERRED</code>—Amazon ECS
   * marks the deployment successful, and then removes the previous tasks in the
   * background.</p> </li> </ul>
   */
  inline ServiceRevisionCleanup GetSourceServiceRevisionCleanup() const { return m_sourceServiceRevisionCleanup; }
  inline bool SourceServiceRevisionCleanupHasBeenSet() const { return m_sourceServiceRevisionCleanupHasBeenSet; }
  inline void SetSourceServiceRevisionCleanup(ServiceRevisionCleanup value) {
    m_sourceServiceRevisionCleanupHasBeenSet = true;
    m_sourceServiceRevisionCleanup = value;
  }
  inline DeploymentEarlySuccessCriteria& WithSourceServiceRevisionCleanup(ServiceRevisionCleanup value) {
    SetSourceServiceRevisionCleanup(value);
    return *this;
  }
  ///@}
 private:
  bool m_enable{false};

  int m_healthyPercent{0};

  ServiceRevisionCleanup m_sourceServiceRevisionCleanup{ServiceRevisionCleanup::NOT_SET};
  bool m_enableHasBeenSet = false;
  bool m_healthyPercentHasBeenSet = false;
  bool m_sourceServiceRevisionCleanupHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
