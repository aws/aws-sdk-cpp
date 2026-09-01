/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iotsitewise/IoTSiteWise_EXPORTS.h>
#include <aws/iotsitewise/model/EphemeralStorageConfiguration.h>
#include <aws/iotsitewise/model/Mount.h>
#include <aws/iotsitewise/model/ProcessingType.h>
#include <aws/iotsitewise/model/ProcessingUnit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoTSiteWise {
namespace Model {

/**
 * <p>Configuration for a container task, including the container image, IAM role,
 * and compute settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iotsitewise-2019-12-02/ContainerTaskConfiguration">AWS
 * API Reference</a></p>
 */
class ContainerTaskConfiguration {
 public:
  AWS_IOTSITEWISE_API ContainerTaskConfiguration() = default;
  AWS_IOTSITEWISE_API ContainerTaskConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API ContainerTaskConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOTSITEWISE_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon ECR image URI for the task container.</p>
   */
  inline const Aws::String& GetEcrUri() const { return m_ecrUri; }
  inline bool EcrUriHasBeenSet() const { return m_ecrUriHasBeenSet; }
  template <typename EcrUriT = Aws::String>
  void SetEcrUri(EcrUriT&& value) {
    m_ecrUriHasBeenSet = true;
    m_ecrUri = std::forward<EcrUriT>(value);
  }
  template <typename EcrUriT = Aws::String>
  ContainerTaskConfiguration& WithEcrUri(EcrUriT&& value) {
    SetEcrUri(std::forward<EcrUriT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role that grants the containerized workload permissions to
   * access AWS resources.</p>
   */
  inline const Aws::String& GetTaskExecutionRole() const { return m_taskExecutionRole; }
  inline bool TaskExecutionRoleHasBeenSet() const { return m_taskExecutionRoleHasBeenSet; }
  template <typename TaskExecutionRoleT = Aws::String>
  void SetTaskExecutionRole(TaskExecutionRoleT&& value) {
    m_taskExecutionRoleHasBeenSet = true;
    m_taskExecutionRole = std::forward<TaskExecutionRoleT>(value);
  }
  template <typename TaskExecutionRoleT = Aws::String>
  ContainerTaskConfiguration& WithTaskExecutionRole(TaskExecutionRoleT&& value) {
    SetTaskExecutionRole(std::forward<TaskExecutionRoleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing type for compute resources.</p>
   */
  inline ProcessingType GetProcessingType() const { return m_processingType; }
  inline bool ProcessingTypeHasBeenSet() const { return m_processingTypeHasBeenSet; }
  inline void SetProcessingType(ProcessingType value) {
    m_processingTypeHasBeenSet = true;
    m_processingType = value;
  }
  inline ContainerTaskConfiguration& WithProcessingType(ProcessingType value) {
    SetProcessingType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The processing unit allocation that determines the vCPU, memory, and GPU
   * resources.</p>
   */
  inline ProcessingUnit GetProcessingUnit() const { return m_processingUnit; }
  inline bool ProcessingUnitHasBeenSet() const { return m_processingUnitHasBeenSet; }
  inline void SetProcessingUnit(ProcessingUnit value) {
    m_processingUnitHasBeenSet = true;
    m_processingUnit = value;
  }
  inline ContainerTaskConfiguration& WithProcessingUnit(ProcessingUnit value) {
    SetProcessingUnit(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Ephemeral storage configuration for the container task.</p>
   */
  inline const EphemeralStorageConfiguration& GetEphemeralStorageConfiguration() const { return m_ephemeralStorageConfiguration; }
  inline bool EphemeralStorageConfigurationHasBeenSet() const { return m_ephemeralStorageConfigurationHasBeenSet; }
  template <typename EphemeralStorageConfigurationT = EphemeralStorageConfiguration>
  void SetEphemeralStorageConfiguration(EphemeralStorageConfigurationT&& value) {
    m_ephemeralStorageConfigurationHasBeenSet = true;
    m_ephemeralStorageConfiguration = std::forward<EphemeralStorageConfigurationT>(value);
  }
  template <typename EphemeralStorageConfigurationT = EphemeralStorageConfiguration>
  ContainerTaskConfiguration& WithEphemeralStorageConfiguration(EphemeralStorageConfigurationT&& value) {
    SetEphemeralStorageConfiguration(std::forward<EphemeralStorageConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The command to execute in the container.</p>
   */
  inline const Aws::Vector<Aws::String>& GetCommand() const { return m_command; }
  inline bool CommandHasBeenSet() const { return m_commandHasBeenSet; }
  template <typename CommandT = Aws::Vector<Aws::String>>
  void SetCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command = std::forward<CommandT>(value);
  }
  template <typename CommandT = Aws::Vector<Aws::String>>
  ContainerTaskConfiguration& WithCommand(CommandT&& value) {
    SetCommand(std::forward<CommandT>(value));
    return *this;
  }
  template <typename CommandT = Aws::String>
  ContainerTaskConfiguration& AddCommand(CommandT&& value) {
    m_commandHasBeenSet = true;
    m_command.emplace_back(std::forward<CommandT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timeout in seconds for task execution. Default: 3600 (1 hour).</p>
   */
  inline long long GetTimeoutSeconds() const { return m_timeoutSeconds; }
  inline bool TimeoutSecondsHasBeenSet() const { return m_timeoutSecondsHasBeenSet; }
  inline void SetTimeoutSeconds(long long value) {
    m_timeoutSecondsHasBeenSet = true;
    m_timeoutSeconds = value;
  }
  inline ContainerTaskConfiguration& WithTimeoutSeconds(long long value) {
    SetTimeoutSeconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Environment variables passed to the container at runtime.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetEnvironmentVariables() const { return m_environmentVariables; }
  inline bool EnvironmentVariablesHasBeenSet() const { return m_environmentVariablesHasBeenSet; }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  void SetEnvironmentVariables(EnvironmentVariablesT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables = std::forward<EnvironmentVariablesT>(value);
  }
  template <typename EnvironmentVariablesT = Aws::Map<Aws::String, Aws::String>>
  ContainerTaskConfiguration& WithEnvironmentVariables(EnvironmentVariablesT&& value) {
    SetEnvironmentVariables(std::forward<EnvironmentVariablesT>(value));
    return *this;
  }
  template <typename EnvironmentVariablesKeyT = Aws::String, typename EnvironmentVariablesValueT = Aws::String>
  ContainerTaskConfiguration& AddEnvironmentVariables(EnvironmentVariablesKeyT&& key, EnvironmentVariablesValueT&& value) {
    m_environmentVariablesHasBeenSet = true;
    m_environmentVariables.emplace(std::forward<EnvironmentVariablesKeyT>(key), std::forward<EnvironmentVariablesValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Mounts attached to the container filesystem. Each mount exposes an external
   * data source as a local directory inside the container. The service assigns each
   * mount a container path based on the mount name. The container reads files
   * through that path as if the data were on the local filesystem.</p>
   */
  inline const Aws::Vector<Mount>& GetMounts() const { return m_mounts; }
  inline bool MountsHasBeenSet() const { return m_mountsHasBeenSet; }
  template <typename MountsT = Aws::Vector<Mount>>
  void SetMounts(MountsT&& value) {
    m_mountsHasBeenSet = true;
    m_mounts = std::forward<MountsT>(value);
  }
  template <typename MountsT = Aws::Vector<Mount>>
  ContainerTaskConfiguration& WithMounts(MountsT&& value) {
    SetMounts(std::forward<MountsT>(value));
    return *this;
  }
  template <typename MountsT = Mount>
  ContainerTaskConfiguration& AddMounts(MountsT&& value) {
    m_mountsHasBeenSet = true;
    m_mounts.emplace_back(std::forward<MountsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_ecrUri;

  Aws::String m_taskExecutionRole;

  ProcessingType m_processingType{ProcessingType::NOT_SET};

  ProcessingUnit m_processingUnit{ProcessingUnit::NOT_SET};

  EphemeralStorageConfiguration m_ephemeralStorageConfiguration;

  Aws::Vector<Aws::String> m_command;

  long long m_timeoutSeconds{0};

  Aws::Map<Aws::String, Aws::String> m_environmentVariables;

  Aws::Vector<Mount> m_mounts;
  bool m_ecrUriHasBeenSet = false;
  bool m_taskExecutionRoleHasBeenSet = false;
  bool m_processingTypeHasBeenSet = false;
  bool m_processingUnitHasBeenSet = false;
  bool m_ephemeralStorageConfigurationHasBeenSet = false;
  bool m_commandHasBeenSet = false;
  bool m_timeoutSecondsHasBeenSet = false;
  bool m_environmentVariablesHasBeenSet = false;
  bool m_mountsHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoTSiteWise
}  // namespace Aws
