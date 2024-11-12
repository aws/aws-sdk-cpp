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
   * <p>Instructions on when and how to check the health of a support container in a
   * container fleet. These properties override any Docker health checks that are set
   * in the container image. For more information on container health checks, see <a
   * href="https://docs.aws.amazon.com/AmazonECS/latest/APIReference/API_HealthCheck.html#ECS-Type-HealthCheck-command">HealthCheck
   * command</a> in the <i>Amazon Elastic Container Service API</i>. Game server
   * containers don't have a health check parameter; Amazon GameLift automatically
   * handles health checks for these containers.</p> <p>The following example
   * instructs the container to initiate a health check command every 60 seconds and
   * wait 10 seconds for it to succeed. If it fails, retry the command 3 times before
   * flagging the container as unhealthy. It also tells the container to wait 100
   * seconds after launch before counting failed health checks.</p> <p>
   * <code>{"Command": [ "CMD-SHELL", "ps cax | grep "processmanager" || exit 1" ],
   * "Interval": 60, "Timeout": 10, "Retries": 3, "StartPeriod": 100 }</code> </p>
   * <p> <b>Part of:</b> <a>SupportContainerDefinition</a>,
   * <a>SupportContainerDefinitionInput</a> </p><p><h3>See Also:</h3>   <a
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


    ///@{
    /**
     * <p>A string array that specifies the command that the container runs to
     * determine if it's healthy.</p>
     */
    inline const Aws::Vector<Aws::String>& GetCommand() const{ return m_command; }
    inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
    inline void SetCommand(const Aws::Vector<Aws::String>& value) { m_commandHasBeenSet = true; m_command = value; }
    inline void SetCommand(Aws::Vector<Aws::String>&& value) { m_commandHasBeenSet = true; m_command = std::move(value); }
    inline ContainerHealthCheck& WithCommand(const Aws::Vector<Aws::String>& value) { SetCommand(value); return *this;}
    inline ContainerHealthCheck& WithCommand(Aws::Vector<Aws::String>&& value) { SetCommand(std::move(value)); return *this;}
    inline ContainerHealthCheck& AddCommand(const Aws::String& value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    inline ContainerHealthCheck& AddCommand(Aws::String&& value) { m_commandHasBeenSet = true; m_command.push_back(std::move(value)); return *this; }
    inline ContainerHealthCheck& AddCommand(const char* value) { m_commandHasBeenSet = true; m_command.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period (in seconds) between each health check.</p>
     */
    inline int GetInterval() const{ return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    inline void SetInterval(int value) { m_intervalHasBeenSet = true; m_interval = value; }
    inline ContainerHealthCheck& WithInterval(int value) { SetInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times to retry a failed health check before flagging the
     * container unhealthy. The first run of the command does not count as a retry.</p>
     */
    inline int GetRetries() const{ return m_retries; }
    inline bool RetriesHasBeenSet() const { return m_retriesHasBeenSet; }
    inline void SetRetries(int value) { m_retriesHasBeenSet = true; m_retries = value; }
    inline ContainerHealthCheck& WithRetries(int value) { SetRetries(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The optional grace period (in seconds) to give a container time to bootstrap
     * before the first failed health check counts toward the number of retries.</p>
     */
    inline int GetStartPeriod() const{ return m_startPeriod; }
    inline bool StartPeriodHasBeenSet() const { return m_startPeriodHasBeenSet; }
    inline void SetStartPeriod(int value) { m_startPeriodHasBeenSet = true; m_startPeriod = value; }
    inline ContainerHealthCheck& WithStartPeriod(int value) { SetStartPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time period (in seconds) to wait for a health check to succeed before
     * counting a failed health check. </p>
     */
    inline int GetTimeout() const{ return m_timeout; }
    inline bool TimeoutHasBeenSet() const { return m_timeoutHasBeenSet; }
    inline void SetTimeout(int value) { m_timeoutHasBeenSet = true; m_timeout = value; }
    inline ContainerHealthCheck& WithTimeout(int value) { SetTimeout(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_command;
    bool m_commandHasBeenSet = false;

    int m_interval;
    bool m_intervalHasBeenSet = false;

    int m_retries;
    bool m_retriesHasBeenSet = false;

    int m_startPeriod;
    bool m_startPeriodHasBeenSet = false;

    int m_timeout;
    bool m_timeoutHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
