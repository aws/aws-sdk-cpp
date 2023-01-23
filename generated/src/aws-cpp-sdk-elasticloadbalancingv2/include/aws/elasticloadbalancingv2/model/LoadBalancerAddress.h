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
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress();
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API LoadBalancerAddress& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The static IP address.</p>
     */
    inline const Aws::String& GetIpAddress() const{ return m_ipAddress; }

    /**
     * <p>The static IP address.</p>
     */
    inline bool IpAddressHasBeenSet() const { return m_ipAddressHasBeenSet; }

    /**
     * <p>The static IP address.</p>
     */
    inline void SetIpAddress(const Aws::String& value) { m_ipAddressHasBeenSet = true; m_ipAddress = value; }

    /**
     * <p>The static IP address.</p>
     */
    inline void SetIpAddress(Aws::String&& value) { m_ipAddressHasBeenSet = true; m_ipAddress = std::move(value); }

    /**
     * <p>The static IP address.</p>
     */
    inline void SetIpAddress(const char* value) { m_ipAddressHasBeenSet = true; m_ipAddress.assign(value); }

    /**
     * <p>The static IP address.</p>
     */
    inline LoadBalancerAddress& WithIpAddress(const Aws::String& value) { SetIpAddress(value); return *this;}

    /**
     * <p>The static IP address.</p>
     */
    inline LoadBalancerAddress& WithIpAddress(Aws::String&& value) { SetIpAddress(std::move(value)); return *this;}

    /**
     * <p>The static IP address.</p>
     */
    inline LoadBalancerAddress& WithIpAddress(const char* value) { SetIpAddress(value); return *this;}


    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline const Aws::String& GetAllocationId() const{ return m_allocationId; }

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline bool AllocationIdHasBeenSet() const { return m_allocationIdHasBeenSet; }

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline void SetAllocationId(const Aws::String& value) { m_allocationIdHasBeenSet = true; m_allocationId = value; }

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline void SetAllocationId(Aws::String&& value) { m_allocationIdHasBeenSet = true; m_allocationId = std::move(value); }

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline void SetAllocationId(const char* value) { m_allocationIdHasBeenSet = true; m_allocationId.assign(value); }

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline LoadBalancerAddress& WithAllocationId(const Aws::String& value) { SetAllocationId(value); return *this;}

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline LoadBalancerAddress& WithAllocationId(Aws::String&& value) { SetAllocationId(std::move(value)); return *this;}

    /**
     * <p>[Network Load Balancers] The allocation ID of the Elastic IP address for an
     * internal-facing load balancer.</p>
     */
    inline LoadBalancerAddress& WithAllocationId(const char* value) { SetAllocationId(value); return *this;}


    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline const Aws::String& GetPrivateIPv4Address() const{ return m_privateIPv4Address; }

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline bool PrivateIPv4AddressHasBeenSet() const { return m_privateIPv4AddressHasBeenSet; }

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline void SetPrivateIPv4Address(const Aws::String& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = value; }

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline void SetPrivateIPv4Address(Aws::String&& value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address = std::move(value); }

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline void SetPrivateIPv4Address(const char* value) { m_privateIPv4AddressHasBeenSet = true; m_privateIPv4Address.assign(value); }

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline LoadBalancerAddress& WithPrivateIPv4Address(const Aws::String& value) { SetPrivateIPv4Address(value); return *this;}

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline LoadBalancerAddress& WithPrivateIPv4Address(Aws::String&& value) { SetPrivateIPv4Address(std::move(value)); return *this;}

    /**
     * <p>[Network Load Balancers] The private IPv4 address for an internal load
     * balancer.</p>
     */
    inline LoadBalancerAddress& WithPrivateIPv4Address(const char* value) { SetPrivateIPv4Address(value); return *this;}


    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline const Aws::String& GetIPv6Address() const{ return m_iPv6Address; }

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline bool IPv6AddressHasBeenSet() const { return m_iPv6AddressHasBeenSet; }

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline void SetIPv6Address(const Aws::String& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = value; }

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline void SetIPv6Address(Aws::String&& value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address = std::move(value); }

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline void SetIPv6Address(const char* value) { m_iPv6AddressHasBeenSet = true; m_iPv6Address.assign(value); }

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline LoadBalancerAddress& WithIPv6Address(const Aws::String& value) { SetIPv6Address(value); return *this;}

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline LoadBalancerAddress& WithIPv6Address(Aws::String&& value) { SetIPv6Address(std::move(value)); return *this;}

    /**
     * <p>[Network Load Balancers] The IPv6 address.</p>
     */
    inline LoadBalancerAddress& WithIPv6Address(const char* value) { SetIPv6Address(value); return *this;}

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
