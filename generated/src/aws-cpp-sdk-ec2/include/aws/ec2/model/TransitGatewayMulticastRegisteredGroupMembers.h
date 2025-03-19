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
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers() = default;
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastRegisteredGroupMembers& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The ID of the transit gateway multicast domain.</p>
     */
    inline const Aws::String& GetTransitGatewayMulticastDomainId() const { return m_transitGatewayMulticastDomainId; }
    inline bool TransitGatewayMulticastDomainIdHasBeenSet() const { return m_transitGatewayMulticastDomainIdHasBeenSet; }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    void SetTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { m_transitGatewayMulticastDomainIdHasBeenSet = true; m_transitGatewayMulticastDomainId = std::forward<TransitGatewayMulticastDomainIdT>(value); }
    template<typename TransitGatewayMulticastDomainIdT = Aws::String>
    TransitGatewayMulticastRegisteredGroupMembers& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the registered network interfaces.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRegisteredNetworkInterfaceIds() const { return m_registeredNetworkInterfaceIds; }
    inline bool RegisteredNetworkInterfaceIdsHasBeenSet() const { return m_registeredNetworkInterfaceIdsHasBeenSet; }
    template<typename RegisteredNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetRegisteredNetworkInterfaceIds(RegisteredNetworkInterfaceIdsT&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds = std::forward<RegisteredNetworkInterfaceIdsT>(value); }
    template<typename RegisteredNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    TransitGatewayMulticastRegisteredGroupMembers& WithRegisteredNetworkInterfaceIds(RegisteredNetworkInterfaceIdsT&& value) { SetRegisteredNetworkInterfaceIds(std::forward<RegisteredNetworkInterfaceIdsT>(value)); return *this;}
    template<typename RegisteredNetworkInterfaceIdsT = Aws::String>
    TransitGatewayMulticastRegisteredGroupMembers& AddRegisteredNetworkInterfaceIds(RegisteredNetworkInterfaceIdsT&& value) { m_registeredNetworkInterfaceIdsHasBeenSet = true; m_registeredNetworkInterfaceIds.emplace_back(std::forward<RegisteredNetworkInterfaceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The IP address assigned to the transit gateway multicast group.</p>
     */
    inline const Aws::String& GetGroupIpAddress() const { return m_groupIpAddress; }
    inline bool GroupIpAddressHasBeenSet() const { return m_groupIpAddressHasBeenSet; }
    template<typename GroupIpAddressT = Aws::String>
    void SetGroupIpAddress(GroupIpAddressT&& value) { m_groupIpAddressHasBeenSet = true; m_groupIpAddress = std::forward<GroupIpAddressT>(value); }
    template<typename GroupIpAddressT = Aws::String>
    TransitGatewayMulticastRegisteredGroupMembers& WithGroupIpAddress(GroupIpAddressT&& value) { SetGroupIpAddress(std::forward<GroupIpAddressT>(value)); return *this;}
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
