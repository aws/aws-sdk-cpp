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
#include <aws/ec2/model/DnsSupportValue.h>
#include <aws/ec2/model/Ipv6SupportValue.h>
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
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/ModifyTransitGatewayVpcAttachmentRequestOptions">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API ModifyTransitGatewayVpcAttachmentRequestOptions
  {
  public:
    ModifyTransitGatewayVpcAttachmentRequestOptions();
    ModifyTransitGatewayVpcAttachmentRequestOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    ModifyTransitGatewayVpcAttachmentRequestOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


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
    inline ModifyTransitGatewayVpcAttachmentRequestOptions& WithDnsSupport(const DnsSupportValue& value) { SetDnsSupport(value); return *this;}

    /**
     * <p>Enable or disable DNS support. The default is <code>enable</code>.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequestOptions& WithDnsSupport(DnsSupportValue&& value) { SetDnsSupport(std::move(value)); return *this;}


    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline const Ipv6SupportValue& GetIpv6Support() const{ return m_ipv6Support; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline bool Ipv6SupportHasBeenSet() const { return m_ipv6SupportHasBeenSet; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline void SetIpv6Support(const Ipv6SupportValue& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = value; }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline void SetIpv6Support(Ipv6SupportValue&& value) { m_ipv6SupportHasBeenSet = true; m_ipv6Support = std::move(value); }

    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequestOptions& WithIpv6Support(const Ipv6SupportValue& value) { SetIpv6Support(value); return *this;}

    /**
     * <p>Enable or disable IPv6 support. The default is <code>enable</code>.</p>
     */
    inline ModifyTransitGatewayVpcAttachmentRequestOptions& WithIpv6Support(Ipv6SupportValue&& value) { SetIpv6Support(std::move(value)); return *this;}

  private:

    DnsSupportValue m_dnsSupport;
    bool m_dnsSupportHasBeenSet;

    Ipv6SupportValue m_ipv6Support;
    bool m_ipv6SupportHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
