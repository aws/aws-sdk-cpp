/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
#include <aws/fsx/model/StorageVirtualMachinePeerApplication.h>
#include <aws/fsx/model/StorageVirtualMachinePeerLifecycle.h>
#include <aws/fsx/model/StorageVirtualMachinePeerState.h>
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
 * <p>Describes an Amazon FSx for NetApp ONTAP storage virtual machine (SVM) peer
 * relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/StorageVirtualMachinePeer">AWS
 * API Reference</a></p>
 */
class StorageVirtualMachinePeer {
 public:
  AWS_FSX_API StorageVirtualMachinePeer() = default;
  AWS_FSX_API StorageVirtualMachinePeer(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API StorageVirtualMachinePeer& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  StorageVirtualMachinePeer& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system-generated, unique ID of the SVM peer.</p>
   */
  inline const Aws::String& GetStorageVirtualMachinePeerId() const { return m_storageVirtualMachinePeerId; }
  inline bool StorageVirtualMachinePeerIdHasBeenSet() const { return m_storageVirtualMachinePeerIdHasBeenSet; }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  void SetStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    m_storageVirtualMachinePeerIdHasBeenSet = true;
    m_storageVirtualMachinePeerId = std::forward<StorageVirtualMachinePeerIdT>(value);
  }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  StorageVirtualMachinePeer& WithStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    SetStorageVirtualMachinePeerId(std::forward<StorageVirtualMachinePeerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SVM on the file system that the SVM peer relationship belongs
   * to.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  StorageVirtualMachinePeer& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
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
  StorageVirtualMachinePeer& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the SVM peer can be one of the following:</p> <ul>
   * <li> <p> <code>CREATED</code> – The SVM peer is fully available for use.</p>
   * </li> <li> <p> <code>CREATING</code> – Amazon FSx is creating the SVM peer.</p>
   * </li> <li> <p> <code>DELETING</code> – Amazon FSx is deleting the SVM peer.</p>
   * </li> <li> <p> <code>FAILED</code> – Amazon FSx was unable to create the SVM
   * peer.</p> </li> </ul>
   */
  inline StorageVirtualMachinePeerLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(StorageVirtualMachinePeerLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline StorageVirtualMachinePeer& WithLifecycle(StorageVirtualMachinePeerLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the SVM peer lifecycle status changed.</p>
   */
  inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
  inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    m_lifecycleTransitionReasonHasBeenSet = true;
    m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value);
  }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  StorageVirtualMachinePeer& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
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
  StorageVirtualMachinePeer& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  StorageVirtualMachinePeer& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the SVM on the peer cluster.</p>
   */
  inline const Aws::String& GetPeerSvmName() const { return m_peerSvmName; }
  inline bool PeerSvmNameHasBeenSet() const { return m_peerSvmNameHasBeenSet; }
  template <typename PeerSvmNameT = Aws::String>
  void SetPeerSvmName(PeerSvmNameT&& value) {
    m_peerSvmNameHasBeenSet = true;
    m_peerSvmName = std::forward<PeerSvmNameT>(value);
  }
  template <typename PeerSvmNameT = Aws::String>
  StorageVirtualMachinePeer& WithPeerSvmName(PeerSvmNameT&& value) {
    SetPeerSvmName(std::forward<PeerSvmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name that the local cluster uses to identify the peer SVM.</p>
   */
  inline const Aws::String& GetPeerSvmAlias() const { return m_peerSvmAlias; }
  inline bool PeerSvmAliasHasBeenSet() const { return m_peerSvmAliasHasBeenSet; }
  template <typename PeerSvmAliasT = Aws::String>
  void SetPeerSvmAlias(PeerSvmAliasT&& value) {
    m_peerSvmAliasHasBeenSet = true;
    m_peerSvmAlias = std::forward<PeerSvmAliasT>(value);
  }
  template <typename PeerSvmAliasT = Aws::String>
  StorageVirtualMachinePeer& WithPeerSvmAlias(PeerSvmAliasT&& value) {
    SetPeerSvmAlias(std::forward<PeerSvmAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the peer cluster that the peer SVM is on.</p>
   */
  inline const Aws::String& GetPeerClusterName() const { return m_peerClusterName; }
  inline bool PeerClusterNameHasBeenSet() const { return m_peerClusterNameHasBeenSet; }
  template <typename PeerClusterNameT = Aws::String>
  void SetPeerClusterName(PeerClusterNameT&& value) {
    m_peerClusterNameHasBeenSet = true;
    m_peerClusterName = std::forward<PeerClusterNameT>(value);
  }
  template <typename PeerClusterNameT = Aws::String>
  StorageVirtualMachinePeer& WithPeerClusterName(PeerClusterNameT&& value) {
    SetPeerClusterName(std::forward<PeerClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The applications that the SVM peer relationship authorizes. The applications
   * can be one or more of the following:</p> <ul> <li> <p> <code>SNAPMIRROR</code> –
   * SnapMirror replication.</p> </li> <li> <p> <code>FILE_COPY</code> – File
   * copy.</p> </li> <li> <p> <code>LUN_COPY</code> – LUN copy.</p> </li> <li> <p>
   * <code>FLEXCACHE</code> – FlexCache.</p> </li> </ul>
   */
  inline const Aws::Vector<StorageVirtualMachinePeerApplication>& GetApplications() const { return m_applications; }
  inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  void SetApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications = std::forward<ApplicationsT>(value);
  }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  StorageVirtualMachinePeer& WithApplications(ApplicationsT&& value) {
    SetApplications(std::forward<ApplicationsT>(value));
    return *this;
  }
  inline StorageVirtualMachinePeer& AddApplications(StorageVirtualMachinePeerApplication value) {
    m_applicationsHasBeenSet = true;
    m_applications.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The state of the SVM peer relationship in ONTAP can be one of the
   * following:</p> <ul> <li> <p> <code>PEERED</code> – The SVM peer relationship is
   * established.</p> </li> <li> <p> <code>INITIATED</code> – The local cluster sent
   * a peering request to the peer SVM.</p> </li> <li> <p> <code>PENDING</code> – A
   * peering request from the peer SVM is waiting for acceptance.</p> </li> <li> <p>
   * <code>INITIALIZING</code> – ONTAP is setting up the SVM peer relationship.</p>
   * </li> <li> <p> <code>SUSPENDED</code> – The SVM peer relationship is
   * suspended.</p> </li> <li> <p> <code>REJECTED</code> – The peering request was
   * rejected.</p> </li> </ul>
   */
  inline StorageVirtualMachinePeerState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(StorageVirtualMachinePeerState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline StorageVirtualMachinePeer& WithState(StorageVirtualMachinePeerState value) {
    SetState(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The SVM peer's universally unique identifier (UUID).</p>
   */
  inline const Aws::String& GetUUID() const { return m_uUID; }
  inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
  template <typename UUIDT = Aws::String>
  void SetUUID(UUIDT&& value) {
    m_uUIDHasBeenSet = true;
    m_uUID = std::forward<UUIDT>(value);
  }
  template <typename UUIDT = Aws::String>
  StorageVirtualMachinePeer& WithUUID(UUIDT&& value) {
    SetUUID(std::forward<UUIDT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceARN;

  Aws::String m_storageVirtualMachinePeerId;

  Aws::String m_storageVirtualMachineId;

  Aws::String m_fileSystemId;

  StorageVirtualMachinePeerLifecycle m_lifecycle{StorageVirtualMachinePeerLifecycle::NOT_SET};

  LifecycleTransitionReason m_lifecycleTransitionReason;

  Aws::Vector<Tag> m_tags;

  Aws::String m_peerSvmName;

  Aws::String m_peerSvmAlias;

  Aws::String m_peerClusterName;

  Aws::Vector<StorageVirtualMachinePeerApplication> m_applications;

  StorageVirtualMachinePeerState m_state{StorageVirtualMachinePeerState::NOT_SET};

  Aws::String m_uUID;
  bool m_resourceARNHasBeenSet = false;
  bool m_storageVirtualMachinePeerIdHasBeenSet = false;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_lifecycleTransitionReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_peerSvmNameHasBeenSet = false;
  bool m_peerSvmAliasHasBeenSet = false;
  bool m_peerClusterNameHasBeenSet = false;
  bool m_applicationsHasBeenSet = false;
  bool m_stateHasBeenSet = false;
  bool m_uUIDHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
