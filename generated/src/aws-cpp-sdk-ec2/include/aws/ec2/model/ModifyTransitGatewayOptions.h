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
#include <aws/ec2/model/SecurityGroupReferencingSupportValue.h>
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
    AWS_EC2_API ModifyTransitGatewayOptions() = default;
    AWS_EC2_API ModifyTransitGatewayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API ModifyTransitGatewayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Adds IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size /24
     * CIDR block or larger for IPv4, or a size /64 CIDR block or larger for IPv6.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAddTransitGatewayCidrBlocks() const { return m_addTransitGatewayCidrBlocks; }
    inline bool AddTransitGatewayCidrBlocksHasBeenSet() const { return m_addTransitGatewayCidrBlocksHasBeenSet; }
    template<typename AddTransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    void SetAddTransitGatewayCidrBlocks(AddTransitGatewayCidrBlocksT&& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks = std::forward<AddTransitGatewayCidrBlocksT>(value); }
    template<typename AddTransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    ModifyTransitGatewayOptions& WithAddTransitGatewayCidrBlocks(AddTransitGatewayCidrBlocksT&& value) { SetAddTransitGatewayCidrBlocks(std::forward<AddTransitGatewayCidrBlocksT>(value)); return *this;}
    template<typename AddTransitGatewayCidrBlocksT = Aws::String>
    ModifyTransitGatewayOptions& AddAddTransitGatewayCidrBlocks(AddTransitGatewayCidrBlocksT&& value) { m_addTransitGatewayCidrBlocksHasBeenSet = true; m_addTransitGatewayCidrBlocks.emplace_back(std::forward<AddTransitGatewayCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Removes CIDR blocks for the transit gateway.</p>
     */
    inline const Aws::Vector<Aws::String>& GetRemoveTransitGatewayCidrBlocks() const { return m_removeTransitGatewayCidrBlocks; }
    inline bool RemoveTransitGatewayCidrBlocksHasBeenSet() const { return m_removeTransitGatewayCidrBlocksHasBeenSet; }
    template<typename RemoveTransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    void SetRemoveTransitGatewayCidrBlocks(RemoveTransitGatewayCidrBlocksT&& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks = std::forward<RemoveTransitGatewayCidrBlocksT>(value); }
    template<typename RemoveTransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    ModifyTransitGatewayOptions& WithRemoveTransitGatewayCidrBlocks(RemoveTransitGatewayCidrBlocksT&& value) { SetRemoveTransitGatewayCidrBlocks(std::forward<RemoveTransitGatewayCidrBlocksT>(value)); return *this;}
    template<typename RemoveTransitGatewayCidrBlocksT = Aws::String>
    ModifyTransitGatewayOptions& AddRemoveTransitGatewayCidrBlocks(RemoveTransitGatewayCidrBlocksT&& value) { m_removeTransitGatewayCidrBlocksHasBeenSet = true; m_removeTransitGatewayCidrBlocks.emplace_back(std::forward<RemoveTransitGatewayCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline VpnEcmpSupportValue GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }
    inline ModifyTransitGatewayOptions& WithVpnEcmpSupport(VpnEcmpSupportValue value) { SetVpnEcmpSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline DnsSupportValue GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    inline void SetDnsSupport(DnsSupportValue value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }
    inline ModifyTransitGatewayOptions& WithDnsSupport(DnsSupportValue value) { SetDnsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables you to reference a security group across VPCs attached to a transit
     * gateway to simplify security group management. </p> <p>This option is disabled
     * by default.</p> <p>For more information about security group referencing, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#vpc-attachment-security">Security
     * group referencing</a> in the <i>Amazon Web Services Transit Gateways
     * Guide</i>.</p>
     */
    inline SecurityGroupReferencingSupportValue GetSecurityGroupReferencingSupport() const { return m_securityGroupReferencingSupport; }
    inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }
    inline void SetSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = value; }
    inline ModifyTransitGatewayOptions& WithSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { SetSecurityGroupReferencingSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable automatic acceptance of attachment requests.</p>
     */
    inline AutoAcceptSharedAttachmentsValue GetAutoAcceptSharedAttachments() const { return m_autoAcceptSharedAttachments; }
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }
    inline ModifyTransitGatewayOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { SetAutoAcceptSharedAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable automatic association with the default association route
     * table.</p>
     */
    inline DefaultRouteTableAssociationValue GetDefaultRouteTableAssociation() const { return m_defaultRouteTableAssociation; }
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }
    inline ModifyTransitGatewayOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { SetDefaultRouteTableAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the default association route table.</p>
     */
    inline const Aws::String& GetAssociationDefaultRouteTableId() const { return m_associationDefaultRouteTableId; }
    inline bool AssociationDefaultRouteTableIdHasBeenSet() const { return m_associationDefaultRouteTableIdHasBeenSet; }
    template<typename AssociationDefaultRouteTableIdT = Aws::String>
    void SetAssociationDefaultRouteTableId(AssociationDefaultRouteTableIdT&& value) { m_associationDefaultRouteTableIdHasBeenSet = true; m_associationDefaultRouteTableId = std::forward<AssociationDefaultRouteTableIdT>(value); }
    template<typename AssociationDefaultRouteTableIdT = Aws::String>
    ModifyTransitGatewayOptions& WithAssociationDefaultRouteTableId(AssociationDefaultRouteTableIdT&& value) { SetAssociationDefaultRouteTableId(std::forward<AssociationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table. Enabled by default. If
     * <code>defaultRouteTablePropagation</code> is set to <code>enable</code>, Amazon
     * Web Services Transit Gateway will create the default transit gateway route
     * table.</p>
     */
    inline DefaultRouteTablePropagationValue GetDefaultRouteTablePropagation() const { return m_defaultRouteTablePropagation; }
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }
    inline ModifyTransitGatewayOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { SetDefaultRouteTablePropagation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline const Aws::String& GetPropagationDefaultRouteTableId() const { return m_propagationDefaultRouteTableId; }
    inline bool PropagationDefaultRouteTableIdHasBeenSet() const { return m_propagationDefaultRouteTableIdHasBeenSet; }
    template<typename PropagationDefaultRouteTableIdT = Aws::String>
    void SetPropagationDefaultRouteTableId(PropagationDefaultRouteTableIdT&& value) { m_propagationDefaultRouteTableIdHasBeenSet = true; m_propagationDefaultRouteTableId = std::forward<PropagationDefaultRouteTableIdT>(value); }
    template<typename PropagationDefaultRouteTableIdT = Aws::String>
    ModifyTransitGatewayOptions& WithPropagationDefaultRouteTableId(PropagationDefaultRouteTableIdT&& value) { SetPropagationDefaultRouteTableId(std::forward<PropagationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p> <p>The modify ASN operation is not allowed on a
     * transit gateway if it has the following attachments:</p> <ul> <li> <p>Dynamic
     * VPN</p> </li> <li> <p>Static VPN</p> </li> <li> <p>Direct Connect Gateway</p>
     * </li> <li> <p>Connect</p> </li> </ul> <p>You must first delete all transit
     * gateway attachments configured prior to modifying the ASN on the transit
     * gateway.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline ModifyTransitGatewayOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_addTransitGatewayCidrBlocks;
    bool m_addTransitGatewayCidrBlocksHasBeenSet = false;

    Aws::Vector<Aws::String> m_removeTransitGatewayCidrBlocks;
    bool m_removeTransitGatewayCidrBlocksHasBeenSet = false;

    VpnEcmpSupportValue m_vpnEcmpSupport{VpnEcmpSupportValue::NOT_SET};
    bool m_vpnEcmpSupportHasBeenSet = false;

    DnsSupportValue m_dnsSupport{DnsSupportValue::NOT_SET};
    bool m_dnsSupportHasBeenSet = false;

    SecurityGroupReferencingSupportValue m_securityGroupReferencingSupport{SecurityGroupReferencingSupportValue::NOT_SET};
    bool m_securityGroupReferencingSupportHasBeenSet = false;

    AutoAcceptSharedAttachmentsValue m_autoAcceptSharedAttachments{AutoAcceptSharedAttachmentsValue::NOT_SET};
    bool m_autoAcceptSharedAttachmentsHasBeenSet = false;

    DefaultRouteTableAssociationValue m_defaultRouteTableAssociation{DefaultRouteTableAssociationValue::NOT_SET};
    bool m_defaultRouteTableAssociationHasBeenSet = false;

    Aws::String m_associationDefaultRouteTableId;
    bool m_associationDefaultRouteTableIdHasBeenSet = false;

    DefaultRouteTablePropagationValue m_defaultRouteTablePropagation{DefaultRouteTablePropagationValue::NOT_SET};
    bool m_defaultRouteTablePropagationHasBeenSet = false;

    Aws::String m_propagationDefaultRouteTableId;
    bool m_propagationDefaultRouteTableIdHasBeenSet = false;

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
