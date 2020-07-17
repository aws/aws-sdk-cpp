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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayRequestOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayRequestOptions
  {
  public:
    TransitGatewayRequestOptions();
    TransitGatewayRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs. The default is <code>64512</code>.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs. The default is <code>64512</code>.</p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs. The default is <code>64512</code>.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs. The default is <code>64512</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline const AutoAcceptSharedAttachmentsValue& GetAutoAcceptSharedAttachments() const{ return m_autoAcceptSharedAttachments; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline void SetAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::move(value); }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline TransitGatewayRequestOptions& WithAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { SetAutoAcceptSharedAttachments(value); return *this;}

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. Disabled by
     * default.</p>
     */
    inline TransitGatewayRequestOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { SetAutoAcceptSharedAttachments(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline const DefaultRouteTableAssociationValue& GetDefaultRouteTableAssociation() const{ return m_defaultRouteTableAssociation; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline void SetDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::move(value); }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { SetDefaultRouteTableAssociation(value); return *this;}

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { SetDefaultRouteTableAssociation(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline const DefaultRouteTablePropagationValue& GetDefaultRouteTablePropagation() const{ return m_defaultRouteTablePropagation; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline void SetDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::move(value); }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { SetDefaultRouteTablePropagation(value); return *this;}

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { SetDefaultRouteTablePropagation(std::move(value)); return *this;}


    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline const VpnEcmpSupportValue& GetVpnEcmpSupport() const{ return m_vpnEcmpSupport; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline void SetVpnEcmpSupport(const VpnEcmpSupportValue& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue&& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = std::move(value); }

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline TransitGatewayRequestOptions& WithVpnEcmpSupport(const VpnEcmpSupportValue& value) { SetVpnEcmpSupport(value); return *this;}

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support. Enabled by
     * default.</p>
     */
    inline TransitGatewayRequestOptions& WithVpnEcmpSupport(VpnEcmpSupportValue&& value) { SetVpnEcmpSupport(std::move(value)); return *this;}


    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline const DnsSupportValue& GetDnsSupport() const{ return m_dnsSupport; }

    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }

    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline void SetDnsSupport(const DnsSupportValue& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }

    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline void SetDnsSupport(DnsSupportValue&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::move(value); }

    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Enable or disable DNS support. Enabled by default.</p>
     */
    inline TransitGatewayRequestOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}


    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline const MulticastSupportValue& GetMulticastSupport() const{ return m_multicastSupport; }

    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline bool MulticastSupportHasBeenSet() const { return m_multicastSupportHasBeenSet; }

    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline void SetMulticastSupport(const MulticastSupportValue& value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = value; }

    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline void SetMulticastSupport(MulticastSupportValue&& value) { m_multicastSupportHasBeenSet = true; m_multicastSupport = std::move(value); }

    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline TransitGatewayRequestOptions& WithMulticastSupport(const MulticastSupportValue& value) { SetMulticastSupport(value); return *this;}

    /**
     * <p>Indicates whether multicast is enabled on the transit gateway</p>
     */
    inline TransitGatewayRequestOptions& WithMulticastSupport(MulticastSupportValue&& value) { SetMulticastSupport(std::move(value)); return *this;}

  private:

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet;

    AutoAcceptSharedAttachmentsValue m_autoAcceptSharedAttachments;
    bool m_autoAcceptSharedAttachmentsHasBeenSet;

    DefaultRouteTableAssociationValue m_defaultRouteTableAssociation;
    bool m_defaultRouteTableAssociationHasBeenSet;

    DefaultRouteTablePropagationValue m_defaultRouteTablePropagation;
    bool m_defaultRouteTablePropagationHasBeenSet;

    VpnEcmpSupportValue m_vpnEcmpSupport;
    bool m_vpnEcmpSupportHasBeenSet;

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet;

    MulticastSupportValue m_multicastSupport;
    bool m_multicastSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
