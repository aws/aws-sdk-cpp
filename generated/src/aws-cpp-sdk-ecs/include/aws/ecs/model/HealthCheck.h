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
   * parameter of <a href="https://docs.docker.com/engine/reference/run/">docker
   * run</a>.</p>  <p>The Amazon ECS container agent only monitors and reports
   * on the health checks specified in the task definition. Amazon ECS does not
   * monitor Docker health checks that are embedded in a container image and not
   * specified in the container definition. Health check parameters that are
   * specified in a container definition override any Docker health checks that exist
   * in the container image.</p>  <p>You can view the health status of both
   * individual containers and a task with the DescribeTasks API operation or when
   * viewing the task details in the console.</p> <p>The health check is designed to
   * make sure that your containers survive agent restarts, upgrades, or temporary
   * unavailability.</p> <p>The following describes the possible
   * <code>healthStatus</code> values for a container:</p> <ul> <li> <p>
   * <code>HEALTHY</code>-The container health check has passed successfully.</p>
   * </li> <li> <p> <code>UNHEALTHY</code>-The container health check has failed.</p>
   * </li> <li> <p> <code>UNKNOWN</code>-The container health check is being
   * evaluated, there's no container health check defined, or Amazon ECS doesn't have
   * the health status of the container.</p> </li> </ul> <p>The following describes
   * the possible <code>healthStatus</code> values based on the container health
   * checker status of essential containers in the task with the following priority
   * order (high to low):</p> <ul> <li> <p> <code>UNHEALTHY</code>-One or more
   * essential containers have failed their health check.</p> </li> <li> <p>
   * <code>UNKNOWN</code>-Any essential container running within the task is in an
   * <code>UNKNOWN</code> state and no other essential containers have an
   * <code>UNHEALTHY</code> state.</p> </li> <li> <p> <code>HEALTHY</code>-All
   * essential containers within the task have passed their health checks.</p> </li>
   * </ul> <p>Consider the following task health example with 2 containers.</p> <ul>
   * <li> <p>If Container1 is <code>UNHEALTHY</code> and Container2 is
   * <code>UNKNOWN</code>, the task health is <code>UNHEALTHY</code>.</p> </li> <li>
   * <p>If Container1 is <code>UNHEALTHY</code> and Container2 is
   * <code>HEALTHY</code>, the task health is <code>UNHEALTHY</code>.</p> </li> <li>
   * <p>If Container1 is <code>HEALTHY</code> and Container2 is <code>UNKNOWN</code>,
   * the task health is <code>UNKNOWN</code>.</p> </li> <li> <p>If Container1 is
   * <code>HEALTHY</code> and Container2 is <code>HEALTHY</code>, the task health is
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
   * the service scheduler will replace it.</p> <p>The following are notes about
   * container health check support:</p> <ul> <li> <p>When the Amazon ECS agent
   * cannot connect to the Amazon ECS service, the service reports the container as
   * <code>UNHEALTHY</code>. </p> </li> <li> <p>The health check statuses are the
   * "last heard from" response from the Amazon ECS agent. There are no assumptions
   * made about the status of the container health checks.</p> </li> <li>
   * <p>Container health checks require version 1.17.0 or greater of the Amazon ECS
   * container agent. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
   * the Amazon ECS container agent</a>.</p> </li> <li> <p>Container health checks
   * are supported for Fargate tasks if you're using platform version
   * <code>1.1.0</code> or greater. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">Fargate
   * platform versions</a>.</p> </li> <li> <p>Container health checks aren't
   * supported for tasks that are part of a service that's configured to use a
   * Classic Load Balancer.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/HealthCheck">AWS API
   * Reference</a></p>
   */
  class HealthCheck
  {
  public:
    AWS_ECS_API HealthCheck();
    AWS_ECS_API HealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API HealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;


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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

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
     * failure. For more information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The time period in seconds between each health check execution. You may
     * specify between 5 and 300 seconds. The default value is 30 seconds.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The time period in seconds between each health check execution. You may
     * specify between 5 and 300 seconds. The default value is 30 seconds.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time period in seconds between each health check execution. You may
     * specify between 5 and 300 seconds. The default value is 30 seconds.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time period in seconds between each health check execution. You may
     * specify between 5 and 300 seconds. The default value is 30 seconds.</p>
     */
    inline HealthCheck& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. You may specify between 2 and 60 seconds. The default
     * value is 5.</p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. You may specify between 2 and 60 seconds. The default
     * value is 5.</p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. You may specify between 2 and 60 seconds. The default
     * value is 5.</p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The time period in seconds to wait for a health check to succeed before it is
     * considered a failure. You may specify between 2 and 60 seconds. The default
     * value is 5.</p>
     */
    inline HealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. You may specify between 1 and 10 retries. The default
     * value is 3.</p>
     */
    inline int GetRetries() const{ return m_retries; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. You may specify between 1 and 10 retries. The default
     * value is 3.</p>
     */
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. You may specify between 1 and 10 retries. The default
     * value is 3.</p>
     */
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. You may specify between 1 and 10 retries. The default
     * value is 3.</p>
     */
    inline HealthCheck& WithRetries(int value) { SetRetries(value); return *this;}


    /**
     * <p>The optional grace period to provide containers time to bootstrap before
     * failed health checks count towards the maximum number of retries. You can
     * specify between 0 and 300 seconds. By default, the <code>startPeriod</code> is
     * off.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline int GetStartPeriod() const{ return m_startPeriod; }

    /**
     * <p>The optional grace period to provide containers time to bootstrap before
     * failed health checks count towards the maximum number of retries. You can
     * specify between 0 and 300 seconds. By default, the <code>startPeriod</code> is
     * off.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }

    /**
     * <p>The optional grace period to provide containers time to bootstrap before
     * failed health checks count towards the maximum number of retries. You can
     * specify between 0 and 300 seconds. By default, the <code>startPeriod</code> is
     * off.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }

    /**
     * <p>The optional grace period to provide containers time to bootstrap before
     * failed health checks count towards the maximum number of retries. You can
     * specify between 0 and 300 seconds. By default, the <code>startPeriod</code> is
     * off.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline HealthCheck& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;

    int m_retries;
    bool m_retriesHasBeenSet = false;

    int m_startPeriod;
    bool m_startPeriodHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
