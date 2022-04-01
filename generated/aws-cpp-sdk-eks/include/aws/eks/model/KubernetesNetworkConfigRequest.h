﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/IpFamily.h>
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
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline const Aws::String& GetServiceIpv4Cidr() const{ return m_serviceIpv4Cidr; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(const Aws::String& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = value; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(Aws::String&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::move(value); }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline void SetServiceIpv4Cidr(const char* value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr.assign(value); }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const Aws::String& value) { SetServiceIpv4Cidr(value); return *this;}

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(Aws::String&& value) { SetServiceIpv4Cidr(std::move(value)); return *this;}

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the 10.100.0.0/16 or
     * 172.20.0.0/16 CIDR blocks. We recommend that you specify a block that does not
     * overlap with resources in other networks that are peered or connected to your
     * VPC. The block must meet the following requirements:</p> <ul> <li> <p>Within one
     * of the following private IP address blocks: 10.0.0.0/8, 172.16.0.0/12, or
     * 192.168.0.0/16.</p> </li> <li> <p>Doesn't overlap with any CIDR block assigned
     * to the VPC that you selected for VPC.</p> </li> <li> <p>Between /24 and /12.</p>
     * </li> </ul>  <p>You can only specify a custom CIDR block when you
     * create a cluster and can't change this value once the cluster is created.</p>
     * 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const char* value) { SetServiceIpv4Cidr(value); return *this;}


    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline const IpFamily& GetIpFamily() const{ return m_ipFamily; }

    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline bool IpFamilyHasBeenSet() const { return m_ipFamilyHasBeenSet; }

    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline void SetIpFamily(const IpFamily& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = value; }

    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline void SetIpFamily(IpFamily&& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = std::move(value); }

    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline KubernetesNetworkConfigRequest& WithIpFamily(const IpFamily& value) { SetIpFamily(value); return *this;}

    /**
     * <p>Specify which IP version is used to assign Kubernetes Pod and Service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both IPv4 and
     * IPv6 CIDR blocks assigned to them. </p> <p>You can only specify
     * <code>ipv6</code> for 1.21 and later clusters that use version 1.10.0 or later
     * of the Amazon VPC CNI add-on. If you specify <code>ipv6</code>, then ensure that
     * your VPC meets the requirements and that you're familiar with the considerations
     * listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to Pods and Services</a> in the Amazon EKS User Guide. If you
     * specify <code>ipv6</code>, Kubernetes assigns Service and Pod addresses from the
     * unique local address range (fc00::/7). You can't specify a custom IPv6 CIDR
     * block.</p>
     */
    inline KubernetesNetworkConfigRequest& WithIpFamily(IpFamily&& value) { SetIpFamily(std::move(value)); return *this;}

  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet;

    IpFamily m_ipFamily;
    bool m_ipFamilyHasBeenSet;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
