/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/SnapmirrorPolicyLifecycle.h>
#include <aws/fsx/model/SnapmirrorPolicyRetentionRule.h>
#include <aws/fsx/model/SnapmirrorPolicyScope.h>
#include <aws/fsx/model/SnapmirrorPolicySnapshotCopyMode.h>
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
 * <p>Describes an Amazon FSx for NetApp ONTAP SnapMirror policy.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/SnapmirrorPolicy">AWS
 * API Reference</a></p>
 */
class SnapmirrorPolicy {
 public:
  AWS_FSX_API SnapmirrorPolicy() = default;
  AWS_FSX_API SnapmirrorPolicy(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API SnapmirrorPolicy& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  SnapmirrorPolicy& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system-generated, unique ID of the SnapMirror policy.</p>
   */
  inline const Aws::String& GetSnapmirrorPolicyId() const { return m_snapmirrorPolicyId; }
  inline bool SnapmirrorPolicyIdHasBeenSet() const { return m_snapmirrorPolicyIdHasBeenSet; }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  void SetSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    m_snapmirrorPolicyIdHasBeenSet = true;
    m_snapmirrorPolicyId = std::forward<SnapmirrorPolicyIdT>(value);
  }
  template <typename SnapmirrorPolicyIdT = Aws::String>
  SnapmirrorPolicy& WithSnapmirrorPolicyId(SnapmirrorPolicyIdT&& value) {
    SetSnapmirrorPolicyId(std::forward<SnapmirrorPolicyIdT>(value));
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
  SnapmirrorPolicy& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SnapMirror policy's storage virtual machine, if you created the
   * SnapMirror policy on a storage virtual machine.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  SnapmirrorPolicy& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the SnapMirror policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  SnapmirrorPolicy& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The snapshot copy mode of the SnapMirror policy, which determines which
   * snapshots SnapMirror transfers to the destination volume.</p>
   */
  inline SnapmirrorPolicySnapshotCopyMode GetSnapshotCopyMode() const { return m_snapshotCopyMode; }
  inline bool SnapshotCopyModeHasBeenSet() const { return m_snapshotCopyModeHasBeenSet; }
  inline void SetSnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode value) {
    m_snapshotCopyModeHasBeenSet = true;
    m_snapshotCopyMode = value;
  }
  inline SnapmirrorPolicy& WithSnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode value) {
    SetSnapshotCopyMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The rules that determine which snapshots SnapMirror retains on the
   * destination volume.</p>
   */
  inline const Aws::Vector<SnapmirrorPolicyRetentionRule>& GetRetentionRules() const { return m_retentionRules; }
  inline bool RetentionRulesHasBeenSet() const { return m_retentionRulesHasBeenSet; }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  void SetRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules = std::forward<RetentionRulesT>(value);
  }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  SnapmirrorPolicy& WithRetentionRules(RetentionRulesT&& value) {
    SetRetentionRules(std::forward<RetentionRulesT>(value));
    return *this;
  }
  template <typename RetentionRulesT = SnapmirrorPolicyRetentionRule>
  SnapmirrorPolicy& AddRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules.emplace_back(std::forward<RetentionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the ONTAP schedule that determines when SnapMirror transfers
   * data.</p>
   */
  inline const Aws::String& GetTransferSchedule() const { return m_transferSchedule; }
  inline bool TransferScheduleHasBeenSet() const { return m_transferScheduleHasBeenSet; }
  template <typename TransferScheduleT = Aws::String>
  void SetTransferSchedule(TransferScheduleT&& value) {
    m_transferScheduleHasBeenSet = true;
    m_transferSchedule = std::forward<TransferScheduleT>(value);
  }
  template <typename TransferScheduleT = Aws::String>
  SnapmirrorPolicy& WithTransferSchedule(TransferScheduleT&& value) {
    SetTransferSchedule(std::forward<TransferScheduleT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies whether SnapMirror compresses data when it transfers the data over
   * the network. This value defaults to <code>false</code>.</p>
   */
  inline bool GetNetworkCompressionEnabled() const { return m_networkCompressionEnabled; }
  inline bool NetworkCompressionEnabledHasBeenSet() const { return m_networkCompressionEnabledHasBeenSet; }
  inline void SetNetworkCompressionEnabled(bool value) {
    m_networkCompressionEnabledHasBeenSet = true;
    m_networkCompressionEnabled = value;
  }
  inline SnapmirrorPolicy& WithNetworkCompressionEnabled(bool value) {
    SetNetworkCompressionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum bandwidth, in kilobytes per second (KBps), that SnapMirror uses
   * to transfer data. A value of <code>0</code> means that the bandwidth is
   * unlimited.</p>
   */
  inline long long GetThrottleInKbps() const { return m_throttleInKbps; }
  inline bool ThrottleInKbpsHasBeenSet() const { return m_throttleInKbpsHasBeenSet; }
  inline void SetThrottleInKbps(long long value) {
    m_throttleInKbpsHasBeenSet = true;
    m_throttleInKbps = value;
  }
  inline SnapmirrorPolicy& WithThrottleInKbps(long long value) {
    SetThrottleInKbps(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The scope of the SnapMirror policy can be one of the following:</p> <ul> <li>
   * <p> <code>FILESYSTEM</code> – The SnapMirror policy was created on the file
   * system.</p> </li> <li> <p> <code>SVM</code> – The SnapMirror policy was created
   * on an SVM.</p> </li> </ul>
   */
  inline SnapmirrorPolicyScope GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  inline void SetScope(SnapmirrorPolicyScope value) {
    m_scopeHasBeenSet = true;
    m_scope = value;
  }
  inline SnapmirrorPolicy& WithScope(SnapmirrorPolicyScope value) {
    SetScope(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the SnapMirror policy can be one of the
   * following:</p> <ul> <li> <p> <code>CREATED</code> – The SnapMirror policy is
   * fully available for use.</p> </li> <li> <p> <code>CREATING</code> – Amazon FSx
   * is creating the SnapMirror policy.</p> </li> <li> <p> <code>DELETING</code> –
   * Amazon FSx is deleting the SnapMirror policy.</p> </li> <li> <p>
   * <code>FAILED</code> – Amazon FSx was unable to create the SnapMirror policy.</p>
   * </li> </ul>
   */
  inline SnapmirrorPolicyLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(SnapmirrorPolicyLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline SnapmirrorPolicy& WithLifecycle(SnapmirrorPolicyLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SnapMirror policy's universally unique identifier (UUID).</p>
   */
  inline const Aws::String& GetUUID() const { return m_uUID; }
  inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
  template <typename UUIDT = Aws::String>
  void SetUUID(UUIDT&& value) {
    m_uUIDHasBeenSet = true;
    m_uUID = std::forward<UUIDT>(value);
  }
  template <typename UUIDT = Aws::String>
  SnapmirrorPolicy& WithUUID(UUIDT&& value) {
    SetUUID(std::forward<UUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the SnapMirror policy lifecycle status changed.</p>
   */
  inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
  inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    m_lifecycleTransitionReasonHasBeenSet = true;
    m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value);
  }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  SnapmirrorPolicy& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
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
  SnapmirrorPolicy& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  SnapmirrorPolicy& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceARN;

  Aws::String m_snapmirrorPolicyId;

  Aws::String m_fileSystemId;

  Aws::String m_storageVirtualMachineId;

  Aws::String m_name;

  SnapmirrorPolicySnapshotCopyMode m_snapshotCopyMode{SnapmirrorPolicySnapshotCopyMode::NOT_SET};

  Aws::Vector<SnapmirrorPolicyRetentionRule> m_retentionRules;

  Aws::String m_transferSchedule;

  bool m_networkCompressionEnabled{false};

  long long m_throttleInKbps{0};

  SnapmirrorPolicyScope m_scope{SnapmirrorPolicyScope::NOT_SET};

  SnapmirrorPolicyLifecycle m_lifecycle{SnapmirrorPolicyLifecycle::NOT_SET};

  Aws::String m_uUID;

  LifecycleTransitionReason m_lifecycleTransitionReason;

  Aws::Vector<Tag> m_tags;
  bool m_resourceARNHasBeenSet = false;
  bool m_snapmirrorPolicyIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_snapshotCopyModeHasBeenSet = false;
  bool m_retentionRulesHasBeenSet = false;
  bool m_transferScheduleHasBeenSet = false;
  bool m_networkCompressionEnabledHasBeenSet = false;
  bool m_throttleInKbpsHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_uUIDHasBeenSet = false;
  bool m_lifecycleTransitionReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
