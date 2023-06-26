/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PrivateDnsDetails.h>
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

PrivateDnsDetails::PrivateDnsDetails() : 
    m_privateDnsNameHasBeenSet(false)
{
}

PrivateDnsDetails::PrivateDnsDetails(const XmlNode& xmlNode) : 
    m_privateDnsNameHasBeenSet(false)
{
  *this = xmlNode;
}

PrivateDnsDetails& PrivateDnsDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameNode.GetText());
      m_privateDnsNameHasBeenSet = true;
    }
  }

  return *this;
}

void PrivateDnsDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

}

void PrivateDnsDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
