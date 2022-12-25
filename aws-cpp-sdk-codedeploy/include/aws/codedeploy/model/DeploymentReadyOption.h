/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codedeploy/CodeDeploy_EXPORTS.h>
#include <aws/codedeploy/model/DeploymentReadyAction.h>
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
   * <p>Information about how traffic is rerouted to instances in a replacement
   * environment in a blue/green deployment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/codedeploy-2014-10-06/DeploymentReadyOption">AWS
   * API Reference</a></p>
   */
  class DeploymentReadyOption
  {
  public:
    AWS_CODEDEPLOY_API DeploymentReadyOption();
    AWS_CODEDEPLOY_API DeploymentReadyOption(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API DeploymentReadyOption& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CODEDEPLOY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline const DeploymentReadyAction& GetActionOnTimeout() const{ return m_actionOnTimeout; }

    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline bool ActionOnTimeoutHasBeenSet() const { return m_actionOnTimeoutHasBeenSet; }

    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline void SetActionOnTimeout(const DeploymentReadyAction& value) { m_actionOnTimeoutHasBeenSet = true; m_actionOnTimeout = value; }

    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline void SetActionOnTimeout(DeploymentReadyAction&& value) { m_actionOnTimeoutHasBeenSet = true; m_actionOnTimeout = std::move(value); }

    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline DeploymentReadyOption& WithActionOnTimeout(const DeploymentReadyAction& value) { SetActionOnTimeout(value); return *this;}

    /**
     * <p>Information about when to reroute traffic from an original environment to a
     * replacement environment in a blue/green deployment.</p> <ul> <li>
     * <p>CONTINUE_DEPLOYMENT: Register new instances with the load balancer
     * immediately after the new application revision is installed on the instances in
     * the replacement environment.</p> </li> <li> <p>STOP_DEPLOYMENT: Do not register
     * new instances with a load balancer unless traffic rerouting is started using
     * <a>ContinueDeployment</a>. If traffic rerouting is not started before the end of
     * the specified wait period, the deployment status is changed to Stopped.</p>
     * </li> </ul>
     */
    inline DeploymentReadyOption& WithActionOnTimeout(DeploymentReadyAction&& value) { SetActionOnTimeout(std::move(value)); return *this;}


    /**
     * <p>The number of minutes to wait before the status of a blue/green deployment is
     * changed to Stopped if rerouting is not started manually. Applies only to the
     * <code>STOP_DEPLOYMENT</code> option for <code>actionOnTimeout</code>.</p>
     */
    inline int GetWaitTimeInMinutes() const{ return m_waitTimeInMinutes; }

    /**
     * <p>The number of minutes to wait before the status of a blue/green deployment is
     * changed to Stopped if rerouting is not started manually. Applies only to the
     * <code>STOP_DEPLOYMENT</code> option for <code>actionOnTimeout</code>.</p>
     */
    inline bool WaitTimeInMinutesHasBeenSet() const { return m_waitTimeInMinutesHasBeenSet; }

    /**
     * <p>The number of minutes to wait before the status of a blue/green deployment is
     * changed to Stopped if rerouting is not started manually. Applies only to the
     * <code>STOP_DEPLOYMENT</code> option for <code>actionOnTimeout</code>.</p>
     */
    inline void SetWaitTimeInMinutes(int value) { m_waitTimeInMinutesHasBeenSet = true; m_waitTimeInMinutes = value; }

    /**
     * <p>The number of minutes to wait before the status of a blue/green deployment is
     * changed to Stopped if rerouting is not started manually. Applies only to the
     * <code>STOP_DEPLOYMENT</code> option for <code>actionOnTimeout</code>.</p>
     */
    inline DeploymentReadyOption& WithWaitTimeInMinutes(int value) { SetWaitTimeInMinutes(value); return *this;}

  private:

    DeploymentReadyAction m_actionOnTimeout;
    bool m_actionOnTimeoutHasBeenSet = false;

    int m_waitTimeInMinutes;
    bool m_waitTimeInMinutesHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeDeploy
} // namespace Aws
