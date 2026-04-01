/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/ContainerDependency.h>
#include <aws/ecs/model/ContainerRestartPolicy.h>
#include <aws/ecs/model/DaemonLinuxParameters.h>
#include <aws/ecs/model/EnvironmentFile.h>
#include <aws/ecs/model/FirelensConfiguration.h>
#include <aws/ecs/model/HealthCheck.h>
#include <aws/ecs/model/KeyValuePair.h>
#include <aws/ecs/model/LogConfiguration.h>
#include <aws/ecs/model/MountPoint.h>
#include <aws/ecs/model/RepositoryCredentials.h>
#include <aws/ecs/model/Secret.h>
#include <aws/ecs/model/SystemControl.h>
#include <aws/ecs/model/Ulimit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ECS {
namespace Model {

/**
 * <p>A container definition for a daemon task. Daemon container definitions
 * describe the containers that run as part of a daemon task on container instances
 * managed by capacity providers.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonContainerDefinition">AWS
 * API Reference</a></p>
 */
class DaemonContainerDefinition {
 public:
  AWS_ECS_API DaemonContainerDefinition() = default;
  AWS_ECS_API DaemonContainerDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonContainerDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the container. Up to 255 letters (uppercase and lowercase),
   * numbers, underscores, and hyphens are allowed.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  DaemonContainerDefinition& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The image used to start the container. This string is passed directly to the
   * Docker daemon. Images in the Docker Hub registry are available by default. Other
   * repositories are specified with either <code>
   * <i>repository-url</i>/<i>image</i>:<i>tag</i> </code> or <code>
   * <i>repository-url</i>/<i>image</i>@<i>digest</i> </code>.</p>
   */
  inline const Aws::String& GetImage() const { return m_image; }
  inline bool ImageHasBeenSet() const { return m_imageHasBeenSet; }
  template <typename ImageT = Aws::String>
  void SetImage(ImageT&& value) {
    m_imageHasBeenSet = true;
    m_image = std::forward<ImageT>(value);
  }
  template <typename ImageT = Aws::String>
  DaemonContainerDefinition& WithImage(ImageT&& value) {
    SetImage(std::forward<ImageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount (in MiB) of memory to present to the container. If the container
   * attempts to exceed the memory specified here, the container is killed.</p>
   */
  inline int GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  inline void SetMemory(int value) {
    m_memoryHasBeenSet = true;
    m_memory = value;
  }
  inline DaemonContainerDefinition& WithMemory(int value) {
    SetMemory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The soft limit (in MiB) of memory to reserve for the container.</p>
   */
  inline int GetMemoryReservation() const { return m_memoryReservation; }
  inline bool MemoryReservationHasBeenSet() const { return m_memoryReservationHasBeenSet; }
  inline void SetMemoryReservation(int value) {
    m_memoryReservationHasBeenSet = true;
    m_memoryReservation = value;
  }
  inline DaemonContainerDefinition& WithMemoryReservation(int value) {
    SetMemoryReservation(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The private repository authentication credentials to use.</p>
   */
  inline const RepositoryCredentials& GetRepositoryCredentials() const { return m_repositoryCredentials; }
  inline bool RepositoryCredentialsHasBeenSet() const { return m_repositoryCredentialsHasBeenSet; }
  template <typename RepositoryCredentialsT = RepositoryCredentials>
  void SetRepositoryCredentials(RepositoryCredentialsT&& value) {
    m_repositoryCredentialsHasBeenSet = true;
    m_repositoryCredentials = std::forward<RepositoryCredentialsT>(value);
  }
  template <typename RepositoryCredentialsT = RepositoryCredentials>
  DaemonContainerDefinition& WithRepositoryCredentials(RepositoryCredentialsT&& value) {
    SetRepositoryCredentials(std::forward<RepositoryCredentialsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The container health check command and associated configuration parameters
   * for the container.</p>
   */
  inline const HealthCheck& GetHealthCheck() const { return m_healthCheck; }
  inline bool HealthCheckHasBeenSet() const { return m_healthCheckHasBeenSet; }
  template <typename HealthCheckT = HealthCheck>
  void SetHealthCheck(HealthCheckT&& value) {
    m_healthCheckHasBeenSet = true;
    m_healthCheck = std::forward<HealthCheckT>(value);
  }
  template <typename HealthCheckT = HealthCheck>
  DaemonContainerDefinition& WithHealthCheck(HealthCheckT&& value) {
    SetHealthCheck(std::forward<HealthCheckT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of <code>cpu</code> units reserved for the container.</p>
   */
  inline int GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  inline void SetCpu(int value) {
    m_cpuHasBeenSet = true;
    m_cpu = value;
  }
  inline DaemonContainerDefinition& WithCpu(int value) {
    SetCpu(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the <code>essential</code> parameter of a container is marked as
   * <code>true</code>, and that container fails or stops for any reason, all other
   * containers that are part of the task are stopped.</p>
   */
  inline bool GetEssential() const { return m_essential; }
  inline bool EssentialHasBeenSet() const { return m_essentialHasBeenSet; }
  inline void SetEssential(bool value) {
    m_essentialHasBeenSet = true;
    m_essential = value;
  }
  inline DaemonContainerDefinition& WithEssential(bool value) {
    SetEssential(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entry point that's passed to the container.</p>
   */
  inline const Aws::Vector<Aws::String>& GetEntryPoint() const { return m_entryPoint; }
  inline bool EntryPointHasBeenSet() const { return m_entryPointHasBeenSet; }
  template <typename EntryPointT = Aws::Vector<Aws::String>>
  void SetEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint = std::forward<EntryPointT>(value);
  }
  template <typename EntryPointT = Aws::Vector<Aws::String>>
  DaemonContainerDefinition& WithEntryPoint(EntryPointT&& value) {
    SetEntryPoint(std::forward<EntryPointT>(value));
    return *this;
  }
  template <typename EntryPointT = Aws::String>
  DaemonContainerDefinition& AddEntryPoint(EntryPointT&& value) {
    m_entryPointHasBeenSet = true;
    m_entryPoint.emplace_back(std::forward<EntryPointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The command that's passed to the container.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
  inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
  template <typename CommandT = Aws::Vector<Aws::String>>
  void SetCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command = std::forward<CommandT>(value);
  }
  template <typename CommandT = Aws::Vector<Aws::String>>
  DaemonContainerDefinition& WithCommand(CommandT&& value) {
    SetCommand(std::forward<CommandT>(value));
    return *this;
  }
  template <typename CommandT = Aws::String>
  DaemonContainerDefinition& AddCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command.emplace_back(std::forward<CommandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The working directory to run commands inside the container in.</p>
   */
  inline const Aws::String& GetWorkingDirectory() const { return m_workingDirectory; }
  inline bool WorkingDirectoryHasBeenSet() const { return m_workingDirectoryHasBeenSet; }
  template <typename WorkingDirectoryT = Aws::String>
  void SetWorkingDirectory(WorkingDirectoryT&& value) {
    m_workingDirectoryHasBeenSet = true;
    m_workingDirectory = std::forward<WorkingDirectoryT>(value);
  }
  template <typename WorkingDirectoryT = Aws::String>
  DaemonContainerDefinition& WithWorkingDirectory(WorkingDirectoryT&& value) {
    SetWorkingDirectory(std::forward<WorkingDirectoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of files containing the environment variables to pass to a
   * container.</p>
   */
  inline const Aws::Vector<EnvironmentFile>& GetEnvironmentFiles() const { return m_environmentFiles; }
  inline bool EnvironmentFilesHasBeenSet() const { return m_environmentFilesHasBeenSet; }
  template <typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
  void SetEnvironmentFiles(EnvironmentFilesT&& value) {
    m_environmentFilesHasBeenSet = true;
    m_environmentFiles = std::forward<EnvironmentFilesT>(value);
  }
  template <typename EnvironmentFilesT = Aws::Vector<EnvironmentFile>>
  DaemonContainerDefinition& WithEnvironmentFiles(EnvironmentFilesT&& value) {
    SetEnvironmentFiles(std::forward<EnvironmentFilesT>(value));
    return *this;
  }
  template <typename EnvironmentFilesT = EnvironmentFile>
  DaemonContainerDefinition& AddEnvironmentFiles(EnvironmentFilesT&& value) {
    m_environmentFilesHasBeenSet = true;
    m_environmentFiles.emplace_back(std::forward<EnvironmentFilesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The environment variables to pass to a container.</p>
   */
  inline const Aws::Vector<KeyValuePair>& GetEnvironment() const { return m_environment; }
  inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
  template <typename EnvironmentT = Aws::Vector<KeyValuePair>>
  void SetEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment = std::forward<EnvironmentT>(value);
  }
  template <typename EnvironmentT = Aws::Vector<KeyValuePair>>
  DaemonContainerDefinition& WithEnvironment(EnvironmentT&& value) {
    SetEnvironment(std::forward<EnvironmentT>(value));
    return *this;
  }
  template <typename EnvironmentT = KeyValuePair>
  DaemonContainerDefinition& AddEnvironment(EnvironmentT&& value) {
    m_environmentHasBeenSet = true;
    m_environment.emplace_back(std::forward<EnvironmentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secrets to pass to the container.</p>
   */
  inline const Aws::Vector<Secret>& GetSecrets() const { return m_secrets; }
  inline bool SecretsHasBeenSet() const { return m_secretsHasBeenSet; }
  template <typename SecretsT = Aws::Vector<Secret>>
  void SetSecrets(SecretsT&& value) {
    m_secretsHasBeenSet = true;
    m_secrets = std::forward<SecretsT>(value);
  }
  template <typename SecretsT = Aws::Vector<Secret>>
  DaemonContainerDefinition& WithSecrets(SecretsT&& value) {
    SetSecrets(std::forward<SecretsT>(value));
    return *this;
  }
  template <typename SecretsT = Secret>
  DaemonContainerDefinition& AddSecrets(SecretsT&& value) {
    m_secretsHasBeenSet = true;
    m_secrets.emplace_back(std::forward<SecretsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this parameter is true, the container is given read-only access to its
   * root file system.</p>
   */
  inline bool GetReadonlyRootFilesystem() const { return m_readonlyRootFilesystem; }
  inline bool ReadonlyRootFilesystemHasBeenSet() const { return m_readonlyRootFilesystemHasBeenSet; }
  inline void SetReadonlyRootFilesystem(bool value) {
    m_readonlyRootFilesystemHasBeenSet = true;
    m_readonlyRootFilesystem = value;
  }
  inline DaemonContainerDefinition& WithReadonlyRootFilesystem(bool value) {
    SetReadonlyRootFilesystem(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The mount points for data volumes in your container.</p>
   */
  inline const Aws::Vector<MountPoint>& GetMountPoints() const { return m_mountPoints; }
  inline bool MountPointsHasBeenSet() const { return m_mountPointsHasBeenSet; }
  template <typename MountPointsT = Aws::Vector<MountPoint>>
  void SetMountPoints(MountPointsT&& value) {
    m_mountPointsHasBeenSet = true;
    m_mountPoints = std::forward<MountPointsT>(value);
  }
  template <typename MountPointsT = Aws::Vector<MountPoint>>
  DaemonContainerDefinition& WithMountPoints(MountPointsT&& value) {
    SetMountPoints(std::forward<MountPointsT>(value));
    return *this;
  }
  template <typename MountPointsT = MountPoint>
  DaemonContainerDefinition& AddMountPoints(MountPointsT&& value) {
    m_mountPointsHasBeenSet = true;
    m_mountPoints.emplace_back(std::forward<MountPointsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The log configuration specification for the container.</p>
   */
  inline const LogConfiguration& GetLogConfiguration() const { return m_logConfiguration; }
  inline bool LogConfigurationHasBeenSet() const { return m_logConfigurationHasBeenSet; }
  template <typename LogConfigurationT = LogConfiguration>
  void SetLogConfiguration(LogConfigurationT&& value) {
    m_logConfigurationHasBeenSet = true;
    m_logConfiguration = std::forward<LogConfigurationT>(value);
  }
  template <typename LogConfigurationT = LogConfiguration>
  DaemonContainerDefinition& WithLogConfiguration(LogConfigurationT&& value) {
    SetLogConfiguration(std::forward<LogConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The FireLens configuration for the container. This is used to specify and
   * configure a log router for container logs.</p>
   */
  inline const FirelensConfiguration& GetFirelensConfiguration() const { return m_firelensConfiguration; }
  inline bool FirelensConfigurationHasBeenSet() const { return m_firelensConfigurationHasBeenSet; }
  template <typename FirelensConfigurationT = FirelensConfiguration>
  void SetFirelensConfiguration(FirelensConfigurationT&& value) {
    m_firelensConfigurationHasBeenSet = true;
    m_firelensConfiguration = std::forward<FirelensConfigurationT>(value);
  }
  template <typename FirelensConfigurationT = FirelensConfiguration>
  DaemonContainerDefinition& WithFirelensConfiguration(FirelensConfigurationT&& value) {
    SetFirelensConfiguration(std::forward<FirelensConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this parameter is true, the container is given elevated privileges on
   * the host container instance (similar to the <code>root</code> user).</p>
   */
  inline bool GetPrivileged() const { return m_privileged; }
  inline bool PrivilegedHasBeenSet() const { return m_privilegedHasBeenSet; }
  inline void SetPrivileged(bool value) {
    m_privilegedHasBeenSet = true;
    m_privileged = value;
  }
  inline DaemonContainerDefinition& WithPrivileged(bool value) {
    SetPrivileged(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The user to use inside the container.</p>
   */
  inline const Aws::String& GetUser() const { return m_user; }
  inline bool UserHasBeenSet() const { return m_userHasBeenSet; }
  template <typename UserT = Aws::String>
  void SetUser(UserT&& value) {
    m_userHasBeenSet = true;
    m_user = std::forward<UserT>(value);
  }
  template <typename UserT = Aws::String>
  DaemonContainerDefinition& WithUser(UserT&& value) {
    SetUser(std::forward<UserT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>ulimits</code> to set in the container.</p>
   */
  inline const Aws::Vector<Ulimit>& GetUlimits() const { return m_ulimits; }
  inline bool UlimitsHasBeenSet() const { return m_ulimitsHasBeenSet; }
  template <typename UlimitsT = Aws::Vector<Ulimit>>
  void SetUlimits(UlimitsT&& value) {
    m_ulimitsHasBeenSet = true;
    m_ulimits = std::forward<UlimitsT>(value);
  }
  template <typename UlimitsT = Aws::Vector<Ulimit>>
  DaemonContainerDefinition& WithUlimits(UlimitsT&& value) {
    SetUlimits(std::forward<UlimitsT>(value));
    return *this;
  }
  template <typename UlimitsT = Ulimit>
  DaemonContainerDefinition& AddUlimits(UlimitsT&& value) {
    m_ulimitsHasBeenSet = true;
    m_ulimits.emplace_back(std::forward<UlimitsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Linux-specific modifications that are applied to the container configuration,
   * such as Linux kernel capabilities.</p>
   */
  inline const DaemonLinuxParameters& GetLinuxParameters() const { return m_linuxParameters; }
  inline bool LinuxParametersHasBeenSet() const { return m_linuxParametersHasBeenSet; }
  template <typename LinuxParametersT = DaemonLinuxParameters>
  void SetLinuxParameters(LinuxParametersT&& value) {
    m_linuxParametersHasBeenSet = true;
    m_linuxParameters = std::forward<LinuxParametersT>(value);
  }
  template <typename LinuxParametersT = DaemonLinuxParameters>
  DaemonContainerDefinition& WithLinuxParameters(LinuxParametersT&& value) {
    SetLinuxParameters(std::forward<LinuxParametersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The dependencies defined for container startup and shutdown. A container can
   * contain multiple dependencies on other containers in a task definition.</p>
   */
  inline const Aws::Vector<ContainerDependency>& GetDependsOn() const { return m_dependsOn; }
  inline bool DependsOnHasBeenSet() const { return m_dependsOnHasBeenSet; }
  template <typename DependsOnT = Aws::Vector<ContainerDependency>>
  void SetDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn = std::forward<DependsOnT>(value);
  }
  template <typename DependsOnT = Aws::Vector<ContainerDependency>>
  DaemonContainerDefinition& WithDependsOn(DependsOnT&& value) {
    SetDependsOn(std::forward<DependsOnT>(value));
    return *this;
  }
  template <typename DependsOnT = ContainerDependency>
  DaemonContainerDefinition& AddDependsOn(DependsOnT&& value) {
    m_dependsOnHasBeenSet = true;
    m_dependsOn.emplace_back(std::forward<DependsOnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time duration (in seconds) to wait before giving up on resolving dependencies
   * for a container.</p>
   */
  inline int GetStartTimeout() const { return m_startTimeout; }
  inline bool StartTimeoutHasBeenSet() const { return m_startTimeoutHasBeenSet; }
  inline void SetStartTimeout(int value) {
    m_startTimeoutHasBeenSet = true;
    m_startTimeout = value;
  }
  inline DaemonContainerDefinition& WithStartTimeout(int value) {
    SetStartTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Time duration (in seconds) to wait before the container is forcefully killed
   * if it doesn't exit normally on its own.</p>
   */
  inline int GetStopTimeout() const { return m_stopTimeout; }
  inline bool StopTimeoutHasBeenSet() const { return m_stopTimeoutHasBeenSet; }
  inline void SetStopTimeout(int value) {
    m_stopTimeoutHasBeenSet = true;
    m_stopTimeout = value;
  }
  inline DaemonContainerDefinition& WithStopTimeout(int value) {
    SetStopTimeout(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of namespaced kernel parameters to set in the container.</p>
   */
  inline const Aws::Vector<SystemControl>& GetSystemControls() const { return m_systemControls; }
  inline bool SystemControlsHasBeenSet() const { return m_systemControlsHasBeenSet; }
  template <typename SystemControlsT = Aws::Vector<SystemControl>>
  void SetSystemControls(SystemControlsT&& value) {
    m_systemControlsHasBeenSet = true;
    m_systemControls = std::forward<SystemControlsT>(value);
  }
  template <typename SystemControlsT = Aws::Vector<SystemControl>>
  DaemonContainerDefinition& WithSystemControls(SystemControlsT&& value) {
    SetSystemControls(std::forward<SystemControlsT>(value));
    return *this;
  }
  template <typename SystemControlsT = SystemControl>
  DaemonContainerDefinition& AddSystemControls(SystemControlsT&& value) {
    m_systemControlsHasBeenSet = true;
    m_systemControls.emplace_back(std::forward<SystemControlsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this parameter is <code>true</code>, you can deploy containerized
   * applications that require <code>stdin</code> or a <code>tty</code> to be
   * allocated.</p>
   */
  inline bool GetInteractive() const { return m_interactive; }
  inline bool InteractiveHasBeenSet() const { return m_interactiveHasBeenSet; }
  inline void SetInteractive(bool value) {
    m_interactiveHasBeenSet = true;
    m_interactive = value;
  }
  inline DaemonContainerDefinition& WithInteractive(bool value) {
    SetInteractive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When this parameter is <code>true</code>, a TTY is allocated.</p>
   */
  inline bool GetPseudoTerminal() const { return m_pseudoTerminal; }
  inline bool PseudoTerminalHasBeenSet() const { return m_pseudoTerminalHasBeenSet; }
  inline void SetPseudoTerminal(bool value) {
    m_pseudoTerminalHasBeenSet = true;
    m_pseudoTerminal = value;
  }
  inline DaemonContainerDefinition& WithPseudoTerminal(bool value) {
    SetPseudoTerminal(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The restart policy for the container. When you set up a restart policy,
   * Amazon ECS can restart the container without needing to replace the task.</p>
   */
  inline const ContainerRestartPolicy& GetRestartPolicy() const { return m_restartPolicy; }
  inline bool RestartPolicyHasBeenSet() const { return m_restartPolicyHasBeenSet; }
  template <typename RestartPolicyT = ContainerRestartPolicy>
  void SetRestartPolicy(RestartPolicyT&& value) {
    m_restartPolicyHasBeenSet = true;
    m_restartPolicy = std::forward<RestartPolicyT>(value);
  }
  template <typename RestartPolicyT = ContainerRestartPolicy>
  DaemonContainerDefinition& WithRestartPolicy(RestartPolicyT&& value) {
    SetRestartPolicy(std::forward<RestartPolicyT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  Aws::String m_image;

  int m_memory{0};

  int m_memoryReservation{0};

  RepositoryCredentials m_repositoryCredentials;

  HealthCheck m_healthCheck;

  int m_cpu{0};

  bool m_essential{false};

  Aws::Vector<Aws::String> m_entryPoint;

  Aws::Vector<Aws::String> m_command;

  Aws::String m_workingDirectory;

  Aws::Vector<EnvironmentFile> m_environmentFiles;

  Aws::Vector<KeyValuePair> m_environment;

  Aws::Vector<Secret> m_secrets;

  bool m_readonlyRootFilesystem{false};

  Aws::Vector<MountPoint> m_mountPoints;

  LogConfiguration m_logConfiguration;

  FirelensConfiguration m_firelensConfiguration;

  bool m_privileged{false};

  Aws::String m_user;

  Aws::Vector<Ulimit> m_ulimits;

  DaemonLinuxParameters m_linuxParameters;

  Aws::Vector<ContainerDependency> m_dependsOn;

  int m_startTimeout{0};

  int m_stopTimeout{0};

  Aws::Vector<SystemControl> m_systemControls;

  bool m_interactive{false};

  bool m_pseudoTerminal{false};

  ContainerRestartPolicy m_restartPolicy;
  bool m_nameHasBeenSet = false;
  bool m_imageHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_memoryReservationHasBeenSet = false;
  bool m_repositoryCredentialsHasBeenSet = false;
  bool m_healthCheckHasBeenSet = false;
  bool m_cpuHasBeenSet = false;
  bool m_essentialHasBeenSet = false;
  bool m_entryPointHasBeenSet = false;
  bool m_commandHasBeenSet = false;
  bool m_workingDirectoryHasBeenSet = false;
  bool m_environmentFilesHasBeenSet = false;
  bool m_environmentHasBeenSet = false;
  bool m_secretsHasBeenSet = false;
  bool m_readonlyRootFilesystemHasBeenSet = false;
  bool m_mountPointsHasBeenSet = false;
  bool m_logConfigurationHasBeenSet = false;
  bool m_firelensConfigurationHasBeenSet = false;
  bool m_privilegedHasBeenSet = false;
  bool m_userHasBeenSet = false;
  bool m_ulimitsHasBeenSet = false;
  bool m_linuxParametersHasBeenSet = false;
  bool m_dependsOnHasBeenSet = false;
  bool m_startTimeoutHasBeenSet = false;
  bool m_stopTimeoutHasBeenSet = false;
  bool m_systemControlsHasBeenSet = false;
  bool m_interactiveHasBeenSet = false;
  bool m_pseudoTerminalHasBeenSet = false;
  bool m_restartPolicyHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
