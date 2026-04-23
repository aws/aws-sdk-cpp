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
  class AWS_ELASTICLOADBALANCINGV2_API AvailabilityZone
  {
  public:
    AvailabilityZone();
    AvailabilityZone(const Aws::Utils::Xml::XmlNode& xmlNode);
    AvailabilityZone& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
     * <p>The ID of the subnet.</p>
     */
    inline const Aws::String& GetSubnetId() const{ return m_subnetId; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline bool SubnetIdHasBeenSet() const { return m_subnetIdHasBeenSet; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const Aws::String& value) { m_subnetIdHasBeenSet = true; m_subnetId = value; }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(Aws::String&& value) { m_subnetIdHasBeenSet = true; m_subnetId = std::move(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline void SetSubnetId(const char* value) { m_subnetIdHasBeenSet = true; m_subnetId.assign(value); }

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AvailabilityZone& WithSubnetId(const Aws::String& value) { SetSubnetId(value); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AvailabilityZone& WithSubnetId(Aws::String&& value) { SetSubnetId(std::move(value)); return *this;}

    /**
     * <p>The ID of the subnet.</p>
     */
    inline AvailabilityZone& WithSubnetId(const char* value) { SetSubnetId(value); return *this;}


    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline const Aws::Vector<LoadBalancerAddress>& GetLoadBalancerAddresses() const{ return m_loadBalancerAddresses; }

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline bool LoadBalancerAddressesHasBeenSet() const { return m_loadBalancerAddressesHasBeenSet; }

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline void SetLoadBalancerAddresses(const Aws::Vector<LoadBalancerAddress>& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses = value; }

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline void SetLoadBalancerAddresses(Aws::Vector<LoadBalancerAddress>&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses = std::move(value); }

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline AvailabilityZone& WithLoadBalancerAddresses(const Aws::Vector<LoadBalancerAddress>& value) { SetLoadBalancerAddresses(value); return *this;}

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline AvailabilityZone& WithLoadBalancerAddresses(Aws::Vector<LoadBalancerAddress>&& value) { SetLoadBalancerAddresses(std::move(value)); return *this;}

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline AvailabilityZone& AddLoadBalancerAddresses(const LoadBalancerAddress& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses.push_back(value); return *this; }

    /**
     * <p>[Network Load Balancers] The static IP address.</p>
     */
    inline AvailabilityZone& AddLoadBalancerAddresses(LoadBalancerAddress&& value) { m_loadBalancerAddressesHasBeenSet = true; m_loadBalancerAddresses.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_zoneName;
    bool m_zoneNameHasBeenSet;

    Aws::String m_subnetId;
    bool m_subnetIdHasBeenSet;

    Aws::Vector<LoadBalancerAddress> m_loadBalancerAddresses;
    bool m_loadBalancerAddressesHasBeenSet;
  };

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
