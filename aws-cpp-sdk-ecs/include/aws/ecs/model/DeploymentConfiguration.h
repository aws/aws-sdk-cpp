/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>

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
  class AWS_ECS_API DeploymentConfiguration
  {
  public:
    DeploymentConfiguration();
    DeploymentConfiguration(Aws::Utils::Json::JsonView jsonValue);
    DeploymentConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>maximum percent</b> parameter represents an upper limit on the number of
     * tasks in a service that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state during a deployment, as a percentage of the desired
     * number of tasks (rounded down to the nearest integer), and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. This parameter enables you to define the deployment
     * batch size. For example, if your service has a desired number of four tasks and
     * a maximum percent value of 200%, the scheduler may start four new tasks before
     * stopping the four older tasks (provided that the cluster resources required to
     * do this are available). The default value for maximum percent is 200%.</p> <p>If
     * a service is using the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and tasks that use the EC2 launch type,
     * the <b>maximum percent</b> value is set to the default value and is used to
     * define the upper limit on the number of the tasks in the service that remain in
     * the <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline int GetMaximumPercent() const{ return m_maximumPercent; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>maximum percent</b> parameter represents an upper limit on the number of
     * tasks in a service that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state during a deployment, as a percentage of the desired
     * number of tasks (rounded down to the nearest integer), and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. This parameter enables you to define the deployment
     * batch size. For example, if your service has a desired number of four tasks and
     * a maximum percent value of 200%, the scheduler may start four new tasks before
     * stopping the four older tasks (provided that the cluster resources required to
     * do this are available). The default value for maximum percent is 200%.</p> <p>If
     * a service is using the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and tasks that use the EC2 launch type,
     * the <b>maximum percent</b> value is set to the default value and is used to
     * define the upper limit on the number of the tasks in the service that remain in
     * the <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline bool MaximumPercentHasBeenSet() const { return m_maximumPercentHasBeenSet; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>maximum percent</b> parameter represents an upper limit on the number of
     * tasks in a service that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state during a deployment, as a percentage of the desired
     * number of tasks (rounded down to the nearest integer), and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. This parameter enables you to define the deployment
     * batch size. For example, if your service has a desired number of four tasks and
     * a maximum percent value of 200%, the scheduler may start four new tasks before
     * stopping the four older tasks (provided that the cluster resources required to
     * do this are available). The default value for maximum percent is 200%.</p> <p>If
     * a service is using the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and tasks that use the EC2 launch type,
     * the <b>maximum percent</b> value is set to the default value and is used to
     * define the upper limit on the number of the tasks in the service that remain in
     * the <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline void SetMaximumPercent(int value) { m_maximumPercentHasBeenSet = true; m_maximumPercent = value; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>maximum percent</b> parameter represents an upper limit on the number of
     * tasks in a service that are allowed in the <code>RUNNING</code> or
     * <code>PENDING</code> state during a deployment, as a percentage of the desired
     * number of tasks (rounded down to the nearest integer), and while any container
     * instances are in the <code>DRAINING</code> state if the service contains tasks
     * using the EC2 launch type. This parameter enables you to define the deployment
     * batch size. For example, if your service has a desired number of four tasks and
     * a maximum percent value of 200%, the scheduler may start four new tasks before
     * stopping the four older tasks (provided that the cluster resources required to
     * do this are available). The default value for maximum percent is 200%.</p> <p>If
     * a service is using the blue/green (<code>CODE_DEPLOY</code>) or
     * <code>EXTERNAL</code> deployment types and tasks that use the EC2 launch type,
     * the <b>maximum percent</b> value is set to the default value and is used to
     * define the upper limit on the number of the tasks in the service that remain in
     * the <code>RUNNING</code> state while the container instances are in the
     * <code>DRAINING</code> state. If the tasks in the service use the Fargate launch
     * type, the maximum percent value is not used, although it is returned when
     * describing your service.</p>
     */
    inline DeploymentConfiguration& WithMaximumPercent(int value) { SetMaximumPercent(value); return *this;}


    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>minimum healthy percent</b> represents a lower limit on the number of
     * tasks in a service that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the desired number of tasks (rounded up to the
     * nearest integer), and while any container instances are in the
     * <code>DRAINING</code> state if the service contains tasks using the EC2 launch
     * type. This parameter enables you to deploy without using additional cluster
     * capacity. For example, if your service has a desired number of four tasks and a
     * minimum healthy percent of 50%, the scheduler may stop two existing tasks to
     * free up cluster capacity before starting two new tasks. Tasks for services that
     * <i>do not</i> use a load balancer are considered healthy if they are in the
     * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
     * balancer are considered healthy if they are in the <code>RUNNING</code> state
     * and they are reported as healthy by the load balancer. The default value for
     * minimum healthy percent is 100%.</p> <p>If a service is using the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the <b>minimum healthy percent</b> value is set to
     * the default value and is used to define the lower limit on the number of the
     * tasks in the service that remain in the <code>RUNNING</code> state while the
     * container instances are in the <code>DRAINING</code> state. If the tasks in the
     * service use the Fargate launch type, the minimum healthy percent value is not
     * used, although it is returned when describing your service.</p>
     */
    inline int GetMinimumHealthyPercent() const{ return m_minimumHealthyPercent; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>minimum healthy percent</b> represents a lower limit on the number of
     * tasks in a service that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the desired number of tasks (rounded up to the
     * nearest integer), and while any container instances are in the
     * <code>DRAINING</code> state if the service contains tasks using the EC2 launch
     * type. This parameter enables you to deploy without using additional cluster
     * capacity. For example, if your service has a desired number of four tasks and a
     * minimum healthy percent of 50%, the scheduler may stop two existing tasks to
     * free up cluster capacity before starting two new tasks. Tasks for services that
     * <i>do not</i> use a load balancer are considered healthy if they are in the
     * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
     * balancer are considered healthy if they are in the <code>RUNNING</code> state
     * and they are reported as healthy by the load balancer. The default value for
     * minimum healthy percent is 100%.</p> <p>If a service is using the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the <b>minimum healthy percent</b> value is set to
     * the default value and is used to define the lower limit on the number of the
     * tasks in the service that remain in the <code>RUNNING</code> state while the
     * container instances are in the <code>DRAINING</code> state. If the tasks in the
     * service use the Fargate launch type, the minimum healthy percent value is not
     * used, although it is returned when describing your service.</p>
     */
    inline bool MinimumHealthyPercentHasBeenSet() const { return m_minimumHealthyPercentHasBeenSet; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>minimum healthy percent</b> represents a lower limit on the number of
     * tasks in a service that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the desired number of tasks (rounded up to the
     * nearest integer), and while any container instances are in the
     * <code>DRAINING</code> state if the service contains tasks using the EC2 launch
     * type. This parameter enables you to deploy without using additional cluster
     * capacity. For example, if your service has a desired number of four tasks and a
     * minimum healthy percent of 50%, the scheduler may stop two existing tasks to
     * free up cluster capacity before starting two new tasks. Tasks for services that
     * <i>do not</i> use a load balancer are considered healthy if they are in the
     * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
     * balancer are considered healthy if they are in the <code>RUNNING</code> state
     * and they are reported as healthy by the load balancer. The default value for
     * minimum healthy percent is 100%.</p> <p>If a service is using the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the <b>minimum healthy percent</b> value is set to
     * the default value and is used to define the lower limit on the number of the
     * tasks in the service that remain in the <code>RUNNING</code> state while the
     * container instances are in the <code>DRAINING</code> state. If the tasks in the
     * service use the Fargate launch type, the minimum healthy percent value is not
     * used, although it is returned when describing your service.</p>
     */
    inline void SetMinimumHealthyPercent(int value) { m_minimumHealthyPercentHasBeenSet = true; m_minimumHealthyPercent = value; }

    /**
     * <p>If a service is using the rolling update (<code>ECS</code>) deployment type,
     * the <b>minimum healthy percent</b> represents a lower limit on the number of
     * tasks in a service that must remain in the <code>RUNNING</code> state during a
     * deployment, as a percentage of the desired number of tasks (rounded up to the
     * nearest integer), and while any container instances are in the
     * <code>DRAINING</code> state if the service contains tasks using the EC2 launch
     * type. This parameter enables you to deploy without using additional cluster
     * capacity. For example, if your service has a desired number of four tasks and a
     * minimum healthy percent of 50%, the scheduler may stop two existing tasks to
     * free up cluster capacity before starting two new tasks. Tasks for services that
     * <i>do not</i> use a load balancer are considered healthy if they are in the
     * <code>RUNNING</code> state; tasks for services that <i>do</i> use a load
     * balancer are considered healthy if they are in the <code>RUNNING</code> state
     * and they are reported as healthy by the load balancer. The default value for
     * minimum healthy percent is 100%.</p> <p>If a service is using the blue/green
     * (<code>CODE_DEPLOY</code>) or <code>EXTERNAL</code> deployment types and tasks
     * that use the EC2 launch type, the <b>minimum healthy percent</b> value is set to
     * the default value and is used to define the lower limit on the number of the
     * tasks in the service that remain in the <code>RUNNING</code> state while the
     * container instances are in the <code>DRAINING</code> state. If the tasks in the
     * service use the Fargate launch type, the minimum healthy percent value is not
     * used, although it is returned when describing your service.</p>
     */
    inline DeploymentConfiguration& WithMinimumHealthyPercent(int value) { SetMinimumHealthyPercent(value); return *this;}

  private:

    int m_maximumPercent;
    bool m_maximumPercentHasBeenSet;

    int m_minimumHealthyPercent;
    bool m_minimumHealthyPercentHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
