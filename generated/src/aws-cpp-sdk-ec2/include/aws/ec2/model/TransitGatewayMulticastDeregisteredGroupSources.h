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
   * sources.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayMulticastDeregisteredGroupSources">AWS
   * API Reference</a></p>
   */
  class TransitGatewayMulticastDeregisteredGroupSources
  {
  public:
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupSources() = default;
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupSources(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayMulticastDeregisteredGroupSources& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    TransitGatewayMulticastDeregisteredGroupSources& WithTransitGatewayMulticastDomainId(TransitGatewayMulticastDomainIdT&& value) { SetTransitGatewayMulticastDomainId(std::forward<TransitGatewayMulticastDomainIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network interface IDs of the non-registered members.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDeregisteredNetworkInterfaceIds() const { return m_deregisteredNetworkInterfaceIds; }
    inline bool DeregisteredNetworkInterfaceIdsHasBeenSet() const { return m_deregisteredNetworkInterfaceIdsHasBeenSet; }
    template<typename DeregisteredNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    void SetDeregisteredNetworkInterfaceIds(DeregisteredNetworkInterfaceIdsT&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds = std::forward<DeregisteredNetworkInterfaceIdsT>(value); }
    template<typename DeregisteredNetworkInterfaceIdsT = Aws::Vector<Aws::String>>
    TransitGatewayMulticastDeregisteredGroupSources& WithDeregisteredNetworkInterfaceIds(DeregisteredNetworkInterfaceIdsT&& value) { SetDeregisteredNetworkInterfaceIds(std::forward<DeregisteredNetworkInterfaceIdsT>(value)); return *this;}
    template<typename DeregisteredNetworkInterfaceIdsT = Aws::String>
    TransitGatewayMulticastDeregisteredGroupSources& AddDeregisteredNetworkInterfaceIds(DeregisteredNetworkInterfaceIdsT&& value) { m_deregisteredNetworkInterfaceIdsHasBeenSet = true; m_deregisteredNetworkInterfaceIds.emplace_back(std::forward<DeregisteredNetworkInterfaceIdsT>(value)); return *this; }
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
    TransitGatewayMulticastDeregisteredGroupSources& WithGroupIpAddress(GroupIpAddressT&& value) { SetGroupIpAddress(std::forward<GroupIpAddressT>(value)); return *this;}
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
