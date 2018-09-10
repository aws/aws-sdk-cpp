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
   * request.</p><p><h3>See Also:</h3>   <a
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
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSecurityGroupIds() const{ return m_securityGroupIds; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline void SetSecurityGroupIds(const Aws::Vector<Aws::String>& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = value; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline void SetSecurityGroupIds(Aws::Vector<Aws::String>&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds = std::move(value); }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& WithSecurityGroupIds(const Aws::Vector<Aws::String>& value) { SetSecurityGroupIds(value); return *this;}

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& WithSecurityGroupIds(Aws::Vector<Aws::String>&& value) { SetSecurityGroupIds(std::move(value)); return *this;}

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(const Aws::String& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(Aws::String&& value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Specify one or more security groups for the cross-account elastic network
     * interfaces that Amazon EKS creates to use to allow communication between your
     * worker nodes and the Kubernetes control plane.</p>
     */
    inline VpcConfigRequest& AddSecurityGroupIds(const char* value) { m_securityGroupIdsHasBeenSet = true; m_securityGroupIds.push_back(value); return *this; }

  private:

    Aws::Vector<Aws::String> m_subnetIds;
    bool m_subnetIdsHasBeenSet;

    Aws::Vector<Aws::String> m_securityGroupIds;
    bool m_securityGroupIdsHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
