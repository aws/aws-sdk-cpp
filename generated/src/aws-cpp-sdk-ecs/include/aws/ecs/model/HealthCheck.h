/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>An object representing a container health check. Health check parameters that
   * are specified in a container definition override any Docker health checks that
   * exist in the container image (such as those specified in a parent image or from
   * the image's Dockerfile). This configuration maps to the <code>HEALTHCHECK</code>
   * parameter of docker run.</p>  <p>The Amazon ECS container agent only
   * monitors and reports on the health checks specified in the task definition.
   * Amazon ECS does not monitor Docker health checks that are embedded in a
   * container image and not specified in the container definition. Health check
   * parameters that are specified in a container definition override any Docker
   * health checks that exist in the container image.</p>  <p>You can view the
   * health status of both individual containers and a task with the DescribeTasks
   * API operation or when viewing the task details in the console.</p> <p>The health
   * check is designed to make sure that your containers survive agent restarts,
   * upgrades, or temporary unavailability.</p> <p>Amazon ECS performs health checks
   * on containers with the default that launched the container instance or the
   * task.</p> <p>The following describes the possible <code>healthStatus</code>
   * values for a container:</p> <ul> <li> <p> <code>HEALTHY</code>-The container
   * health check has passed successfully.</p> </li> <li> <p>
   * <code>UNHEALTHY</code>-The container health check has failed.</p> </li> <li> <p>
   * <code>UNKNOWN</code>-The container health check is being evaluated, there's no
   * container health check defined, or Amazon ECS doesn't have the health status of
   * the container.</p> </li> </ul> <p>The following describes the possible
   * <code>healthStatus</code> values based on the container health checker status of
   * essential containers in the task with the following priority order (high to
   * low):</p> <ul> <li> <p> <code>UNHEALTHY</code>-One or more essential containers
   * have failed their health check.</p> </li> <li> <p> <code>UNKNOWN</code>-Any
   * essential container running within the task is in an <code>UNKNOWN</code> state
   * and no other essential containers have an <code>UNHEALTHY</code> state.</p>
   * </li> <li> <p> <code>HEALTHY</code>-All essential containers within the task
   * have passed their health checks.</p> </li> </ul> <p>Consider the following task
   * health example with 2 containers.</p> <ul> <li> <p>If Container1 is
   * <code>UNHEALTHY</code> and Container2 is <code>UNKNOWN</code>, the task health
   * is <code>UNHEALTHY</code>.</p> </li> <li> <p>If Container1 is
   * <code>UNHEALTHY</code> and Container2 is <code>HEALTHY</code>, the task health
   * is <code>UNHEALTHY</code>.</p> </li> <li> <p>If Container1 is
   * <code>HEALTHY</code> and Container2 is <code>UNKNOWN</code>, the task health is
   * <code>UNKNOWN</code>.</p> </li> <li> <p>If Container1 is <code>HEALTHY</code>
   * and Container2 is <code>HEALTHY</code>, the task health is
   * <code>HEALTHY</code>.</p> </li> </ul> <p>Consider the following task health
   * example with 3 containers.</p> <ul> <li> <p>If Container1 is
   * <code>UNHEALTHY</code> and Container2 is <code>UNKNOWN</code>, and Container3 is
   * <code>UNKNOWN</code>, the task health is <code>UNHEALTHY</code>.</p> </li> <li>
   * <p>If Container1 is <code>UNHEALTHY</code> and Container2 is
   * <code>UNKNOWN</code>, and Container3 is <code>HEALTHY</code>, the task health is
   * <code>UNHEALTHY</code>.</p> </li> <li> <p>If Container1 is
   * <code>UNHEALTHY</code> and Container2 is <code>HEALTHY</code>, and Container3 is
   * <code>HEALTHY</code>, the task health is <code>UNHEALTHY</code>.</p> </li> <li>
   * <p>If Container1 is <code>HEALTHY</code> and Container2 is <code>UNKNOWN</code>,
   * and Container3 is <code>HEALTHY</code>, the task health is
   * <code>UNKNOWN</code>.</p> </li> <li> <p>If Container1 is <code>HEALTHY</code>
   * and Container2 is <code>UNKNOWN</code>, and Container3 is <code>UNKNOWN</code>,
   * the task health is <code>UNKNOWN</code>.</p> </li> <li> <p>If Container1 is
   * <code>HEALTHY</code> and Container2 is <code>HEALTHY</code>, and Container3 is
   * <code>HEALTHY</code>, the task health is <code>HEALTHY</code>.</p> </li> </ul>
   * <p>If a task is run manually, and not as part of a service, the task will
   * continue its lifecycle regardless of its health status. For tasks that are part
   * of a service, if the task reports as unhealthy then the task will be stopped and
   * the service scheduler will replace it.</p> <p>When a container health check
   * fails for a task that is part of a service, the following process occurs:</p>
   * <ol> <li> <p>The task is marked as <code>UNHEALTHY</code>.</p> </li> <li> <p>The
   * unhealthy task will be stopped, and during the stopping process, it will go
   * through the following states:</p> <ul> <li> <p> <code>DEACTIVATING</code> - In
   * this state, Amazon ECS performs additional steps before stopping the task. For
   * example, for tasks that are part of services configured to use Elastic Load
   * Balancing target groups, target groups will be deregistered in this state.</p>
   * </li> <li> <p> <code>STOPPING</code> - The task is in the process of being
   * stopped.</p> </li> <li> <p> <code>DEPROVISIONING</code> - Resources associated
   * with the task are being cleaned up.</p> </li> <li> <p> <code>STOPPED</code> -
   * The task has been completely stopped.</p> </li> </ul> </li> <li> <p>After the
   * old task stops, a new task will be launched to ensure service operation, and the
   * new task will go through the following lifecycle:</p> <ul> <li> <p>
   * <code>PROVISIONING</code> - Resources required for the task are being
   * provisioned.</p> </li> <li> <p> <code>PENDING</code> - The task is waiting to be
   * placed on a container instance.</p> </li> <li> <p> <code>ACTIVATING</code> - In
   * this state, Amazon ECS pulls container images, creates containers, configures
   * task networking, registers load balancer target groups, and configures service
   * discovery status.</p> </li> <li> <p> <code>RUNNING</code> - The task is running
   * and performing its work.</p> </li> </ul> </li> </ol> <p>For more detailed
   * information about task lifecycle states, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/task-lifecycle-explanation.html">Task
   * lifecycle</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p> <p>The following are notes about container health check
   * support:</p> <ul> <li> <p>If the Amazon ECS container agent becomes disconnected
   * from the Amazon ECS service, this won't cause a container to transition to an
   * <code>UNHEALTHY</code> status. This is by design, to ensure that containers
   * remain running during agent restarts or temporary unavailability. The health
   * check status is the "last heard from" response from the Amazon ECS agent, so if
   * the container was considered <code>HEALTHY</code> prior to the disconnect, that
   * status will remain until the agent reconnects and another health check occurs.
   * There are no assumptions made about the status of the container health
   * checks.</p> </li> <li> <p>Container health checks require version
   * <code>1.17.0</code> or greater of the Amazon ECS container agent. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
   * the Amazon ECS container agent</a>.</p> </li> <li> <p>Container health checks
   * are supported for Fargate tasks if you're using platform version
   * <code>1.1.0</code> or greater. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
   * platform versions</a>.</p> </li> <li> <p>Container health checks aren't
   * supported for tasks that are part of a service that's configured to use a
   * Classic Load Balancer.</p> </li> </ul> <p>For an example of how to specify a
   * task definition with multiple containers where container dependency is
   * specified, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/example_task_definitions.html#example_task_definition-containerdependency">Container
   * dependency</a> in the <i>Amazon Elastic Container Service Developer
   * Guide</i>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/HealthCheck">AWS API
   * Reference</a></p>
   */
  class HealthCheck
  {
  public:
    AWS_ECS_API HealthCheck() = default;
    AWS_ECS_API HealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API HealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to run the
     * command arguments directly, or <code>CMD-SHELL</code> to run the command with
     * the container's default shell. </p> <p> When you use the Amazon Web Services
     * Management Console JSON panel, the Command Line Interface, or the APIs, enclose
     * the list of commands in double quotes and brackets.</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>You don't include the
     * double quotes and brackets when you use the Amazon Web Services Management
     * Console.</p> <p> <code> CMD-SHELL, curl -f http://localhost/ || exit 1</code>
     * </p> <p>An exit code of 0 indicates success, and non-zero exit code indicates
     * failure. For more information, see <code>HealthCheck</code> in the docker
     * container create command.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    template<typename CommandT = Aws::Vector<Aws::String>>
    void SetCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command = std::forward<CommandT>(value); }
    template<typename CommandT = Aws::Vector<Aws::String>>
    HealthCheck& WithCommand(CommandT&& value) { SetCommand(std::forward<CommandT>(value)); return *this;}
    template<typename CommandT = Aws::String>
    HealthCheck& AddCommand(CommandT&& value) { m_commandHasBeenSet = true; m_command.emplace_back(std::forward<CommandT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period in seconds between each health check execution. You may
     * specify between 5 and 300 seconds. The default value is 30 seconds. This value
     * applies only when you specify a <code>command</code>. </p>
     */
    inline int GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline HealthCheck& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. You may specify between 2 and 60 seconds. The default
     * value is 5. This value applies only when you specify a <code>command</code>.
     * </p>
     */
    inline int GetTimeout() const { return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline HealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. You may specify between 1 and 10 retries. The default
     * value is 3. This value applies only when you specify a <code>command</code>.
     * </p>
     */
    inline int GetRetries() const { return m_retries; }
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }
    inline HealthCheck& WithRetries(int value) { SetRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional grace period to provide containers time to bootstrap before
     * failed health checks count towards the maximum number of retries. You can
     * specify between 0 and 300 seconds. By default, the <code>startPeriod</code> is
     * off. This value applies only when you specify a <code>command</code>. </p>
     *  <p>If a health check succeeds within the <code>startPeriod</code>, then
     * the container is considered healthy and any subsequent failures count toward the
     * maximum number of retries.</p> 
     */
    inline int GetStartPeriod() const { return m_startPeriod; }
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }
    inline HealthCheck& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_interval{0};
    bool m_intervalHasBeenSet = false;

    int m_timeout{0};
    bool m_timeoutHasBeenSet = false;

    int m_retries{0};
    bool m_retriesHasBeenSet = false;

    int m_startPeriod{0};
    bool m_startPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
