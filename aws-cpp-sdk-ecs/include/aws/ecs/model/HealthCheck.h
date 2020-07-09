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
   * the image's Dockerfile).</p> <p>You can view the health status of both
   * individual containers and a task with the DescribeTasks API operation or when
   * viewing the task details in the console.</p> <p>The following describes the
   * possible <code>healthStatus</code> values for a container:</p> <ul> <li> <p>
   * <code>HEALTHY</code>-The container health check has passed successfully.</p>
   * </li> <li> <p> <code>UNHEALTHY</code>-The container health check has failed.</p>
   * </li> <li> <p> <code>UNKNOWN</code>-The container health check is being
   * evaluated or there is no container health check defined.</p> </li> </ul> <p>The
   * following describes the possible <code>healthStatus</code> values for a task.
   * The container health check status of nonessential containers do not have an
   * effect on the health status of a task.</p> <ul> <li> <p>
   * <code>HEALTHY</code>-All essential containers within the task have passed their
   * health checks.</p> </li> <li> <p> <code>UNHEALTHY</code>-One or more essential
   * containers have failed their health check.</p> </li> <li> <p>
   * <code>UNKNOWN</code>-The essential containers within the task are still having
   * their health checks evaluated or there are no container health checks
   * defined.</p> </li> </ul> <p>If a task is run manually, and not as part of a
   * service, the task will continue its lifecycle regardless of its health status.
   * For tasks that are part of a service, if the task reports as unhealthy then the
   * task will be stopped and the service scheduler will replace it.</p> <p>The
   * following are notes about container health check support:</p> <ul> <li>
   * <p>Container health checks require version 1.17.0 or greater of the Amazon ECS
   * container agent. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/ecs-agent-update.html">Updating
   * the Amazon ECS Container Agent</a>.</p> </li> <li> <p>Container health checks
   * are supported for Fargate tasks if you are using platform version 1.1.0 or
   * greater. For more information, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/developerguide/platform_versions.html">AWS
   * Fargate Platform Versions</a>.</p> </li> <li> <p>Container health checks are not
   * supported for tasks that are part of a service that is configured to use a
   * Classic Load Balancer.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/HealthCheck">AWS API
   * Reference</a></p>
   */
  class AWS_ECS_API HealthCheck
  {
  public:
    HealthCheck();
    HealthCheck(Aws::Utils::Json::JsonView jsonValue);
    HealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
     * href="https://docs.docker.com/engine/api/v1.35/#operation/ContainerCreate">Create
     * a container</a> section of the <a
     * href="https://docs.docker.com/engine/api/v1.35/">Docker Remote API</a>.</p>
     */
    inline HealthCheck& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>A string array representing the command that the container runs to determine
     * if it is healthy. The string array must start with <code>CMD</code> to execute
     * the command arguments directly, or <code>CMD-SHELL</code> to run the command
     * with the container's default shell. For example:</p> <p> <code>[ "CMD-SHELL",
     * "curl -f http://localhost/ || exit 1" ]</code> </p> <p>An exit code of 0
     * indicates success, and non-zero exit code indicates failure. For more
     * information, see <code>HealthCheck</code> in the <a
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
     * <p>The optional grace period within which to provide containers time to
     * bootstrap before failed health checks count towards the maximum number of
     * retries. You may specify between 0 and 300 seconds. The <code>startPeriod</code>
     * is disabled by default.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline int GetStartPeriod() const{ return m_startPeriod; }

    /**
     * <p>The optional grace period within which to provide containers time to
     * bootstrap before failed health checks count towards the maximum number of
     * retries. You may specify between 0 and 300 seconds. The <code>startPeriod</code>
     * is disabled by default.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }

    /**
     * <p>The optional grace period within which to provide containers time to
     * bootstrap before failed health checks count towards the maximum number of
     * retries. You may specify between 0 and 300 seconds. The <code>startPeriod</code>
     * is disabled by default.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }

    /**
     * <p>The optional grace period within which to provide containers time to
     * bootstrap before failed health checks count towards the maximum number of
     * retries. You may specify between 0 and 300 seconds. The <code>startPeriod</code>
     * is disabled by default.</p>  <p>If a health check succeeds within the
     * <code>startPeriod</code>, then the container is considered healthy and any
     * subsequent failures count toward the maximum number of retries.</p> 
     */
    inline HealthCheck& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet;

    int m_interval;
    bool m_intervalHasBeenSet;

    int m_timeout;
    bool m_timeoutHasBeenSet;

    int m_retries;
    bool m_retriesHasBeenSet;

    int m_startPeriod;
    bool m_startPeriodHasBeenSet;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
