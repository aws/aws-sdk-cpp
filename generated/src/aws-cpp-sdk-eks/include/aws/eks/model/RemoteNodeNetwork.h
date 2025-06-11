/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>A network CIDR that can contain hybrid nodes.</p> <p>These CIDR blocks define
   * the expected IP address range of the hybrid nodes that join the cluster. These
   * blocks are typically determined by your network administrator. </p> <p>Enter one
   * or more IPv4 CIDR blocks in decimal dotted-quad notation (for example, <code>
   * 10.2.0.0/16</code>).</p> <p>It must satisfy the following requirements:</p> <ul>
   * <li> <p>Each block must be within an <code>IPv4</code> RFC-1918 network range.
   * Minimum allowed size is /32, maximum allowed size is /8. Publicly-routable
   * addresses aren't supported.</p> </li> <li> <p>Each block cannot overlap with the
   * range of the VPC CIDR blocks for your EKS resources, or the block of the
   * Kubernetes service IP range.</p> </li> <li> <p>Each block must have a route to
   * the VPC that uses the VPC CIDR blocks, not public IPs or Elastic IPs. There are
   * many options including Transit Gateway, Site-to-Site VPN, or Direct Connect.</p>
   * </li> <li> <p>Each host must allow outbound connection to the EKS cluster
   * control plane on TCP ports <code>443</code> and <code>10250</code>.</p> </li>
   * <li> <p>Each host must allow inbound connection from the EKS cluster control
   * plane on TCP port 10250 for logs, exec and port-forward operations.</p> </li>
   * <li> <p> Each host must allow TCP and UDP network connectivity to and from other
   * hosts that are running <code>CoreDNS</code> on UDP port <code>53</code> for
   * service and pod DNS names.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/RemoteNodeNetwork">AWS
   * API Reference</a></p>
   */
  class RemoteNodeNetwork
  {
  public:
    AWS_EKS_API RemoteNodeNetwork() = default;
    AWS_EKS_API RemoteNodeNetwork(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API RemoteNodeNetwork& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A network CIDR that can contain hybrid nodes.</p> <p>These CIDR blocks define
     * the expected IP address range of the hybrid nodes that join the cluster. These
     * blocks are typically determined by your network administrator. </p> <p>Enter one
     * or more IPv4 CIDR blocks in decimal dotted-quad notation (for example, <code>
     * 10.2.0.0/16</code>).</p> <p>It must satisfy the following requirements:</p> <ul>
     * <li> <p>Each block must be within an <code>IPv4</code> RFC-1918 network range.
     * Minimum allowed size is /32, maximum allowed size is /8. Publicly-routable
     * addresses aren't supported.</p> </li> <li> <p>Each block cannot overlap with the
     * range of the VPC CIDR blocks for your EKS resources, or the block of the
     * Kubernetes service IP range.</p> </li> <li> <p>Each block must have a route to
     * the VPC that uses the VPC CIDR blocks, not public IPs or Elastic IPs. There are
     * many options including Transit Gateway, Site-to-Site VPN, or Direct Connect.</p>
     * </li> <li> <p>Each host must allow outbound connection to the EKS cluster
     * control plane on TCP ports <code>443</code> and <code>10250</code>.</p> </li>
     * <li> <p>Each host must allow inbound connection from the EKS cluster control
     * plane on TCP port 10250 for logs, exec and port-forward operations.</p> </li>
     * <li> <p> Each host must allow TCP and UDP network connectivity to and from other
     * hosts that are running <code>CoreDNS</code> on UDP port <code>53</code> for
     * service and pod DNS names.</p> </li> </ul>
     */
    inline const Aws::Vector<Aws::String>& GetCidrs() const { return m_cidrs; }
    inline bool CidrsHasBeenSet() const { return m_cidrsHasBeenSet; }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    void SetCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs = std::forward<CidrsT>(value); }
    template<typename CidrsT = Aws::Vector<Aws::String>>
    RemoteNodeNetwork& WithCidrs(CidrsT&& value) { SetCidrs(std::forward<CidrsT>(value)); return *this;}
    template<typename CidrsT = Aws::String>
    RemoteNodeNetwork& AddCidrs(CidrsT&& value) { m_cidrsHasBeenSet = true; m_cidrs.emplace_back(std::forward<CidrsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_cidrs;
    bool m_cidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
