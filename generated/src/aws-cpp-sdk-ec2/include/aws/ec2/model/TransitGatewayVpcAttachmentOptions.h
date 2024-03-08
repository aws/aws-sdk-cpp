/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DnsSupportValue.h>
#include <aws/ec2/model/SecurityGroupReferencingSupportValue.h>
#include <aws/ec2/model/Ipv6SupportValue.h>
#include <aws/ec2/model/ApplianceModeSupportValue.h>
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
   * <p>Describes the VPC attachment options.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/TransitGatewayVpcAttachmentOptions">AWS
   * API Reference</a></p>
   */
  class TransitGatewayVpcAttachmentOptions
  {
  public:
    AWS_EC2_API TransitGatewayVpcAttachmentOptions();
    AWS_EC2_API TransitGatewayVpcAttachmentOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayVpcAttachmentOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline TransitGatewayVpcAttachmentOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}


    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline const SecurityGroupReferencingSupportValue& GetSecurityGroupReferencingSupport() const{ return m_securityGroupReferencingSupport; }

    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }

    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline void SetSecurityGroupReferencingSupport(const SecurityGroupReferencingSupportValue& value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = value; }

    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline void SetSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue&& value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = std::move(value); }

    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithSecurityGroupReferencingSupport(const SecurityGroupReferencingSupportValue& value) { SetSecurityGroupReferencingSupport(value); return *this;}

    /**
     * <p>For important information about this feature, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#create-vpc-attachment">Create
     * a transit gateway attachment to a VPC</a> in the <i>Amazon Web Services Transit
     * Gateway Guide</i>.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue&& value) { SetSecurityGroupReferencingSupport(std::move(value)); return *this;}


    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline const Ipv6SupportValue& GetIpv6Support() const{ return m_ipv6Support; }

    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline bool Ipv6SupportHasBeenSet() const { return m_ipv6SupportHasBeenSet; }

    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline void SetIpv6Support(const Ipv6SupportValue& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = value; }

    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline void SetIpv6Support(Ipv6SupportValue&& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = std::move(value); }

    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithIpv6Support(const Ipv6SupportValue& value) { SetIpv6Support(value); return *this;}

    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithIpv6Support(Ipv6SupportValue&& value) { SetIpv6Support(std::move(value)); return *this;}


    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline const ApplianceModeSupportValue& GetApplianceModeSupport() const{ return m_applianceModeSupport; }

    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline bool ApplianceModeSupportHasBeenSet() const { return m_applianceModeSupportHasBeenSet; }

    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline void SetApplianceModeSupport(const ApplianceModeSupportValue& value) { m_applianceModeSupportHasBeenSet = true; m_applianceModeSupport = value; }

    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline void SetApplianceModeSupport(ApplianceModeSupportValue&& value) { m_applianceModeSupportHasBeenSet = true; m_applianceModeSupport = std::move(value); }

    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithApplianceModeSupport(const ApplianceModeSupportValue& value) { SetApplianceModeSupport(value); return *this;}

    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline TransitGatewayVpcAttachmentOptions& WithApplianceModeSupport(ApplianceModeSupportValue&& value) { SetApplianceModeSupport(std::move(value)); return *this;}

  private:

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet = false;

    SecurityGroupReferencingSupportValue m_securityGroupReferencingSupport;
    bool m_securityGroupReferencingSupportHasBeenSet = false;

    Ipv6SupportValue m_ipv6Support;
    bool m_ipv6SupportHasBeenSet = false;

    ApplianceModeSupportValue m_applianceModeSupport;
    bool m_applianceModeSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
