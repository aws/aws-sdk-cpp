/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonContainerDefinition.h>
#include <aws/ecs/model/DaemonTaskDefinitionStatus.h>
#include <aws/ecs/model/DaemonVolume.h>

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
 * <p>The details of a daemon task definition. A daemon task definition is a
 * template that describes the containers that form a daemon. Daemons deploy
 * cross-cutting software agents independently across your Amazon ECS
 * infrastructure.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ecs-2014-11-13/DaemonTaskDefinition">AWS
 * API Reference</a></p>
 */
class DaemonTaskDefinition {
 public:
  AWS_ECS_API DaemonTaskDefinition() = default;
  AWS_ECS_API DaemonTaskDefinition(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API DaemonTaskDefinition& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_ECS_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The full Amazon Resource Name (ARN) of the daemon task definition.</p>
   */
  inline const Aws::String& GetDaemonTaskDefinitionArn() const { return m_daemonTaskDefinitionArn; }
  inline bool DaemonTaskDefinitionArnHasBeenSet() const { return m_daemonTaskDefinitionArnHasBeenSet; }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  void SetDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    m_daemonTaskDefinitionArnHasBeenSet = true;
    m_daemonTaskDefinitionArn = std::forward<DaemonTaskDefinitionArnT>(value);
  }
  template <typename DaemonTaskDefinitionArnT = Aws::String>
  DaemonTaskDefinition& WithDaemonTaskDefinitionArn(DaemonTaskDefinitionArnT&& value) {
    SetDaemonTaskDefinitionArn(std::forward<DaemonTaskDefinitionArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of a family that this daemon task definition is registered to.</p>
   */
  inline const Aws::String& GetFamily() const { return m_family; }
  inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
  template <typename FamilyT = Aws::String>
  void SetFamily(FamilyT&& value) {
    m_familyHasBeenSet = true;
    m_family = std::forward<FamilyT>(value);
  }
  template <typename FamilyT = Aws::String>
  DaemonTaskDefinition& WithFamily(FamilyT&& value) {
    SetFamily(std::forward<FamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The revision of the daemon task in a particular family. The revision is a
   * version number of a daemon task definition in a family. When you register a
   * daemon task definition for the first time, the revision is <code>1</code>. Each
   * time that you register a new revision of a daemon task definition in the same
   * family, the revision value always increases by one.</p>
   */
  inline int GetRevision() const { return m_revision; }
  inline bool RevisionHasBeenSet() const { return m_revisionHasBeenSet; }
  inline void SetRevision(int value) {
    m_revisionHasBeenSet = true;
    m_revision = value;
  }
  inline DaemonTaskDefinition& WithRevision(int value) {
    SetRevision(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that grants
   * containers in the daemon task permission to call Amazon Web Services APIs on
   * your behalf.</p>
   */
  inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
  inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
  template <typename TaskRoleArnT = Aws::String>
  void SetTaskRoleArn(TaskRoleArnT&& value) {
    m_taskRoleArnHasBeenSet = true;
    m_taskRoleArn = std::forward<TaskRoleArnT>(value);
  }
  template <typename TaskRoleArnT = Aws::String>
  DaemonTaskDefinition& WithTaskRoleArn(TaskRoleArnT&& value) {
    SetTaskRoleArn(std::forward<TaskRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
   * Amazon ECS container agent permission to make Amazon Web Services API calls on
   * your behalf.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  DaemonTaskDefinition& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of container definitions in JSON format that describe the containers
   * that make up the daemon task.</p>
   */
  inline const Aws::Vector<DaemonContainerDefinition>& GetContainerDefinitions() const { return m_containerDefinitions; }
  inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
  template <typename ContainerDefinitionsT = Aws::Vector<DaemonContainerDefinition>>
  void SetContainerDefinitions(ContainerDefinitionsT&& value) {
    m_containerDefinitionsHasBeenSet = true;
    m_containerDefinitions = std::forward<ContainerDefinitionsT>(value);
  }
  template <typename ContainerDefinitionsT = Aws::Vector<DaemonContainerDefinition>>
  DaemonTaskDefinition& WithContainerDefinitions(ContainerDefinitionsT&& value) {
    SetContainerDefinitions(std::forward<ContainerDefinitionsT>(value));
    return *this;
  }
  template <typename ContainerDefinitionsT = DaemonContainerDefinition>
  DaemonTaskDefinition& AddContainerDefinitions(ContainerDefinitionsT&& value) {
    m_containerDefinitionsHasBeenSet = true;
    m_containerDefinitions.emplace_back(std::forward<ContainerDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The list of data volume definitions for the daemon task.</p>
   */
  inline const Aws::Vector<DaemonVolume>& GetVolumes() const { return m_volumes; }
  inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
  template <typename VolumesT = Aws::Vector<DaemonVolume>>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::Vector<DaemonVolume>>
  DaemonTaskDefinition& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  template <typename VolumesT = DaemonVolume>
  DaemonTaskDefinition& AddVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes.emplace_back(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU units used by the daemon task.</p>
   */
  inline const Aws::String& GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  template <typename CpuT = Aws::String>
  void SetCpu(CpuT&& value) {
    m_cpuHasBeenSet = true;
    m_cpu = std::forward<CpuT>(value);
  }
  template <typename CpuT = Aws::String>
  DaemonTaskDefinition& WithCpu(CpuT&& value) {
    SetCpu(std::forward<CpuT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory (in MiB) used by the daemon task.</p>
   */
  inline const Aws::String& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = Aws::String>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = Aws::String>
  DaemonTaskDefinition& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the daemon task definition. The valid values are
   * <code>ACTIVE</code>, <code>DELETE_IN_PROGRESS</code>, and
   * <code>DELETED</code>.</p>
   */
  inline DaemonTaskDefinitionStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(DaemonTaskDefinitionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline DaemonTaskDefinition& WithStatus(DaemonTaskDefinitionStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon task definition was
   * registered.</p>
   */
  inline const Aws::Utils::DateTime& GetRegisteredAt() const { return m_registeredAt; }
  inline bool RegisteredAtHasBeenSet() const { return m_registeredAtHasBeenSet; }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  void SetRegisteredAt(RegisteredAtT&& value) {
    m_registeredAtHasBeenSet = true;
    m_registeredAt = std::forward<RegisteredAtT>(value);
  }
  template <typename RegisteredAtT = Aws::Utils::DateTime>
  DaemonTaskDefinition& WithRegisteredAt(RegisteredAtT&& value) {
    SetRegisteredAt(std::forward<RegisteredAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Unix timestamp for the time when the daemon task definition delete was
   * requested.</p>
   */
  inline const Aws::Utils::DateTime& GetDeleteRequestedAt() const { return m_deleteRequestedAt; }
  inline bool DeleteRequestedAtHasBeenSet() const { return m_deleteRequestedAtHasBeenSet; }
  template <typename DeleteRequestedAtT = Aws::Utils::DateTime>
  void SetDeleteRequestedAt(DeleteRequestedAtT&& value) {
    m_deleteRequestedAtHasBeenSet = true;
    m_deleteRequestedAt = std::forward<DeleteRequestedAtT>(value);
  }
  template <typename DeleteRequestedAtT = Aws::Utils::DateTime>
  DaemonTaskDefinition& WithDeleteRequestedAt(DeleteRequestedAtT&& value) {
    SetDeleteRequestedAt(std::forward<DeleteRequestedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The principal that registered the daemon task definition.</p>
   */
  inline const Aws::String& GetRegisteredBy() const { return m_registeredBy; }
  inline bool RegisteredByHasBeenSet() const { return m_registeredByHasBeenSet; }
  template <typename RegisteredByT = Aws::String>
  void SetRegisteredBy(RegisteredByT&& value) {
    m_registeredByHasBeenSet = true;
    m_registeredBy = std::forward<RegisteredByT>(value);
  }
  template <typename RegisteredByT = Aws::String>
  DaemonTaskDefinition& WithRegisteredBy(RegisteredByT&& value) {
    SetRegisteredBy(std::forward<RegisteredByT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_daemonTaskDefinitionArn;

  Aws::String m_family;

  int m_revision{0};

  Aws::String m_taskRoleArn;

  Aws::String m_executionRoleArn;

  Aws::Vector<DaemonContainerDefinition> m_containerDefinitions;

  Aws::Vector<DaemonVolume> m_volumes;

  Aws::String m_cpu;

  Aws::String m_memory;

  DaemonTaskDefinitionStatus m_status{DaemonTaskDefinitionStatus::NOT_SET};

  Aws::Utils::DateTime m_registeredAt{};

  Aws::Utils::DateTime m_deleteRequestedAt{};

  Aws::String m_registeredBy;
  bool m_daemonTaskDefinitionArnHasBeenSet = false;
  bool m_familyHasBeenSet = false;
  bool m_revisionHasBeenSet = false;
  bool m_taskRoleArnHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_containerDefinitionsHasBeenSet = false;
  bool m_volumesHasBeenSet = false;
  bool m_cpuHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_registeredAtHasBeenSet = false;
  bool m_deleteRequestedAtHasBeenSet = false;
  bool m_registeredByHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
