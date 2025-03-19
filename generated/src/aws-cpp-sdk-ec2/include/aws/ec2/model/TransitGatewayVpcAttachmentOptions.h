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
    AWS_EC2_API TransitGatewayVpcAttachmentOptions() = default;
    AWS_EC2_API TransitGatewayVpcAttachmentOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API TransitGatewayVpcAttachmentOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>Indicates whether DNS support is enabled.</p>
     */
    inline DnsSupportValue GetDnsSupport() const { return m_dnsSupport; }
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }
    inline void SetDnsSupport(DnsSupportValue value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }
    inline TransitGatewayVpcAttachmentOptions& WithDnsSupport(DnsSupportValue value) { SetDnsSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Enables you to reference a security group across VPCs attached to a transit
     * gateway to simplify security group management.</p> <p>This option is enabled by
     * default.</p> <p>For more information about security group referencing, see <a
     * href="https://docs.aws.amazon.com/vpc/latest/tgw/tgw-vpc-attachments.html#vpc-attachment-security">Security
     * group referencing</a> in the <i>Amazon Web Services Transit Gateways
     * Guide</i>.</p>
     */
    inline SecurityGroupReferencingSupportValue GetSecurityGroupReferencingSupport() const { return m_securityGroupReferencingSupport; }
    inline bool SecurityGroupReferencingSupportHasBeenSet() const { return m_securityGroupReferencingSupportHasBeenSet; }
    inline void SetSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { m_securityGroupReferencingSupportHasBeenSet = true; m_securityGroupReferencingSupport = value; }
    inline TransitGatewayVpcAttachmentOptions& WithSecurityGroupReferencingSupport(SecurityGroupReferencingSupportValue value) { SetSecurityGroupReferencingSupport(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether IPv6 support is disabled.</p>
     */
    inline Ipv6SupportValue GetIpv6Support() const { return m_ipv6Support; }
    inline bool Ipv6SupportHasBeenSet() const { return m_ipv6SupportHasBeenSet; }
    inline void SetIpv6Support(Ipv6SupportValue value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = value; }
    inline TransitGatewayVpcAttachmentOptions& WithIpv6Support(Ipv6SupportValue value) { SetIpv6Support(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether appliance mode support is enabled.</p>
     */
    inline ApplianceModeSupportValue GetApplianceModeSupport() const { return m_applianceModeSupport; }
    inline bool ApplianceModeSupportHasBeenSet() const { return m_applianceModeSupportHasBeenSet; }
    inline void SetApplianceModeSupport(ApplianceModeSupportValue value) { m_applianceModeSupportHasBeenSet = true; m_applianceModeSupport = value; }
    inline TransitGatewayVpcAttachmentOptions& WithApplianceModeSupport(ApplianceModeSupportValue value) { SetApplianceModeSupport(value); return *this;}
    ///@}
  private:

    DnsSupportValue m_dnsSupport{DnsSupportValue::NOT_SET};
    bool m_dnsSupportHasBeenSet = false;

    SecurityGroupReferencingSupportValue m_securityGroupReferencingSupport{SecurityGroupReferencingSupportValue::NOT_SET};
    bool m_securityGroupReferencingSupportHasBeenSet = false;

    Ipv6SupportValue m_ipv6Support{Ipv6SupportValue::NOT_SET};
    bool m_ipv6SupportHasBeenSet = false;

    ApplianceModeSupportValue m_applianceModeSupport{ApplianceModeSupportValue::NOT_SET};
    bool m_applianceModeSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
