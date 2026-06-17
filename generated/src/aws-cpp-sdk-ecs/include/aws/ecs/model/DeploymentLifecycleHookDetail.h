/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentLifecycleHookAction.h>
#include <aws/ecs/model/DeploymentLifecycleHookStatus.h>
#include <aws/ecs/model/DeploymentLifecycleHookTargetType.h>

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
 * <p>The details of a deployment lifecycle hook that is active during a service
 * deployment.</p> <p>You can view lifecycle hook details by calling <a
 * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeServiceDeployments.html">DescribeServiceDeployments</a>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentLifecycleHookDetail">AWS
 * API Reference</a></p>
 */
class DeploymentLifecycleHookDetail {
 public:
  AWS_ECS_API DeploymentLifecycleHookDetail() = default;
  AWS_ECS_API DeploymentLifecycleHookDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DeploymentLifecycleHookDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ID of the lifecycle hook. Use this value when calling
   * <code>ContinueServiceDeployment</code> to continue or roll back a paused
   * deployment.</p>
   */
  inline const Aws::String& GetHookId() const { return m_hookId; }
  inline bool HookIdHasBeenSet() const { return m_hookIdHasBeenSet; }
  template <typename HookIdT = Aws::String>
  void SetHookId(HookIdT&& value) {
    m_hookIdHasBeenSet = true;
    m_hookId = std::forward<HookIdT>(value);
  }
  template <typename HookIdT = Aws::String>
  DeploymentLifecycleHookDetail& WithHookId(HookIdT&& value) {
    SetHookId(std::forward<HookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of action the lifecycle hook performs, such as
   * <code>AWS_LAMBDA</code> or <code>PAUSE</code>.</p>
   */
  inline DeploymentLifecycleHookTargetType GetTargetType() const { return m_targetType; }
  inline bool TargetTypeHasBeenSet() const { return m_targetTypeHasBeenSet; }
  inline void SetTargetType(DeploymentLifecycleHookTargetType value) {
    m_targetTypeHasBeenSet = true;
    m_targetType = value;
  }
  inline DeploymentLifecycleHookDetail& WithTargetType(DeploymentLifecycleHookTargetType value) {
    SetTargetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the hook target. For
   * <code>AWS_LAMBDA</code> hooks, this is the Lambda function ARN. For
   * <code>PAUSE</code> hooks, this field is not set.</p>
   */
  inline const Aws::String& GetTargetArn() const { return m_targetArn; }
  inline bool TargetArnHasBeenSet() const { return m_targetArnHasBeenSet; }
  template <typename TargetArnT = Aws::String>
  void SetTargetArn(TargetArnT&& value) {
    m_targetArnHasBeenSet = true;
    m_targetArn = std::forward<TargetArnT>(value);
  }
  template <typename TargetArnT = Aws::String>
  DeploymentLifecycleHookDetail& WithTargetArn(TargetArnT&& value) {
    SetTargetArn(std::forward<TargetArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the lifecycle hook. Valid values include
   * <code>AWAITING_ACTION</code>, <code>IN_PROGRESS</code>, <code>SUCCEEDED</code>,
   * <code>FAILED</code>, and <code>TIMED_OUT</code>.</p>
   */
  inline DeploymentLifecycleHookStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DeploymentLifecycleHookStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DeploymentLifecycleHookDetail& WithStatus(DeploymentLifecycleHookStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time when the lifecycle hook times out. If the hook has not been
   * completed by this time, Amazon ECS takes the timeout action.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  inline bool ExpiresAtHasBeenSet() const { return m_expiresAtHasBeenSet; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  DeploymentLifecycleHookDetail& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action Amazon ECS takes when the lifecycle hook times out. Valid values
   * are <code>CONTINUE</code> and <code>ROLLBACK</code>.</p>
   */
  inline DeploymentLifecycleHookAction GetTimeoutAction() const { return m_timeoutAction; }
  inline bool TimeoutActionHasBeenSet() const { return m_timeoutActionHasBeenSet; }
  inline void SetTimeoutAction(DeploymentLifecycleHookAction value) {
    m_timeoutActionHasBeenSet = true;
    m_timeoutAction = value;
  }
  inline DeploymentLifecycleHookDetail& WithTimeoutAction(DeploymentLifecycleHookAction value) {
    SetTimeoutAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_hookId;

  DeploymentLifecycleHookTargetType m_targetType{DeploymentLifecycleHookTargetType::NOT_SET};

  Aws::String m_targetArn;

  DeploymentLifecycleHookStatus m_status{DeploymentLifecycleHookStatus::NOT_SET};

  Aws::Utils::DateTime m_expiresAt{};

  DeploymentLifecycleHookAction m_timeoutAction{DeploymentLifecycleHookAction::NOT_SET};
  bool m_hookIdHasBeenSet = false;
  bool m_targetTypeHasBeenSet = false;
  bool m_targetArnHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_timeoutActionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
