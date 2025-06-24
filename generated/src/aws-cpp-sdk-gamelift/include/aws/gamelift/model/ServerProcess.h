/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
   * <p>A set of instructions for launching server processes on fleet computes.
   * Server processes run either an executable in a custom game build or a Amazon
   * GameLift Servers Realtime script. Server process configurations are part of a
   * fleet's runtime configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ServerProcess">AWS
   * API Reference</a></p>
   */
  class ServerProcess
  {
  public:
    AWS_GAMELIFT_API ServerProcess() = default;
    AWS_GAMELIFT_API ServerProcess(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API ServerProcess& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GAMELIFT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The location of a game build executable or Realtime script. Game builds and
     * Realtime scripts are installed on instances at the root: </p> <ul> <li>
     * <p>Windows (custom game builds only): <code>C:\game</code>. Example:
     * "<code>C:\game\MyGame\server.exe</code>" </p> </li> <li> <p>Linux:
     * <code>/local/game</code>. Examples: "<code>/local/game/MyGame/server.exe</code>"
     * or "<code>/local/game/MyRealtimeScript.js</code>"</p> </li> </ul> 
     * <p>Amazon GameLift Servers doesn't support the use of setup scripts that launch
     * the game executable. For custom game builds, this parameter must indicate the
     * executable that calls the server SDK operations <code>initSDK()</code> and
     * <code>ProcessReady()</code>. </p> 
     */
    inline const Aws::String& GetLaunchPath() const { return m_launchPath; }
    inline bool LaunchPathHasBeenSet() const { return m_launchPathHasBeenSet; }
    template<typename LaunchPathT = Aws::String>
    void SetLaunchPath(LaunchPathT&& value) { m_launchPathHasBeenSet = true; m_launchPath = std::forward<LaunchPathT>(value); }
    template<typename LaunchPathT = Aws::String>
    ServerProcess& WithLaunchPath(LaunchPathT&& value) { SetLaunchPath(std::forward<LaunchPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional list of parameters to pass to the server executable or Realtime
     * script on launch.</p>
     */
    inline const Aws::String& GetParameters() const { return m_parameters; }
    inline bool ParametersHasBeenSet() const { return m_parametersHasBeenSet; }
    template<typename ParametersT = Aws::String>
    void SetParameters(ParametersT&& value) { m_parametersHasBeenSet = true; m_parameters = std::forward<ParametersT>(value); }
    template<typename ParametersT = Aws::String>
    ServerProcess& WithParameters(ParametersT&& value) { SetParameters(std::forward<ParametersT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of server processes using this configuration that run concurrently
     * on each instance or compute.</p>
     */
    inline int GetConcurrentExecutions() const { return m_concurrentExecutions; }
    inline bool ConcurrentExecutionsHasBeenSet() const { return m_concurrentExecutionsHasBeenSet; }
    inline void SetConcurrentExecutions(int value) { m_concurrentExecutionsHasBeenSet = true; m_concurrentExecutions = value; }
    inline ServerProcess& WithConcurrentExecutions(int value) { SetConcurrentExecutions(value); return *this;}
    ///@}
  private:

    Aws::String m_launchPath;
    bool m_launchPathHasBeenSet = false;

    Aws::String m_parameters;
    bool m_parametersHasBeenSet = false;

    int m_concurrentExecutions{0};
    bool m_concurrentExecutionsHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
