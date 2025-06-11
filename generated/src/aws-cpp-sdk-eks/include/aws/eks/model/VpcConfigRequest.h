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
   * <p>An object representing the VPC configuration to use for an Amazon EKS
   * cluster.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/VpcConfigRequest">AWS
   * API Reference</a></p>
   */
  class VpcConfigRequest
  {
  public:
    AWS_EKS_API VpcConfigRequest() = default;
    AWS_EKS_API VpcConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API VpcConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Specify subnets for your Amazon EKS nodes. Amazon EKS creates cross-account
     * elastic network interfaces in these subnets to allow communication between your
     * nodes and the Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcConfigRequest& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcConfigRequest& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use that allow communication between your
     * nodes and the Kubernetes control plane. If you don't specify any security
     * groups, then familiarize yourself with the difference between Amazon EKS
     * defaults for clusters deployed with Kubernetes. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/sec-group-reqs.html">Amazon
     * EKS security group considerations</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcConfigRequest& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcConfigRequest& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Set this value to <code>false</code> to disable public access to your
     * cluster's Kubernetes API server endpoint. If you disable public access, your
     * cluster's Kubernetes API server can only receive requests from within the
     * cluster VPC. The default value for this parameter is <code>true</code>, which
     * enables public access for your Kubernetes API server. The endpoint domain name
     * and IP address family depends on the value of the <code>ipFamily</code> for the
     * cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Cluster
     * API server endpoint</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool GetEndpointPublicAccess() const { return m_endpointPublicAccess; }
    inline bool EndpointPublicAccessHasBeenSet() const { return m_endpointPublicAccessHasBeenSet; }
    inline void SetEndpointPublicAccess(bool value) { m_endpointPublicAccessHasBeenSet = true; m_endpointPublicAccess = value; }
    inline VpcConfigRequest& WithEndpointPublicAccess(bool value) { SetEndpointPublicAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Set this value to <code>true</code> to enable private access for your
     * cluster's Kubernetes API server endpoint. If you enable private access,
     * Kubernetes API requests from within your cluster's VPC use the private VPC
     * endpoint. The default value for this parameter is <code>false</code>, which
     * disables private access for your Kubernetes API server. If you disable private
     * access and you have nodes or Fargate pods in the cluster, then ensure that
     * <code>publicAccessCidrs</code> includes the necessary CIDR blocks for
     * communication with the nodes or Fargate pods. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Cluster
     * API server endpoint</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool GetEndpointPrivateAccess() const { return m_endpointPrivateAccess; }
    inline bool EndpointPrivateAccessHasBeenSet() const { return m_endpointPrivateAccessHasBeenSet; }
    inline void SetEndpointPrivateAccess(bool value) { m_endpointPrivateAccessHasBeenSet = true; m_endpointPrivateAccess = value; }
    inline VpcConfigRequest& WithEndpointPrivateAccess(bool value) { SetEndpointPrivateAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks that are allowed access to your cluster's public Kubernetes
     * API server endpoint. Communication to the endpoint from addresses outside of the
     * CIDR blocks that you specify is denied. The default value is
     * <code>0.0.0.0/0</code> and additionally <code>::/0</code> for dual-stack `IPv6`
     * clusters. If you've disabled private endpoint access, make sure that you specify
     * the necessary CIDR blocks for every node and Fargate <code>Pod</code> in the
     * cluster. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Cluster
     * API server endpoint</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     * <p>Note that the public endpoints are dual-stack for only <code>IPv6</code>
     * clusters that are made after October 2024. You can't add <code>IPv6</code> CIDR
     * blocks to <code>IPv4</code> clusters or <code>IPv6</code> clusters that were
     * made before October 2024.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicAccessCidrs() const { return m_publicAccessCidrs; }
    inline bool PublicAccessCidrsHasBeenSet() const { return m_publicAccessCidrsHasBeenSet; }
    template<typename PublicAccessCidrsT = Aws::Vector<Aws::String>>
    void SetPublicAccessCidrs(PublicAccessCidrsT&& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs = std::forward<PublicAccessCidrsT>(value); }
    template<typename PublicAccessCidrsT = Aws::Vector<Aws::String>>
    VpcConfigRequest& WithPublicAccessCidrs(PublicAccessCidrsT&& value) { SetPublicAccessCidrs(std::forward<PublicAccessCidrsT>(value)); return *this;}
    template<typename PublicAccessCidrsT = Aws::String>
    VpcConfigRequest& AddPublicAccessCidrs(PublicAccessCidrsT&& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs.emplace_back(std::forward<PublicAccessCidrsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    bool m_endpointPublicAccess{false};
    bool m_endpointPublicAccessHasBeenSet = false;

    bool m_endpointPrivateAccess{false};
    bool m_endpointPrivateAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicAccessCidrs;
    bool m_publicAccessCidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
