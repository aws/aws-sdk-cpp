/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentCircuitBreaker.h>
#include <aws/ecs/model/DeploymentAlarms.h>
#include <aws/ecs/model/DeploymentStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/model/DeploymentLifecycleHook.h>
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
   * <p>Optional deployment parameters that control how many tasks run during a
   * deployment and the ordering of stopping and starting tasks.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DeploymentConfiguration">AWS
   * API Reference</a></p>
   */
  class DeploymentConfiguration
  {
  public:
    AWS_ECS_API DeploymentConfiguration() = default;
    AWS_ECS_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If you use the deployment
     * circuit breaker, a service deployment will transition to a failed state and stop
     * launching new tasks. If you use the rollback option, when a service deployment
     * fails, the service is rolled back to the last deployment that completed
     * successfully. For more information, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/deployment-type-ecs.html">Rolling
     * update</a> in the <i>Amazon Elastic Container Service Developer Guide</i> </p>
     */
    inline const DeploymentCircuitBreaker& GetDeploymentCircuitBreaker() const { return m_deploymentCircuitBreaker; }
    inline bool DeploymentCircuitBreakerHasBeenSet() const { return m_deploymentCircuitBreakerHasBeenSet; }
    template<typename DeploymentCircuitBreakerT = DeploymentCircuitBreaker>
    void SetDeploymentCircuitBreaker(DeploymentCircuitBreakerT&& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = std::forward<DeploymentCircuitBreakerT>(value); }
    template<typename DeploymentCircuitBreakerT = DeploymentCircuitBreaker>
    DeploymentConfiguration& WithDeploymentCircuitBreaker(DeploymentCircuitBreakerT&& value) { SetDeploymentCircuitBreaker(std::forward<DeploymentCircuitBreakerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>maximumPercent</code> parameter represents an upper limit on the
     * number of your service's tasks that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state during a deployment, as a percentage of the
     * <code>desiredCount</code> (rounded down to the nearest integer). This parameter
     * enables you to define the deployment batch size. For example, if your service is
     * using the <code>REPLICA</code> service scheduler and has a
     * <code>desiredCount</code> of four tasks and a <code>maximumPercent</code> value
     * of 200%, the scheduler may start four new tasks before stopping the four older
     * tasks (provided that the cluster resources required to do this are available).
     * The default <code>maximumPercent</code> value for a service using the
     * <code>REPLICA</code> service scheduler is 200%.</p> <p>The Amazon ECS scheduler
     * uses this parameter to replace unhealthy tasks by starting replacement tasks
     * first and then stopping the unhealthy tasks, as long as cluster resources for
     * starting replacement tasks are available. For more information about how the
     * scheduler replaces unhealthy tasks, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Amazon
     * ECS services</a>.</p> <p>If a service is using either the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types, and tasks
     * in the service use the EC2 launch type, the <b>maximum percent</b> value is set
     * to the default value. The <b>maximum percent</b> value is used to define the
     * upper limit on the number of the tasks in the service that remain in the
     * <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state.</p>  <p>You can't specify a custom
     * <code>maximumPercent</code> value for a service that uses either the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and has
     * tasks that use the EC2 launch type.</p>  <p>If the service uses either
     * the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment
     * types, and the tasks in the service use the Fargate launch type, the maximum
     * percent value is not used. The value is still returned when describing your
     * service.</p>
     */
    inline int GetMaximumPercent() const { return m_maximumPercent; }
    inline bool MaximumPercentHasBeenSet() const { return m_maximumPercentHasBeenSet; }
    inline void SetMaximumPercent(int value) { m_maximumPercentHasBeenSet = true; m_maximumPercent = value; }
    inline DeploymentConfiguration& WithMaximumPercent(int value) { SetMaximumPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>minimumHealthyPercent</code> represents a lower limit on the number of
     * your service's tasks that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the <code>desiredCount</code> (rounded up to the
     * nearest integer). This parameter enables you to deploy without using additional
     * cluster capacity. For example, if your service has a <code>desiredCount</code>
     * of four tasks and a <code>minimumHealthyPercent</code> of 50%, the service
     * scheduler may stop two existing tasks to free up cluster capacity before
     * starting two new tasks. </p> <p> If any tasks are unhealthy and if
     * <code>maximumPercent</code> doesn't allow the Amazon ECS scheduler to start
     * replacement tasks, the scheduler stops the unhealthy tasks one-by-one — using
     * the <code>minimumHealthyPercent</code> as a constraint — to clear up capacity to
     * launch replacement tasks. For more information about how the scheduler replaces
     * unhealthy tasks, see <a
     * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs_services.html">Amazon
     * ECS services</a>. </p> <p>For services that <i>do not</i> use a load balancer,
     * the following should be noted:</p> <ul> <li> <p>A service is considered healthy
     * if all essential containers within the tasks in the service pass their health
     * checks.</p> </li> <li> <p>If a task has no essential containers with a health
     * check defined, the service scheduler will wait for 40 seconds after a task
     * reaches a <code>RUNNING</code> state before the task is counted towards the
     * minimum healthy percent total.</p> </li> <li> <p>If a task has one or more
     * essential containers with a health check defined, the service scheduler will
     * wait for the task to reach a healthy status before counting it towards the
     * minimum healthy percent total. A task is considered healthy when all essential
     * containers within the task have passed their health checks. The amount of time
     * the service scheduler can wait for is determined by the container health check
     * settings. </p> </li> </ul> <p>For services that <i>do</i> use a load balancer,
     * the following should be noted:</p> <ul> <li> <p>If a task has no essential
     * containers with a health check defined, the service scheduler will wait for the
     * load balancer target group health check to return a healthy status before
     * counting the task towards the minimum healthy percent total.</p> </li> <li>
     * <p>If a task has an essential container with a health check defined, the service
     * scheduler will wait for both the task to reach a healthy status and the load
     * balancer target group health check to return a healthy status before counting
     * the task towards the minimum healthy percent total.</p> </li> </ul> <p>The
     * default value for a replica service for <code>minimumHealthyPercent</code> is
     * 100%. The default <code>minimumHealthyPercent</code> value for a service using
     * the <code>DAEMON</code> service schedule is 0% for the CLI, the Amazon Web
     * Services SDKs, and the APIs and 50% for the Amazon Web Services Management
     * Console.</p> <p>The minimum number of healthy tasks during a deployment is the
     * <code>desiredCount</code> multiplied by the
     * <code>minimumHealthyPercent</code>/100, rounded up to the nearest integer
     * value.</p> <p>If a service is using either the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and is
     * running tasks that use the EC2 launch type, the <b>minimum healthy percent</b>
     * value is set to the default value. The <b>minimum healthy percent</b> value is
     * used to define the lower limit on the number of the tasks in the service that
     * remain in the <code>RUNNING</code> state while the container instances are in
     * the <code>DRAINING</code> state.</p>  <p>You can't specify a custom
     * <code>minimumHealthyPercent</code> value for a service that uses either the
     * blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types
     * and has tasks that use the EC2 launch type.</p>  <p>If a service is using
     * either the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code>
     * deployment types and is running tasks that use the Fargate launch type, the
     * minimum healthy percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline int GetMinimumHealthyPercent() const { return m_minimumHealthyPercent; }
    inline bool MinimumHealthyPercentHasBeenSet() const { return m_minimumHealthyPercentHasBeenSet; }
    inline void SetMinimumHealthyPercent(int value) { m_minimumHealthyPercentHasBeenSet = true; m_minimumHealthyPercent = value; }
    inline DeploymentConfiguration& WithMinimumHealthyPercent(int value) { SetMinimumHealthyPercent(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline const DeploymentAlarms& GetAlarms() const { return m_alarms; }
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }
    template<typename AlarmsT = DeploymentAlarms>
    void SetAlarms(AlarmsT&& value) { m_alarmsHasBeenSet = true; m_alarms = std::forward<AlarmsT>(value); }
    template<typename AlarmsT = DeploymentAlarms>
    DeploymentConfiguration& WithAlarms(AlarmsT&& value) { SetAlarms(std::forward<AlarmsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The deployment strategy for the service. Choose from these valid values:</p>
     * <ul> <li> <p> <code>ROLLING</code> - When you create a service which uses the
     * rolling update (<code>ROLLING</code>) deployment strategy, the Amazon ECS
     * service scheduler replaces the currently running tasks with new tasks. The
     * number of tasks that Amazon ECS adds or removes from the service during a
     * rolling update is controlled by the service deployment configuration.</p> </li>
     * <li> <p> <code>BLUE_GREEN</code> - A blue/green deployment strategy
     * (<code>BLUE_GREEN</code>) is a release methodology that reduces downtime and
     * risk by running two identical production environments called blue and green.
     * With Amazon ECS blue/green deployments, you can validate new service revisions
     * before directing production traffic to them. This approach provides a safer way
     * to deploy changes with the ability to quickly roll back if needed.</p> </li>
     * </ul>
     */
    inline DeploymentStrategy GetStrategy() const { return m_strategy; }
    inline bool StrategyHasBeenSet() const { return m_strategyHasBeenSet; }
    inline void SetStrategy(DeploymentStrategy value) { m_strategyHasBeenSet = true; m_strategy = value; }
    inline DeploymentConfiguration& WithStrategy(DeploymentStrategy value) { SetStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period when both blue and green service revisions are running
     * simultaneously after the production traffic has shifted.</p> <p>You must provide
     * this parameter when you use the <code>BLUE_GREEN</code> deployment strategy.</p>
     */
    inline int GetBakeTimeInMinutes() const { return m_bakeTimeInMinutes; }
    inline bool BakeTimeInMinutesHasBeenSet() const { return m_bakeTimeInMinutesHasBeenSet; }
    inline void SetBakeTimeInMinutes(int value) { m_bakeTimeInMinutesHasBeenSet = true; m_bakeTimeInMinutes = value; }
    inline DeploymentConfiguration& WithBakeTimeInMinutes(int value) { SetBakeTimeInMinutes(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of deployment lifecycle hook objects to run custom logic at specific
     * stages of the deployment lifecycle.</p>
     */
    inline const Aws::Vector<DeploymentLifecycleHook>& GetLifecycleHooks() const { return m_lifecycleHooks; }
    inline bool LifecycleHooksHasBeenSet() const { return m_lifecycleHooksHasBeenSet; }
    template<typename LifecycleHooksT = Aws::Vector<DeploymentLifecycleHook>>
    void SetLifecycleHooks(LifecycleHooksT&& value) { m_lifecycleHooksHasBeenSet = true; m_lifecycleHooks = std::forward<LifecycleHooksT>(value); }
    template<typename LifecycleHooksT = Aws::Vector<DeploymentLifecycleHook>>
    DeploymentConfiguration& WithLifecycleHooks(LifecycleHooksT&& value) { SetLifecycleHooks(std::forward<LifecycleHooksT>(value)); return *this;}
    template<typename LifecycleHooksT = DeploymentLifecycleHook>
    DeploymentConfiguration& AddLifecycleHooks(LifecycleHooksT&& value) { m_lifecycleHooksHasBeenSet = true; m_lifecycleHooks.emplace_back(std::forward<LifecycleHooksT>(value)); return *this; }
    ///@}
  private:

    DeploymentCircuitBreaker m_deploymentCircuitBreaker;
    bool m_deploymentCircuitBreakerHasBeenSet = false;

    int m_maximumPercent{0};
    bool m_maximumPercentHasBeenSet = false;

    int m_minimumHealthyPercent{0};
    bool m_minimumHealthyPercentHasBeenSet = false;

    DeploymentAlarms m_alarms;
    bool m_alarmsHasBeenSet = false;

    DeploymentStrategy m_strategy{DeploymentStrategy::NOT_SET};
    bool m_strategyHasBeenSet = false;

    int m_bakeTimeInMinutes{0};
    bool m_bakeTimeInMinutesHasBeenSet = false;

    Aws::Vector<DeploymentLifecycleHook> m_lifecycleHooks;
    bool m_lifecycleHooksHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
