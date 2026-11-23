/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/SnapshotPolicyLifecycle.h>
#include <aws/fsx/model/SnapshotPolicySchedule.h>
#include <aws/fsx/model/SnapshotPolicyScope.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace FSx {
namespace Model {

/**
 * <p>Describes an Amazon FSx for NetApp ONTAP snapshot policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapshotPolicy">AWS
 * API Reference</a></p>
 */
class SnapshotPolicy {
 public:
  AWS_FSX_API SnapshotPolicy() = default;
  AWS_FSX_API SnapshotPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapshotPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetResourceARN() const { return m_resourceARN; }
  inline bool ResourceARNHasBeenSet() const { return m_resourceARNHasBeenSet; }
  template <typename ResourceARNT = Aws::String>
  void SetResourceARN(ResourceARNT&& value) {
    m_resourceARNHasBeenSet = true;
    m_resourceARN = std::forward<ResourceARNT>(value);
  }
  template <typename ResourceARNT = Aws::String>
  SnapshotPolicy& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system-generated, unique ID of the snapshot policy.</p>
   */
  inline const Aws::String& GetSnapshotPolicyId() const { return m_snapshotPolicyId; }
  inline bool SnapshotPolicyIdHasBeenSet() const { return m_snapshotPolicyIdHasBeenSet; }
  template <typename SnapshotPolicyIdT = Aws::String>
  void SetSnapshotPolicyId(SnapshotPolicyIdT&& value) {
    m_snapshotPolicyIdHasBeenSet = true;
    m_snapshotPolicyId = std::forward<SnapshotPolicyIdT>(value);
  }
  template <typename SnapshotPolicyIdT = Aws::String>
  SnapshotPolicy& WithSnapshotPolicyId(SnapshotPolicyIdT&& value) {
    SetSnapshotPolicyId(std::forward<SnapshotPolicyIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The globally unique ID of the file system, assigned by Amazon FSx.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  SnapshotPolicy& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the snapshot policy's storage virtual machine, if you created the
   * snapshot policy on a storage virtual machine.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  SnapshotPolicy& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the snapshot policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SnapshotPolicy& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether the snapshot policy is enabled. This value defaults to
   * <code>true</code>.</p>
   */
  inline bool GetEnabled() const { return m_enabled; }
  inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }
  inline void SetEnabled(bool value) {
    m_enabledHasBeenSet = true;
    m_enabled = value;
  }
  inline SnapshotPolicy& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schedules on which ONTAP creates snapshots for the snapshot policy.</p>
   */
  inline const Aws::Vector<SnapshotPolicySchedule>& GetSchedules() const { return m_schedules; }
  inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }
  template <typename SchedulesT = Aws::Vector<SnapshotPolicySchedule>>
  void SetSchedules(SchedulesT&& value) {
    m_schedulesHasBeenSet = true;
    m_schedules = std::forward<SchedulesT>(value);
  }
  template <typename SchedulesT = Aws::Vector<SnapshotPolicySchedule>>
  SnapshotPolicy& WithSchedules(SchedulesT&& value) {
    SetSchedules(std::forward<SchedulesT>(value));
    return *this;
  }
  template <typename SchedulesT = SnapshotPolicySchedule>
  SnapshotPolicy& AddSchedules(SchedulesT&& value) {
    m_schedulesHasBeenSet = true;
    m_schedules.emplace_back(std::forward<SchedulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the snapshot policy can be one of the following:</p> <ul> <li>
   * <p> <code>FILESYSTEM</code> – The snapshot policy was created on the file
   * system.</p> </li> <li> <p> <code>SVM</code> – The snapshot policy was created on
   * an SVM.</p> </li> </ul>
   */
  inline SnapshotPolicyScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(SnapshotPolicyScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline SnapshotPolicy& WithScope(SnapshotPolicyScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the snapshot policy can be one of the following:</p>
   * <ul> <li> <p> <code>CREATED</code> – The snapshot policy is fully available for
   * use.</p> </li> <li> <p> <code>CREATING</code> – Amazon FSx is creating the
   * snapshot policy.</p> </li> <li> <p> <code>DELETING</code> – Amazon FSx is
   * deleting the snapshot policy.</p> </li> <li> <p> <code>FAILED</code> – Amazon
   * FSx was unable to create the snapshot policy.</p> </li> </ul>
   */
  inline SnapshotPolicyLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(SnapshotPolicyLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline SnapshotPolicy& WithLifecycle(SnapshotPolicyLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot policy's universally unique identifier (UUID).</p>
   */
  inline const Aws::String& GetUUID() const { return m_uUID; }
  inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
  template <typename UUIDT = Aws::String>
  void SetUUID(UUIDT&& value) {
    m_uUIDHasBeenSet = true;
    m_uUID = std::forward<UUIDT>(value);
  }
  template <typename UUIDT = Aws::String>
  SnapshotPolicy& WithUUID(UUIDT&& value) {
    SetUUID(std::forward<UUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the snapshot policy lifecycle status changed.</p>
   */
  inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
  inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    m_lifecycleTransitionReasonHasBeenSet = true;
    m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value);
  }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  SnapshotPolicy& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    SetLifecycleTransitionReason(std::forward<LifecycleTransitionReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  SnapshotPolicy& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SnapshotPolicy& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceARN;

  Aws::String m_snapshotPolicyId;

  Aws::String m_fileSystemId;

  Aws::String m_storageVirtualMachineId;

  Aws::String m_name;

  bool m_enabled{false};

  Aws::Vector<SnapshotPolicySchedule> m_schedules;

  SnapshotPolicyScope m_scope{SnapshotPolicyScope::NOT_SET};

  SnapshotPolicyLifecycle m_lifecycle{SnapshotPolicyLifecycle::NOT_SET};

  Aws::String m_uUID;

  LifecycleTransitionReason m_lifecycleTransitionReason;

  Aws::Vector<Tag> m_tags;
  bool m_resourceARNHasBeenSet = false;
  bool m_snapshotPolicyIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_schedulesHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_uUIDHasBeenSet = false;
  bool m_lifecycleTransitionReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
