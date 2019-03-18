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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace RoboMaker
{
namespace Model
{

  /**
   * <p>Configuration information for a deployment launch.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentLaunchConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API DeploymentLaunchConfig
  {
  public:
    DeploymentLaunchConfig();
    DeploymentLaunchConfig(Aws::Utils::Json::JsonView jsonValue);
    DeploymentLaunchConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The package name.</p>
     */
    inline const Aws::String& GetPackageName() const{ return m_packageName; }

    /**
     * <p>The package name.</p>
     */
    inline bool PackageNameHasBeenSet() const { return m_packageNameHasBeenSet; }

    /**
     * <p>The package name.</p>
     */
    inline void SetPackageName(const Aws::String& value) { m_packageNameHasBeenSet = true; m_packageName = value; }

    /**
     * <p>The package name.</p>
     */
    inline void SetPackageName(Aws::String&& value) { m_packageNameHasBeenSet = true; m_packageName = std::move(value); }

    /**
     * <p>The package name.</p>
     */
    inline void SetPackageName(const char* value) { m_packageNameHasBeenSet = true; m_packageName.assign(value); }

    /**
     * <p>The package name.</p>
     */
    inline DeploymentLaunchConfig& WithPackageName(const Aws::String& value) { SetPackageName(value); return *this;}

    /**
     * <p>The package name.</p>
     */
    inline DeploymentLaunchConfig& WithPackageName(Aws::String&& value) { SetPackageName(std::move(value)); return *this;}

    /**
     * <p>The package name.</p>
     */
    inline DeploymentLaunchConfig& WithPackageName(const char* value) { SetPackageName(value); return *this;}


    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline const Aws::String& GetPreLaunchFile() const{ return m_preLaunchFile; }

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline bool PreLaunchFileHasBeenSet() const { return m_preLaunchFileHasBeenSet; }

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline void SetPreLaunchFile(const Aws::String& value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile = value; }

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline void SetPreLaunchFile(Aws::String&& value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile = std::move(value); }

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline void SetPreLaunchFile(const char* value) { m_preLaunchFileHasBeenSet = true; m_preLaunchFile.assign(value); }

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline DeploymentLaunchConfig& WithPreLaunchFile(const Aws::String& value) { SetPreLaunchFile(value); return *this;}

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline DeploymentLaunchConfig& WithPreLaunchFile(Aws::String&& value) { SetPreLaunchFile(std::move(value)); return *this;}

    /**
     * <p>The deployment pre-launch file. This file will be executed prior to the
     * launch file.</p>
     */
    inline DeploymentLaunchConfig& WithPreLaunchFile(const char* value) { SetPreLaunchFile(value); return *this;}


    /**
     * <p>The launch file name.</p>
     */
    inline const Aws::String& GetLaunchFile() const{ return m_launchFile; }

    /**
     * <p>The launch file name.</p>
     */
    inline bool LaunchFileHasBeenSet() const { return m_launchFileHasBeenSet; }

    /**
     * <p>The launch file name.</p>
     */
    inline void SetLaunchFile(const Aws::String& value) { m_launchFileHasBeenSet = true; m_launchFile = value; }

    /**
     * <p>The launch file name.</p>
     */
    inline void SetLaunchFile(Aws::String&& value) { m_launchFileHasBeenSet = true; m_launchFile = std::move(value); }

    /**
     * <p>The launch file name.</p>
     */
    inline void SetLaunchFile(const char* value) { m_launchFileHasBeenSet = true; m_launchFile.assign(value); }

    /**
     * <p>The launch file name.</p>
     */
    inline DeploymentLaunchConfig& WithLaunchFile(const Aws::String& value) { SetLaunchFile(value); return *this;}

    /**
     * <p>The launch file name.</p>
     */
    inline DeploymentLaunchConfig& WithLaunchFile(Aws::String&& value) { SetLaunchFile(std::move(value)); return *this;}

    /**
     * <p>The launch file name.</p>
     */
    inline DeploymentLaunchConfig& WithLaunchFile(const char* value) { SetLaunchFile(value); return *this;}


    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline const Aws::String& GetPostLaunchFile() const{ return m_postLaunchFile; }

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline bool PostLaunchFileHasBeenSet() const { return m_postLaunchFileHasBeenSet; }

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline void SetPostLaunchFile(const Aws::String& value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile = value; }

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline void SetPostLaunchFile(Aws::String&& value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile = std::move(value); }

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline void SetPostLaunchFile(const char* value) { m_postLaunchFileHasBeenSet = true; m_postLaunchFile.assign(value); }

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline DeploymentLaunchConfig& WithPostLaunchFile(const Aws::String& value) { SetPostLaunchFile(value); return *this;}

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline DeploymentLaunchConfig& WithPostLaunchFile(Aws::String&& value) { SetPostLaunchFile(std::move(value)); return *this;}

    /**
     * <p>The deployment post-launch file. This file will be executed after the launch
     * file.</p>
     */
    inline DeploymentLaunchConfig& WithPostLaunchFile(const char* value) { SetPostLaunchFile(value); return *this;}


    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const{ return m_environmentVariables; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline void SetEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = value; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline void SetEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables = std::move(value); }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& WithEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetEnvironmentVariables(value); return *this;}

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& WithEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const char* key, Aws::String&& value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(Aws::String&& key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>An array of key/value pairs specifying environment variables for the robot
     * application</p>
     */
    inline DeploymentLaunchConfig& AddEnvironmentVariables(const char* key, const char* value) { m_environmentVariablesHasBeenSet = true; m_environmentVariables.emplace(key, value); return *this; }

  private:

    Aws::String m_packageName;
    bool m_packageNameHasBeenSet;

    Aws::String m_preLaunchFile;
    bool m_preLaunchFileHasBeenSet;

    Aws::String m_launchFile;
    bool m_launchFileHasBeenSet;

    Aws::String m_postLaunchFile;
    bool m_postLaunchFileHasBeenSet;

    Aws::Map<Aws::String, Aws::String> m_environmentVariables;
    bool m_environmentVariablesHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
