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
   * <p>Describes the deregistered transit gateway multicast group
   * members.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDeregisteredGroupMembers">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastDeregisteredGroupMembers
  {
  public:
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupMembers();
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupMembers(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupMembers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithTransitGatewayMulticastDomainId(const Aws::String& value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithTransitGatewayMulticastDomainId(Aws::String&& value) { SetTransitGatewayMulticastDomainId(std::move(value)); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithTransitGatewayMulticastDomainId(const char* value) { SetTransitGatewayMulticastDomainId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface IDs of the deregistered members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeregisteredNetworkInterfaceIds() const{ return m_deregisteredNetworkInterfaceIds; }
    inline bool DeregisteredNetworkInterfaceIdsHasBeenSet() const { return m_deregisteredNetworkInterfaceIdsHasBeenSet; }
    inline void SetDeregisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds = value; }
    inline void SetDeregisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds = std::move(value); }
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithDeregisteredNetworkInterfaceIds(const Aws::Vector<Aws::String>& value) { SetDeregisteredNetworkInterfaceIds(value); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithDeregisteredNetworkInterfaceIds(Aws::Vector<Aws::String>&& value) { SetDeregisteredNetworkInterfaceIds(std::move(value)); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& AddDeregisteredNetworkInterfaceIds(const Aws::String& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(value); return *this; }
    inline TransitGatewayMulticastDeregisteredGroupMembers& AddDeregisteredNetworkInterfaceIds(Aws::String&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(std::move(value)); return *this; }
    inline TransitGatewayMulticastDeregisteredGroupMembers& AddDeregisteredNetworkInterfaceIds(const char* value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.push_back(value); return *this; }
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
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithGroupIpAddress(const Aws::String& value) { SetGroupIpAddress(value); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithGroupIpAddress(Aws::String&& value) { SetGroupIpAddress(std::move(value)); return *this;}
    inline TransitGatewayMulticastDeregisteredGroupMembers& WithGroupIpAddress(const char* value) { SetGroupIpAddress(value); return *this;}
    ///@}
  private:

    Aws::String m_transitGatewayMulticastDomainId;
    bool m_transitGatewayMulticastDomainIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_deregisteredNetworkInterfaceIds;
    bool m_deregisteredNetworkInterfaceIdsHasBeenSet = false;

    Aws::String m_groupIpAddress;
    bool m_groupIpAddressHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
