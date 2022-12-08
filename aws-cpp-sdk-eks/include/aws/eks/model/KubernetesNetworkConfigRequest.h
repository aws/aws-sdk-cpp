/**
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
  class KubernetesNetworkConfigRequest
  {
  public:
    AWS_EKS_API KubernetesNetworkConfigRequest();
    AWS_EKS_API KubernetesNetworkConfigRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API KubernetesNetworkConfigRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline const Aws::String& GetServiceIpv4Cidr() const{ return m_serviceIpv4Cidr; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline void SetServiceIpv4Cidr(const Aws::String& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = value; }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline void SetServiceIpv4Cidr(Aws::String&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::move(value); }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline void SetServiceIpv4Cidr(const char* value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr.assign(value); }

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const Aws::String& value) { SetServiceIpv4Cidr(value); return *this;}

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(Aws::String&& value) { SetServiceIpv4Cidr(std::move(value)); return *this;}

    /**
     * <p>Don't specify a value if you select <code>ipv6</code> for <b>ipFamily</b>.
     * The CIDR block to assign Kubernetes service IP addresses from. If you don't
     * specify a block, Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. We
     * recommend that you specify a block that does not overlap with resources in other
     * networks that are peered or connected to your VPC. The block must meet the
     * following requirements:</p> <ul> <li> <p>Within one of the following private IP
     * address blocks: <code>10.0.0.0/8</code>, <code>172.16.0.0/12</code>, or
     * <code>192.168.0.0/16</code>.</p> </li> <li> <p>Doesn't overlap with any CIDR
     * block assigned to the VPC that you selected for VPC.</p> </li> <li> <p>Between
     * /24 and /12.</p> </li> </ul>  <p>You can only specify a custom CIDR
     * block when you create a cluster and can't change this value once the cluster is
     * created.</p> 
     */
    inline KubernetesNetworkConfigRequest& WithServiceIpv4Cidr(const char* value) { SetServiceIpv4Cidr(value); return *this;}


    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline const IpFamily& GetIpFamily() const{ return m_ipFamily; }

    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline bool IpFamilyHasBeenSet() const { return m_ipFamilyHasBeenSet; }

    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline void SetIpFamily(const IpFamily& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = value; }

    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline void SetIpFamily(IpFamily&& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = std::move(value); }

    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline KubernetesNetworkConfigRequest& WithIpFamily(const IpFamily& value) { SetIpFamily(value); return *this;}

    /**
     * <p>Specify which IP family is used to assign Kubernetes pod and service IP
     * addresses. If you don't specify a value, <code>ipv4</code> is used by default.
     * You can only specify an IP family when you create a cluster and can't change
     * this value once the cluster is created. If you specify <code>ipv6</code>, the
     * VPC and subnets that you specify for cluster creation must have both
     * <code>IPv4</code> and <code>IPv6</code> CIDR blocks assigned to them. You can't
     * specify <code>ipv6</code> for clusters in China Regions.</p> <p>You can only
     * specify <code>ipv6</code> for <code>1.21</code> and later clusters that use
     * version <code>1.10.1</code> or later of the Amazon VPC CNI add-on. If you
     * specify <code>ipv6</code>, then ensure that your VPC meets the requirements
     * listed in the considerations listed in <a
     * href="https://docs.aws.amazon.com/eks/latest/userguide/cni-ipv6.html">Assigning
     * IPv6 addresses to pods and services</a> in the Amazon EKS User Guide. Kubernetes
     * assigns services <code>IPv6</code> addresses from the unique local address range
     * <code>(fc00::/7)</code>. You can't specify a custom <code>IPv6</code> CIDR
     * block. Pod addresses are assigned from the subnet's <code>IPv6</code> CIDR.</p>
     */
    inline KubernetesNetworkConfigRequest& WithIpFamily(IpFamily&& value) { SetIpFamily(std::move(value)); return *this;}

  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet = false;

    IpFamily m_ipFamily;
    bool m_ipFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
