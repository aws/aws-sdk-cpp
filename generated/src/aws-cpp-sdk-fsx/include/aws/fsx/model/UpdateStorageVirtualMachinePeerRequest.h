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
#include <aws/fsx/model/StorageVirtualMachinePeerUpdateState.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class UpdateStorageVirtualMachinePeerRequest : public FSxRequest {
 public:
  AWS_FSX_API UpdateStorageVirtualMachinePeerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateStorageVirtualMachinePeer"; }

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
  UpdateStorageVirtualMachinePeerRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the SVM peer that you want to update.</p>
   */
  inline const Aws::String& GetStorageVirtualMachinePeerId() const { return m_storageVirtualMachinePeerId; }
  inline bool StorageVirtualMachinePeerIdHasBeenSet() const { return m_storageVirtualMachinePeerIdHasBeenSet; }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  void SetStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    m_storageVirtualMachinePeerIdHasBeenSet = true;
    m_storageVirtualMachinePeerId = std::forward<StorageVirtualMachinePeerIdT>(value);
  }
  template <typename StorageVirtualMachinePeerIdT = Aws::String>
  UpdateStorageVirtualMachinePeerRequest& WithStorageVirtualMachinePeerId(StorageVirtualMachinePeerIdT&& value) {
    SetStorageVirtualMachinePeerId(std::forward<StorageVirtualMachinePeerIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the applications that the SVM peer relationship authorizes. The
   * applications that you specify replace the existing applications.</p>
   */
  inline const Aws::Vector<StorageVirtualMachinePeerApplication>& GetApplications() const { return m_applications; }
  inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  void SetApplications(ApplicationsT&& value) {
    m_applicationsHasBeenSet = true;
    m_applications = std::forward<ApplicationsT>(value);
  }
  template <typename ApplicationsT = Aws::Vector<StorageVirtualMachinePeerApplication>>
  UpdateStorageVirtualMachinePeerRequest& WithApplications(ApplicationsT&& value) {
    SetApplications(std::forward<ApplicationsT>(value));
    return *this;
  }
  inline UpdateStorageVirtualMachinePeerRequest& AddApplications(StorageVirtualMachinePeerApplication value) {
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
  UpdateStorageVirtualMachinePeerRequest& WithPeerSvmAlias(PeerSvmAliasT&& value) {
    SetPeerSvmAlias(std::forward<PeerSvmAliasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the state to set for the SVM peer relationship:</p> <ul> <li> <p>
   * <code>PEERED</code> – Accepts a pending peering request, or resumes a suspended
   * SVM peer relationship.</p> </li> <li> <p> <code>SUSPENDED</code> – Suspends the
   * SVM peer relationship.</p> </li> <li> <p> <code>REJECTED</code> – Rejects a
   * pending peering request.</p> </li> </ul>
   */
  inline StorageVirtualMachinePeerUpdateState GetState() const { return m_state; }
  inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
  inline void SetState(StorageVirtualMachinePeerUpdateState value) {
    m_stateHasBeenSet = true;
    m_state = value;
  }
  inline UpdateStorageVirtualMachinePeerRequest& WithState(StorageVirtualMachinePeerUpdateState value) {
    SetState(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_storageVirtualMachinePeerId;

  Aws::Vector<StorageVirtualMachinePeerApplication> m_applications;

  Aws::String m_peerSvmAlias;

  StorageVirtualMachinePeerUpdateState m_state{StorageVirtualMachinePeerUpdateState::NOT_SET};
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_storageVirtualMachinePeerIdHasBeenSet = false;
  bool m_applicationsHasBeenSet = false;
  bool m_peerSvmAliasHasBeenSet = false;
  bool m_stateHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
