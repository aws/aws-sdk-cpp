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
   * <p>The Kubernetes network configuration for the cluster. The response contains a
   * value for <b>serviceIpv6Cidr</b> or <b>serviceIpv4Cidr</b>, but not both.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/eks-2017-11-01/KubernetesNetworkConfigResponse">AWS
   * API Reference</a></p>
   */
  class KubernetesNetworkConfigResponse
  {
  public:
    AWS_EKS_API KubernetesNetworkConfigResponse();
    AWS_EKS_API KubernetesNetworkConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API KubernetesNetworkConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline const Aws::String& GetServiceIpv4Cidr() const{ return m_serviceIpv4Cidr; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline void SetServiceIpv4Cidr(const Aws::String& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = value; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline void SetServiceIpv4Cidr(Aws::String&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::move(value); }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline void SetServiceIpv4Cidr(const char* value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr.assign(value); }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(const Aws::String& value) { SetServiceIpv4Cidr(value); return *this;}

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(Aws::String&& value) { SetServiceIpv4Cidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned
     * from. Kubernetes assigns addresses from an IPv4 CIDR block assigned to a subnet
     * that the node is in. If you didn't specify a CIDR block when you created the
     * cluster, then Kubernetes assigns addresses from either the
     * <code>10.100.0.0/16</code> or <code>172.20.0.0/16</code> CIDR blocks. If this
     * was specified, then it was specified when the cluster was created and it can't
     * be changed.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(const char* value) { SetServiceIpv4Cidr(value); return *this;}


    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline const Aws::String& GetServiceIpv6Cidr() const{ return m_serviceIpv6Cidr; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline bool ServiceIpv6CidrHasBeenSet() const { return m_serviceIpv6CidrHasBeenSet; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline void SetServiceIpv6Cidr(const Aws::String& value) { m_serviceIpv6CidrHasBeenSet = true; m_serviceIpv6Cidr = value; }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline void SetServiceIpv6Cidr(Aws::String&& value) { m_serviceIpv6CidrHasBeenSet = true; m_serviceIpv6Cidr = std::move(value); }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline void SetServiceIpv6Cidr(const char* value) { m_serviceIpv6CidrHasBeenSet = true; m_serviceIpv6Cidr.assign(value); }

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv6Cidr(const Aws::String& value) { SetServiceIpv6Cidr(value); return *this;}

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv6Cidr(Aws::String&& value) { SetServiceIpv6Cidr(std::move(value)); return *this;}

    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline KubernetesNetworkConfigResponse& WithServiceIpv6Cidr(const char* value) { SetServiceIpv6Cidr(value); return *this;}


    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline const IpFamily& GetIpFamily() const{ return m_ipFamily; }

    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline bool IpFamilyHasBeenSet() const { return m_ipFamilyHasBeenSet; }

    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline void SetIpFamily(const IpFamily& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = value; }

    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline void SetIpFamily(IpFamily&& value) { m_ipFamilyHasBeenSet = true; m_ipFamily = std::move(value); }

    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline KubernetesNetworkConfigResponse& WithIpFamily(const IpFamily& value) { SetIpFamily(value); return *this;}

    /**
     * <p>The IP family used to assign Kubernetes pod and service IP addresses. The IP
     * family is always <code>ipv4</code>, unless you have a <code>1.21</code> or later
     * cluster running version 1.10.1 or later of the Amazon VPC CNI add-on and
     * specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline KubernetesNetworkConfigResponse& WithIpFamily(IpFamily&& value) { SetIpFamily(std::move(value)); return *this;}

  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet = false;

    Aws::String m_serviceIpv6Cidr;
    bool m_serviceIpv6CidrHasBeenSet = false;

    IpFamily m_ipFamily;
    bool m_ipFamilyHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
