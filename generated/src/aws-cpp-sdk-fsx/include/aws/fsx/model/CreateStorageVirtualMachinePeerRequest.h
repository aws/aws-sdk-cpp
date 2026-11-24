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
#include <aws/fsx/model/StorageVirtualMachinePeerApplication.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class CreateStorageVirtualMachinePeerRequest : public FSxRequest {
 public:
  AWS_FSX_API CreateStorageVirtualMachinePeerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateStorageVirtualMachinePeer"; }

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
  CreateStorageVirtualMachinePeerRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the SVM on which to create the SVM peer relationship.</p>
   */
  inline const Aws::String& GetStorageVirtualMachineId() const { return m_storageVirtualMachineId; }
  inline bool StorageVirtualMachineIdHasBeenSet() const { return m_storageVirtualMachineIdHasBeenSet; }
  template <typename StorageVirtualMachineIdT = Aws::String>
  void SetStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    m_storageVirtualMachineIdHasBeenSet = true;
    m_storageVirtualMachineId = std::forward<StorageVirtualMachineIdT>(value);
  }
  template <typename StorageVirtualMachineIdT = Aws::String>
  CreateStorageVirtualMachinePeerRequest& WithStorageVirtualMachineId(StorageVirtualMachineIdT&& value) {
    SetStorageVirtualMachineId(std::forward<StorageVirtualMachineIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the SVM to peer with.</p>
   */
  inline const Aws::String& GetPeerSvmName() const { return m_peerSvmName; }
  inline bool PeerSvmNameHasBeenSet() const { return m_peerSvmNameHasBeenSet; }
  template <typename PeerSvmNameT = Aws::String>
  void SetPeerSvmName(PeerSvmNameT&& value) {
    m_peerSvmNameHasBeenSet = true;
    m_peerSvmName = std::forward<PeerSvmNameT>(value);
  }
  template <typename PeerSvmNameT = Aws::String>
  CreateStorageVirtualMachinePeerRequest& WithPeerSvmName(PeerSvmNameT&& value) {
    SetPeerSvmName(std::forward<PeerSvmNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name of the peer cluster that the peer SVM is on.</p>
   */
  inline const Aws::String& GetPeerClusterName() const { return m_peerClusterName; }
  inline bool PeerClusterNameHasBeenSet() const { return m_peerClusterNameHasBeenSet; }
  template <typename PeerClusterNameT = Aws::String>
  void SetPeerClusterName(PeerClusterNameT&& value) {
    m_peerClusterNameHasBeenSet = true;
    m_peerClusterName = std::forward<PeerClusterNameT>(value);
  }
  template <typename PeerClusterNameT = Aws::String>
  CreateStorageVirtualMachinePeerRequest& WithPeerClusterName(PeerClusterNameT&& value) {
    SetPeerClusterName(std::forward<PeerClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the applications that the SVM peer relationship authorizes.</p>
   */
  inline const Aws::Vector<StorageVirtualMachinePeerApplication>& GetApplications() const { return m_applications; }
  inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  void SetApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications = std::forward<ApplicationsT>(value);
  }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  CreateStorageVirtualMachinePeerRequest& WithApplications(ApplicationsT&& value) {
    SetApplications(std::forward<ApplicationsT>(value));
    return *this;
  }
  inline CreateStorageVirtualMachinePeerRequest& AddApplications(StorageVirtualMachinePeerApplication value) {
    m_applicationsHasBeenSet = true;
    m_applications.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name that the local cluster uses to identify the peer SVM.</p>
   */
  inline const Aws::String& GetPeerSvmAlias() const { return m_peerSvmAlias; }
  inline bool PeerSvmAliasHasBeenSet() const { return m_peerSvmAliasHasBeenSet; }
  template <typename PeerSvmAliasT = Aws::String>
  void SetPeerSvmAlias(PeerSvmAliasT&& value) {
    m_peerSvmAliasHasBeenSet = true;
    m_peerSvmAlias = std::forward<PeerSvmAliasT>(value);
  }
  template <typename PeerSvmAliasT = Aws::String>
  CreateStorageVirtualMachinePeerRequest& WithPeerSvmAlias(PeerSvmAliasT&& value) {
    SetPeerSvmAlias(std::forward<PeerSvmAliasT>(value));
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
  CreateStorageVirtualMachinePeerRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateStorageVirtualMachinePeerRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_storageVirtualMachineId;

  Aws::String m_peerSvmName;

  Aws::String m_peerClusterName;

  Aws::Vector<StorageVirtualMachinePeerApplication> m_applications;

  Aws::String m_peerSvmAlias;

  Aws::Vector<Tag> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_storageVirtualMachineIdHasBeenSet = false;
  bool m_peerSvmNameHasBeenSet = false;
  bool m_peerClusterNameHasBeenSet = false;
  bool m_applicationsHasBeenSet = false;
  bool m_peerSvmAliasHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
