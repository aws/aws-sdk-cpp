/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace ElasticLoadBalancingv2
{
namespace Model
{

  /**
   * <p>Information about a static IP address for a load balancer.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/LoadBalancerAddress">AWS
   * API Reference</a></p>
   */
  class LoadBalancerAddress
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress() = default;
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The static IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const { return m_ipAddress; }
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }
    template<typename IpAddressT = Aws::String>
    void SetIpAddress(IpAddressT&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::forward<IpAddressT>(value); }
    template<typename IpAddressT = Aws::String>
    LoadBalancerAddress& WithIpAddress(IpAddressT&& value) { SetIpAddress(std::forward<IpAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline const Aws::String& GetAllocationId() const { return m_allocationId; }
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }
    template<typename AllocationIdT = Aws::String>
    void SetAllocationId(AllocationIdT&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::forward<AllocationIdT>(value); }
    template<typename AllocationIdT = Aws::String>
    LoadBalancerAddress& WithAllocationId(AllocationIdT&& value) { SetAllocationId(std::forward<AllocationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline const Aws::String& GetPrivateIPv4Address() const { return m_privateIPv4Address; }
    inline bool PrivateIPv4AddressHasBeenSet() const { return m_privateIPv4AddressHasBeenSet; }
    template<typename PrivateIPv4AddressT = Aws::String>
    void SetPrivateIPv4Address(PrivateIPv4AddressT&& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = std::forward<PrivateIPv4AddressT>(value); }
    template<typename PrivateIPv4AddressT = Aws::String>
    LoadBalancerAddress& WithPrivateIPv4Address(PrivateIPv4AddressT&& value) { SetPrivateIPv4Address(std::forward<PrivateIPv4AddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline const Aws::String& GetIPv6Address() const { return m_iPv6Address; }
    inline bool IPv6AddressHasBeenSet() const { return m_iPv6AddressHasBeenSet; }
    template<typename IPv6AddressT = Aws::String>
    void SetIPv6Address(IPv6AddressT&& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = std::forward<IPv6AddressT>(value); }
    template<typename IPv6AddressT = Aws::String>
    LoadBalancerAddress& WithIPv6Address(IPv6AddressT&& value) { SetIPv6Address(std::forward<IPv6AddressT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_ipAddress;
    bool m_ipAddressHasBeenSet = false;

    Aws::String m_allocationId;
    bool m_allocationIdHasBeenSet = false;

    Aws::String m_privateIPv4Address;
    bool m_privateIPv4AddressHasBeenSet = false;

    Aws::String m_iPv6Address;
    bool m_iPv6AddressHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
