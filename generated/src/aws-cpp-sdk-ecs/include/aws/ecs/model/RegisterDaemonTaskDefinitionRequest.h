/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ecs/ECSRequest.h>
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/ecs/model/DaemonContainerDefinition.h>
#include <aws/ecs/model/DaemonVolume.h>
#include <aws/ecs/model/Tag.h>

#include <utility>

namespace Aws {
namespace ECS {
namespace Model {

/**
 */
class RegisterDaemonTaskDefinitionRequest : public ECSRequest {
 public:
  AWS_ECS_API RegisterDaemonTaskDefinitionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RegisterDaemonTaskDefinition"; }

  AWS_ECS_API Aws::String SerializePayload() const override;

  AWS_ECS_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>You must specify a <code>family</code> for a daemon task definition. This
   * family is used as a name for your daemon task definition. Up to 255 letters
   * (uppercase and lowercase), numbers, underscores, and hyphens are allowed.</p>
   */
  inline const Aws::String& GetFamily() const { return m_family; }
  inline bool FamilyHasBeenSet() const { return m_familyHasBeenSet; }
  template <typename FamilyT = Aws::String>
  void SetFamily(FamilyT&& value) {
    m_familyHasBeenSet = true;
    m_family = std::forward<FamilyT>(value);
  }
  template <typename FamilyT = Aws::String>
  RegisterDaemonTaskDefinitionRequest& WithFamily(FamilyT&& value) {
    SetFamily(std::forward<FamilyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The short name or full Amazon Resource Name (ARN) of the IAM role that
   * containers in this daemon task can assume. All containers in this daemon task
   * are granted the permissions that are specified in this role.</p>
   */
  inline const Aws::String& GetTaskRoleArn() const { return m_taskRoleArn; }
  inline bool TaskRoleArnHasBeenSet() const { return m_taskRoleArnHasBeenSet; }
  template <typename TaskRoleArnT = Aws::String>
  void SetTaskRoleArn(TaskRoleArnT&& value) {
    m_taskRoleArnHasBeenSet = true;
    m_taskRoleArn = std::forward<TaskRoleArnT>(value);
  }
  template <typename TaskRoleArnT = Aws::String>
  RegisterDaemonTaskDefinitionRequest& WithTaskRoleArn(TaskRoleArnT&& value) {
    SetTaskRoleArn(std::forward<TaskRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the task execution role that grants the
   * Amazon ECS container agent permission to make Amazon Web Services API calls on
   * your behalf. The task execution role is required for daemon tasks that pull
   * container images from Amazon ECR or send container logs to CloudWatch.</p>
   */
  inline const Aws::String& GetExecutionRoleArn() const { return m_executionRoleArn; }
  inline bool ExecutionRoleArnHasBeenSet() const { return m_executionRoleArnHasBeenSet; }
  template <typename ExecutionRoleArnT = Aws::String>
  void SetExecutionRoleArn(ExecutionRoleArnT&& value) {
    m_executionRoleArnHasBeenSet = true;
    m_executionRoleArn = std::forward<ExecutionRoleArnT>(value);
  }
  template <typename ExecutionRoleArnT = Aws::String>
  RegisterDaemonTaskDefinitionRequest& WithExecutionRoleArn(ExecutionRoleArnT&& value) {
    SetExecutionRoleArn(std::forward<ExecutionRoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of container definitions in JSON format that describe the containers
   * that make up your daemon task.</p>
   */
  inline const Aws::Vector<DaemonContainerDefinition>& GetContainerDefinitions() const { return m_containerDefinitions; }
  inline bool ContainerDefinitionsHasBeenSet() const { return m_containerDefinitionsHasBeenSet; }
  template <typename ContainerDefinitionsT = Aws::Vector<DaemonContainerDefinition>>
  void SetContainerDefinitions(ContainerDefinitionsT&& value) {
    m_containerDefinitionsHasBeenSet = true;
    m_containerDefinitions = std::forward<ContainerDefinitionsT>(value);
  }
  template <typename ContainerDefinitionsT = Aws::Vector<DaemonContainerDefinition>>
  RegisterDaemonTaskDefinitionRequest& WithContainerDefinitions(ContainerDefinitionsT&& value) {
    SetContainerDefinitions(std::forward<ContainerDefinitionsT>(value));
    return *this;
  }
  template <typename ContainerDefinitionsT = DaemonContainerDefinition>
  RegisterDaemonTaskDefinitionRequest& AddContainerDefinitions(ContainerDefinitionsT&& value) {
    m_containerDefinitionsHasBeenSet = true;
    m_containerDefinitions.emplace_back(std::forward<ContainerDefinitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of CPU units used by the daemon task. It can be expressed as an
   * integer using CPU units (for example, <code>1024</code>).</p>
   */
  inline const Aws::String& GetCpu() const { return m_cpu; }
  inline bool CpuHasBeenSet() const { return m_cpuHasBeenSet; }
  template <typename CpuT = Aws::String>
  void SetCpu(CpuT&& value) {
    m_cpuHasBeenSet = true;
    m_cpu = std::forward<CpuT>(value);
  }
  template <typename CpuT = Aws::String>
  RegisterDaemonTaskDefinitionRequest& WithCpu(CpuT&& value) {
    SetCpu(std::forward<CpuT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The amount of memory (in MiB) used by the daemon task. It can be expressed as
   * an integer using MiB (for example, <code>1024</code>).</p>
   */
  inline const Aws::String& GetMemory() const { return m_memory; }
  inline bool MemoryHasBeenSet() const { return m_memoryHasBeenSet; }
  template <typename MemoryT = Aws::String>
  void SetMemory(MemoryT&& value) {
    m_memoryHasBeenSet = true;
    m_memory = std::forward<MemoryT>(value);
  }
  template <typename MemoryT = Aws::String>
  RegisterDaemonTaskDefinitionRequest& WithMemory(MemoryT&& value) {
    SetMemory(std::forward<MemoryT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of volume definitions in JSON format that containers in your daemon
   * task can use.</p>
   */
  inline const Aws::Vector<DaemonVolume>& GetVolumes() const { return m_volumes; }
  inline bool VolumesHasBeenSet() const { return m_volumesHasBeenSet; }
  template <typename VolumesT = Aws::Vector<DaemonVolume>>
  void SetVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes = std::forward<VolumesT>(value);
  }
  template <typename VolumesT = Aws::Vector<DaemonVolume>>
  RegisterDaemonTaskDefinitionRequest& WithVolumes(VolumesT&& value) {
    SetVolumes(std::forward<VolumesT>(value));
    return *this;
  }
  template <typename VolumesT = DaemonVolume>
  RegisterDaemonTaskDefinitionRequest& AddVolumes(VolumesT&& value) {
    m_volumesHasBeenSet = true;
    m_volumes.emplace_back(std::forward<VolumesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The metadata that you apply to the daemon task definition to help you
   * categorize and organize them. Each tag consists of a key and an optional value.
   * You define both of them.</p> <p>The following basic restrictions apply to
   * tags:</p> <ul> <li> <p>Maximum number of tags per resource - 50</p> </li> <li>
   * <p>For each resource, each tag key must be unique, and each tag key can have
   * only one value.</p> </li> <li> <p>Maximum key length - 128 Unicode characters in
   * UTF-8</p> </li> <li> <p>Maximum value length - 256 Unicode characters in
   * UTF-8</p> </li> <li> <p>If your tagging schema is used across multiple services
   * and resources, remember that other services may have restrictions on allowed
   * characters. Generally allowed characters are: letters, numbers, and spaces
   * representable in UTF-8, and the following characters: + - = . _ : / @.</p> </li>
   * <li> <p>Tag keys and values are case-sensitive.</p> </li> <li> <p>Do not use
   * <code>aws:</code>, <code>AWS:</code>, or any upper or lowercase combination of
   * such as a prefix for either keys or values as it is reserved for Amazon Web
   * Services use. You cannot edit or delete tag keys or values with this prefix.
   * Tags with this prefix do not count against your tags per resource limit.</p>
   * </li> </ul>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  RegisterDaemonTaskDefinitionRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  RegisterDaemonTaskDefinitionRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_family;

  Aws::String m_taskRoleArn;

  Aws::String m_executionRoleArn;

  Aws::Vector<DaemonContainerDefinition> m_containerDefinitions;

  Aws::String m_cpu;

  Aws::String m_memory;

  Aws::Vector<DaemonVolume> m_volumes;

  Aws::Vector<Tag> m_tags;
  bool m_familyHasBeenSet = false;
  bool m_taskRoleArnHasBeenSet = false;
  bool m_executionRoleArnHasBeenSet = false;
  bool m_containerDefinitionsHasBeenSet = false;
  bool m_cpuHasBeenSet = false;
  bool m_memoryHasBeenSet = false;
  bool m_volumesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace ECS
}  // namespace Aws
