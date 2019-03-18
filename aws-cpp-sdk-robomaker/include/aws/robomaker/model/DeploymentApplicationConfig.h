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
#include <aws/robomaker/model/DeploymentLaunchConfig.h>
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
   * <p>Information about a deployment application configuration.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/robomaker-2018-06-29/DeploymentApplicationConfig">AWS
   * API Reference</a></p>
   */
  class AWS_ROBOMAKER_API DeploymentApplicationConfig
  {
  public:
    DeploymentApplicationConfig();
    DeploymentApplicationConfig(Aws::Utils::Json::JsonView jsonValue);
    DeploymentApplicationConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline const Aws::String& GetApplication() const{ return m_application; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline bool ApplicationHasBeenSet() const { return m_applicationHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(const Aws::String& value) { m_applicationHasBeenSet = true; m_application = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(Aws::String&& value) { m_applicationHasBeenSet = true; m_application = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline void SetApplication(const char* value) { m_applicationHasBeenSet = true; m_application.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DeploymentApplicationConfig& WithApplication(const Aws::String& value) { SetApplication(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DeploymentApplicationConfig& WithApplication(Aws::String&& value) { SetApplication(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the robot application.</p>
     */
    inline DeploymentApplicationConfig& WithApplication(const char* value) { SetApplication(value); return *this;}


    /**
     * <p>The version of the application.</p>
     */
    inline const Aws::String& GetApplicationVersion() const{ return m_applicationVersion; }

    /**
     * <p>The version of the application.</p>
     */
    inline bool ApplicationVersionHasBeenSet() const { return m_applicationVersionHasBeenSet; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetApplicationVersion(const Aws::String& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = value; }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetApplicationVersion(Aws::String&& value) { m_applicationVersionHasBeenSet = true; m_applicationVersion = std::move(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline void SetApplicationVersion(const char* value) { m_applicationVersionHasBeenSet = true; m_applicationVersion.assign(value); }

    /**
     * <p>The version of the application.</p>
     */
    inline DeploymentApplicationConfig& WithApplicationVersion(const Aws::String& value) { SetApplicationVersion(value); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DeploymentApplicationConfig& WithApplicationVersion(Aws::String&& value) { SetApplicationVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the application.</p>
     */
    inline DeploymentApplicationConfig& WithApplicationVersion(const char* value) { SetApplicationVersion(value); return *this;}


    /**
     * <p>The launch configuration.</p>
     */
    inline const DeploymentLaunchConfig& GetLaunchConfig() const{ return m_launchConfig; }

    /**
     * <p>The launch configuration.</p>
     */
    inline bool LaunchConfigHasBeenSet() const { return m_launchConfigHasBeenSet; }

    /**
     * <p>The launch configuration.</p>
     */
    inline void SetLaunchConfig(const DeploymentLaunchConfig& value) { m_launchConfigHasBeenSet = true; m_launchConfig = value; }

    /**
     * <p>The launch configuration.</p>
     */
    inline void SetLaunchConfig(DeploymentLaunchConfig&& value) { m_launchConfigHasBeenSet = true; m_launchConfig = std::move(value); }

    /**
     * <p>The launch configuration.</p>
     */
    inline DeploymentApplicationConfig& WithLaunchConfig(const DeploymentLaunchConfig& value) { SetLaunchConfig(value); return *this;}

    /**
     * <p>The launch configuration.</p>
     */
    inline DeploymentApplicationConfig& WithLaunchConfig(DeploymentLaunchConfig&& value) { SetLaunchConfig(std::move(value)); return *this;}

  private:

    Aws::String m_application;
    bool m_applicationHasBeenSet;

    Aws::String m_applicationVersion;
    bool m_applicationVersionHasBeenSet;

    DeploymentLaunchConfig m_launchConfig;
    bool m_launchConfigHasBeenSet;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
