/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPublicAddressTags.h>
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

IpamPublicAddressTags::IpamPublicAddressTags() : 
    m_eipTagsHasBeenSet(false)
{
}

IpamPublicAddressTags::IpamPublicAddressTags(const XmlNode& xmlNode) : 
    m_eipTagsHasBeenSet(false)
{
  *this = xmlNode;
}

IpamPublicAddressTags& IpamPublicAddressTags::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode eipTagsNode = resultNode.FirstChild("eipTagSet");
    if(!eipTagsNode.IsNull())
    {
      XmlNode eipTagsMember = eipTagsNode.FirstChild("item");
      while(!eipTagsMember.IsNull())
      {
        m_eipTags.push_back(eipTagsMember);
        eipTagsMember = eipTagsMember.NextNode("item");
      }

      m_eipTagsHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPublicAddressTags::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_eipTagsHasBeenSet)
  {
      unsigned eipTagsIdx = 1;
      for(auto& item : m_eipTags)
      {
        Aws::StringStream eipTagsSs;
        eipTagsSs << location << index << locationValue << ".EipTagSet." << eipTagsIdx++;
        item.OutputToStream(oStream, eipTagsSs.str().c_str());
      }
  }

}

void IpamPublicAddressTags::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_eipTagsHasBeenSet)
  {
      unsigned eipTagsIdx = 1;
      for(auto& item : m_eipTags)
      {
        Aws::StringStream eipTagsSs;
        eipTagsSs << location <<  ".EipTagSet." << eipTagsIdx++;
        item.OutputToStream(oStream, eipTagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
