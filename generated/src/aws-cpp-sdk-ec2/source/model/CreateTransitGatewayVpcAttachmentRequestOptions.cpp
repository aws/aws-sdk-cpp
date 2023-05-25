/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CreateTransitGatewayVpcAttachmentRequestOptions.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

CreateTransitGatewayVpcAttachmentRequestOptions::CreateTransitGatewayVpcAttachmentRequestOptions() : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false),
    m_applianceModeSupport(ApplianceModeSupportValue::NOT_SET),
    m_applianceModeSupportHasBeenSet(false)
{
}

CreateTransitGatewayVpcAttachmentRequestOptions::CreateTransitGatewayVpcAttachmentRequestOptions(const XmlNode& xmlNode) : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false),
    m_applianceModeSupport(ApplianceModeSupportValue::NOT_SET),
    m_applianceModeSupportHasBeenSet(false)
{
  *this = xmlNode;
}

CreateTransitGatewayVpcAttachmentRequestOptions& CreateTransitGatewayVpcAttachmentRequestOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsSupportNode = resultNode.FirstChild("DnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode ipv6SupportNode = resultNode.FirstChild("Ipv6Support");
    if(!ipv6SupportNode.IsNull())
    {
      m_ipv6Support = Ipv6SupportValueMapper::GetIpv6SupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6SupportNode.GetText()).c_str()).c_str());
      m_ipv6SupportHasBeenSet = true;
    }
    XmlNode applianceModeSupportNode = resultNode.FirstChild("ApplianceModeSupport");
    if(!applianceModeSupportNode.IsNull())
    {
      m_applianceModeSupport = ApplianceModeSupportValueMapper::GetApplianceModeSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(applianceModeSupportNode.GetText()).c_str()).c_str());
      m_applianceModeSupportHasBeenSet = true;
    }
  }

  return *this;
}

void CreateTransitGatewayVpcAttachmentRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }

  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }

  if(m_applianceModeSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".ApplianceModeSupport=" << ApplianceModeSupportValueMapper::GetNameForApplianceModeSupportValue(m_applianceModeSupport) << "&";
  }

}

void CreateTransitGatewayVpcAttachmentRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }
  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }
  if(m_applianceModeSupportHasBeenSet)
  {
      oStream << location << ".ApplianceModeSupport=" << ApplianceModeSupportValueMapper::GetNameForApplianceModeSupportValue(m_applianceModeSupport) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
