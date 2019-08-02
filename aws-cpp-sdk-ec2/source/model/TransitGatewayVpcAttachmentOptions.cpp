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

#include <aws/ec2/model/TransitGatewayVpcAttachmentOptions.h>
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

TransitGatewayVpcAttachmentOptions::TransitGatewayVpcAttachmentOptions() : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false)
{
}

TransitGatewayVpcAttachmentOptions::TransitGatewayVpcAttachmentOptions(const XmlNode& xmlNode) : 
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_ipv6Support(Ipv6SupportValue::NOT_SET),
    m_ipv6SupportHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayVpcAttachmentOptions& TransitGatewayVpcAttachmentOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode dnsSupportNode = resultNode.FirstChild("dnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode ipv6SupportNode = resultNode.FirstChild("ipv6Support");
    if(!ipv6SupportNode.IsNull())
    {
      m_ipv6Support = Ipv6SupportValueMapper::GetIpv6SupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipv6SupportNode.GetText()).c_str()).c_str());
      m_ipv6SupportHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayVpcAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }

  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }

}

void TransitGatewayVpcAttachmentOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }
  if(m_ipv6SupportHasBeenSet)
  {
      oStream << location << ".Ipv6Support=" << Ipv6SupportValueMapper::GetNameForIpv6SupportValue(m_ipv6Support) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
