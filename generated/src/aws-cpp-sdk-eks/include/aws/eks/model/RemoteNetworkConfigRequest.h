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
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteNetworkConfigRequest">AWS
   * API Reference</a></p>
   */
  class RemoteNetworkConfigRequest
  {
  public:
    AWS_EKS_API RemoteNetworkConfigRequest();
    AWS_EKS_API RemoteNetworkConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteNetworkConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The list of network CIDRs that can contain hybrid nodes.</p> <p>These CIDR
     * blocks define the expected IP address range of the hybrid nodes that join the
     * cluster. These blocks are typically determined by your network administrator.
     * </p> <p>Enter one or more IPv4 CIDR blocks in decimal dotted-quad notation (for
     * example, <code> 10.2.0.0/16</code>).</p> <p>It must satisfy the following
     * requirements:</p> <ul> <li> <p>Each block must be within an <code>IPv4</code>
     * RFC-1918 network range. Minimum allowed size is /24, maximum allowed size is /8.
     * Publicly-routable addresses aren't supported.</p> </li> <li> <p>Each block
     * cannot overlap with the range of the VPC CIDR blocks for your EKS resources, or
     * the block of the Kubernetes service IP range.</p> </li> <li> <p>Each block must
     * have a route to the VPC that uses the VPC CIDR blocks, not public IPs or Elastic
     * IPs. There are many options including Transit Gateway, Site-to-Site VPN, or
     * Direct Connect.</p> </li> <li> <p>Each host must allow outbound connection to
     * the EKS cluster control plane on TCP ports <code>443</code> and
     * <code>10250</code>.</p> </li> <li> <p>Each host must allow inbound connection
     * from the EKS cluster control plane on TCP port 10250 for logs, exec and
     * port-forward operations.</p> </li> <li> <p> Each host must allow TCP and UDP
     * network connectivity to and from other hosts that are running
     * <code>CoreDNS</code> on UDP port <code>53</code> for service and pod DNS
     * names.</p> </li> </ul>
     */
    inline const Aws::Vector<RemoteNodeNetwork>& GetRemoteNodeNetworks() const{ return m_remoteNodeNetworks; }
    inline bool RemoteNodeNetworksHasBeenSet() const { return m_remoteNodeNetworksHasBeenSet; }
    inline void SetRemoteNodeNetworks(const Aws::Vector<RemoteNodeNetwork>& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks = value; }
    inline void SetRemoteNodeNetworks(Aws::Vector<RemoteNodeNetwork>&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks = std::move(value); }
    inline RemoteNetworkConfigRequest& WithRemoteNodeNetworks(const Aws::Vector<RemoteNodeNetwork>& value) { SetRemoteNodeNetworks(value); return *this;}
    inline RemoteNetworkConfigRequest& WithRemoteNodeNetworks(Aws::Vector<RemoteNodeNetwork>&& value) { SetRemoteNodeNetworks(std::move(value)); return *this;}
    inline RemoteNetworkConfigRequest& AddRemoteNodeNetworks(const RemoteNodeNetwork& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks.push_back(value); return *this; }
    inline RemoteNetworkConfigRequest& AddRemoteNodeNetworks(RemoteNodeNetwork&& value) { m_remoteNodeNetworksHasBeenSet = true; m_remoteNodeNetworks.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of network CIDRs that can contain pods that run Kubernetes webhooks
     * on hybrid nodes.</p> <p>These CIDR blocks are determined by configuring your
     * Container Network Interface (CNI) plugin. We recommend the Calico CNI or Cilium
     * CNI. Note that the Amazon VPC CNI plugin for Kubernetes isn't available for
     * on-premises and edge locations.</p> <p>Enter one or more IPv4 CIDR blocks in
     * decimal dotted-quad notation (for example, <code> 10.2.0.0/16</code>).</p> <p>It
     * must satisfy the following requirements:</p> <ul> <li> <p>Each block must be
     * within an <code>IPv4</code> RFC-1918 network range. Minimum allowed size is /24,
     * maximum allowed size is /8. Publicly-routable addresses aren't supported.</p>
     * </li> <li> <p>Each block cannot overlap with the range of the VPC CIDR blocks
     * for your EKS resources, or the block of the Kubernetes service IP range.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<RemotePodNetwork>& GetRemotePodNetworks() const{ return m_remotePodNetworks; }
    inline bool RemotePodNetworksHasBeenSet() const { return m_remotePodNetworksHasBeenSet; }
    inline void SetRemotePodNetworks(const Aws::Vector<RemotePodNetwork>& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks = value; }
    inline void SetRemotePodNetworks(Aws::Vector<RemotePodNetwork>&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks = std::move(value); }
    inline RemoteNetworkConfigRequest& WithRemotePodNetworks(const Aws::Vector<RemotePodNetwork>& value) { SetRemotePodNetworks(value); return *this;}
    inline RemoteNetworkConfigRequest& WithRemotePodNetworks(Aws::Vector<RemotePodNetwork>&& value) { SetRemotePodNetworks(std::move(value)); return *this;}
    inline RemoteNetworkConfigRequest& AddRemotePodNetworks(const RemotePodNetwork& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks.push_back(value); return *this; }
    inline RemoteNetworkConfigRequest& AddRemotePodNetworks(RemotePodNetwork&& value) { m_remotePodNetworksHasBeenSet = true; m_remotePodNetworks.push_back(std::move(value)); return *this; }
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
