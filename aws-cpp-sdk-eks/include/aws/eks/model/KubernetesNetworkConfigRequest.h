/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
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
   * <p>The Kubernetes network configuration for the cluster.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubernetesNetworkConfigRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EKS_API KubernetesNetworkConfigRequest
  {
  public:
    KubernetesNetworkConfigRequest();
    KubernetesNetworkConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    KubernetesNetworkConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline const Aws::String& GetServiceIpv4Cidr() const{ return m_serviceIpv4Cidr; }

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(const Aws::String& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = value; }

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(Aws::String&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::move(value); }

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(const char* value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr.assign(value); }

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const Aws::String& value) { SetServiceIpv4Cidr(value); return *this;}

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(Aws::String&& value) { SetServiceIpv4Cidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const char* value) { SetServiceIpv4Cidr(value); return *this;}

  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
