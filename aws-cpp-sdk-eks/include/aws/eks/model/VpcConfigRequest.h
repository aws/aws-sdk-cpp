/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
  class AWS_EKS_API VpcConfigRequest
  {
  public:
    VpcConfigRequest();
    VpcConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    VpcConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify subnets for your Amazon EKS worker nodes. Amazon EKS creates
     * cross-account elastic network interfaces in these subnets to allow communication
     * between your worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline VpcConfigRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline VpcConfigRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane. If you don't specify a security
     * group, the default security group for your VPC is used.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>Set this value to <code>false</code> to disable public access for your
     * cluster's Kubernetes API server endpoint. If you disable public access, your
     * cluster's Kubernetes API server can receive only requests from within the
     * cluster VPC. The default value for this parameter is <code>true</code>, which
     * enables public access for your Kubernetes API server. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline bool GetEndpointPublicAccess() const{ return m_endpointPublicAccess; }

    /**
     * <p>Set this value to <code>false</code> to disable public access for your
     * cluster's Kubernetes API server endpoint. If you disable public access, your
     * cluster's Kubernetes API server can receive only requests from within the
     * cluster VPC. The default value for this parameter is <code>true</code>, which
     * enables public access for your Kubernetes API server. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline bool EndpointPublicAccessHasBeenSet() const { return m_endpointPublicAccessHasBeenSet; }

    /**
     * <p>Set this value to <code>false</code> to disable public access for your
     * cluster's Kubernetes API server endpoint. If you disable public access, your
     * cluster's Kubernetes API server can receive only requests from within the
     * cluster VPC. The default value for this parameter is <code>true</code>, which
     * enables public access for your Kubernetes API server. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline void SetEndpointPublicAccess(bool value) { m_endpointPublicAccessHasBeenSet = true; m_endpointPublicAccess = value; }

    /**
     * <p>Set this value to <code>false</code> to disable public access for your
     * cluster's Kubernetes API server endpoint. If you disable public access, your
     * cluster's Kubernetes API server can receive only requests from within the
     * cluster VPC. The default value for this parameter is <code>true</code>, which
     * enables public access for your Kubernetes API server. For more information, see
     * <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline VpcConfigRequest& WithEndpointPublicAccess(bool value) { SetEndpointPublicAccess(value); return *this;}


    /**
     * <p>Set this value to <code>true</code> to enable private access for your
     * cluster's Kubernetes API server endpoint. If you enable private access,
     * Kubernetes API requests from within your cluster's VPC use the private VPC
     * endpoint. The default value for this parameter is <code>false</code>, which
     * disables private access for your Kubernetes API server. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline bool GetEndpointPrivateAccess() const{ return m_endpointPrivateAccess; }

    /**
     * <p>Set this value to <code>true</code> to enable private access for your
     * cluster's Kubernetes API server endpoint. If you enable private access,
     * Kubernetes API requests from within your cluster's VPC use the private VPC
     * endpoint. The default value for this parameter is <code>false</code>, which
     * disables private access for your Kubernetes API server. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline bool EndpointPrivateAccessHasBeenSet() const { return m_endpointPrivateAccessHasBeenSet; }

    /**
     * <p>Set this value to <code>true</code> to enable private access for your
     * cluster's Kubernetes API server endpoint. If you enable private access,
     * Kubernetes API requests from within your cluster's VPC use the private VPC
     * endpoint. The default value for this parameter is <code>false</code>, which
     * disables private access for your Kubernetes API server. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline void SetEndpointPrivateAccess(bool value) { m_endpointPrivateAccessHasBeenSet = true; m_endpointPrivateAccess = value; }

    /**
     * <p>Set this value to <code>true</code> to enable private access for your
     * cluster's Kubernetes API server endpoint. If you enable private access,
     * Kubernetes API requests from within your cluster's VPC use the private VPC
     * endpoint. The default value for this parameter is <code>false</code>, which
     * disables private access for your Kubernetes API server. For more information,
     * see <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cluster-endpoint.html">Amazon
     * EKS Cluster Endpoint Access Control</a> in the <i> <i>Amazon EKS User Guide</i>
     * </i>.</p>
     */
    inline VpcConfigRequest& WithEndpointPrivateAccess(bool value) { SetEndpointPrivateAccess(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    bool m_endpointPublicAccess;
    bool m_endpointPublicAccessHasBeenSet;

    bool m_endpointPrivateAccess;
    bool m_endpointPrivateAccessHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
