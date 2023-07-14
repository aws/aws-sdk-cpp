﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace EC2
{
namespace Model
{

  /**
   * <p>Describes the members registered with the transit gateway multicast
   * group.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastRegisteredGroupSources">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayMulticastRegisteredGroupSources
  {
  public:
    TransitGatewayMulticastRegisteredGroupSources();
    TransitGatewayMulticastRegisteredGroupSources(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayMulticastRegisteredGroupSources& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}

    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}


    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegisteredNetworkInterfaceIds() const{ return m_registeredNetworkInterfaceIds; }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline bool RegisteredNetworkInterfaceIdsHasBeenSet() const { return m_registeredNetworkInterfaceIdsHasBeenSet; }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline void SetRegisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds = value; }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline void SetRegisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds = std::move(value); }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithRegisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetRegisteredNetworkInterfaceIds(value); return *this;}

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithRegisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetRegisteredNetworkInterfaceIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& AddRegisteredNetworkInterfaceIds(const Aws::String& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& AddRegisteredNetworkInterfaceIds(Aws::String&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the network interfaces members registered with the transit gateway
     * multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& AddRegisteredNetworkInterfaceIds(const char* value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(value); return *this; }


    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const{ return m_groupIpAddress; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const Aws::String& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = value; }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(Aws::String&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::move(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline void SetGroupIpAddress(const char* value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress.assign(value); }

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithGroupIpAddress(const Aws::String& value) { SetGroupIpAddress(value); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithGroupIpAddress(Aws::String&& value) { SetGroupIpAddress(std::move(value)); return *this;}

    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline TransitGatewayMulticastRegisteredGroupSources& WithGroupIpAddress(const char* value) { SetGroupIpAddress(value); return *this;}

  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet;

    Aws::Vector<Aws::String> m_registeredNetworkInterfaceIds;
    bool m_registeredNetworkInterfaceIdsHasBeenSet;

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
