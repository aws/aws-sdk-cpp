﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apprunner/AppRunner_EXPORTS.h>
#include <aws/apprunner/model/Runtime.h>
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
namespace AppRunner
{
namespace Model
{

  /**
   * <p>Describes the basic configuration needed for building and running an App
   * Runner service. This type doesn't support the full set of possible configuration
   * options. Fur full configuration capabilities, use a <code>apprunner.yaml</code>
   * file in the source code repository.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/apprunner-2020-05-15/CodeConfigurationValues">AWS
   * API Reference</a></p>
   */
  class CodeConfigurationValues
  {
  public:
    AWS_APPRUNNER_API CodeConfigurationValues();
    AWS_APPRUNNER_API CodeConfigurationValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeConfigurationValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A runtime environment type for building and running an App Runner service. It
     * represents a programming language runtime.</p>
     */
    inline const Runtime& GetRuntime() const{ return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(const Runtime& value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline void SetRuntime(Runtime&& value) { m_runtimeHasBeenSet = true; m_runtime = std::move(value); }
    inline CodeConfigurationValues& WithRuntime(const Runtime& value) { SetRuntime(value); return *this;}
    inline CodeConfigurationValues& WithRuntime(Runtime&& value) { SetRuntime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command App Runner runs to build your application.</p>
     */
    inline const Aws::String& GetBuildCommand() const{ return m_buildCommand; }
    inline bool BuildCommandHasBeenSet() const { return m_buildCommandHasBeenSet; }
    inline void SetBuildCommand(const Aws::String& value) { m_buildCommandHasBeenSet = true; m_buildCommand = value; }
    inline void SetBuildCommand(Aws::String&& value) { m_buildCommandHasBeenSet = true; m_buildCommand = std::move(value); }
    inline void SetBuildCommand(const char* value) { m_buildCommandHasBeenSet = true; m_buildCommand.assign(value); }
    inline CodeConfigurationValues& WithBuildCommand(const Aws::String& value) { SetBuildCommand(value); return *this;}
    inline CodeConfigurationValues& WithBuildCommand(Aws::String&& value) { SetBuildCommand(std::move(value)); return *this;}
    inline CodeConfigurationValues& WithBuildCommand(const char* value) { SetBuildCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command App Runner runs to start your application.</p>
     */
    inline const Aws::String& GetStartCommand() const{ return m_startCommand; }
    inline bool StartCommandHasBeenSet() const { return m_startCommandHasBeenSet; }
    inline void SetStartCommand(const Aws::String& value) { m_startCommandHasBeenSet = true; m_startCommand = value; }
    inline void SetStartCommand(Aws::String&& value) { m_startCommandHasBeenSet = true; m_startCommand = std::move(value); }
    inline void SetStartCommand(const char* value) { m_startCommandHasBeenSet = true; m_startCommand.assign(value); }
    inline CodeConfigurationValues& WithStartCommand(const Aws::String& value) { SetStartCommand(value); return *this;}
    inline CodeConfigurationValues& WithStartCommand(Aws::String&& value) { SetStartCommand(std::move(value)); return *this;}
    inline CodeConfigurationValues& WithStartCommand(const char* value) { SetStartCommand(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline const Aws::String& GetPort() const{ return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    inline void SetPort(const Aws::String& value) { m_portHasBeenSet = true; m_port = value; }
    inline void SetPort(Aws::String&& value) { m_portHasBeenSet = true; m_port = std::move(value); }
    inline void SetPort(const char* value) { m_portHasBeenSet = true; m_port.assign(value); }
    inline CodeConfigurationValues& WithPort(const Aws::String& value) { SetPort(value); return *this;}
    inline CodeConfigurationValues& WithPort(Aws::String&& value) { SetPort(std::move(value)); return *this;}
    inline CodeConfigurationValues& WithPort(const char* value) { SetPort(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables that are available to your running App Runner
     * service. An array of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentVariables() const{ return m_runtimeEnvironmentVariables; }
    inline bool RuntimeEnvironmentVariablesHasBeenSet() const { return m_runtimeEnvironmentVariablesHasBeenSet; }
    inline void SetRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = value; }
    inline void SetRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = std::move(value); }
    inline CodeConfigurationValues& WithRuntimeEnvironmentVariables(const Aws::Map<Aws::String, Aws::String>& value) { SetRuntimeEnvironmentVariables(value); return *this;}
    inline CodeConfigurationValues& WithRuntimeEnvironmentVariables(Aws::Map<Aws::String, Aws::String>&& value) { SetRuntimeEnvironmentVariables(std::move(value)); return *this;}
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(const Aws::String& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(Aws::String&& key, const Aws::String& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(const Aws::String& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(Aws::String&& key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(const char* key, Aws::String&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(Aws::String&& key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::move(key), value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentVariables(const char* key, const char* value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(key, value); return *this; }
    ///@}

    ///@{
    /**
     * <p>An array of key-value pairs representing the secrets and parameters that get
     * referenced to your service as an environment variable. The supported values are
     * either the full Amazon Resource Name (ARN) of the Secrets Manager secret or the
     * full ARN of the parameter in the Amazon Web Services Systems Manager Parameter
     * Store.</p>  <ul> <li> <p> If the Amazon Web Services Systems Manager
     * Parameter Store parameter exists in the same Amazon Web Services Region as the
     * service that you're launching, you can use either the full ARN or name of the
     * secret. If the parameter exists in a different Region, then the full ARN must be
     * specified. </p> </li> <li> <p> Currently, cross account referencing of Amazon
     * Web Services Systems Manager Parameter Store parameter is not supported. </p>
     * </li> </ul> 
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentSecrets() const{ return m_runtimeEnvironmentSecrets; }
    inline bool RuntimeEnvironmentSecretsHasBeenSet() const { return m_runtimeEnvironmentSecretsHasBeenSet; }
    inline void SetRuntimeEnvironmentSecrets(const Aws::Map<Aws::String, Aws::String>& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets = value; }
    inline void SetRuntimeEnvironmentSecrets(Aws::Map<Aws::String, Aws::String>&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets = std::move(value); }
    inline CodeConfigurationValues& WithRuntimeEnvironmentSecrets(const Aws::Map<Aws::String, Aws::String>& value) { SetRuntimeEnvironmentSecrets(value); return *this;}
    inline CodeConfigurationValues& WithRuntimeEnvironmentSecrets(Aws::Map<Aws::String, Aws::String>&& value) { SetRuntimeEnvironmentSecrets(std::move(value)); return *this;}
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(const Aws::String& key, const Aws::String& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(Aws::String&& key, const Aws::String& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(const Aws::String& key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(Aws::String&& key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(const char* key, Aws::String&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, std::move(value)); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(Aws::String&& key, const char* value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::move(key), value); return *this; }
    inline CodeConfigurationValues& AddRuntimeEnvironmentSecrets(const char* key, const char* value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(key, value); return *this; }
    ///@}
  private:

    Runtime m_runtime;
    bool m_runtimeHasBeenSet = false;

    Aws::String m_buildCommand;
    bool m_buildCommandHasBeenSet = false;

    Aws::String m_startCommand;
    bool m_startCommandHasBeenSet = false;

    Aws::String m_port;
    bool m_portHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_runtimeEnvironmentVariables;
    bool m_runtimeEnvironmentVariablesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_runtimeEnvironmentSecrets;
    bool m_runtimeEnvironmentSecretsHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRunner
} // namespace Aws
