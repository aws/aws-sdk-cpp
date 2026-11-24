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

#include <utility>

namespace Aws {
namespace FSx {
namespace Model {

/**
 */
class UpdateClusterPeerRequest : public FSxRequest {
 public:
  AWS_FSX_API UpdateClusterPeerRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateClusterPeer"; }

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
  UpdateClusterPeerRequest& WithClientRequestToken(ClientRequestTokenT&& value) {
    SetClientRequestToken(std::forward<ClientRequestTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the cluster peer that you want to update.</p>
   */
  inline const Aws::String& GetClusterPeerId() const { return m_clusterPeerId; }
  inline bool ClusterPeerIdHasBeenSet() const { return m_clusterPeerIdHasBeenSet; }
  template <typename ClusterPeerIdT = Aws::String>
  void SetClusterPeerId(ClusterPeerIdT&& value) {
    m_clusterPeerIdHasBeenSet = true;
    m_clusterPeerId = std::forward<ClusterPeerIdT>(value);
  }
  template <typename ClusterPeerIdT = Aws::String>
  UpdateClusterPeerRequest& WithClusterPeerId(ClusterPeerIdT&& value) {
    SetClusterPeerId(std::forward<ClusterPeerIdT>(value));
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
  UpdateClusterPeerRequest& WithPeerClusterName(PeerClusterNameT&& value) {
    SetPeerClusterName(std::forward<PeerClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies the IP addresses of the intercluster logical interfaces (LIFs) on
   * the peer cluster. The addresses that you specify replace the existing peer
   * addresses.</p>
   */
  inline const Aws::Vector<Aws::String>& GetPeerAddresses() const { return m_peerAddresses; }
  inline bool PeerAddressesHasBeenSet() const { return m_peerAddressesHasBeenSet; }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  void SetPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses = std::forward<PeerAddressesT>(value);
  }
  template <typename PeerAddressesT = Aws::Vector<Aws::String>>
  UpdateClusterPeerRequest& WithPeerAddresses(PeerAddressesT&& value) {
    SetPeerAddresses(std::forward<PeerAddressesT>(value));
    return *this;
  }
  template <typename PeerAddressesT = Aws::String>
  UpdateClusterPeerRequest& AddPeerAddresses(PeerAddressesT&& value) {
    m_peerAddressesHasBeenSet = true;
    m_peerAddresses.emplace_back(std::forward<PeerAddressesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};

  Aws::String m_clusterPeerId;

  Aws::String m_peerClusterName;

  Aws::Vector<Aws::String> m_peerAddresses;
  bool m_clientRequestTokenHasBeenSet = true;
  bool m_clusterPeerIdHasBeenSet = false;
  bool m_peerClusterNameHasBeenSet = false;
  bool m_peerAddressesHasBeenSet = false;
};

}  // namespace Model
}  // namespace FSx
}  // namespace Aws
