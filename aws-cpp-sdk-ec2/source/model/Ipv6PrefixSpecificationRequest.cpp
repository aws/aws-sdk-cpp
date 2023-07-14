/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipv6PrefixSpecificationRequest.h>
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

Ipv6PrefixSpecificationRequest::Ipv6PrefixSpecificationRequest() : 
    m_ipv6PrefixHasBeenSet(false)
{
}

Ipv6PrefixSpecificationRequest::Ipv6PrefixSpecificationRequest(const XmlNode& xmlNode) : 
    m_ipv6PrefixHasBeenSet(false)
{
  *this = xmlNode;
}

Ipv6PrefixSpecificationRequest& Ipv6PrefixSpecificationRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6PrefixNode = resultNode.FirstChild("Ipv6Prefix");
    if(!ipv6PrefixNode.IsNull())
    {
      m_ipv6Prefix = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6PrefixNode.GetText());
      m_ipv6PrefixHasBeenSet = true;
    }
  }

  return *this;
}

void Ipv6PrefixSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6PrefixHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6Prefix=" << StringUtils::URLEncode(m_ipv6Prefix.c_str()) << "&";
  }

}

void Ipv6PrefixSpecificationRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6PrefixHasBeenSet)
  {
      oStream << location << ".Ipv6Prefix=" << StringUtils::URLEncode(m_ipv6Prefix.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
