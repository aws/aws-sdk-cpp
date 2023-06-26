/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/gamelift/model/ServerProcess.h>
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
   * <p>A collection of server process configurations that describe the set of
   * processes to run on each instance in a fleet. Server processes run either an
   * executable in a custom game build or a Realtime Servers script. Amazon GameLift
   * launches the configured processes, manages their life cycle, and replaces them
   * as needed. Each instance checks regularly for an updated runtime configuration.
   * </p> <p>A Amazon GameLift instance is limited to 50 processes running
   * concurrently. To calculate the total number of processes in a runtime
   * configuration, add the values of the <code>ConcurrentExecutions</code> parameter
   * for each server process. Learn more about <a
   * href="https://docs.aws.amazon.com/gamelift/latest/developerguide/fleets-multiprocess.html">
   * Running Multiple Processes on a Fleet</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class RuntimeConfiguration
  {
  public:
    AWS_GAMELIFT_API RuntimeConfiguration();
    AWS_GAMELIFT_API RuntimeConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API RuntimeConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline const Aws::Vector<ServerProcess>& GetServerProcesses() const{ return m_serverProcesses; }

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline bool ServerProcessesHasBeenSet() const { return m_serverProcessesHasBeenSet; }

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline void SetServerProcesses(const Aws::Vector<ServerProcess>& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = value; }

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline void SetServerProcesses(Aws::Vector<ServerProcess>&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = std::move(value); }

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(const Aws::Vector<ServerProcess>& value) { SetServerProcesses(value); return *this;}

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(Aws::Vector<ServerProcess>&& value) { SetServerProcesses(std::move(value)); return *this;}

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(const ServerProcess& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(value); return *this; }

    /**
     * <p>A collection of server process configurations that identify what server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(ServerProcess&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(std::move(value)); return *this; }


    /**
     * <p>The number of game sessions in status <code>ACTIVATING</code> to allow on an
     * instance. This setting limits the instance resources that can be used for new
     * game activations at any one time.</p>
     */
    inline int GetMaxConcurrentGameSessionActivations() const{ return m_maxConcurrentGameSessionActivations; }

    /**
     * <p>The number of game sessions in status <code>ACTIVATING</code> to allow on an
     * instance. This setting limits the instance resources that can be used for new
     * game activations at any one time.</p>
     */
    inline bool MaxConcurrentGameSessionActivationsHasBeenSet() const { return m_maxConcurrentGameSessionActivationsHasBeenSet; }

    /**
     * <p>The number of game sessions in status <code>ACTIVATING</code> to allow on an
     * instance. This setting limits the instance resources that can be used for new
     * game activations at any one time.</p>
     */
    inline void SetMaxConcurrentGameSessionActivations(int value) { m_maxConcurrentGameSessionActivationsHasBeenSet = true; m_maxConcurrentGameSessionActivations = value; }

    /**
     * <p>The number of game sessions in status <code>ACTIVATING</code> to allow on an
     * instance. This setting limits the instance resources that can be used for new
     * game activations at any one time.</p>
     */
    inline RuntimeConfiguration& WithMaxConcurrentGameSessionActivations(int value) { SetMaxConcurrentGameSessionActivations(value); return *this;}


    /**
     * <p>The maximum amount of time (in seconds) allowed to launch a new game session
     * and have it report ready to host players. During this time, the game session is
     * in status <code>ACTIVATING</code>. If the game session does not become active
     * before the timeout, it is ended and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline int GetGameSessionActivationTimeoutSeconds() const{ return m_gameSessionActivationTimeoutSeconds; }

    /**
     * <p>The maximum amount of time (in seconds) allowed to launch a new game session
     * and have it report ready to host players. During this time, the game session is
     * in status <code>ACTIVATING</code>. If the game session does not become active
     * before the timeout, it is ended and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline bool GameSessionActivationTimeoutSecondsHasBeenSet() const { return m_gameSessionActivationTimeoutSecondsHasBeenSet; }

    /**
     * <p>The maximum amount of time (in seconds) allowed to launch a new game session
     * and have it report ready to host players. During this time, the game session is
     * in status <code>ACTIVATING</code>. If the game session does not become active
     * before the timeout, it is ended and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline void SetGameSessionActivationTimeoutSeconds(int value) { m_gameSessionActivationTimeoutSecondsHasBeenSet = true; m_gameSessionActivationTimeoutSeconds = value; }

    /**
     * <p>The maximum amount of time (in seconds) allowed to launch a new game session
     * and have it report ready to host players. During this time, the game session is
     * in status <code>ACTIVATING</code>. If the game session does not become active
     * before the timeout, it is ended and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline RuntimeConfiguration& WithGameSessionActivationTimeoutSeconds(int value) { SetGameSessionActivationTimeoutSeconds(value); return *this;}

  private:

    Aws::Vector<ServerProcess> m_serverProcesses;
    bool m_serverProcessesHasBeenSet = false;

    int m_maxConcurrentGameSessionActivations;
    bool m_maxConcurrentGameSessionActivationsHasBeenSet = false;

    int m_gameSessionActivationTimeoutSeconds;
    bool m_gameSessionActivationTimeoutSecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
