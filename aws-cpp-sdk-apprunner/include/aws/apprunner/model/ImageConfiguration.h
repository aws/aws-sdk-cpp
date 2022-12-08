/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the configuration that App Runner uses to run an App Runner service
   * using an image pulled from a source image repository.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/ImageConfiguration">AWS
   * API Reference</a></p>
   */
  class ImageConfiguration
  {
  public:
    AWS_APPRUNNER_API ImageConfiguration();
    AWS_APPRUNNER_API ImageConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API ImageConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentVariables() const{ return m_runtimeEnvironmentVariables; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline bool RuntimeEnvironmentVariablesHasBeenSet() const { return m_runtimeEnvironmentVariablesHasBeenSet; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline void SetRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = value; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline void SetRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = std::move(value); }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& WithRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetRuntimeEnvironmentVariables(value); return *this;}

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& WithRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetRuntimeEnvironmentVariables(std::move(value)); return *this;}

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const char* key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(Aws::String&& key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }

    /**
     * <p>Environment variables that are available to your running App Runner service.
     * An array of key-value pairs. Keys with a prefix of <code>AWSAPPRUNNER</code> are
     * reserved for system use and aren't valid.</p>
     */
    inline ImageConfiguration& AddRuntimeEnvironmentVariables(const char* key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }


    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline const Aws::String& GetStartCommand() const{ return m_startCommand; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline bool StartCommandHasBeenSet() const { return m_startCommandHasBeenSet; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(const Aws::String& value) { m_startCommandHasBeenSet = true; m_startCommand = value; }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(Aws::String&& value) { m_startCommandHasBeenSet = true; m_startCommand = std::move(value); }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline void SetStartCommand(const char* value) { m_startCommandHasBeenSet = true; m_startCommand.assign(value); }

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(const Aws::String& value) { SetStartCommand(value); return *this;}

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(Aws::String&& value) { SetStartCommand(std::move(value)); return *this;}

    /**
     * <p>An optional command that App Runner runs to start the application in the
     * source image. If specified, this command overrides the Docker image’s default
     * start command.</p>
     */
    inline ImageConfiguration& WithStartCommand(const char* value) { SetStartCommand(value); return *this;}


    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline const Aws::String& GetPort() const{ return m_port; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(const Aws::String& value) { SetPort(value); return *this;}

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}

    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline ImageConfiguration& WithPort(const char* value) { SetPort(value); return *this;}

  private:

    Aws::Map<Aws::String, Aws::String> m_runtimeEnvironmentVariables;
    bool m_runtimeEnvironmentVariablesHasBeenSet = false;

    Aws::String m_startCommand;
    bool m_startCommandHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
