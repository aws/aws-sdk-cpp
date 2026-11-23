/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/fsx/FSx_EXPORTS.h>
#include <aws/fsx/model/AllowedSvmMode.h>
#include <aws/fsx/model/ClusterPeerAuthenticationStatus.h>
#include <aws/fsx/model/ClusterPeerLifecycle.h>
#include <aws/fsx/model/LifecycleTransitionReason.h>
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
 * <p>Describes an Amazon FSx for NetApp ONTAP cluster peer
 * relationship.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/fsx-2018-03-01/ClusterPeer">AWS API
 * Reference</a></p>
 */
class ClusterPeer {
 public:
  AWS_FSX_API ClusterPeer() = default;
  AWS_FSX_API ClusterPeer(Aws::Utils::Json::JsonView jsonValue);
  AWS_FSX_API ClusterPeer& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ClusterPeer& WithResourceARN(ResourceARNT&& value) {
    SetResourceARN(std::forward<ResourceARNT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The system-generated, unique ID of the cluster peer.</p>
   */
  inline const Aws::String& GetClusterPeerId() const { return m_clusterPeerId; }
  inline bool ClusterPeerIdHasBeenSet() const { return m_clusterPeerIdHasBeenSet; }
  template <typename ClusterPeerIdT = Aws::String>
  void SetClusterPeerId(ClusterPeerIdT&& value) {
    m_clusterPeerIdHasBeenSet = true;
    m_clusterPeerId = std::forward<ClusterPeerIdT>(value);
  }
  template <typename ClusterPeerIdT = Aws::String>
  ClusterPeer& WithClusterPeerId(ClusterPeerIdT&& value) {
    SetClusterPeerId(std::forward<ClusterPeerIdT>(value));
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
  ClusterPeer& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The lifecycle status of the cluster peer can be one of the following:</p>
   * <ul> <li> <p> <code>CREATED</code> – The cluster peer is fully available for
   * use.</p> </li> <li> <p> <code>CREATING</code> – Amazon FSx is creating the
   * cluster peer.</p> </li> <li> <p> <code>DELETING</code> – Amazon FSx is deleting
   * the cluster peer.</p> </li> <li> <p> <code>FAILED</code> – Amazon FSx was unable
   * to create the cluster peer.</p> </li> </ul>
   */
  inline ClusterPeerLifecycle GetLifecycle() const { return m_lifecycle; }
  inline bool LifecycleHasBeenSet() const { return m_lifecycleHasBeenSet; }
  inline void SetLifecycle(ClusterPeerLifecycle value) {
    m_lifecycleHasBeenSet = true;
    m_lifecycle = value;
  }
  inline ClusterPeer& WithLifecycle(ClusterPeerLifecycle value) {
    SetLifecycle(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason why the cluster peer lifecycle status changed.</p>
   */
  inline const LifecycleTransitionReason& GetLifecycleTransitionReason() const { return m_lifecycleTransitionReason; }
  inline bool LifecycleTransitionReasonHasBeenSet() const { return m_lifecycleTransitionReasonHasBeenSet; }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  void SetLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
    m_lifecycleTransitionReasonHasBeenSet = true;
    m_lifecycleTransitionReason = std::forward<LifecycleTransitionReasonT>(value);
  }
  template <typename LifecycleTransitionReasonT = LifecycleTransitionReason>
  ClusterPeer& WithLifecycleTransitionReason(LifecycleTransitionReasonT&& value) {
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
  ClusterPeer& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  ClusterPeer& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IP addresses of the intercluster logical interfaces (LIFs) on the peer
   * cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeerAddresses() const { return m_peerAddresses; }
  inline bool PeerAddressesHasBeenSet() const { return m_peerAddressesHasBeenSet; }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  void SetPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses = std::forward<PeerAddressesT>(value);
  }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  ClusterPeer& WithPeerAddresses(PeerAddressesT&& value) {
    SetPeerAddresses(std::forward<PeerAddressesT>(value));
    return *this;
  }
  template <typename PeerAddressesT = Aws::String>
  ClusterPeer& AddPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses.emplace_back(std::forward<PeerAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name that the file system uses to identify the peer cluster.</p>
   */
  inline const Aws::String& GetPeerClusterName() const { return m_peerClusterName; }
  inline bool PeerClusterNameHasBeenSet() const { return m_peerClusterNameHasBeenSet; }
  template <typename PeerClusterNameT = Aws::String>
  void SetPeerClusterName(PeerClusterNameT&& value) {
    m_peerClusterNameHasBeenSet = true;
    m_peerClusterName = std::forward<PeerClusterNameT>(value);
  }
  template <typename PeerClusterNameT = Aws::String>
  ClusterPeer& WithPeerClusterName(PeerClusterNameT&& value) {
    SetPeerClusterName(std::forward<PeerClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the Amazon Web Services Secrets Manager
   * secret containing the cluster peering passphrase.</p>
   */
  inline const Aws::String& GetPassphraseSecretArn() const { return m_passphraseSecretArn; }
  inline bool PassphraseSecretArnHasBeenSet() const { return m_passphraseSecretArnHasBeenSet; }
  template <typename PassphraseSecretArnT = Aws::String>
  void SetPassphraseSecretArn(PassphraseSecretArnT&& value) {
    m_passphraseSecretArnHasBeenSet = true;
    m_passphraseSecretArn = std::forward<PassphraseSecretArnT>(value);
  }
  template <typename PassphraseSecretArnT = Aws::String>
  ClusterPeer& WithPassphraseSecretArn(PassphraseSecretArnT&& value) {
    SetPassphraseSecretArn(std::forward<PassphraseSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Indicates which SVMs on the file system are preauthorized for SVM peering
   * with the peer cluster.</p>
   */
  inline AllowedSvmMode GetAllowedSvmMode() const { return m_allowedSvmMode; }
  inline bool AllowedSvmModeHasBeenSet() const { return m_allowedSvmModeHasBeenSet; }
  inline void SetAllowedSvmMode(AllowedSvmMode value) {
    m_allowedSvmModeHasBeenSet = true;
    m_allowedSvmMode = value;
  }
  inline ClusterPeer& WithAllowedSvmMode(AllowedSvmMode value) {
    SetAllowedSvmMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IDs of the SVMs on the file system that are preauthorized for SVM peering
   * with the peer cluster, if <code>AllowedSvmMode</code> is
   * <code>SPECIFIED</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedSvmIds() const { return m_allowedSvmIds; }
  inline bool AllowedSvmIdsHasBeenSet() const { return m_allowedSvmIdsHasBeenSet; }
  template <typename AllowedSvmIdsT = Aws::Vector<Aws::String>>
  void SetAllowedSvmIds(AllowedSvmIdsT&& value) {
    m_allowedSvmIdsHasBeenSet = true;
    m_allowedSvmIds = std::forward<AllowedSvmIdsT>(value);
  }
  template <typename AllowedSvmIdsT = Aws::Vector<Aws::String>>
  ClusterPeer& WithAllowedSvmIds(AllowedSvmIdsT&& value) {
    SetAllowedSvmIds(std::forward<AllowedSvmIdsT>(value));
    return *this;
  }
  template <typename AllowedSvmIdsT = Aws::String>
  ClusterPeer& AddAllowedSvmIds(AllowedSvmIdsT&& value) {
    m_allowedSvmIdsHasBeenSet = true;
    m_allowedSvmIds.emplace_back(std::forward<AllowedSvmIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the connection to the peer cluster.</p>
   */
  inline const Aws::String& GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  template <typename StatusT = Aws::String>
  void SetStatus(StatusT&& value) {
    m_statusHasBeenSet = true;
    m_status = std::forward<StatusT>(value);
  }
  template <typename StatusT = Aws::String>
  ClusterPeer& WithStatus(StatusT&& value) {
    SetStatus(std::forward<StatusT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The cluster peer's universally unique identifier (UUID).</p>
   */
  inline const Aws::String& GetUUID() const { return m_uUID; }
  inline bool UUIDHasBeenSet() const { return m_uUIDHasBeenSet; }
  template <typename UUIDT = Aws::String>
  void SetUUID(UUIDT&& value) {
    m_uUIDHasBeenSet = true;
    m_uUID = std::forward<UUIDT>(value);
  }
  template <typename UUIDT = Aws::String>
  ClusterPeer& WithUUID(UUIDT&& value) {
    SetUUID(std::forward<UUIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authentication status of the cluster peer relationship.</p>
   */
  inline const ClusterPeerAuthenticationStatus& GetAuthenticationStatus() const { return m_authenticationStatus; }
  inline bool AuthenticationStatusHasBeenSet() const { return m_authenticationStatusHasBeenSet; }
  template <typename AuthenticationStatusT = ClusterPeerAuthenticationStatus>
  void SetAuthenticationStatus(AuthenticationStatusT&& value) {
    m_authenticationStatusHasBeenSet = true;
    m_authenticationStatus = std::forward<AuthenticationStatusT>(value);
  }
  template <typename AuthenticationStatusT = ClusterPeerAuthenticationStatus>
  ClusterPeer& WithAuthenticationStatus(AuthenticationStatusT&& value) {
    SetAuthenticationStatus(std::forward<AuthenticationStatusT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_resourceARN;

  Aws::String m_clusterPeerId;

  Aws::String m_fileSystemId;

  ClusterPeerLifecycle m_lifecycle{ClusterPeerLifecycle::NOT_SET};

  LifecycleTransitionReason m_lifecycleTransitionReason;

  Aws::Vector<Tag> m_tags;

  Aws::Vector<Aws::String> m_peerAddresses;

  Aws::String m_peerClusterName;

  Aws::String m_passphraseSecretArn;

  AllowedSvmMode m_allowedSvmMode{AllowedSvmMode::NOT_SET};

  Aws::Vector<Aws::String> m_allowedSvmIds;

  Aws::String m_status;

  Aws::String m_uUID;

  ClusterPeerAuthenticationStatus m_authenticationStatus;
  bool m_resourceARNHasBeenSet = false;
  bool m_clusterPeerIdHasBeenSet = false;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_lifecycleHasBeenSet = false;
  bool m_lifecycleTransitionReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
  bool m_peerAddressesHasBeenSet = false;
  bool m_peerClusterNameHasBeenSet = false;
  bool m_passphraseSecretArnHasBeenSet = false;
  bool m_allowedSvmModeHasBeenSet = false;
  bool m_allowedSvmIdsHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_uUIDHasBeenSet = false;
  bool m_authenticationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
