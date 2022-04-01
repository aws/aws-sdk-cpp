/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipv6CidrBlock.h>
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

Ipv6CidrBlock::Ipv6CidrBlock() : 
    m_ipv6CidrBlockHasBeenSet(false)
{
}

Ipv6CidrBlock::Ipv6CidrBlock(const XmlNode& xmlNode) : 
    m_ipv6CidrBlockHasBeenSet(false)
{
  *this = xmlNode;
}

Ipv6CidrBlock& Ipv6CidrBlock::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipv6CidrBlockNode = resultNode.FirstChild("ipv6CidrBlock");
    if(!ipv6CidrBlockNode.IsNull())
    {
      m_ipv6CidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(ipv6CidrBlockNode.GetText());
      m_ipv6CidrBlockHasBeenSet = true;
    }
  }

  return *this;
}

void Ipv6CidrBlock::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << index << locationValue << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }

}

void Ipv6CidrBlock::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipv6CidrBlockHasBeenSet)
  {
      oStream << location << ".Ipv6CidrBlock=" << StringUtils::URLEncode(m_ipv6CidrBlock.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
