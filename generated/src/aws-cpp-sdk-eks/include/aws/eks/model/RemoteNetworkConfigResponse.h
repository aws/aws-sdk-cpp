/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/eks/model/RemoteNodeNetwork.h>
#include <aws/eks/model/RemotePodNetwork.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace EKS
{
namespace Model
{

  /**
   * <p>The configuration in the cluster for EKS Hybrid Nodes. You can add, change,
   * or remove this configuration after the cluster is created.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteNetworkConfigResponse">AWS
   * API Reference</a></p>
   */
  class RemoteNetworkConfigResponse
  {
  public:
    AWS_EKS_API RemoteNetworkConfigResponse() = default;
    AWS_EKS_API RemoteNetworkConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteNetworkConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of network CIDRs that can contain hybrid nodes.</p>
     */
    inline const Aws::Vector<RemoteNodeNetwork>& GetRemoteNodeNetworks() const { return m_remoteNodeNetworks; }
    inline bool RemoteNodeNetworksHasBeenSet() const { return m_remoteNodeNetworksHasBeenSet; }
    template<typename RemoteNodeNetworksT = Aws::Vector<RemoteNodeNetwork>>
    void SetRemoteNodeNetworks(RemoteNodeNetworksT&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks = std::forward<RemoteNodeNetworksT>(value); }
    template<typename RemoteNodeNetworksT = Aws::Vector<RemoteNodeNetwork>>
    RemoteNetworkConfigResponse& WithRemoteNodeNetworks(RemoteNodeNetworksT&& value) { SetRemoteNodeNetworks(std::forward<RemoteNodeNetworksT>(value)); return *this;}
    template<typename RemoteNodeNetworksT = RemoteNodeNetwork>
    RemoteNetworkConfigResponse& AddRemoteNodeNetworks(RemoteNodeNetworksT&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks.emplace_back(std::forward<RemoteNodeNetworksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of network CIDRs that can contain pods that run Kubernetes webhooks
     * on hybrid nodes.</p>
     */
    inline const Aws::Vector<RemotePodNetwork>& GetRemotePodNetworks() const { return m_remotePodNetworks; }
    inline bool RemotePodNetworksHasBeenSet() const { return m_remotePodNetworksHasBeenSet; }
    template<typename RemotePodNetworksT = Aws::Vector<RemotePodNetwork>>
    void SetRemotePodNetworks(RemotePodNetworksT&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks = std::forward<RemotePodNetworksT>(value); }
    template<typename RemotePodNetworksT = Aws::Vector<RemotePodNetwork>>
    RemoteNetworkConfigResponse& WithRemotePodNetworks(RemotePodNetworksT&& value) { SetRemotePodNetworks(std::forward<RemotePodNetworksT>(value)); return *this;}
    template<typename RemotePodNetworksT = RemotePodNetwork>
    RemoteNetworkConfigResponse& AddRemotePodNetworks(RemotePodNetworksT&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks.emplace_back(std::forward<RemotePodNetworksT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<RemoteNodeNetwork> m_remoteNodeNetworks;
    bool m_remoteNodeNetworksHasBeenSet = false;

    Aws::Vector<RemotePodNetwork> m_remotePodNetworks;
    bool m_remotePodNetworksHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
