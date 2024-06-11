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
    AWS_EKS_API VpcConfigResponse();
    AWS_EKS_API VpcConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API VpcConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }
    inline VpcConfigResponse& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}
    inline VpcConfigResponse& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}
    inline VpcConfigResponse& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    inline VpcConfigResponse& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }
    inline VpcConfigResponse& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your nodes and the
     * Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }
    inline VpcConfigResponse& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}
    inline VpcConfigResponse& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}
    inline VpcConfigResponse& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    inline VpcConfigResponse& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }
    inline VpcConfigResponse& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The cluster security group that was created by Amazon EKS for the cluster.
     * Managed node groups use this security group for control-plane-to-data-plane
     * communication.</p>
     */
    inline const Aws::String& GetClusterSecurityGroupId() const{ return m_clusterSecurityGroupId; }
    inline bool ClusterSecurityGroupIdHasBeenSet() const { return m_clusterSecurityGroupIdHasBeenSet; }
    inline void SetClusterSecurityGroupId(const Aws::String& value) { m_clusterSecurityGroupIdHasBeenSet = true; m_clusterSecurityGroupId = value; }
    inline void SetClusterSecurityGroupId(Aws::String&& value) { m_clusterSecurityGroupIdHasBeenSet = true; m_clusterSecurityGroupId = std::move(value); }
    inline void SetClusterSecurityGroupId(const char* value) { m_clusterSecurityGroupIdHasBeenSet = true; m_clusterSecurityGroupId.assign(value); }
    inline VpcConfigResponse& WithClusterSecurityGroupId(const Aws::String& value) { SetClusterSecurityGroupId(value); return *this;}
    inline VpcConfigResponse& WithClusterSecurityGroupId(Aws::String&& value) { SetClusterSecurityGroupId(std::move(value)); return *this;}
    inline VpcConfigResponse& WithClusterSecurityGroupId(const char* value) { SetClusterSecurityGroupId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }
    inline VpcConfigResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}
    inline VpcConfigResponse& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}
    inline VpcConfigResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Whether the public API server endpoint is enabled.</p>
     */
    inline bool GetEndpointPublicAccess() const{ return m_endpointPublicAccess; }
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
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS cluster endpoint access control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline bool GetEndpointPrivateAccess() const{ return m_endpointPrivateAccess; }
    inline bool EndpointPrivateAccessHasBeenSet() const { return m_endpointPrivateAccessHasBeenSet; }
    inline void SetEndpointPrivateAccess(bool value) { m_endpointPrivateAccessHasBeenSet = true; m_endpointPrivateAccess = value; }
    inline VpcConfigResponse& WithEndpointPrivateAccess(bool value) { SetEndpointPrivateAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR blocks that are allowed access to your cluster's public Kubernetes
     * API server endpoint.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPublicAccessCidrs() const{ return m_publicAccessCidrs; }
    inline bool PublicAccessCidrsHasBeenSet() const { return m_publicAccessCidrsHasBeenSet; }
    inline void SetPublicAccessCidrs(const Aws::Vector<Aws::String>& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs = value; }
    inline void SetPublicAccessCidrs(Aws::Vector<Aws::String>&& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs = std::move(value); }
    inline VpcConfigResponse& WithPublicAccessCidrs(const Aws::Vector<Aws::String>& value) { SetPublicAccessCidrs(value); return *this;}
    inline VpcConfigResponse& WithPublicAccessCidrs(Aws::Vector<Aws::String>&& value) { SetPublicAccessCidrs(std::move(value)); return *this;}
    inline VpcConfigResponse& AddPublicAccessCidrs(const Aws::String& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs.push_back(value); return *this; }
    inline VpcConfigResponse& AddPublicAccessCidrs(Aws::String&& value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs.push_back(std::move(value)); return *this; }
    inline VpcConfigResponse& AddPublicAccessCidrs(const char* value) { m_publicAccessCidrsHasBeenSet = true; m_publicAccessCidrs.push_back(value); return *this; }
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

    bool m_endpointPublicAccess;
    bool m_endpointPublicAccessHasBeenSet = false;

    bool m_endpointPrivateAccess;
    bool m_endpointPrivateAccessHasBeenSet = false;

    Aws::Vector<Aws::String> m_publicAccessCidrs;
    bool m_publicAccessCidrsHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
