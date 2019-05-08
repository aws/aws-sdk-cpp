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
   * <p>An object representing an Amazon EKS cluster VPC configuration
   * response.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/VpcConfigResponse">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API VpcConfigResponse
  {
  public:
    VpcConfigResponse();
    VpcConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    VpcConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubnetIds() const{ return m_subnetIds; }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline bool SubnetIdsHasBeenSet() const { return m_subnetIdsHasBeenSet; }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline void SetSubnetIds(const Aws::Vector<Aws::String>& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = value; }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline void SetSubnetIds(Aws::Vector<Aws::String>&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds = std::move(value); }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline VpcConfigResponse& WithSubnetIds(const Aws::Vector<Aws::String>& value) { SetSubnetIds(value); return *this;}

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline VpcConfigResponse& WithSubnetIds(Aws::Vector<Aws::String>&& value) { SetSubnetIds(std::move(value)); return *this;}

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline VpcConfigResponse& AddSubnetIds(const Aws::String& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline VpcConfigResponse& AddSubnetIds(Aws::String&& value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The subnets associated with your cluster.</p>
     */
    inline VpcConfigResponse& AddSubnetIds(const char* value) { m_subnetIdsHasBeenSet = true; m_subnetIds.push_back(value); return *this; }


    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline bool SecurityGroupIdsHasBeenSet() const { return m_securityGroupIdsHasBeenSet; }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline VpcConfigResponse& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline VpcConfigResponse& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline VpcConfigResponse& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline VpcConfigResponse& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The security groups associated with the cross-account elastic network
     * interfaces that are used to allow communication between your worker nodes and
     * the Kubernetes control plane.</p>
     */
    inline VpcConfigResponse& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }


    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline const Aws::String& GetVpcId() const{ return m_vpcId; }

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline bool VpcIdHasBeenSet() const { return m_vpcIdHasBeenSet; }

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline void SetVpcId(const Aws::String& value) { m_vpcIdHasBeenSet = true; m_vpcId = value; }

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline void SetVpcId(Aws::String&& value) { m_vpcIdHasBeenSet = true; m_vpcId = std::move(value); }

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline void SetVpcId(const char* value) { m_vpcIdHasBeenSet = true; m_vpcId.assign(value); }

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline VpcConfigResponse& WithVpcId(const Aws::String& value) { SetVpcId(value); return *this;}

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline VpcConfigResponse& WithVpcId(Aws::String&& value) { SetVpcId(std::move(value)); return *this;}

    /**
     * <p>The VPC associated with your cluster.</p>
     */
    inline VpcConfigResponse& WithVpcId(const char* value) { SetVpcId(value); return *this;}


    /**
     * <p>This parameter indicates whether the Amazon EKS public API server endpoint is
     * enabled. If the Amazon EKS public API server endpoint is disabled, your
     * cluster's Kubernetes API server can receive only requests that originate from
     * within the cluster VPC. </p>
     */
    inline bool GetEndpointPublicAccess() const{ return m_endpointPublicAccess; }

    /**
     * <p>This parameter indicates whether the Amazon EKS public API server endpoint is
     * enabled. If the Amazon EKS public API server endpoint is disabled, your
     * cluster's Kubernetes API server can receive only requests that originate from
     * within the cluster VPC. </p>
     */
    inline bool EndpointPublicAccessHasBeenSet() const { return m_endpointPublicAccessHasBeenSet; }

    /**
     * <p>This parameter indicates whether the Amazon EKS public API server endpoint is
     * enabled. If the Amazon EKS public API server endpoint is disabled, your
     * cluster's Kubernetes API server can receive only requests that originate from
     * within the cluster VPC. </p>
     */
    inline void SetEndpointPublicAccess(bool value) { m_endpointPublicAccessHasBeenSet = true; m_endpointPublicAccess = value; }

    /**
     * <p>This parameter indicates whether the Amazon EKS public API server endpoint is
     * enabled. If the Amazon EKS public API server endpoint is disabled, your
     * cluster's Kubernetes API server can receive only requests that originate from
     * within the cluster VPC. </p>
     */
    inline VpcConfigResponse& WithEndpointPublicAccess(bool value) { SetEndpointPublicAccess(value); return *this;}


    /**
     * <p>This parameter indicates whether the Amazon EKS private API server endpoint
     * is enabled. If the Amazon EKS private API server endpoint is enabled, Kubernetes
     * API requests that originate from within your cluster's VPC use the private VPC
     * endpoint instead of traversing the internet.</p>
     */
    inline bool GetEndpointPrivateAccess() const{ return m_endpointPrivateAccess; }

    /**
     * <p>This parameter indicates whether the Amazon EKS private API server endpoint
     * is enabled. If the Amazon EKS private API server endpoint is enabled, Kubernetes
     * API requests that originate from within your cluster's VPC use the private VPC
     * endpoint instead of traversing the internet.</p>
     */
    inline bool EndpointPrivateAccessHasBeenSet() const { return m_endpointPrivateAccessHasBeenSet; }

    /**
     * <p>This parameter indicates whether the Amazon EKS private API server endpoint
     * is enabled. If the Amazon EKS private API server endpoint is enabled, Kubernetes
     * API requests that originate from within your cluster's VPC use the private VPC
     * endpoint instead of traversing the internet.</p>
     */
    inline void SetEndpointPrivateAccess(bool value) { m_endpointPrivateAccessHasBeenSet = true; m_endpointPrivateAccess = value; }

    /**
     * <p>This parameter indicates whether the Amazon EKS private API server endpoint
     * is enabled. If the Amazon EKS private API server endpoint is enabled, Kubernetes
     * API requests that originate from within your cluster's VPC use the private VPC
     * endpoint instead of traversing the internet.</p>
     */
    inline VpcConfigResponse& WithEndpointPrivateAccess(bool value) { SetEndpointPrivateAccess(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;

    Aws::String m_vpcId;
    bool m_vpcIdHasBeenSet;

    bool m_endpointPublicAccess;
    bool m_endpointPublicAccessHasBeenSet;

    bool m_endpointPrivateAccess;
    bool m_endpointPrivateAccessHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
