/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/RemoveIpamOperatingRegion.h>
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

RemoveIpamOperatingRegion::RemoveIpamOperatingRegion() : 
    m_regionNameHasBeenSet(false)
{
}

RemoveIpamOperatingRegion::RemoveIpamOperatingRegion(const XmlNode& xmlNode) : 
    m_regionNameHasBeenSet(false)
{
  *this = xmlNode;
}

RemoveIpamOperatingRegion& RemoveIpamOperatingRegion::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode regionNameNode = resultNode.FirstChild("RegionName");
    if(!regionNameNode.IsNull())
    {
      m_regionName = Aws::Utils::Xml::DecodeEscapedXmlText(regionNameNode.GetText());
      m_regionNameHasBeenSet = true;
    }
  }

  return *this;
}

void RemoveIpamOperatingRegion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }

}

void RemoveIpamOperatingRegion::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_regionNameHasBeenSet)
  {
      oStream << location << ".RegionName=" << StringUtils::URLEncode(m_regionName.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
