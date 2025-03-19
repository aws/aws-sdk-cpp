/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/MacHost.h>
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

MacHost::MacHost(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

MacHost& MacHost::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode hostIdNode = resultNode.FirstChild("hostId");
    if(!hostIdNode.IsNull())
    {
      m_hostId = Aws::Utils::Xml::DecodeEscapedXmlText(hostIdNode.GetText());
      m_hostIdHasBeenSet = true;
    }
    XmlNode macOSLatestSupportedVersionsNode = resultNode.FirstChild("macOSLatestSupportedVersionSet");
    if(!macOSLatestSupportedVersionsNode.IsNull())
    {
      XmlNode macOSLatestSupportedVersionsMember = macOSLatestSupportedVersionsNode.FirstChild("item");
      m_macOSLatestSupportedVersionsHasBeenSet = !macOSLatestSupportedVersionsMember.IsNull();
      while(!macOSLatestSupportedVersionsMember.IsNull())
      {
        m_macOSLatestSupportedVersions.push_back(macOSLatestSupportedVersionsMember.GetText());
        macOSLatestSupportedVersionsMember = macOSLatestSupportedVersionsMember.NextNode("item");
      }

      m_macOSLatestSupportedVersionsHasBeenSet = true;
    }
  }

  return *this;
}

void MacHost::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_hostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_macOSLatestSupportedVersionsHasBeenSet)
  {
      unsigned macOSLatestSupportedVersionsIdx = 1;
      for(auto& item : m_macOSLatestSupportedVersions)
      {
        oStream << location << index << locationValue << ".MacOSLatestSupportedVersionSet." << macOSLatestSupportedVersionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void MacHost::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_hostIdHasBeenSet)
  {
      oStream << location << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }
  if(m_macOSLatestSupportedVersionsHasBeenSet)
  {
      unsigned macOSLatestSupportedVersionsIdx = 1;
      for(auto& item : m_macOSLatestSupportedVersions)
      {
        oStream << location << ".MacOSLatestSupportedVersionSet." << macOSLatestSupportedVersionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
