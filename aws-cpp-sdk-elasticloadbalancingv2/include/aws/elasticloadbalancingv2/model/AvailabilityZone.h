/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/elasticloadbalancingv2/ElasticLoadBalancingv2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/elasticloadbalancingv2/model/LoadBalancerAddress.h>
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
   * <p>Information about an Availability Zone.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/elasticloadbalancingv2-2015-12-01/AvailabilityZone">AWS
   * API Reference</a></p>
   */
  class AvailabilityZone
  {
  public:
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone();
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_ELASTICLOADBALANCINGV2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline const Aws::String& GetZoneName() const{ return m_zoneName; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline bool ZoneNameHasBeenSet() const { return m_zoneNameHasBeenSet; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(const Aws::String& value) { m_zoneNameHasBeenSet = true; m_zoneName = value; }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(Aws::String&& value) { m_zoneNameHasBeenSet = true; m_zoneName = std::move(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline void SetZoneName(const char* value) { m_zoneNameHasBeenSet = true; m_zoneName.assign(value); }

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const Aws::String& value) { SetZoneName(value); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(Aws::String&& value) { SetZoneName(std::move(value)); return *this;}

    /**
     * <p>The name of the Availability Zone.</p>
     */
    inline AvailabilityZone& WithZoneName(const char* value) { SetZoneName(value); return *this;}


    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline AvailabilityZone& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline AvailabilityZone& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet. You can specify one subnet per Availability Zone.</p>
     */
    inline AvailabilityZone& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline const Aws::String& GetOutpostId() const{ return m_outpostId; }

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline bool OutpostIdHasBeenSet() const { return m_outpostIdHasBeenSet; }

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline void SetOutpostId(const Aws::String& value) { m_outpostIdHasBeenSet = true; m_outpostId = value; }

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline void SetOutpostId(Aws::String&& value) { m_outpostIdHasBeenSet = true; m_outpostId = std::move(value); }

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline void SetOutpostId(const char* value) { m_outpostIdHasBeenSet = true; m_outpostId.assign(value); }

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline AvailabilityZone& WithOutpostId(const Aws::String& value) { SetOutpostId(value); return *this;}

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline AvailabilityZone& WithOutpostId(Aws::String&& value) { SetOutpostId(std::move(value)); return *this;}

    /**
     * <p>[Application Load Balancers on Outposts] The ID of the Outpost.</p>
     */
    inline AvailabilityZone& WithOutpostId(const char* value) { SetOutpostId(value); return *this;}


    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline const Aws::Vector<LoadBalancerAddress>& GetLoadBalancerAddresses() const{ return m_loadBalancerAddresses; }

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline bool LoadBalancerAddressesHasBeenSet() const { return m_loadBalancerAddressesHasBeenSet; }

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline void SetLoadBalancerAddresses(const Aws::Vector<LoadBalancerAddress>& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses = value; }

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline void SetLoadBalancerAddresses(Aws::Vector<LoadBalancerAddress>&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses = std::move(value); }

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline AvailabilityZone& WithLoadBalancerAddresses(const Aws::Vector<LoadBalancerAddress>& value) { SetLoadBalancerAddresses(value); return *this;}

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline AvailabilityZone& WithLoadBalancerAddresses(Aws::Vector<LoadBalancerAddress>&& value) { SetLoadBalancerAddresses(std::move(value)); return *this;}

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline AvailabilityZone& AddLoadBalancerAddresses(const LoadBalancerAddress& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses.push_back(value); return *this; }

    /**
     * <p>[Network Load Balancers] If you need static IP addresses for your load
     * balancer, you can specify one Elastic IP address per Availability Zone when you
     * create an internal-facing load balancer. For internal load balancers, you can
     * specify a private IP address from the IPv4 range of the subnet.</p>
     */
    inline AvailabilityZone& AddLoadBalancerAddresses(LoadBalancerAddress&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet = false;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet = false;

    Aws::String m_outpostId;
    bool m_outpostIdHasBeenSet = false;

    Aws::Vector<LoadBalancerAddress> m_loadBalancerAddresses;
    bool m_loadBalancerAddressesHasBeenSet = false;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
