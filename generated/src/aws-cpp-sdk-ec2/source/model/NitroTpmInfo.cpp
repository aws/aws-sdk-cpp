/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NitroTpmInfo.h>
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

NitroTpmInfo::NitroTpmInfo() : 
    m_supportedVersionsHasBeenSet(false)
{
}

NitroTpmInfo::NitroTpmInfo(const XmlNode& xmlNode) : 
    m_supportedVersionsHasBeenSet(false)
{
  *this = xmlNode;
}

NitroTpmInfo& NitroTpmInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode supportedVersionsNode = resultNode.FirstChild("supportedVersions");
    if(!supportedVersionsNode.IsNull())
    {
      XmlNode supportedVersionsMember = supportedVersionsNode.FirstChild("item");
      while(!supportedVersionsMember.IsNull())
      {
        m_supportedVersions.push_back(supportedVersionsMember.GetText());
        supportedVersionsMember = supportedVersionsMember.NextNode("item");
      }

      m_supportedVersionsHasBeenSet = true;
    }
  }

  return *this;
}

void NitroTpmInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_supportedVersionsHasBeenSet)
  {
      unsigned supportedVersionsIdx = 1;
      for(auto& item : m_supportedVersions)
      {
        oStream << location << index << locationValue << ".SupportedVersions." << supportedVersionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void NitroTpmInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_supportedVersionsHasBeenSet)
  {
      unsigned supportedVersionsIdx = 1;
      for(auto& item : m_supportedVersions)
      {
        oStream << location << ".SupportedVersions." << supportedVersionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
