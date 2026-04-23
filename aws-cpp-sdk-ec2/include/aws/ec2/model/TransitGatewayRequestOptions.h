/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/AutoAcceptSharedAttachmentsValue.h>
#include <aws/ec2/model/DefaultRouteTableAssociationValue.h>
#include <aws/ec2/model/DefaultRouteTablePropagationValue.h>
#include <aws/ec2/model/VpnEcmpSupportValue.h>
#include <aws/ec2/model/DnsSupportValue.h>
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
     * 4294967294 for 32-bit ASNs.</p>
     */
    inline long long GetAmazonSideAsn() const{ return m_amazonSideAsn; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p>
     */
    inline bool AmazonSideAsnHasBeenSet() const { return m_amazonSideAsnHasBeenSet; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p>
     */
    inline void SetAmazonSideAsn(long long value) { m_amazonSideAsnHasBeenSet = true; m_amazonSideAsn = value; }

    /**
     * <p>A private Autonomous System Number (ASN) for the Amazon side of a BGP
     * session. The range is 64512 to 65534 for 16-bit ASNs and 4200000000 to
     * 4294967294 for 32-bit ASNs.</p>
     */
    inline TransitGatewayRequestOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline const AutoAcceptSharedAttachmentsValue& GetAutoAcceptSharedAttachments() const{ return m_autoAcceptSharedAttachments; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline void SetAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::move(value); }

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { SetAutoAcceptSharedAttachments(value); return *this;}

    /**
     * <p>Enable or disable automatic acceptance of attachment requests. The default is
     * <code>disable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { SetAutoAcceptSharedAttachments(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline const DefaultRouteTableAssociationValue& GetDefaultRouteTableAssociation() const{ return m_defaultRouteTableAssociation; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline void SetDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::move(value); }

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { SetDefaultRouteTableAssociation(value); return *this;}

    /**
     * <p>Enable or disable automatic association with the default association route
     * table. The default is <code>enable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { SetDefaultRouteTableAssociation(std::move(value)); return *this;}


    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline const DefaultRouteTablePropagationValue& GetDefaultRouteTablePropagation() const{ return m_defaultRouteTablePropagation; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline void SetDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::move(value); }

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { SetDefaultRouteTablePropagation(value); return *this;}

    /**
     * <p>Enable or disable automatic propagation of routes to the default propagation
     * route table. The default is <code>enable</code>.</p>
     */
    inline TransitGatewayRequestOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { SetDefaultRouteTablePropagation(std::move(value)); return *this;}


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
    inline TransitGatewayRequestOptions& WithVpnEcmpSupport(const VpnEcmpSupportValue& value) { SetVpnEcmpSupport(value); return *this;}

    /**
     * <p>Enable or disable Equal Cost Multipath Protocol support.</p>
     */
    inline TransitGatewayRequestOptions& WithVpnEcmpSupport(VpnEcmpSupportValue&& value) { SetVpnEcmpSupport(std::move(value)); return *this;}


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
    inline TransitGatewayRequestOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Enable or disable DNS support.</p>
     */
    inline TransitGatewayRequestOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}

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
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
