/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentLifecycleHookAction.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class ContinueServiceDeploymentRequest : public ECSRequest {
 public:
  AWS_ECS_API ContinueServiceDeploymentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ContinueServiceDeployment"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The ARN of the service deployment to continue or roll back.</p>
   */
  inline const Aws::String& GetServiceDeploymentArn() const { return m_serviceDeploymentArn; }
  inline bool ServiceDeploymentArnHasBeenSet() const { return m_serviceDeploymentArnHasBeenSet; }
  template <typename ServiceDeploymentArnT = Aws::String>
  void SetServiceDeploymentArn(ServiceDeploymentArnT&& value) {
    m_serviceDeploymentArnHasBeenSet = true;
    m_serviceDeploymentArn = std::forward<ServiceDeploymentArnT>(value);
  }
  template <typename ServiceDeploymentArnT = Aws::String>
  ContinueServiceDeploymentRequest& WithServiceDeploymentArn(ServiceDeploymentArnT&& value) {
    SetServiceDeploymentArn(std::forward<ServiceDeploymentArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the paused lifecycle hook to act on. You can find the
   * <code>hookId</code> by calling <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_DescribeServiceDeployments.html">DescribeServiceDeployments</a>
   * and inspecting the <code>lifecycleHookDetails</code> field of the service
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
  ContinueServiceDeploymentRequest& WithHookId(HookIdT&& value) {
    SetHookId(std::forward<HookIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The action to take on the paused lifecycle hook. Valid values are:</p> <ul>
   * <li> <p> <code>CONTINUE</code> - Proceeds the deployment to the next lifecycle
   * stage.</p> </li> <li> <p> <code>ROLLBACK</code> - Rolls back the deployment to
   * the previous service revision.</p> </li> </ul> <p>If no value is specified, the
   * default action is <code>CONTINUE</code>.</p>
   */
  inline DeploymentLifecycleHookAction GetAction() const { return m_action; }
  inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
  inline void SetAction(DeploymentLifecycleHookAction value) {
    m_actionHasBeenSet = true;
    m_action = value;
  }
  inline ContinueServiceDeploymentRequest& WithAction(DeploymentLifecycleHookAction value) {
    SetAction(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_serviceDeploymentArn;

  Aws::String m_hookId;

  DeploymentLifecycleHookAction m_action{DeploymentLifecycleHookAction::NOT_SET};
  bool m_serviceDeploymentArnHasBeenSet = false;
  bool m_hookIdHasBeenSet = false;
  bool m_actionHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
