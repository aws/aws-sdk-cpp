/**
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
    AWS_APPRUNNER_API CodeConfigurationValues() = default;
    AWS_APPRUNNER_API CodeConfigurationValues(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API CodeConfigurationValues& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPRUNNER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A runtime environment type for building and running an App Runner service. It
     * represents a programming language runtime.</p>
     */
    inline Runtime GetRuntime() const { return m_runtime; }
    inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
    inline void SetRuntime(Runtime value) { m_runtimeHasBeenSet = true; m_runtime = value; }
    inline CodeConfigurationValues& WithRuntime(Runtime value) { SetRuntime(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command App Runner runs to build your application.</p>
     */
    inline const Aws::String& GetBuildCommand() const { return m_buildCommand; }
    inline bool BuildCommandHasBeenSet() const { return m_buildCommandHasBeenSet; }
    template<typename BuildCommandT = Aws::String>
    void SetBuildCommand(BuildCommandT&& value) { m_buildCommandHasBeenSet = true; m_buildCommand = std::forward<BuildCommandT>(value); }
    template<typename BuildCommandT = Aws::String>
    CodeConfigurationValues& WithBuildCommand(BuildCommandT&& value) { SetBuildCommand(std::forward<BuildCommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The command App Runner runs to start your application.</p>
     */
    inline const Aws::String& GetStartCommand() const { return m_startCommand; }
    inline bool StartCommandHasBeenSet() const { return m_startCommandHasBeenSet; }
    template<typename StartCommandT = Aws::String>
    void SetStartCommand(StartCommandT&& value) { m_startCommandHasBeenSet = true; m_startCommand = std::forward<StartCommandT>(value); }
    template<typename StartCommandT = Aws::String>
    CodeConfigurationValues& WithStartCommand(StartCommandT&& value) { SetStartCommand(std::forward<StartCommandT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The port that your application listens to in the container.</p> <p>Default:
     * <code>8080</code> </p>
     */
    inline const Aws::String& GetPort() const { return m_port; }
    inline bool PortHasBeenSet() const { return m_portHasBeenSet; }
    template<typename PortT = Aws::String>
    void SetPort(PortT&& value) { m_portHasBeenSet = true; m_port = std::forward<PortT>(value); }
    template<typename PortT = Aws::String>
    CodeConfigurationValues& WithPort(PortT&& value) { SetPort(std::forward<PortT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The environment variables that are available to your running App Runner
     * service. An array of key-value pairs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentVariables() const { return m_runtimeEnvironmentVariables; }
    inline bool RuntimeEnvironmentVariablesHasBeenSet() const { return m_runtimeEnvironmentVariablesHasBeenSet; }
    template<typename RuntimeEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    void SetRuntimeEnvironmentVariables(RuntimeEnvironmentVariablesT&& value) { m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables = std::forward<RuntimeEnvironmentVariablesT>(value); }
    template<typename RuntimeEnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
    CodeConfigurationValues& WithRuntimeEnvironmentVariables(RuntimeEnvironmentVariablesT&& value) { SetRuntimeEnvironmentVariables(std::forward<RuntimeEnvironmentVariablesT>(value)); return *this;}
    template<typename RuntimeEnvironmentVariablesKeyT = Aws::String, typename RuntimeEnvironmentVariablesValueT = Aws::String>
    CodeConfigurationValues& AddRuntimeEnvironmentVariables(RuntimeEnvironmentVariablesKeyT&& key, RuntimeEnvironmentVariablesValueT&& value) {
      m_runtimeEnvironmentVariablesHasBeenSet = true; m_runtimeEnvironmentVariables.emplace(std::forward<RuntimeEnvironmentVariablesKeyT>(key), std::forward<RuntimeEnvironmentVariablesValueT>(value)); return *this;
    }
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
    inline const Aws::Map<Aws::String, Aws::String>& GetRuntimeEnvironmentSecrets() const { return m_runtimeEnvironmentSecrets; }
    inline bool RuntimeEnvironmentSecretsHasBeenSet() const { return m_runtimeEnvironmentSecretsHasBeenSet; }
    template<typename RuntimeEnvironmentSecretsT = Aws::Map<Aws::String, Aws::String>>
    void SetRuntimeEnvironmentSecrets(RuntimeEnvironmentSecretsT&& value) { m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets = std::forward<RuntimeEnvironmentSecretsT>(value); }
    template<typename RuntimeEnvironmentSecretsT = Aws::Map<Aws::String, Aws::String>>
    CodeConfigurationValues& WithRuntimeEnvironmentSecrets(RuntimeEnvironmentSecretsT&& value) { SetRuntimeEnvironmentSecrets(std::forward<RuntimeEnvironmentSecretsT>(value)); return *this;}
    template<typename RuntimeEnvironmentSecretsKeyT = Aws::String, typename RuntimeEnvironmentSecretsValueT = Aws::String>
    CodeConfigurationValues& AddRuntimeEnvironmentSecrets(RuntimeEnvironmentSecretsKeyT&& key, RuntimeEnvironmentSecretsValueT&& value) {
      m_runtimeEnvironmentSecretsHasBeenSet = true; m_runtimeEnvironmentSecrets.emplace(std::forward<RuntimeEnvironmentSecretsKeyT>(key), std::forward<RuntimeEnvironmentSecretsValueT>(value)); return *this;
    }
    ///@}
  private:

    Runtime m_runtime{Runtime::NOT_SET};
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
