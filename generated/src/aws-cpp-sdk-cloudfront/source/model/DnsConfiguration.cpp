/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudfront/model/DnsConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudFront
{
namespace Model
{

DnsConfiguration::DnsConfiguration(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DnsConfiguration& DnsConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode domainNode = resultNode.FirstChild("Domain");
    if(!domainNode.IsNull())
    {
      m_domain = Aws::Utils::Xml::DecodeEscapedXmlText(domainNode.GetText());
      m_domainHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = DnsConfigurationStatusMapper::GetDnsConfigurationStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode reasonNode = resultNode.FirstChild("Reason");
    if(!reasonNode.IsNull())
    {
      m_reason = Aws::Utils::Xml::DecodeEscapedXmlText(reasonNode.GetText());
      m_reasonHasBeenSet = true;
    }
  }

  return *this;
}

void DnsConfiguration::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_domainHasBeenSet)
  {
   XmlNode domainNode = parentNode.CreateChildElement("Domain");
   domainNode.SetText(m_domain);
  }

  if(m_statusHasBeenSet)
  {
   XmlNode statusNode = parentNode.CreateChildElement("Status");
   statusNode.SetText(DnsConfigurationStatusMapper::GetNameForDnsConfigurationStatus(m_status));
  }

  if(m_reasonHasBeenSet)
  {
   XmlNode reasonNode = parentNode.CreateChildElement("Reason");
   reasonNode.SetText(m_reason);
  }

}

} // namespace Model
} // namespace CloudFront
} // namespace Aws
