/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/InstanceAction.h>
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
namespace CodeDeploy
{
namespace Model
{

  /**
   * <p>Information about whether instances in the original environment are
   * terminated when a blue/green deployment is successful.
   * <code>BlueInstanceTerminationOption</code> does not apply to Lambda deployments.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/BlueInstanceTerminationOption">AWS
   * API Reference</a></p>
   */
  class BlueInstanceTerminationOption
  {
  public:
    AWS_CODEDEPLOY_API BlueInstanceTerminationOption();
    AWS_CODEDEPLOY_API BlueInstanceTerminationOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API BlueInstanceTerminationOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline const InstanceAction& GetAction() const{ return m_action; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline void SetAction(const InstanceAction& value) { m_actionHasBeenSet = true; m_action = value; }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline void SetAction(InstanceAction&& value) { m_actionHasBeenSet = true; m_action = std::move(value); }

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline BlueInstanceTerminationOption& WithAction(const InstanceAction& value) { SetAction(value); return *this;}

    /**
     * <p>The action to take on instances in the original environment after a
     * successful blue/green deployment.</p> <ul> <li> <p> <code>TERMINATE</code>:
     * Instances are terminated after a specified wait time.</p> </li> <li> <p>
     * <code>KEEP_ALIVE</code>: Instances are left running after they are deregistered
     * from the load balancer and removed from the deployment group.</p> </li> </ul>
     */
    inline BlueInstanceTerminationOption& WithAction(InstanceAction&& value) { SetAction(std::move(value)); return *this;}


    /**
     * <p>For an Amazon EC2 deployment, the number of minutes to wait after a
     * successful blue/green deployment before terminating instances from the original
     * environment.</p> <p> For an Amazon ECS deployment, the number of minutes before
     * deleting the original (blue) task set. During an Amazon ECS deployment,
     * CodeDeploy shifts traffic from the original (blue) task set to a replacement
     * (green) task set. </p> <p> The maximum setting is 2880 minutes (2 days). </p>
     */
    inline int GetTerminationWaitTimeInMinutes() const{ return m_terminationWaitTimeInMinutes; }

    /**
     * <p>For an Amazon EC2 deployment, the number of minutes to wait after a
     * successful blue/green deployment before terminating instances from the original
     * environment.</p> <p> For an Amazon ECS deployment, the number of minutes before
     * deleting the original (blue) task set. During an Amazon ECS deployment,
     * CodeDeploy shifts traffic from the original (blue) task set to a replacement
     * (green) task set. </p> <p> The maximum setting is 2880 minutes (2 days). </p>
     */
    inline bool TerminationWaitTimeInMinutesHasBeenSet() const { return m_terminationWaitTimeInMinutesHasBeenSet; }

    /**
     * <p>For an Amazon EC2 deployment, the number of minutes to wait after a
     * successful blue/green deployment before terminating instances from the original
     * environment.</p> <p> For an Amazon ECS deployment, the number of minutes before
     * deleting the original (blue) task set. During an Amazon ECS deployment,
     * CodeDeploy shifts traffic from the original (blue) task set to a replacement
     * (green) task set. </p> <p> The maximum setting is 2880 minutes (2 days). </p>
     */
    inline void SetTerminationWaitTimeInMinutes(int value) { m_terminationWaitTimeInMinutesHasBeenSet = true; m_terminationWaitTimeInMinutes = value; }

    /**
     * <p>For an Amazon EC2 deployment, the number of minutes to wait after a
     * successful blue/green deployment before terminating instances from the original
     * environment.</p> <p> For an Amazon ECS deployment, the number of minutes before
     * deleting the original (blue) task set. During an Amazon ECS deployment,
     * CodeDeploy shifts traffic from the original (blue) task set to a replacement
     * (green) task set. </p> <p> The maximum setting is 2880 minutes (2 days). </p>
     */
    inline BlueInstanceTerminationOption& WithTerminationWaitTimeInMinutes(int value) { SetTerminationWaitTimeInMinutes(value); return *this;}

  private:

    InstanceAction m_action;
    bool m_actionHasBeenSet = false;

    int m_terminationWaitTimeInMinutes;
    bool m_terminationWaitTimeInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
