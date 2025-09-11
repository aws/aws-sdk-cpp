/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/Document.h>
#include <aws/ecs/model/DeploymentLifecycleHookStage.h>
#include <utility>

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
namespace ECS
{
namespace Model
{

  /**
   * <p>A deployment lifecycle hook runs custom logic at specific stages of the
   * deployment process. Currently, you can use Lambda functions as hook targets.</p>
   * <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-lifecycle-hooks.html">Lifecycle
   * hooks for Amazon ECS service deployments</a> in the <i> Amazon Elastic Container
   * Service Developer Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentLifecycleHook">AWS
   * API Reference</a></p>
   */
  class DeploymentLifecycleHook
  {
  public:
    AWS_ECS_API DeploymentLifecycleHook() = default;
    AWS_ECS_API DeploymentLifecycleHook(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentLifecycleHook& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the hook target. Currently, only Lambda
     * function ARNs are supported.</p> <p>You must provide this parameter when
     * configuring a deployment lifecycle hook.</p>
     */
    inline const Aws::String& GetHookTargetArn() const { return m_hookTargetArn; }
    inline bool HookTargetArnHasBeenSet() const { return m_hookTargetArnHasBeenSet; }
    template<typename HookTargetArnT = Aws::String>
    void SetHookTargetArn(HookTargetArnT&& value) { m_hookTargetArnHasBeenSet = true; m_hookTargetArn = std::forward<HookTargetArnT>(value); }
    template<typename HookTargetArnT = Aws::String>
    DeploymentLifecycleHook& WithHookTargetArn(HookTargetArnT&& value) { SetHookTargetArn(std::forward<HookTargetArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the IAM role that grants Amazon ECS
     * permission to call Lambda functions on your behalf.</p> <p>For more information,
     * see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/blue-green-permissions.html">Permissions
     * required for Lambda functions in Amazon ECS blue/green deployments</a> in the
     * <i> Amazon Elastic Container Service Developer Guide</i>.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DeploymentLifecycleHook& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lifecycle stages at which to run the hook. Choose from these valid
     * values:</p> <ul> <li> <p>RECONCILE_SERVICE</p> <p>The reconciliation stage that
     * only happens when you start a new service deployment with more than 1 service
     * revision in an ACTIVE state.</p> <p>You can use a lifecycle hook for this
     * stage.</p> </li> <li> <p>PRE_SCALE_UP</p> <p>The green service revision has not
     * started. The blue service revision is handling 100% of the production traffic.
     * There is no test traffic.</p> <p>You can use a lifecycle hook for this
     * stage.</p> </li> <li> <p>POST_SCALE_UP</p> <p>The green service revision has
     * started. The blue service revision is handling 100% of the production traffic.
     * There is no test traffic.</p> <p>You can use a lifecycle hook for this
     * stage.</p> </li> <li> <p>TEST_TRAFFIC_SHIFT</p> <p>The blue and green service
     * revisions are running. The blue service revision handles 100% of the production
     * traffic. The green service revision is migrating from 0% to 100% of test
     * traffic.</p> <p>You can use a lifecycle hook for this stage.</p> </li> <li>
     * <p>POST_TEST_TRAFFIC_SHIFT</p> <p>The test traffic shift is complete. The green
     * service revision handles 100% of the test traffic.</p> <p>You can use a
     * lifecycle hook for this stage.</p> </li> <li> <p>PRODUCTION_TRAFFIC_SHIFT</p>
     * <p>Production traffic is shifting to the green service revision. The green
     * service revision is migrating from 0% to 100% of production traffic.</p> <p>You
     * can use a lifecycle hook for this stage.</p> </li> <li>
     * <p>POST_PRODUCTION_TRAFFIC_SHIFT</p> <p>The production traffic shift is
     * complete.</p> <p>You can use a lifecycle hook for this stage.</p> </li> </ul>
     * <p>You must provide this parameter when configuring a deployment lifecycle
     * hook.</p>
     */
    inline const Aws::Vector<DeploymentLifecycleHookStage>& GetLifecycleStages() const { return m_lifecycleStages; }
    inline bool LifecycleStagesHasBeenSet() const { return m_lifecycleStagesHasBeenSet; }
    template<typename LifecycleStagesT = Aws::Vector<DeploymentLifecycleHookStage>>
    void SetLifecycleStages(LifecycleStagesT&& value) { m_lifecycleStagesHasBeenSet = true; m_lifecycleStages = std::forward<LifecycleStagesT>(value); }
    template<typename LifecycleStagesT = Aws::Vector<DeploymentLifecycleHookStage>>
    DeploymentLifecycleHook& WithLifecycleStages(LifecycleStagesT&& value) { SetLifecycleStages(std::forward<LifecycleStagesT>(value)); return *this;}
    inline DeploymentLifecycleHook& AddLifecycleStages(DeploymentLifecycleHookStage value) { m_lifecycleStagesHasBeenSet = true; m_lifecycleStages.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Use this field to specify custom parameters that Amazon ECS will pass to your
     * hook target invocations (such as a Lambda function).</p>
     */
    inline Aws::Utils::DocumentView GetHookDetails() const { return m_hookDetails; }
    inline bool HookDetailsHasBeenSet() const { return m_hookDetailsHasBeenSet; }
    template<typename HookDetailsT = Aws::Utils::Document>
    void SetHookDetails(HookDetailsT&& value) { m_hookDetailsHasBeenSet = true; m_hookDetails = std::forward<HookDetailsT>(value); }
    template<typename HookDetailsT = Aws::Utils::Document>
    DeploymentLifecycleHook& WithHookDetails(HookDetailsT&& value) { SetHookDetails(std::forward<HookDetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_hookTargetArn;
    bool m_hookTargetArnHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<DeploymentLifecycleHookStage> m_lifecycleStages;
    bool m_lifecycleStagesHasBeenSet = false;

    Aws::Utils::Document m_hookDetails;
    bool m_hookDetailsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
