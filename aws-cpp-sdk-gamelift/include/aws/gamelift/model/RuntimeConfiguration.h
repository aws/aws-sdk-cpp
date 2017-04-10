/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
   * <p>Collection of server process configurations that describe what processes
   * should be run on each instance in a fleet. An instance can launch and maintain
   * multiple server processes based on the runtime configuration; it regularly
   * checks for an updated runtime configuration and starts new server processes to
   * match the latest version.</p> <p>The key purpose of a runtime configuration with
   * multiple server process configurations is to be able to run more than one kind
   * of game server in a single fleet. You can include configurations for more than
   * one server executable in order to run two or more different programs to run on
   * the same instance. This option might be useful, for example, to run more than
   * one version of your game server on the same fleet. Another option is to specify
   * configurations for the same server executable but with different launch
   * parameters.</p> <p>A Amazon GameLift instance is limited to 50 processes running
   * simultaneously. To calculate the total number of processes specified in a
   * runtime configuration, add the values of the <code>ConcurrentExecutions</code>
   * parameter for each <code> <a>ServerProcess</a> </code> object in the runtime
   * configuration.</p><p><h3>See Also:</h3>   <a
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
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline const Aws::Vector<ServerProcess>& GetServerProcesses() const{ return m_serverProcesses; }

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline void SetServerProcesses(const Aws::Vector<ServerProcess>& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = value; }

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline void SetServerProcesses(Aws::Vector<ServerProcess>&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses = std::move(value); }

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(const Aws::Vector<ServerProcess>& value) { SetServerProcesses(value); return *this;}

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline RuntimeConfiguration& WithServerProcesses(Aws::Vector<ServerProcess>&& value) { SetServerProcesses(std::move(value)); return *this;}

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(const ServerProcess& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(value); return *this; }

    /**
     * <p>Collection of server process configurations describing what server processes
     * to run on each instance in a fleet</p>
     */
    inline RuntimeConfiguration& AddServerProcesses(ServerProcess&& value) { m_serverProcessesHasBeenSet = true; m_serverProcesses.push_back(std::move(value)); return *this; }

  private:
    Aws::Vector<ServerProcess> m_serverProcesses;
    bool m_serverProcessesHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
