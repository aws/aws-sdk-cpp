/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/AutoScalingGroupProcess.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace CodeDeploy {
namespace Model {

/**
 * <p>Options that control how CodeDeploy manages Amazon EC2 Auto Scaling groups
 * during a deployment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/EC2DeploymentOptions">AWS
 * API Reference</a></p>
 */
class EC2DeploymentOptions {
 public:
  AWS_CODEDEPLOY_API EC2DeploymentOptions() = default;
  AWS_CODEDEPLOY_API EC2DeploymentOptions(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODEDEPLOY_API EC2DeploymentOptions& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon EC2 Auto Scaling processes to suspend during the deployment.
   * CodeDeploy suspends these processes before it deploys to instances in an Auto
   * Scaling group, and resumes them when the deployment succeeds, fails, or is
   * stopped. Valid values are <code>Terminate</code>, <code>AZRebalance</code>,
   * <code>InstanceRefresh</code>, and <code>ScheduledActions</code>.</p> <p>This
   * parameter applies only to in-place deployments on the EC2/On-premises compute
   * platform. If the list is empty, or if the deployment does not target instances
   * in an Auto Scaling group, no processes are suspended.</p> <p>The service role
   * for the deployment group must have permission to call
   * <code>autoscaling:SuspendProcesses</code> and
   * <code>autoscaling:ResumeProcesses</code> on the target Auto Scaling groups. If
   * the processes cannot be suspended, the deployment fails before any instance is
   * updated.</p> <p>If you suspend <code>ScheduledActions</code>, scheduled actions
   * with a start time during the deployment are skipped and do not run after the
   * process resumes.</p>  <p>If CodeDeploy cannot resume the processes, the
   * deployment fails and the processes stay suspended until you resume them with the
   * Auto Scaling <code>ResumeProcesses</code> action. While <code>Terminate</code>
   * is suspended, Auto Scaling does not replace unhealthy instances. If you suspend
   * <code>Terminate</code>, configure a trigger that notifies you when a deployment
   * fails.</p>
   */
  inline const Aws::Vector<AutoScalingGroupProcess>& GetAutoScalingGroupProcessesToSuspend() const {
    return m_autoScalingGroupProcessesToSuspend;
  }
  inline bool AutoScalingGroupProcessesToSuspendHasBeenSet() const { return m_autoScalingGroupProcessesToSuspendHasBeenSet; }
  template <typename AutoScalingGroupProcessesToSuspendT = Aws::Vector<AutoScalingGroupProcess>>
  void SetAutoScalingGroupProcessesToSuspend(AutoScalingGroupProcessesToSuspendT&& value) {
    m_autoScalingGroupProcessesToSuspendHasBeenSet = true;
    m_autoScalingGroupProcessesToSuspend = std::forward<AutoScalingGroupProcessesToSuspendT>(value);
  }
  template <typename AutoScalingGroupProcessesToSuspendT = Aws::Vector<AutoScalingGroupProcess>>
  EC2DeploymentOptions& WithAutoScalingGroupProcessesToSuspend(AutoScalingGroupProcessesToSuspendT&& value) {
    SetAutoScalingGroupProcessesToSuspend(std::forward<AutoScalingGroupProcessesToSuspendT>(value));
    return *this;
  }
  inline EC2DeploymentOptions& AddAutoScalingGroupProcessesToSuspend(AutoScalingGroupProcess value) {
    m_autoScalingGroupProcessesToSuspendHasBeenSet = true;
    m_autoScalingGroupProcessesToSuspend.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AutoScalingGroupProcess> m_autoScalingGroupProcessesToSuspend;
  bool m_autoScalingGroupProcessesToSuspendHasBeenSet = false;
};

}  // namespace Model
}  // namespace CodeDeploy
}  // namespace Aws
