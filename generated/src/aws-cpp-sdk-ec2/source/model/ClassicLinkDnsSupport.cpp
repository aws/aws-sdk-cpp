/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ClassicLinkDnsSupport.h>
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

ClassicLinkDnsSupport::ClassicLinkDnsSupport() : 
    m_classicLinkDnsSupported(false),
    m_classicLinkDnsSupportedHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

ClassicLinkDnsSupport::ClassicLinkDnsSupport(const XmlNode& xmlNode) : 
    m_classicLinkDnsSupported(false),
    m_classicLinkDnsSupportedHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

ClassicLinkDnsSupport& ClassicLinkDnsSupport::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode classicLinkDnsSupportedNode = resultNode.FirstChild("classicLinkDnsSupported");
    if(!classicLinkDnsSupportedNode.IsNull())
    {
      m_classicLinkDnsSupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(classicLinkDnsSupportedNode.GetText()).c_str()).c_str());
      m_classicLinkDnsSupportedHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void ClassicLinkDnsSupport::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_classicLinkDnsSupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClassicLinkDnsSupported=" << std::boolalpha << m_classicLinkDnsSupported << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void ClassicLinkDnsSupport::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_classicLinkDnsSupportedHasBeenSet)
  {
      oStream << location << ".ClassicLinkDnsSupported=" << std::boolalpha << m_classicLinkDnsSupported << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
