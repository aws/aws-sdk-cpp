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
   * <p>The configuration in the cluster for EKS Hybrid Nodes. You can't change or
   * update this configuration after the cluster is created.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteNetworkConfigResponse">AWS
   * API Reference</a></p>
   */
  class RemoteNetworkConfigResponse
  {
  public:
    AWS_EKS_API RemoteNetworkConfigResponse();
    AWS_EKS_API RemoteNetworkConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteNetworkConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of network CIDRs that can contain hybrid nodes.</p>
     */
    inline const Aws::Vector<RemoteNodeNetwork>& GetRemoteNodeNetworks() const{ return m_remoteNodeNetworks; }
    inline bool RemoteNodeNetworksHasBeenSet() const { return m_remoteNodeNetworksHasBeenSet; }
    inline void SetRemoteNodeNetworks(const Aws::Vector<RemoteNodeNetwork>& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks = value; }
    inline void SetRemoteNodeNetworks(Aws::Vector<RemoteNodeNetwork>&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks = std::move(value); }
    inline RemoteNetworkConfigResponse& WithRemoteNodeNetworks(const Aws::Vector<RemoteNodeNetwork>& value) { SetRemoteNodeNetworks(value); return *this;}
    inline RemoteNetworkConfigResponse& WithRemoteNodeNetworks(Aws::Vector<RemoteNodeNetwork>&& value) { SetRemoteNodeNetworks(std::move(value)); return *this;}
    inline RemoteNetworkConfigResponse& AddRemoteNodeNetworks(const RemoteNodeNetwork& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks.push_back(value); return *this; }
    inline RemoteNetworkConfigResponse& AddRemoteNodeNetworks(RemoteNodeNetwork&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of network CIDRs that can contain pods that run Kubernetes webhooks
     * on hybrid nodes.</p>
     */
    inline const Aws::Vector<RemotePodNetwork>& GetRemotePodNetworks() const{ return m_remotePodNetworks; }
    inline bool RemotePodNetworksHasBeenSet() const { return m_remotePodNetworksHasBeenSet; }
    inline void SetRemotePodNetworks(const Aws::Vector<RemotePodNetwork>& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks = value; }
    inline void SetRemotePodNetworks(Aws::Vector<RemotePodNetwork>&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks = std::move(value); }
    inline RemoteNetworkConfigResponse& WithRemotePodNetworks(const Aws::Vector<RemotePodNetwork>& value) { SetRemotePodNetworks(value); return *this;}
    inline RemoteNetworkConfigResponse& WithRemotePodNetworks(Aws::Vector<RemotePodNetwork>&& value) { SetRemotePodNetworks(std::move(value)); return *this;}
    inline RemoteNetworkConfigResponse& AddRemotePodNetworks(const RemotePodNetwork& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks.push_back(value); return *this; }
    inline RemoteNetworkConfigResponse& AddRemotePodNetworks(RemotePodNetwork&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks.push_back(std::move(value)); return *this; }
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
