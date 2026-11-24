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
#include <aws/fsx/model/AllowedSvmMode.h>
#include <aws/fsx/model/Tag.h>

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class CreateClusterPeerRequest : public FSxRequest {
 public:
  AWS_FSX_API CreateClusterPeerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateClusterPeer"; }

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
  CreateClusterPeerRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the ID of the Amazon FSx for NetApp ONTAP file system on which to
   * create the cluster peer relationship.</p>
   */
  inline const Aws::String& GetFileSystemId() const { return m_fileSystemId; }
  inline bool FileSystemIdHasBeenSet() const { return m_fileSystemIdHasBeenSet; }
  template <typename FileSystemIdT = Aws::String>
  void SetFileSystemId(FileSystemIdT&& value) {
    m_fileSystemIdHasBeenSet = true;
    m_fileSystemId = std::forward<FileSystemIdT>(value);
  }
  template <typename FileSystemIdT = Aws::String>
  CreateClusterPeerRequest& WithFileSystemId(FileSystemIdT&& value) {
    SetFileSystemId(std::forward<FileSystemIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the IP addresses of the intercluster logical interfaces (LIFs) on
   * the peer cluster.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeerAddresses() const { return m_peerAddresses; }
  inline bool PeerAddressesHasBeenSet() const { return m_peerAddressesHasBeenSet; }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  void SetPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses = std::forward<PeerAddressesT>(value);
  }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  CreateClusterPeerRequest& WithPeerAddresses(PeerAddressesT&& value) {
    SetPeerAddresses(std::forward<PeerAddressesT>(value));
    return *this;
  }
  template <typename PeerAddressesT = Aws::String>
  CreateClusterPeerRequest& AddPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses.emplace_back(std::forward<PeerAddressesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the Amazon Resource Name (ARN) of the Amazon Web Services Secrets
   * Manager secret containing the cluster peering passphrase. Store the passphrase
   * as a plaintext secret value, not as a key-value pair. The secret must be in the
   * same Amazon Web Services Region as the file system. You must use the same
   * passphrase when you create the cluster peer relationship on the peer
   * cluster.</p>
   */
  inline const Aws::String& GetPassphraseSecretArn() const { return m_passphraseSecretArn; }
  inline bool PassphraseSecretArnHasBeenSet() const { return m_passphraseSecretArnHasBeenSet; }
  template <typename PassphraseSecretArnT = Aws::String>
  void SetPassphraseSecretArn(PassphraseSecretArnT&& value) {
    m_passphraseSecretArnHasBeenSet = true;
    m_passphraseSecretArn = std::forward<PassphraseSecretArnT>(value);
  }
  template <typename PassphraseSecretArnT = Aws::String>
  CreateClusterPeerRequest& WithPassphraseSecretArn(PassphraseSecretArnT&& value) {
    SetPassphraseSecretArn(std::forward<PassphraseSecretArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the name that the file system uses to identify the peer
   * cluster.</p>
   */
  inline const Aws::String& GetPeerClusterName() const { return m_peerClusterName; }
  inline bool PeerClusterNameHasBeenSet() const { return m_peerClusterNameHasBeenSet; }
  template <typename PeerClusterNameT = Aws::String>
  void SetPeerClusterName(PeerClusterNameT&& value) {
    m_peerClusterNameHasBeenSet = true;
    m_peerClusterName = std::forward<PeerClusterNameT>(value);
  }
  template <typename PeerClusterNameT = Aws::String>
  CreateClusterPeerRequest& WithPeerClusterName(PeerClusterNameT&& value) {
    SetPeerClusterName(std::forward<PeerClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies which SVMs on the file system are preauthorized for SVM peering
   * with the peer cluster.</p> <ul> <li> <p> <code>ALL</code> – All SVMs on the file
   * system are preauthorized. You can't specify <code>AllowedSvmIds</code> along
   * with this property.</p> </li> <li> <p> <code>NONE</code> – No SVMs on the file
   * system are preauthorized. You can't specify <code>AllowedSvmIds</code> along
   * with this property.</p> </li> <li> <p> <code>SPECIFIED</code> – Only the SVMs in
   * <code>AllowedSvmIds</code> are preauthorized. You must specify
   * <code>AllowedSvmIds</code> along with this property.</p> </li> </ul>
   */
  inline AllowedSvmMode GetAllowedSvmMode() const { return m_allowedSvmMode; }
  inline bool AllowedSvmModeHasBeenSet() const { return m_allowedSvmModeHasBeenSet; }
  inline void SetAllowedSvmMode(AllowedSvmMode value) {
    m_allowedSvmModeHasBeenSet = true;
    m_allowedSvmMode = value;
  }
  inline CreateClusterPeerRequest& WithAllowedSvmMode(AllowedSvmMode value) {
    SetAllowedSvmMode(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the IDs of the SVMs on the file system that are preauthorized for
   * SVM peering with the peer cluster. You can specify <code>AllowedSvmIds</code>
   * only when <code>AllowedSvmMode</code> is <code>SPECIFIED</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetAllowedSvmIds() const { return m_allowedSvmIds; }
  inline bool AllowedSvmIdsHasBeenSet() const { return m_allowedSvmIdsHasBeenSet; }
  template <typename AllowedSvmIdsT = Aws::Vector<Aws::String>>
  void SetAllowedSvmIds(AllowedSvmIdsT&& value) {
    m_allowedSvmIdsHasBeenSet = true;
    m_allowedSvmIds = std::forward<AllowedSvmIdsT>(value);
  }
  template <typename AllowedSvmIdsT = Aws::Vector<Aws::String>>
  CreateClusterPeerRequest& WithAllowedSvmIds(AllowedSvmIdsT&& value) {
    SetAllowedSvmIds(std::forward<AllowedSvmIdsT>(value));
    return *this;
  }
  template <typename AllowedSvmIdsT = Aws::String>
  CreateClusterPeerRequest& AddAllowedSvmIds(AllowedSvmIdsT&& value) {
    m_allowedSvmIdsHasBeenSet = true;
    m_allowedSvmIds.emplace_back(std::forward<AllowedSvmIdsT>(value));
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
  CreateClusterPeerRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateClusterPeerRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_fileSystemId;

  Aws::Vector<Aws::String> m_peerAddresses;

  Aws::String m_passphraseSecretArn;

  Aws::String m_peerClusterName;

  AllowedSvmMode m_allowedSvmMode{AllowedSvmMode::NOT_SET};

  Aws::Vector<Aws::String> m_allowedSvmIds;

  Aws::Vector<Tag> m_tags;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_fileSystemIdHasBeenSet = false;
  bool m_peerAddressesHasBeenSet = false;
  bool m_passphraseSecretArnHasBeenSet = false;
  bool m_peerClusterNameHasBeenSet = false;
  bool m_allowedSvmModeHasBeenSet = false;
  bool m_allowedSvmIdsHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
