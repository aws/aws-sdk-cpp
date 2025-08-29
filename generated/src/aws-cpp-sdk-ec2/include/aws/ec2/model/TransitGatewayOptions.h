/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/AutoAcceptSharedAttachmentsValue.h>
#include <aws/ec2/model/DefaultRouteTableAssociationValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/DefaultRouteTablePropagationValue.h>
#include <aws/ec2/model/VpnEcmpSupportValue.h>
#include <aws/ec2/model/DnsSupportValue.h>
#include <aws/ec2/model/SecurityGroupReferencingSupportValue.h>
#include <aws/ec2/model/MulticastSupportValue.h>
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
   * <p>Describes the options for a transit gateway.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayOptions">AWS
   * API Reference</a></p>
   */
  class TransitGatewayOptions
  {
  public:
    AWS_EC2_API TransitGatewayOptions() = default;
    AWS_EC2_API TransitGatewayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline TransitGatewayOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The transit gateway CIDR blocks.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayCidrBlocks() const { return m_transitGatewayCidrBlocks; }
    inline bool TransitGatewayCidrBlocksHasBeenSet() const { return m_transitGatewayCidrBlocksHasBeenSet; }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    void SetTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks = std::forward<TransitGatewayCidrBlocksT>(value); }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    TransitGatewayOptions& WithTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { SetTransitGatewayCidrBlocks(std::forward<TransitGatewayCidrBlocksT>(value)); return *this;}
    template<typename TransitGatewayCidrBlocksT = Aws::String>
    TransitGatewayOptions& AddTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.emplace_back(std::forward<TransitGatewayCidrBlocksT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline AutoAcceptSharedAttachmentsValue GetAutoAcceptSharedAttachments() const { return m_autoAcceptSharedAttachments; }
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }
    inline TransitGatewayOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { SetAutoAcceptSharedAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table. Enabled by default. Either
     * <code>defaultRouteTableAssociation</code> or
     * <code>defaultRouteTablePropagation</code> must be set to <code>enable</code> for
     * Amazon Web Services Transit Gateway to create the default transit gateway route
     * table.</p>
     */
    inline DefaultRouteTableAssociationValue GetDefaultRouteTableAssociation() const { return m_defaultRouteTableAssociation; }
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }
    inline TransitGatewayOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { SetDefaultRouteTableAssociation(value); return *this;}
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
    TransitGatewayOptions& WithAssociationDefaultRouteTableId(AssociationDefaultRouteTableIdT&& value) { SetAssociationDefaultRouteTableId(std::forward<AssociationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table. Enabled by default. If
     * <code>defaultRouteTablePropagation</code> is set to <code>enable</code>, Amazon
     * Web Services Transit Gateway creates the default transit gateway route
     * table.</p>
     */
    inline DefaultRouteTablePropagationValue GetDefaultRouteTablePropagation() const { return m_defaultRouteTablePropagation; }
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }
    inline TransitGatewayOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { SetDefaultRouteTablePropagation(value); return *this;}
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
    TransitGatewayOptions& WithPropagationDefaultRouteTableId(PropagationDefaultRouteTableIdT&& value) { SetPropagationDefaultRouteTableId(std::forward<PropagationDefaultRouteTableIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline VpnEcmpSupportValue GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }
    inline TransitGatewayOptions& WithVpnEcmpSupport(VpnEcmpSupportValue value) { SetVpnEcmpSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline DnsSupportValue GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    inline void SetDnsSupport(DnsSupportValue value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }
    inline TransitGatewayOptions& WithDnsSupport(DnsSupportValue value) { SetDnsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables you to reference a security group across VPCs attached to a transit
     * gateway to simplify security group management. </p> <p>This option is disabled
     * by default.</p>
     */
    inline SecurityGroupReferencingSupportValue GetSecurityGroupReferencingSupport() const { return m_securityGroupReferencingSupport; }
    inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }
    inline void SetSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = value; }
    inline TransitGatewayOptions& WithSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { SetSecurityGroupReferencingSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline MulticastSupportValue GetMulticastSupport() const { return m_multicastSupport; }
    inline bool MulticastSupportHasBeenSet() const { return m_multicastSupportHasBeenSet; }
    inline void SetMulticastSupport(MulticastSupportValue value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = value; }
    inline TransitGatewayOptions& WithMulticastSupport(MulticastSupportValue value) { SetMulticastSupport(value); return *this;}
    ///@}
  private:

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitGatewayCidrBlocks;
    bool m_transitGatewayCidrBlocksHasBeenSet = false;

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

    VpnEcmpSupportValue m_vpnEcmpSupport{VpnEcmpSupportValue::NOT_SET};
    bool m_vpnEcmpSupportHasBeenSet = false;

    DnsSupportValue m_dnsSupport{DnsSupportValue::NOT_SET};
    bool m_dnsSupportHasBeenSet = false;

    SecurityGroupReferencingSupportValue m_securityGroupReferencingSupport{SecurityGroupReferencingSupportValue::NOT_SET};
    bool m_securityGroupReferencingSupportHasBeenSet = false;

    MulticastSupportValue m_multicastSupport{MulticastSupportValue::NOT_SET};
    bool m_multicastSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
