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
   * <p>An object representing an Amazon EKS cluster VPC configuration
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/VpcConfigResponse">AWS
   * API Reference</a></p>
   */
  class VpcConfigResponse
  {
  public:
    AWS_EKS_API VpcConfigResponse() = default;
    AWS_EKS_API VpcConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API VpcConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const { return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    void SetSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::forward<SubnetIdsT>(value); }
    template<typename SubnetIdsT = Aws::Vector<Aws::String>>
    VpcConfigResponse& WithSubnetIds(SubnetIdsT&& value) { SetSubnetIds(std::forward<SubnetIdsT>(value)); return *this;}
    template<typename SubnetIdsT = Aws::String>
    VpcConfigResponse& AddSubnetIds(SubnetIdsT&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.emplace_back(std::forward<SubnetIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your nodes and the
     * Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const { return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    void SetSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::forward<SecurityGroupIdsT>(value); }
    template<typename SecurityGroupIdsT = Aws::Vector<Aws::String>>
    VpcConfigResponse& WithSecurityGroupIds(SecurityGroupIdsT&& value) { SetSecurityGroupIds(std::forward<SecurityGroupIdsT>(value)); return *this;}
    template<typename SecurityGroupIdsT = Aws::String>
    VpcConfigResponse& AddSecurityGroupIds(SecurityGroupIdsT&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.emplace_back(std::forward<SecurityGroupIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cluster security group that was created by Amazon EKS for the cluster.
     * Managed node groups use this security group for control-plane-to-data-plane
     * communication.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupId() const { return m_clusterSecurityGroupId; }
    inline bool ClusterSecurityGroupIdHasBeenSet() const { return m_clusterSecurityGroupIdHasBeenSet; }
    template<typename ClusterSecurityGroupIdT = Aws::String>
    void SetClusterSecurityGroupId(ClusterSecurityGroupIdT&& value) { m_clusterSecurityGroupIdHasBeenSet = true; m_clusterSecurityGroupId = std::forward<ClusterSecurityGroupIdT>(value); }
    template<typename ClusterSecurityGroupIdT = Aws::String>
    VpcConfigResponse& WithClusterSecurityGroupId(ClusterSecurityGroupIdT&& value) { SetClusterSecurityGroupId(std::forward<ClusterSecurityGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline const Aws::String& GetVpcId() const { return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    template<typename VpcIdT = Aws::String>
    void SetVpcId(VpcIdT&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::forward<VpcIdT>(value); }
    template<typename VpcIdT = Aws::String>
    VpcConfigResponse& WithVpcId(VpcIdT&& value) { SetVpcId(std::forward<VpcIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the public API server endpoint is enabled.</p>
     */
    inline bool GetEndpointPublicAccess() const { return m_endpointPublicAccess; }
    inline bool EndpointPublicAccessHasBeenSet() const { return m_endpointPublicAccessHasBeenSet; }
    inline void SetEndpointPublicAccess(bool value) { m_endpointPublicAccessHasBeenSet = true; m_endpointPublicAccess = value; }
    inline VpcConfigResponse& WithEndpointPublicAccess(bool value) { SetEndpointPublicAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter indicates whether the Amazon EKS private API server endpoint
     * is enabled. If the Amazon EKS private API server endpoint is enabled, Kubernetes
     * API requests that originate from within your cluster's VPC use the private VPC
     * endpoint instead of traversing the internet. If this value is disabled and you
     * have nodes or Fargate pods in the cluster, then ensure that
     * <code>publicAccessCidrs</code> includes the necessary CIDR blocks for
     * communication with the nodes or Fargate pods. For more information, see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Cluster
     * API server endpoint</a> in the <i> <i>Amazon EKS User Guide</i> </i>.</p>
     */
    inline bool GetEndpointPrivateAccess() const { return m_endpointPrivateAccess; }
    inline bool EndpointPrivateAccessHasBeenSet() const { return m_endpointPrivateAccessHasBeenSet; }
    inline void SetEndpointPrivateAccess(bool value) { m_endpointPrivateAccessHasBeenSet = true; m_endpointPrivateAccess = value; }
    inline VpcConfigResponse& WithEndpointPrivateAccess(bool value) { SetEndpointPrivateAccess(value); return *this;}
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
    VpcConfigResponse& WithPublicAccessCidrs(PublicAccessCidrsT&& value) { SetPublicAccessCidrs(std::forward<PublicAccessCidrsT>(value)); return *this;}
    template<typename PublicAccessCidrsT = Aws::String>
    VpcConfigResponse& AddPublicAccessCidrs(PublicAccessCidrsT&& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs.emplace_back(std::forward<PublicAccessCidrsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet = false;

    Aws::String m_clusterSecurityGroupId;
    bool m_clusterSecurityGroupIdHasBeenSet = false;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet = false;

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
