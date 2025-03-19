/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpRange.h>
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

IpRange::IpRange(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

IpRange& IpRange::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode cidrIpNode = resultNode.FirstChild("cidrIp");
    if(!cidrIpNode.IsNull())
    {
      m_cidrIp = Aws::Utils::Xml::DecodeEscapedXmlText(cidrIpNode.GetText());
      m_cidrIpHasBeenSet = true;
    }
  }

  return *this;
}

void IpRange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_cidrIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".CidrIp=" << StringUtils::URLEncode(m_cidrIp.c_str()) << "&";
  }

}

void IpRange::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_cidrIpHasBeenSet)
  {
      oStream << location << ".CidrIp=" << StringUtils::URLEncode(m_cidrIp.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
