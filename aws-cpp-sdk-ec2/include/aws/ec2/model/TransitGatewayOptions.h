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
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API TransitGatewayOptions
  {
  public:
    TransitGatewayOptions();
    TransitGatewayOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    TransitGatewayOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

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
    inline TransitGatewayOptions& WithAmazonSideAsn(long long value) { SetAmazonSideAsn(value); return *this;}


    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline const AutoAcceptSharedAttachmentsValue& GetAutoAcceptSharedAttachments() const{ return m_autoAcceptSharedAttachments; }

    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline bool AutoAcceptSharedAttachmentsHasBeenSet() const { return m_autoAcceptSharedAttachmentsHasBeenSet; }

    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline void SetAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = value; }

    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline void SetAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { m_autoAcceptSharedAttachmentsHasBeenSet = true; m_autoAcceptSharedAttachments = std::move(value); }

    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline TransitGatewayOptions& WithAutoAcceptSharedAttachments(const AutoAcceptSharedAttachmentsValue& value) { SetAutoAcceptSharedAttachments(value); return *this;}

    /**
     * <p>Indicates whether attachment requests are automatically accepted.</p>
     */
    inline TransitGatewayOptions& WithAutoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue&& value) { SetAutoAcceptSharedAttachments(std::move(value)); return *this;}


    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline const DefaultRouteTableAssociationValue& GetDefaultRouteTableAssociation() const{ return m_defaultRouteTableAssociation; }

    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline bool DefaultRouteTableAssociationHasBeenSet() const { return m_defaultRouteTableAssociationHasBeenSet; }

    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline void SetDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = value; }

    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline void SetDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { m_defaultRouteTableAssociationHasBeenSet = true; m_defaultRouteTableAssociation = std::move(value); }

    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline TransitGatewayOptions& WithDefaultRouteTableAssociation(const DefaultRouteTableAssociationValue& value) { SetDefaultRouteTableAssociation(value); return *this;}

    /**
     * <p>Indicates whether resource attachments are automatically associated with the
     * default association route table.</p>
     */
    inline TransitGatewayOptions& WithDefaultRouteTableAssociation(DefaultRouteTableAssociationValue&& value) { SetDefaultRouteTableAssociation(std::move(value)); return *this;}


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
    inline TransitGatewayOptions& WithAssociationDefaultRouteTableId(const Aws::String& value) { SetAssociationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline TransitGatewayOptions& WithAssociationDefaultRouteTableId(Aws::String&& value) { SetAssociationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default association route table.</p>
     */
    inline TransitGatewayOptions& WithAssociationDefaultRouteTableId(const char* value) { SetAssociationDefaultRouteTableId(value); return *this;}


    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline const DefaultRouteTablePropagationValue& GetDefaultRouteTablePropagation() const{ return m_defaultRouteTablePropagation; }

    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline bool DefaultRouteTablePropagationHasBeenSet() const { return m_defaultRouteTablePropagationHasBeenSet; }

    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline void SetDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = value; }

    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline void SetDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { m_defaultRouteTablePropagationHasBeenSet = true; m_defaultRouteTablePropagation = std::move(value); }

    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline TransitGatewayOptions& WithDefaultRouteTablePropagation(const DefaultRouteTablePropagationValue& value) { SetDefaultRouteTablePropagation(value); return *this;}

    /**
     * <p>Indicates whether resource attachments automatically propagate routes to the
     * default propagation route table.</p>
     */
    inline TransitGatewayOptions& WithDefaultRouteTablePropagation(DefaultRouteTablePropagationValue&& value) { SetDefaultRouteTablePropagation(std::move(value)); return *this;}


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
    inline TransitGatewayOptions& WithPropagationDefaultRouteTableId(const Aws::String& value) { SetPropagationDefaultRouteTableId(value); return *this;}

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline TransitGatewayOptions& WithPropagationDefaultRouteTableId(Aws::String&& value) { SetPropagationDefaultRouteTableId(std::move(value)); return *this;}

    /**
     * <p>The ID of the default propagation route table.</p>
     */
    inline TransitGatewayOptions& WithPropagationDefaultRouteTableId(const char* value) { SetPropagationDefaultRouteTableId(value); return *this;}


    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline const VpnEcmpSupportValue& GetVpnEcmpSupport() const{ return m_vpnEcmpSupport; }

    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline bool VpnEcmpSupportHasBeenSet() const { return m_vpnEcmpSupportHasBeenSet; }

    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline void SetVpnEcmpSupport(const VpnEcmpSupportValue& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = value; }

    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline void SetVpnEcmpSupport(VpnEcmpSupportValue&& value) { m_vpnEcmpSupportHasBeenSet = true; m_vpnEcmpSupport = std::move(value); }

    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline TransitGatewayOptions& WithVpnEcmpSupport(const VpnEcmpSupportValue& value) { SetVpnEcmpSupport(value); return *this;}

    /**
     * <p>Indicates whether Equal Cost Multipath Protocol support is enabled.</p>
     */
    inline TransitGatewayOptions& WithVpnEcmpSupport(VpnEcmpSupportValue&& value) { SetVpnEcmpSupport(std::move(value)); return *this;}


    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline const DnsSupportValue& GetDnsSupport() const{ return m_dnsSupport; }

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline void SetDnsSupport(const DnsSupportValue& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline void SetDnsSupport(DnsSupportValue&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::move(value); }

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline TransitGatewayOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline TransitGatewayOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}

  private:

    long long m_amazonSideAsn;
    bool m_amazonSideAsnHasBeenSet;

    AutoAcceptSharedAttachmentsValue m_autoAcceptSharedAttachments;
    bool m_autoAcceptSharedAttachmentsHasBeenSet;

    DefaultRouteTableAssociationValue m_defaultRouteTableAssociation;
    bool m_defaultRouteTableAssociationHasBeenSet;

    Aws::String m_associationDefaultRouteTableId;
    bool m_associationDefaultRouteTableIdHasBeenSet;

    DefaultRouteTablePropagationValue m_defaultRouteTablePropagation;
    bool m_defaultRouteTablePropagationHasBeenSet;

    Aws::String m_propagationDefaultRouteTableId;
    bool m_propagationDefaultRouteTableIdHasBeenSet;

    VpnEcmpSupportValue m_vpnEcmpSupport;
    bool m_vpnEcmpSupportHasBeenSet;

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
