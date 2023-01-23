/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/VpnEcmpSupportValue.h>
#include <aws/ec2/model/DnsSupportValue.h>
#include <aws/ec2/model/AutoAcceptSharedAttachmentsValue.h>
#include <aws/ec2/model/DefaultRouteTableAssociationValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DefaultRouteTablePropagationValue.h>
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
   * <p>The transit gateway options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayOptions">AWS
   * API Reference</a></p>
   */
  class ModifyTransitGatewayOptions
  {
  public:
    AWS_EC2_API ModifyTransitGatewayOptions();
    AWS_EC2_API ModifyTransitGatewayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyTransitGatewayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddTransitGatewayCidrBlocks() const{ return m_addTransitGatewayCidrBlocks; }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline bool AddTransitGatewayCidrBlocksHasBeenSet() const { return m_addTransitGatewayCidrBlocksHasBeenSet; }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline void SetAddTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks = value; }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline void SetAddTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks = std::move(value); }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline ModifyTransitGatewayOptions& WithAddTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { SetAddTransitGatewayCidrBlocks(value); return *this;}

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline ModifyTransitGatewayOptions& WithAddTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { SetAddTransitGatewayCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline ModifyTransitGatewayOptions& AddAddTransitGatewayCidrBlocks(const Aws::String& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks.push_back(value); return *this; }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline ModifyTransitGatewayOptions& AddAddTransitGatewayCidrBlocks(Aws::String&& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline ModifyTransitGatewayOptions& AddAddTransitGatewayCidrBlocks(const char* value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks.push_back(value); return *this; }


    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTransitGatewayCidrBlocks() const{ return m_removeTransitGatewayCidrBlocks; }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline bool RemoveTransitGatewayCidrBlocksHasBeenSet() const { return m_removeTransitGatewayCidrBlocksHasBeenSet; }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline void SetRemoveTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks = value; }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline void SetRemoveTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks = std::move(value); }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& WithRemoveTransitGatewayCidrBlocks(const Aws::Vector<Aws::String>& value) { SetRemoveTransitGatewayCidrBlocks(value); return *this;}

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& WithRemoveTransitGatewayCidrBlocks(Aws::Vector<Aws::String>&& value) { SetRemoveTransitGatewayCidrBlocks(std::move(value)); return *this;}

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& AddRemoveTransitGatewayCidrBlocks(const Aws::String& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks.push_back(value); return *this; }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& AddRemoveTransitGatewayCidrBlocks(Aws::String&& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks.push_back(std::move(value)); return *this; }

    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& AddRemoveTransitGatewayCidrBlocks(const char* value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks.push_back(value); return *this; }


    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline const VpnEcmpSupportValue& GetVpnEcmpSupport() const{ return m_vpnEcmpSupport; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline void SetVpnEcmpSupport(const VpnEcmpSupportValue& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue&& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = std::move(value); }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline ModifyTransitGatewayOptions& WithVpnEcmpSupport(const VpnEcmpSupportValue& value) { SetVpnEcmpSupport(value); return *this;}

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline ModifyTransitGatewayOptions& WithVpnEcmpSupport(VpnEcmpSupportValue&& value) { SetVpnEcmpSupport(std::move(value)); return *this;}


    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline const DnsSupportValue& GetDnsSupport() const{ return m_dnsSupport; }

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline void SetDnsSupport(const DnsSupportValue& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline void SetDnsSupport(DnsSupportValue&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::move(value); }

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline ModifyTransitGatewayOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline ModifyTransitGatewayOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline const AutoAcceptSharedAttachmentsValue& GetAutoAcceptSharedAttachments() const{ return m_autoAcceptSharedAttachments; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline void SetAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::move(value); }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline ModifyTransitGatewayOptions& WithAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { SetAutoAcceptSharedAttachments(value); return *this;}

    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline ModifyTransitGatewayOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { SetAutoAcceptSharedAttachments(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline const DefaultRouteTableAssociationValue& GetDefaultRouteTableAssociation() const{ return m_defaultRouteTableAssociation; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline void SetDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::move(value); }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline ModifyTransitGatewayOptions& WithDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { SetDefaultRouteTableAssociation(value); return *this;}

    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline ModifyTransitGatewayOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { SetDefaultRouteTableAssociation(std::move(value)); return *this;}


    /**
     * <p>The ID of the default association route table.</p>
     */
    inline const Aws::String& GetAssociationDefaultRouteTableId() const{ return m_associationDefaultRouteTableId; }

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline bool AssociationDefaultRouteTableIdHasBeenSet() const { return m_associationDefaultRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline void SetAssociationDefaultRouteTableId(const Aws::String& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = value; }

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline void SetAssociationDefaultRouteTableId(Aws::String&& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = std::move(value); }

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline void SetAssociationDefaultRouteTableId(const char* value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId.assign(value); }

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithAssociationDefaultRouteTableId(const Aws::String& value) { SetAssociationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithAssociationDefaultRouteTableId(Aws::String&& value) { SetAssociationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithAssociationDefaultRouteTableId(const char* value) { SetAssociationDefaultRouteTableId(value); return *this;}


    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline const DefaultRouteTablePropagationValue& GetDefaultRouteTablePropagation() const{ return m_defaultRouteTablePropagation; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline void SetDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::move(value); }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { SetDefaultRouteTablePropagation(value); return *this;}

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { SetDefaultRouteTablePropagation(std::move(value)); return *this;}


    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline const Aws::String& GetPropagationDefaultRouteTableId() const{ return m_propagationDefaultRouteTableId; }

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline bool PropagationDefaultRouteTableIdHasBeenSet() const { return m_propagationDefaultRouteTableIdHasBeenSet; }

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline void SetPropagationDefaultRouteTableId(const Aws::String& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = value; }

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline void SetPropagationDefaultRouteTableId(Aws::String&& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = std::move(value); }

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline void SetPropagationDefaultRouteTableId(const char* value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId.assign(value); }

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithPropagationDefaultRouteTableId(const Aws::String& value) { SetPropagationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithPropagationDefaultRouteTableId(Aws::String&& value) { SetPropagationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline ModifyTransitGatewayOptions& WithPropagationDefaultRouteTableId(const char* value) { SetPropagationDefaultRouteTableId(value); return *this;}


    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p> <p>The modify ASN operation is not allowed on a
     * transit gateway with active BGP sessions. You must first delete all transit
     * gateway attachments that have BGP configured prior to modifying the ASN on the
     * transit gateway.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p> <p>The modify ASN operation is not allowed on a
     * transit gateway with active BGP sessions. You must first delete all transit
     * gateway attachments that have BGP configured prior to modifying the ASN on the
     * transit gateway.</p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p> <p>The modify ASN operation is not allowed on a
     * transit gateway with active BGP sessions. You must first delete all transit
     * gateway attachments that have BGP configured prior to modifying the ASN on the
     * transit gateway.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p> <p>The modify ASN operation is not allowed on a
     * transit gateway with active BGP sessions. You must first delete all transit
     * gateway attachments that have BGP configured prior to modifying the ASN on the
     * transit gateway.</p>
     */
    inline ModifyTransitGatewayOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_addTransitGatewayCidrBlocks;
    bool m_addTransitGatewayCidrBlocksHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeTransitGatewayCidrBlocks;
    bool m_removeTransitGatewayCidrBlocksHasBeenSet = false;

    VpnEcmpSupportValue m_vpnEcmpSupport;
    bool m_vpnEcmpSupportHasBeenSet = false;

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet = false;

    AutoAcceptSharedAttachmentsValue m_autoAcceptSharedAttachments;
    bool m_autoAcceptSharedAttachmentsHasBeenSet = false;

    DefaultRouteTableAssociationValue m_defaultRouteTableAssociation;
    bool m_defaultRouteTableAssociationHasBeenSet = false;

    Aws::String m_associationDefaultRouteTableId;
    bool m_associationDefaultRouteTableIdHasBeenSet = false;

    DefaultRouteTablePropagationValue m_defaultRouteTablePropagation;
    bool m_defaultRouteTablePropagationHasBeenSet = false;

    Aws::String m_propagationDefaultRouteTableId;
    bool m_propagationDefaultRouteTableIdHasBeenSet = false;

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
