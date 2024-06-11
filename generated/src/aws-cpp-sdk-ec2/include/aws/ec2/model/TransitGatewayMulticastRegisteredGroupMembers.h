/**
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
   * <p>Describes the registered transit gateway multicast group
   * members.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastRegisteredGroupMembers">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastRegisteredGroupMembers
  {
  public:
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers();
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const{ return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    inline void SetTransitGatewayMulticastDomainId(const Aws::String& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = value; }
    inline void SetTransitGatewayMulticastDomainId(Aws::String&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::move(value); }
    inline void SetTransitGatewayMulticastDomainId(const char* value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId.assign(value); }
    inline TransitGatewayMulticastRegisteredGroupMembers& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegisteredNetworkInterfaceIds() const{ return m_registeredNetworkInterfaceIds; }
    inline bool RegisteredNetworkInterfaceIdsHasBeenSet() const { return m_registeredNetworkInterfaceIdsHasBeenSet; }
    inline void SetRegisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds = value; }
    inline void SetRegisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds = std::move(value); }
    inline TransitGatewayMulticastRegisteredGroupMembers& WithRegisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetRegisteredNetworkInterfaceIds(value); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& WithRegisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetRegisteredNetworkInterfaceIds(std::move(value)); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& AddRegisteredNetworkInterfaceIds(const Aws::String& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(value); return *this; }
    inline TransitGatewayMulticastRegisteredGroupMembers& AddRegisteredNetworkInterfaceIds(Aws::String&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(std::move(value)); return *this; }
    inline TransitGatewayMulticastRegisteredGroupMembers& AddRegisteredNetworkInterfaceIds(const char* value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const{ return m_groupIpAddress; }
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }
    inline void SetGroupIpAddress(const Aws::String& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = value; }
    inline void SetGroupIpAddress(Aws::String&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::move(value); }
    inline void SetGroupIpAddress(const char* value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress.assign(value); }
    inline TransitGatewayMulticastRegisteredGroupMembers& WithGroupIpAddress(const Aws::String& value) { SetGroupIpAddress(value); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& WithGroupIpAddress(Aws::String&& value) { SetGroupIpAddress(std::move(value)); return *this;}
    inline TransitGatewayMulticastRegisteredGroupMembers& WithGroupIpAddress(const char* value) { SetGroupIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_registeredNetworkInterfaceIds;
    bool m_registeredNetworkInterfaceIdsHasBeenSet = false;

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
