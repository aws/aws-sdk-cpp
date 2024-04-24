/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
namespace GameLift
{
namespace Model
{

  /**
   * <p>Instructions on when and how to check the health of a container in a
   * container fleet. When health check properties are set in a container definition,
   * they override any Docker health checks in the container image. For more
   * information on container health checks, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_HealthCheck.html#ECS-Type-HealthCheck-command">HealthCheck
   * command</a> in the <i>Amazon Elastic Container Service API</i>.</p> <p>The
   * following example instructions tell the container to wait 100 seconds after
   * launch before counting failed health checks, then initiate the health check
   * command every 60 seconds. After issuing the health check command, wait 10
   * seconds for it to succeed. If it fails, retry the command 3 times before
   * considering the container to be unhealthy.</p> <p> <code>{"Command": [
   * "CMD-SHELL", "ps cax | grep "processmanager" || exit 1" ], "Interval": 300,
   * "Timeout": 30, "Retries": 5, "StartPeriod": 100 }</code> </p> <p> <b>Part
   * of:</b> <a>ContainerDefinition$HealthCheck</a> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ContainerHealthCheck">AWS
   * API Reference</a></p>
   */
  class ContainerHealthCheck
  {
  public:
    AWS_GAMELIFT_API ContainerHealthCheck();
    AWS_GAMELIFT_API ContainerHealthCheck(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ContainerHealthCheck& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline ContainerHealthCheck& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline ContainerHealthCheck& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline ContainerHealthCheck& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline ContainerHealthCheck& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }

    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline ContainerHealthCheck& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }


    /**
     * <p>The time period (in seconds) between each health check.</p>
     */
    inline int GetInterval() const{ return m_interval; }

    /**
     * <p>The time period (in seconds) between each health check.</p>
     */
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }

    /**
     * <p>The time period (in seconds) between each health check.</p>
     */
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }

    /**
     * <p>The time period (in seconds) between each health check.</p>
     */
    inline ContainerHealthCheck& WithInterval(int value) { SetInterval(value); return *this;}


    /**
     * <p>The time period (in seconds) to wait for a health check to succeed before a
     * failed health check is counted. </p>
     */
    inline int GetTimeout() const{ return m_timeout; }

    /**
     * <p>The time period (in seconds) to wait for a health check to succeed before a
     * failed health check is counted. </p>
     */
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }

    /**
     * <p>The time period (in seconds) to wait for a health check to succeed before a
     * failed health check is counted. </p>
     */
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }

    /**
     * <p>The time period (in seconds) to wait for a health check to succeed before a
     * failed health check is counted. </p>
     */
    inline ContainerHealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}


    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The first run of the command does not count as a
     * retry.</p>
     */
    inline int GetRetries() const{ return m_retries; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The first run of the command does not count as a
     * retry.</p>
     */
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The first run of the command does not count as a
     * retry.</p>
     */
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }

    /**
     * <p>The number of times to retry a failed health check before the container is
     * considered unhealthy. The first run of the command does not count as a
     * retry.</p>
     */
    inline ContainerHealthCheck& WithRetries(int value) { SetRetries(value); return *this;}


    /**
     * <p>The optional grace period (in seconds) to give a container time to bootstrap
     * before the first failed health check counts toward the number of retries.</p>
     */
    inline int GetStartPeriod() const{ return m_startPeriod; }

    /**
     * <p>The optional grace period (in seconds) to give a container time to bootstrap
     * before the first failed health check counts toward the number of retries.</p>
     */
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }

    /**
     * <p>The optional grace period (in seconds) to give a container time to bootstrap
     * before the first failed health check counts toward the number of retries.</p>
     */
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }

    /**
     * <p>The optional grace period (in seconds) to give a container time to bootstrap
     * before the first failed health check counts toward the number of retries.</p>
     */
    inline ContainerHealthCheck& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}

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
} // namespace GameLift
} // namespace Aws
