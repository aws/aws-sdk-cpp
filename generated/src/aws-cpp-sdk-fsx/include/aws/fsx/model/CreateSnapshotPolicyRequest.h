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
#include <aws/fsx/model/SnapshotPolicySchedule.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class CreateSnapshotPolicyRequest : public FSxRequest {
 public:
  AWS_FSX_API CreateSnapshotPolicyRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateSnapshotPolicy"; }

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
  CreateSnapshotPolicyRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the Amazon FSx for NetApp ONTAP file system on which to
   * create the snapshot policy. You must specify either a <code>FileSystemId</code>
   * or a <code>StorageVirtualMachineId</code>, but not both.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateSnapshotPolicyRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the SVM on which to create the snapshot policy. You must
   * specify either a <code>FileSystemId</code> or a
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
  CreateSnapshotPolicyRequest& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the snapshot policy.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  CreateSnapshotPolicyRequest& WithName(NameT&& value) {
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
  inline CreateSnapshotPolicyRequest& WithEnabled(bool value) {
    SetEnabled(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the schedules on which ONTAP creates snapshots for the snapshot
   * policy.</p>
   */
  inline const Aws::Vector<SnapshotPolicySchedule>& GetSchedules() const { return m_schedules; }
  inline bool SchedulesHasBeenSet() const { return m_schedulesHasBeenSet; }
  template <typename SchedulesT = Aws::Vector<SnapshotPolicySchedule>>
  void SetSchedules(SchedulesT&& value) {
    m_schedulesHasBeenSet = true;
    m_schedules = std::forward<SchedulesT>(value);
  }
  template <typename SchedulesT = Aws::Vector<SnapshotPolicySchedule>>
  CreateSnapshotPolicyRequest& WithSchedules(SchedulesT&& value) {
    SetSchedules(std::forward<SchedulesT>(value));
    return *this;
  }
  template <typename SchedulesT = SnapshotPolicySchedule>
  CreateSnapshotPolicyRequest& AddSchedules(SchedulesT&& value) {
    m_schedulesHasBeenSet = true;
    m_schedules.emplace_back(std::forward<SchedulesT>(value));
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
  CreateSnapshotPolicyRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateSnapshotPolicyRequest& AddTags(TagsT&& value) {
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

  bool m_enabled{false};

  Aws::Vector<SnapshotPolicySchedule> m_schedules;

  Aws::Vector<Tag> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_nameHasBeenSet = false;
  bool m_enabledHasBeenSet = false;
  bool m_schedulesHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
