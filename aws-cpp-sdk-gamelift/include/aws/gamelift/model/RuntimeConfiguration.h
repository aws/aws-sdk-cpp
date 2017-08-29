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
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{

  /**
   * <p>A collection of server process configurations that describe what processes to
   * run on each instance in a fleet. All fleets must have a run-time configuration.
   * Each instance in the fleet launches the server processes specified in the
   * run-time configuration and launches new ones as existing processes end. Each
   * instance regularly checks for an updated run-time configuration and follows the
   * new instructions. </p> <p>The run-time configuration enables the instances in a
   * fleet to run multiple processes simultaneously. Potential scenarios are as
   * follows: (1) Run multiple processes of a single game server executable to
   * maximize usage of your hosting resources. (2) Run one or more processes of
   * different build executables, such as your game server executable and a related
   * program, or two or more different versions of a game server. (3) Run multiple
   * processes of a single game server but with different launch parameters, for
   * example to run one process on each instance in debug mode.</p> <p>A Amazon
   * GameLift instance is limited to 50 processes running simultaneously. A run-time
   * configuration must specify fewer than this limit. To calculate the total number
   * of processes specified in a run-time configuration, add the values of the
   * <code>ConcurrentExecutions</code> parameter for each <code> <a>ServerProcess</a>
   * </code> object in the run-time configuration.</p> <p>Fleet-related operations
   * include:</p> <ul> <li> <p> <a>CreateFleet</a> </p> </li> <li> <p>
   * <a>ListFleets</a> </p> </li> <li> <p>Describe fleets:</p> <ul> <li> <p>
   * <a>DescribeFleetAttributes</a> </p> </li> <li> <p>
   * <a>DescribeFleetPortSettings</a> </p> </li> <li> <p>
   * <a>DescribeFleetUtilization</a> </p> </li> <li> <p>
   * <a>DescribeRuntimeConfiguration</a> </p> </li> <li> <p>
   * <a>DescribeFleetEvents</a> </p> </li> </ul> </li> <li> <p>Update fleets:</p>
   * <ul> <li> <p> <a>UpdateFleetAttributes</a> </p> </li> <li> <p>
   * <a>UpdateFleetCapacity</a> </p> </li> <li> <p> <a>UpdateFleetPortSettings</a>
   * </p> </li> <li> <p> <a>UpdateRuntimeConfiguration</a> </p> </li> </ul> </li>
   * <li> <p>Manage fleet capacity:</p> <ul> <li> <p> <a>DescribeFleetCapacity</a>
   * </p> </li> <li> <p> <a>UpdateFleetCapacity</a> </p> </li> <li> <p>
   * <a>PutScalingPolicy</a> (automatic scaling)</p> </li> <li> <p>
   * <a>DescribeScalingPolicies</a> (automatic scaling)</p> </li> <li> <p>
   * <a>DeleteScalingPolicy</a> (automatic scaling)</p> </li> <li> <p>
   * <a>DescribeEC2InstanceLimits</a> </p> </li> </ul> </li> <li> <p>
   * <a>DeleteFleet</a> </p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/RuntimeConfiguration">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API RuntimeConfiguration
  {
  public:
    RuntimeConfiguration();
    RuntimeConfiguration(const Aws::Utils::Json::JsonValue& jsonValue);
    RuntimeConfiguration& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline const Aws::Vector<ServerProcess>& GetServerProcesses() const{ return m_serverProcesses; }

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline void SetServerProcesses(const Aws::Vector<ServerProcess>& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = value; }

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline void SetServerProcesses(Aws::Vector<ServerProcess>&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = std::move(value); }

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(const Aws::Vector<ServerProcess>& value) { SetServerProcesses(value); return *this;}

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(Aws::Vector<ServerProcess>&& value) { SetServerProcesses(std::move(value)); return *this;}

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(const ServerProcess& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(value); return *this; }

    /**
     * <p>Collection of server process configurations that describe which server
     * processes to run on each instance in a fleet.</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(ServerProcess&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(std::move(value)); return *this; }


    /**
     * <p>Maximum number of game sessions with status <code>ACTIVATING</code> to allow
     * on an instance simultaneously. This setting limits the amount of instance
     * resources that can be used for new game activations at any one time.</p>
     */
    inline int GetMaxConcurrentGameSessionActivations() const{ return m_maxConcurrentGameSessionActivations; }

    /**
     * <p>Maximum number of game sessions with status <code>ACTIVATING</code> to allow
     * on an instance simultaneously. This setting limits the amount of instance
     * resources that can be used for new game activations at any one time.</p>
     */
    inline void SetMaxConcurrentGameSessionActivations(int value) { m_maxConcurrentGameSessionActivationsHasBeenSet = true; m_maxConcurrentGameSessionActivations = value; }

    /**
     * <p>Maximum number of game sessions with status <code>ACTIVATING</code> to allow
     * on an instance simultaneously. This setting limits the amount of instance
     * resources that can be used for new game activations at any one time.</p>
     */
    inline RuntimeConfiguration& WithMaxConcurrentGameSessionActivations(int value) { SetMaxConcurrentGameSessionActivations(value); return *this;}


    /**
     * <p>Maximum amount of time (in seconds) that a game session can remain in status
     * <code>ACTIVATING</code>. If the game session is not active before the timeout,
     * activation is terminated and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline int GetGameSessionActivationTimeoutSeconds() const{ return m_gameSessionActivationTimeoutSeconds; }

    /**
     * <p>Maximum amount of time (in seconds) that a game session can remain in status
     * <code>ACTIVATING</code>. If the game session is not active before the timeout,
     * activation is terminated and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline void SetGameSessionActivationTimeoutSeconds(int value) { m_gameSessionActivationTimeoutSecondsHasBeenSet = true; m_gameSessionActivationTimeoutSeconds = value; }

    /**
     * <p>Maximum amount of time (in seconds) that a game session can remain in status
     * <code>ACTIVATING</code>. If the game session is not active before the timeout,
     * activation is terminated and the game session status is changed to
     * <code>TERMINATED</code>.</p>
     */
    inline RuntimeConfiguration& WithGameSessionActivationTimeoutSeconds(int value) { SetGameSessionActivationTimeoutSeconds(value); return *this;}

  private:

    Aws::Vector<ServerProcess> m_serverProcesses;
    bool m_serverProcessesHasBeenSet;

    int m_maxConcurrentGameSessionActivations;
    bool m_maxConcurrentGameSessionActivationsHasBeenSet;

    int m_gameSessionActivationTimeoutSeconds;
    bool m_gameSessionActivationTimeoutSecondsHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
