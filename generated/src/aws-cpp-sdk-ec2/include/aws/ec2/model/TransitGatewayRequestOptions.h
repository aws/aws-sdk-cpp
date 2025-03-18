/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AutoAcceptSharedAttachmentsValue.h>
#include <aws/ec2/model/DefaultRouteTableAssociationValue.h>
#include <aws/ec2/model/DefaultRouteTablePropagationValue.h>
#include <aws/ec2/model/VpnEcmpSupportValue.h>
#include <aws/ec2/model/DnsSupportValue.h>
#include <aws/ec2/model/SecurityGroupReferencingSupportValue.h>
#include <aws/ec2/model/MulticastSupportValue.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRequestOptions">AWS
   * API Reference</a></p>
   */
  class TransitGatewayRequestOptions
  {
  public:
    AWS_EC2_API TransitGatewayRequestOptions() = default;
    AWS_EC2_API TransitGatewayRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs. The default is <code>64512</code>.</p>
     */
    inline long long GetAmazonSideAsn() const { return m_amazonSideAsn; }
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }
    inline TransitGatewayRequestOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline AutoAcceptSharedAttachmentsValue GetAutoAcceptSharedAttachments() const { return m_autoAcceptSharedAttachments; }
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }
    inline TransitGatewayRequestOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue value) { SetAutoAcceptSharedAttachments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline DefaultRouteTableAssociationValue GetDefaultRouteTableAssociation() const { return m_defaultRouteTableAssociation; }
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }
    inline TransitGatewayRequestOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue value) { SetDefaultRouteTableAssociation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline DefaultRouteTablePropagationValue GetDefaultRouteTablePropagation() const { return m_defaultRouteTablePropagation; }
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }
    inline TransitGatewayRequestOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue value) { SetDefaultRouteTablePropagation(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline VpnEcmpSupportValue GetVpnEcmpSupport() const { return m_vpnEcmpSupport; }
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }
    inline TransitGatewayRequestOptions& WithVpnEcmpSupport(VpnEcmpSupportValue value) { SetVpnEcmpSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline DnsSupportValue GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    inline void SetDnsSupport(DnsSupportValue value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }
    inline TransitGatewayRequestOptions& WithDnsSupport(DnsSupportValue value) { SetDnsSupport(value); return *this;}
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
    inline TransitGatewayRequestOptions& WithSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { SetSecurityGroupReferencingSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline MulticastSupportValue GetMulticastSupport() const { return m_multicastSupport; }
    inline bool MulticastSupportHasBeenSet() const { return m_multicastSupportHasBeenSet; }
    inline void SetMulticastSupport(MulticastSupportValue value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = value; }
    inline TransitGatewayRequestOptions& WithMulticastSupport(MulticastSupportValue value) { SetMulticastSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more IPv4 or IPv6 CIDR blocks for the transit gateway. Must be a size
     * /24 CIDR block or larger for IPv4, or a size /64 CIDR block or larger for
     * IPv6.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTransitGatewayCidrBlocks() const { return m_transitGatewayCidrBlocks; }
    inline bool TransitGatewayCidrBlocksHasBeenSet() const { return m_transitGatewayCidrBlocksHasBeenSet; }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    void SetTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks = std::forward<TransitGatewayCidrBlocksT>(value); }
    template<typename TransitGatewayCidrBlocksT = Aws::Vector<Aws::String>>
    TransitGatewayRequestOptions& WithTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { SetTransitGatewayCidrBlocks(std::forward<TransitGatewayCidrBlocksT>(value)); return *this;}
    template<typename TransitGatewayCidrBlocksT = Aws::String>
    TransitGatewayRequestOptions& AddTransitGatewayCidrBlocks(TransitGatewayCidrBlocksT&& value) { m_transitGatewayCidrBlocksHasBeenSet = true; m_transitGatewayCidrBlocks.emplace_back(std::forward<TransitGatewayCidrBlocksT>(value)); return *this; }
    ///@}
  private:

    long long m_amazonSideAsn{0};
    bool m_amazonSideAsnHasBeenSet = false;

    AutoAcceptSharedAttachmentsValue m_autoAcceptSharedAttachments{AutoAcceptSharedAttachmentsValue::NOT_SET};
    bool m_autoAcceptSharedAttachmentsHasBeenSet = false;

    DefaultRouteTableAssociationValue m_defaultRouteTableAssociation{DefaultRouteTableAssociationValue::NOT_SET};
    bool m_defaultRouteTableAssociationHasBeenSet = false;

    DefaultRouteTablePropagationValue m_defaultRouteTablePropagation{DefaultRouteTablePropagationValue::NOT_SET};
    bool m_defaultRouteTablePropagationHasBeenSet = false;

    VpnEcmpSupportValue m_vpnEcmpSupport{VpnEcmpSupportValue::NOT_SET};
    bool m_vpnEcmpSupportHasBeenSet = false;

    DnsSupportValue m_dnsSupport{DnsSupportValue::NOT_SET};
    bool m_dnsSupportHasBeenSet = false;

    SecurityGroupReferencingSupportValue m_securityGroupReferencingSupport{SecurityGroupReferencingSupportValue::NOT_SET};
    bool m_securityGroupReferencingSupportHasBeenSet = false;

    MulticastSupportValue m_multicastSupport{MulticastSupportValue::NOT_SET};
    bool m_multicastSupportHasBeenSet = false;

    Aws::Vector<Aws::String> m_transitGatewayCidrBlocks;
    bool m_transitGatewayCidrBlocksHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
