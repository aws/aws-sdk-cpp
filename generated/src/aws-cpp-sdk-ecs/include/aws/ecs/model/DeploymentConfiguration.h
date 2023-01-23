/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DeploymentCircuitBreaker.h>
#include <aws/ecs/model/DeploymentAlarms.h>
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
    AWS_ECS_API DeploymentConfiguration();
    AWS_ECS_API DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline const DeploymentCircuitBreaker& GetDeploymentCircuitBreaker() const{ return m_deploymentCircuitBreaker; }

    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline bool DeploymentCircuitBreakerHasBeenSet() const { return m_deploymentCircuitBreakerHasBeenSet; }

    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline void SetDeploymentCircuitBreaker(const DeploymentCircuitBreaker& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = value; }

    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline void SetDeploymentCircuitBreaker(DeploymentCircuitBreaker&& value) { m_deploymentCircuitBreakerHasBeenSet = true; m_deploymentCircuitBreaker = std::move(value); }

    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline DeploymentConfiguration& WithDeploymentCircuitBreaker(const DeploymentCircuitBreaker& value) { SetDeploymentCircuitBreaker(value); return *this;}

    /**
     *  <p>The deployment circuit breaker can only be used for services using the
     * rolling update (<code>ECS</code>) deployment type.</p>  <p>The
     * <b>deployment circuit breaker</b> determines whether a service deployment will
     * fail if the service can't reach a steady state. If deployment circuit breaker is
     * enabled, a service deployment will transition to a failed state and stop
     * launching new tasks. If rollback is enabled, when a service deployment fails,
     * the service is rolled back to the last deployment that completed
     * successfully.</p>
     */
    inline DeploymentConfiguration& WithDeploymentCircuitBreaker(DeploymentCircuitBreaker&& value) { SetDeploymentCircuitBreaker(std::move(value)); return *this;}


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
     * <code>REPLICA</code> service scheduler is 200%.</p> <p>If a service is using
     * either the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code>
     * deployment types and tasks that use the EC2 launch type, the <b>maximum
     * percent</b> value is set to the default value and is used to define the upper
     * limit on the number of the tasks in the service that remain in the
     * <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline int GetMaximumPercent() const{ return m_maximumPercent; }

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
     * <code>REPLICA</code> service scheduler is 200%.</p> <p>If a service is using
     * either the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code>
     * deployment types and tasks that use the EC2 launch type, the <b>maximum
     * percent</b> value is set to the default value and is used to define the upper
     * limit on the number of the tasks in the service that remain in the
     * <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline bool MaximumPercentHasBeenSet() const { return m_maximumPercentHasBeenSet; }

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
     * <code>REPLICA</code> service scheduler is 200%.</p> <p>If a service is using
     * either the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code>
     * deployment types and tasks that use the EC2 launch type, the <b>maximum
     * percent</b> value is set to the default value and is used to define the upper
     * limit on the number of the tasks in the service that remain in the
     * <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline void SetMaximumPercent(int value) { m_maximumPercentHasBeenSet = true; m_maximumPercent = value; }

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
     * <code>REPLICA</code> service scheduler is 200%.</p> <p>If a service is using
     * either the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code>
     * deployment types and tasks that use the EC2 launch type, the <b>maximum
     * percent</b> value is set to the default value and is used to define the upper
     * limit on the number of the tasks in the service that remain in the
     * <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline DeploymentConfiguration& WithMaximumPercent(int value) { SetMaximumPercent(value); return *this;}


    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>minimumHealthyPercent</code> represents a lower limit on the number of
     * your service's tasks that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the <code>desiredCount</code> (rounded up to the
     * nearest integer). This parameter enables you to deploy without using additional
     * cluster capacity. For example, if your service has a <code>desiredCount</code>
     * of four tasks and a <code>minimumHealthyPercent</code> of 50%, the service
     * scheduler may stop two existing tasks to free up cluster capacity before
     * starting two new tasks. </p> <p>For services that <i>do not</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>A service is
     * considered healthy if all essential containers within the tasks in the service
     * pass their health checks.</p> </li> <li> <p>If a task has no essential
     * containers with a health check defined, the service scheduler will wait for 40
     * seconds after a task reaches a <code>RUNNING</code> state before the task is
     * counted towards the minimum healthy percent total.</p> </li> <li> <p>If a task
     * has one or more essential containers with a health check defined, the service
     * scheduler will wait for the task to reach a healthy status before counting it
     * towards the minimum healthy percent total. A task is considered healthy when all
     * essential containers within the task have passed their health checks. The amount
     * of time the service scheduler can wait for is determined by the container health
     * check settings. </p> </li> </ul> <p>For services are that <i>do</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>If a task has no
     * essential containers with a health check defined, the service scheduler will
     * wait for the load balancer target group health check to return a healthy status
     * before counting the task towards the minimum healthy percent total.</p> </li>
     * <li> <p>If a task has an essential container with a health check defined, the
     * service scheduler will wait for both the task to reach a healthy status and the
     * load balancer target group health check to return a healthy status before
     * counting the task towards the minimum healthy percent total.</p> </li> </ul>
     * <p>If a service is using either the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and is running tasks that use the EC2
     * launch type, the <b>minimum healthy percent</b> value is set to the default
     * value and is used to define the lower limit on the number of the tasks in the
     * service that remain in the <code>RUNNING</code> state while the container
     * instances are in the <code>DRAINING</code> state. If a service is using either
     * the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment
     * types and is running tasks that use the Fargate launch type, the minimum healthy
     * percent value is not used, although it is returned when describing your
     * service.</p>
     */
    inline int GetMinimumHealthyPercent() const{ return m_minimumHealthyPercent; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>minimumHealthyPercent</code> represents a lower limit on the number of
     * your service's tasks that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the <code>desiredCount</code> (rounded up to the
     * nearest integer). This parameter enables you to deploy without using additional
     * cluster capacity. For example, if your service has a <code>desiredCount</code>
     * of four tasks and a <code>minimumHealthyPercent</code> of 50%, the service
     * scheduler may stop two existing tasks to free up cluster capacity before
     * starting two new tasks. </p> <p>For services that <i>do not</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>A service is
     * considered healthy if all essential containers within the tasks in the service
     * pass their health checks.</p> </li> <li> <p>If a task has no essential
     * containers with a health check defined, the service scheduler will wait for 40
     * seconds after a task reaches a <code>RUNNING</code> state before the task is
     * counted towards the minimum healthy percent total.</p> </li> <li> <p>If a task
     * has one or more essential containers with a health check defined, the service
     * scheduler will wait for the task to reach a healthy status before counting it
     * towards the minimum healthy percent total. A task is considered healthy when all
     * essential containers within the task have passed their health checks. The amount
     * of time the service scheduler can wait for is determined by the container health
     * check settings. </p> </li> </ul> <p>For services are that <i>do</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>If a task has no
     * essential containers with a health check defined, the service scheduler will
     * wait for the load balancer target group health check to return a healthy status
     * before counting the task towards the minimum healthy percent total.</p> </li>
     * <li> <p>If a task has an essential container with a health check defined, the
     * service scheduler will wait for both the task to reach a healthy status and the
     * load balancer target group health check to return a healthy status before
     * counting the task towards the minimum healthy percent total.</p> </li> </ul>
     * <p>If a service is using either the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and is running tasks that use the EC2
     * launch type, the <b>minimum healthy percent</b> value is set to the default
     * value and is used to define the lower limit on the number of the tasks in the
     * service that remain in the <code>RUNNING</code> state while the container
     * instances are in the <code>DRAINING</code> state. If a service is using either
     * the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment
     * types and is running tasks that use the Fargate launch type, the minimum healthy
     * percent value is not used, although it is returned when describing your
     * service.</p>
     */
    inline bool MinimumHealthyPercentHasBeenSet() const { return m_minimumHealthyPercentHasBeenSet; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>minimumHealthyPercent</code> represents a lower limit on the number of
     * your service's tasks that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the <code>desiredCount</code> (rounded up to the
     * nearest integer). This parameter enables you to deploy without using additional
     * cluster capacity. For example, if your service has a <code>desiredCount</code>
     * of four tasks and a <code>minimumHealthyPercent</code> of 50%, the service
     * scheduler may stop two existing tasks to free up cluster capacity before
     * starting two new tasks. </p> <p>For services that <i>do not</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>A service is
     * considered healthy if all essential containers within the tasks in the service
     * pass their health checks.</p> </li> <li> <p>If a task has no essential
     * containers with a health check defined, the service scheduler will wait for 40
     * seconds after a task reaches a <code>RUNNING</code> state before the task is
     * counted towards the minimum healthy percent total.</p> </li> <li> <p>If a task
     * has one or more essential containers with a health check defined, the service
     * scheduler will wait for the task to reach a healthy status before counting it
     * towards the minimum healthy percent total. A task is considered healthy when all
     * essential containers within the task have passed their health checks. The amount
     * of time the service scheduler can wait for is determined by the container health
     * check settings. </p> </li> </ul> <p>For services are that <i>do</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>If a task has no
     * essential containers with a health check defined, the service scheduler will
     * wait for the load balancer target group health check to return a healthy status
     * before counting the task towards the minimum healthy percent total.</p> </li>
     * <li> <p>If a task has an essential container with a health check defined, the
     * service scheduler will wait for both the task to reach a healthy status and the
     * load balancer target group health check to return a healthy status before
     * counting the task towards the minimum healthy percent total.</p> </li> </ul>
     * <p>If a service is using either the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and is running tasks that use the EC2
     * launch type, the <b>minimum healthy percent</b> value is set to the default
     * value and is used to define the lower limit on the number of the tasks in the
     * service that remain in the <code>RUNNING</code> state while the container
     * instances are in the <code>DRAINING</code> state. If a service is using either
     * the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment
     * types and is running tasks that use the Fargate launch type, the minimum healthy
     * percent value is not used, although it is returned when describing your
     * service.</p>
     */
    inline void SetMinimumHealthyPercent(int value) { m_minimumHealthyPercentHasBeenSet = true; m_minimumHealthyPercent = value; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <code>minimumHealthyPercent</code> represents a lower limit on the number of
     * your service's tasks that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the <code>desiredCount</code> (rounded up to the
     * nearest integer). This parameter enables you to deploy without using additional
     * cluster capacity. For example, if your service has a <code>desiredCount</code>
     * of four tasks and a <code>minimumHealthyPercent</code> of 50%, the service
     * scheduler may stop two existing tasks to free up cluster capacity before
     * starting two new tasks. </p> <p>For services that <i>do not</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>A service is
     * considered healthy if all essential containers within the tasks in the service
     * pass their health checks.</p> </li> <li> <p>If a task has no essential
     * containers with a health check defined, the service scheduler will wait for 40
     * seconds after a task reaches a <code>RUNNING</code> state before the task is
     * counted towards the minimum healthy percent total.</p> </li> <li> <p>If a task
     * has one or more essential containers with a health check defined, the service
     * scheduler will wait for the task to reach a healthy status before counting it
     * towards the minimum healthy percent total. A task is considered healthy when all
     * essential containers within the task have passed their health checks. The amount
     * of time the service scheduler can wait for is determined by the container health
     * check settings. </p> </li> </ul> <p>For services are that <i>do</i> use a load
     * balancer, the following should be noted:</p> <ul> <li> <p>If a task has no
     * essential containers with a health check defined, the service scheduler will
     * wait for the load balancer target group health check to return a healthy status
     * before counting the task towards the minimum healthy percent total.</p> </li>
     * <li> <p>If a task has an essential container with a health check defined, the
     * service scheduler will wait for both the task to reach a healthy status and the
     * load balancer target group health check to return a healthy status before
     * counting the task towards the minimum healthy percent total.</p> </li> </ul>
     * <p>If a service is using either the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and is running tasks that use the EC2
     * launch type, the <b>minimum healthy percent</b> value is set to the default
     * value and is used to define the lower limit on the number of the tasks in the
     * service that remain in the <code>RUNNING</code> state while the container
     * instances are in the <code>DRAINING</code> state. If a service is using either
     * the blue/green (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment
     * types and is running tasks that use the Fargate launch type, the minimum healthy
     * percent value is not used, although it is returned when describing your
     * service.</p>
     */
    inline DeploymentConfiguration& WithMinimumHealthyPercent(int value) { SetMinimumHealthyPercent(value); return *this;}


    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline const DeploymentAlarms& GetAlarms() const{ return m_alarms; }

    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline bool AlarmsHasBeenSet() const { return m_alarmsHasBeenSet; }

    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline void SetAlarms(const DeploymentAlarms& value) { m_alarmsHasBeenSet = true; m_alarms = value; }

    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline void SetAlarms(DeploymentAlarms&& value) { m_alarmsHasBeenSet = true; m_alarms = std::move(value); }

    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline DeploymentConfiguration& WithAlarms(const DeploymentAlarms& value) { SetAlarms(value); return *this;}

    /**
     * <p>Information about the CloudWatch alarms.</p>
     */
    inline DeploymentConfiguration& WithAlarms(DeploymentAlarms&& value) { SetAlarms(std::move(value)); return *this;}

  private:

    DeploymentCircuitBreaker m_deploymentCircuitBreaker;
    bool m_deploymentCircuitBreakerHasBeenSet = false;

    int m_maximumPercent;
    bool m_maximumPercentHasBeenSet = false;

    int m_minimumHealthyPercent;
    bool m_minimumHealthyPercentHasBeenSet = false;

    DeploymentAlarms m_alarms;
    bool m_alarmsHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
