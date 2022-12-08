/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/ec2/model/DnsSupportValue.h>
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
   * <p>Describes the options for a VPC attachment.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/CreateTransitGatewayVpcAttachmentRequestOptions">AWS
   * API Reference</a></p>
   */
  class CreateTransitGatewayVpcAttachmentRequestOptions
  {
  public:
    AWS_EC2_API CreateTransitGatewayVpcAttachmentRequestOptions();
    AWS_EC2_API CreateTransitGatewayVpcAttachmentRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_EC2_API CreateTransitGatewayVpcAttachmentRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_EC2_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_EC2_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline const DnsSupportValue& GetDnsSupport() const{ return m_dnsSupport; }

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline bool DnsSupportHasBeenSet() const { return m_dnsSupportHasBeenSet; }

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline void SetDnsSupport(const DnsSupportValue& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = value; }

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline void SetDnsSupport(DnsSupportValue&& value) { m_dnsSupportHasBeenSet = true; m_dnsSupport = std::move(value); }

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}


    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline const Ipv6SupportValue& GetIpv6Support() const{ return m_ipv6Support; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline bool Ipv6SupportHasBeenSet() const { return m_ipv6SupportHasBeenSet; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline void SetIpv6Support(const Ipv6SupportValue& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = value; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline void SetIpv6Support(Ipv6SupportValue&& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = std::move(value); }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithIpv6Support(const Ipv6SupportValue& value) { SetIpv6Support(value); return *this;}

    /**
     * <p>Enable or disable IPv6 support. The default is <code>disable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithIpv6Support(Ipv6SupportValue&& value) { SetIpv6Support(std::move(value)); return *this;}


    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline const ApplianceModeSupportValue& GetApplianceModeSupport() const{ return m_applianceModeSupport; }

    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline bool ApplianceModeSupportHasBeenSet() const { return m_applianceModeSupportHasBeenSet; }

    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline void SetApplianceModeSupport(const ApplianceModeSupportValue& value) { m_applianceModeSupportHasBeenSet = true; m_applianceModeSupport = value; }

    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline void SetApplianceModeSupport(ApplianceModeSupportValue&& value) { m_applianceModeSupportHasBeenSet = true; m_applianceModeSupport = std::move(value); }

    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithApplianceModeSupport(const ApplianceModeSupportValue& value) { SetApplianceModeSupport(value); return *this;}

    /**
     * <p>Enable or disable support for appliance mode. If enabled, a traffic flow
     * between a source and destination uses the same Availability Zone for the VPC
     * attachment for the lifetime of that flow. The default is
     * <code>disable</code>.</p>
     */
    inline CreateTransitGatewayVpcAttachmentRequestOptions& WithApplianceModeSupport(ApplianceModeSupportValue&& value) { SetApplianceModeSupport(std::move(value)); return *this;}

  private:

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet = false;

    Ipv6SupportValue m_ipv6Support;
    bool m_ipv6SupportHasBeenSet = false;

    ApplianceModeSupportValue m_applianceModeSupport;
    bool m_applianceModeSupportHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
