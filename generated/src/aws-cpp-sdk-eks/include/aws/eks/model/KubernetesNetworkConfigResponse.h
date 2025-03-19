/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/eks/EKS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/eks/model/IpFamily.h>
#include <aws/eks/model/ElasticLoadBalancing.h>
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
    AWS_EKS_API KubernetesNetworkConfigResponse() = default;
    AWS_EKS_API KubernetesNetworkConfigResponse(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API KubernetesNetworkConfigResponse& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_EKS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The CIDR block that Kubernetes <code>Pod</code> and <code>Service</code>
     * object IP addresses are assigned from. Kubernetes assigns addresses from an
     * <code>IPv4</code> CIDR block assigned to a subnet that the node is in. If you
     * didn't specify a CIDR block when you created the cluster, then Kubernetes
     * assigns addresses from either the <code>10.100.0.0/16</code> or
     * <code>172.20.0.0/16</code> CIDR blocks. If this was specified, then it was
     * specified when the cluster was created and it can't be changed.</p>
     */
    inline const Aws::String& GetServiceIpv4Cidr() const { return m_serviceIpv4Cidr; }
    inline bool ServiceIpv4CidrHasBeenSet() const { return m_serviceIpv4CidrHasBeenSet; }
    template<typename ServiceIpv4CidrT = Aws::String>
    void SetServiceIpv4Cidr(ServiceIpv4CidrT&& value) { m_serviceIpv4CidrHasBeenSet = true; m_serviceIpv4Cidr = std::forward<ServiceIpv4CidrT>(value); }
    template<typename ServiceIpv4CidrT = Aws::String>
    KubernetesNetworkConfigResponse& WithServiceIpv4Cidr(ServiceIpv4CidrT&& value) { SetServiceIpv4Cidr(std::forward<ServiceIpv4CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The CIDR block that Kubernetes pod and service IP addresses are assigned from
     * if you created a 1.21 or later cluster with version 1.10.1 or later of the
     * Amazon VPC CNI add-on and specified <code>ipv6</code> for <b>ipFamily</b> when
     * you created the cluster. Kubernetes assigns service addresses from the unique
     * local address range (<code>fc00::/7</code>) because you can't specify a custom
     * IPv6 CIDR block when you create the cluster.</p>
     */
    inline const Aws::String& GetServiceIpv6Cidr() const { return m_serviceIpv6Cidr; }
    inline bool ServiceIpv6CidrHasBeenSet() const { return m_serviceIpv6CidrHasBeenSet; }
    template<typename ServiceIpv6CidrT = Aws::String>
    void SetServiceIpv6Cidr(ServiceIpv6CidrT&& value) { m_serviceIpv6CidrHasBeenSet = true; m_serviceIpv6Cidr = std::forward<ServiceIpv6CidrT>(value); }
    template<typename ServiceIpv6CidrT = Aws::String>
    KubernetesNetworkConfigResponse& WithServiceIpv6Cidr(ServiceIpv6CidrT&& value) { SetServiceIpv6Cidr(std::forward<ServiceIpv6CidrT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IP family used to assign Kubernetes <code>Pod</code> and
     * <code>Service</code> objects IP addresses. The IP family is always
     * <code>ipv4</code>, unless you have a <code>1.21</code> or later cluster running
     * version <code>1.10.1</code> or later of the Amazon VPC CNI plugin for Kubernetes
     * and specified <code>ipv6</code> when you created the cluster. </p>
     */
    inline IpFamily GetIpFamily() const { return m_ipFamily; }
    inline bool IpFamilyHasBeenSet() const { return m_ipFamilyHasBeenSet; }
    inline void SetIpFamily(IpFamily value) { m_ipFamilyHasBeenSet = true; m_ipFamily = value; }
    inline KubernetesNetworkConfigResponse& WithIpFamily(IpFamily value) { SetIpFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the current configuration of the load balancing capability on your
     * EKS Auto Mode cluster. For example, if the capability is enabled or
     * disabled.</p>
     */
    inline const ElasticLoadBalancing& GetElasticLoadBalancing() const { return m_elasticLoadBalancing; }
    inline bool ElasticLoadBalancingHasBeenSet() const { return m_elasticLoadBalancingHasBeenSet; }
    template<typename ElasticLoadBalancingT = ElasticLoadBalancing>
    void SetElasticLoadBalancing(ElasticLoadBalancingT&& value) { m_elasticLoadBalancingHasBeenSet = true; m_elasticLoadBalancing = std::forward<ElasticLoadBalancingT>(value); }
    template<typename ElasticLoadBalancingT = ElasticLoadBalancing>
    KubernetesNetworkConfigResponse& WithElasticLoadBalancing(ElasticLoadBalancingT&& value) { SetElasticLoadBalancing(std::forward<ElasticLoadBalancingT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_serviceIpv4Cidr;
    bool m_serviceIpv4CidrHasBeenSet = false;

    Aws::String m_serviceIpv6Cidr;
    bool m_serviceIpv6CidrHasBeenSet = false;

    IpFamily m_ipFamily{IpFamily::NOT_SET};
    bool m_ipFamilyHasBeenSet = false;

    ElasticLoadBalancing m_elasticLoadBalancing;
    bool m_elasticLoadBalancingHasBeenSet = false;
  };

} // namespace Model
} // namespace EKS
} // namespace Aws
