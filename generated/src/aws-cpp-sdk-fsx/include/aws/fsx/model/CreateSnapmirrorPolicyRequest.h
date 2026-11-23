/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSxRequest.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/SnapmirrorPolicyRetentionRule.h>
#include <aws/fsx/model/SnapmirrorPolicySnapshotCopyMode.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class CreateSnapmirrorPolicyRequest : public FSxRequest {
 public:
  AWS_FSX_API CreateSnapmirrorPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSnapmirrorPolicy"; }

  AWS_FSX_API Aws::String SerializePayload() const override;

  AWS_FSX_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
  inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
  template <typename ClientRequestTokenT = Aws::String>
  void SetClientRequestToken(ClientRequestTokenT&& value) {
    m_clientRequestTokenHasBeenSet = true;
    m_clientRequestToken = std::forward<ClientRequestTokenT>(value);
  }
  template <typename ClientRequestTokenT = Aws::String>
  CreateSnapmirrorPolicyRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the Amazon FSx for NetApp ONTAP file system on which to
   * create the SnapMirror policy. You must specify either a
   * <code>FileSystemId</code> or a <code>StorageVirtualMachineId</code>, but not
   * both.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateSnapmirrorPolicyRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the SVM on which to create the SnapMirror policy. You
   * must specify either a <code>FileSystemId</code> or a
   * <code>StorageVirtualMachineId</code>, but not both.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  CreateSnapmirrorPolicyRequest& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the SnapMirror policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSnapmirrorPolicyRequest& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which snapshots SnapMirror transfers to the destination volume:</p>
   * <ul> <li> <p> <code>COPY_ALL_SOURCE_SNAPSHOTS</code> – SnapMirror copies all
   * snapshots of the source volume to the destination volume on a transfer. You
   * can't specify <code>RetentionRules</code> along with this property.</p> </li>
   * <li> <p> <code>COPY_LATEST_SOURCE_SNAPSHOT</code> – SnapMirror copies the latest
   * snapshot of the source volume to the destination volume on a transfer. You can't
   * specify <code>RetentionRules</code> along with this property.</p> </li> <li> <p>
   * <code>NO_CREATE_SNAPSHOT_ON_SOURCE</code> – SnapMirror doesn't create a snapshot
   * on the source volume at beginning of an update or resync operation. You must
   * specify <code>RetentionRules</code> along with this property.</p> </li> </ul>
   * <p>If you don't specify a <code>SnapshotCopyMode</code>, SnapMirror creates a
   * new snapshot of the source volume and copies it, along with any snapshots that
   * match <code>RetentionRules</code>, to the destination volume on a transfer.
   * <code>RetentionRules</code> is optional.</p>
   */
  inline SnapmirrorPolicySnapshotCopyMode GetSnapshotCopyMode() const { return m_snapshotCopyMode; }
  inline bool SnapshotCopyModeHasBeenSet() const { return m_snapshotCopyModeHasBeenSet; }
  inline void SetSnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode value) {
    m_snapshotCopyModeHasBeenSet = true;
    m_snapshotCopyMode = value;
  }
  inline CreateSnapmirrorPolicyRequest& WithSnapshotCopyMode(SnapmirrorPolicySnapshotCopyMode value) {
    SetSnapshotCopyMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the rules that determine which snapshots SnapMirror retains on the
   * destination volume, based on their SnapMirror labels.</p>
   */
  inline const Aws::Vector<SnapmirrorPolicyRetentionRule>& GetRetentionRules() const { return m_retentionRules; }
  inline bool RetentionRulesHasBeenSet() const { return m_retentionRulesHasBeenSet; }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  void SetRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules = std::forward<RetentionRulesT>(value);
  }
  template <typename RetentionRulesT = Aws::Vector<SnapmirrorPolicyRetentionRule>>
  CreateSnapmirrorPolicyRequest& WithRetentionRules(RetentionRulesT&& value) {
    SetRetentionRules(std::forward<RetentionRulesT>(value));
    return *this;
  }
  template <typename RetentionRulesT = SnapmirrorPolicyRetentionRule>
  CreateSnapmirrorPolicyRequest& AddRetentionRules(RetentionRulesT&& value) {
    m_retentionRulesHasBeenSet = true;
    m_retentionRules.emplace_back(std::forward<RetentionRulesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the ONTAP schedule that determines when SnapMirror
   * transfers data.</p>
   */
  inline const Aws::String& GetTransferSchedule() const { return m_transferSchedule; }
  inline bool TransferScheduleHasBeenSet() const { return m_transferScheduleHasBeenSet; }
  template <typename TransferScheduleT = Aws::String>
  void SetTransferSchedule(TransferScheduleT&& value) {
    m_transferScheduleHasBeenSet = true;
    m_transferSchedule = std::forward<TransferScheduleT>(value);
  }
  template <typename TransferScheduleT = Aws::String>
  CreateSnapmirrorPolicyRequest& WithTransferSchedule(TransferScheduleT&& value) {
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
  inline CreateSnapmirrorPolicyRequest& WithNetworkCompressionEnabled(bool value) {
    SetNetworkCompressionEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the maximum bandwidth, in kilobytes per second (KBps), that
   * SnapMirror uses to transfer data. A value of <code>0</code> means that the
   * bandwidth is unlimited.</p>
   */
  inline long long GetThrottleInKbps() const { return m_throttleInKbps; }
  inline bool ThrottleInKbpsHasBeenSet() const { return m_throttleInKbpsHasBeenSet; }
  inline void SetThrottleInKbps(long long value) {
    m_throttleInKbpsHasBeenSet = true;
    m_throttleInKbps = value;
  }
  inline CreateSnapmirrorPolicyRequest& WithThrottleInKbps(long long value) {
    SetThrottleInKbps(value);
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
  CreateSnapmirrorPolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSnapmirrorPolicyRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_fileSystemId;

  Aws::String m_storageVirtualMachineId;

  Aws::String m_name;

  SnapmirrorPolicySnapshotCopyMode m_snapshotCopyMode{SnapmirrorPolicySnapshotCopyMode::NOT_SET};

  Aws::Vector<SnapmirrorPolicyRetentionRule> m_retentionRules;

  Aws::String m_transferSchedule;

  bool m_networkCompressionEnabled{false};

  long long m_throttleInKbps{0};

  Aws::Vector<Tag> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_snapshotCopyModeHasBeenSet = false;
  bool m_retentionRulesHasBeenSet = false;
  bool m_transferScheduleHasBeenSet = false;
  bool m_networkCompressionEnabledHasBeenSet = false;
  bool m_throttleInKbpsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
