/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Ipv6Pool.h>
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

Ipv6Pool::Ipv6Pool() : 
    m_poolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolCidrBlocksHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Ipv6Pool::Ipv6Pool(const XmlNode& xmlNode) : 
    m_poolIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_poolCidrBlocksHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

Ipv6Pool& Ipv6Pool::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode poolIdNode = resultNode.FirstChild("poolId");
    if(!poolIdNode.IsNull())
    {
      m_poolId = Aws::Utils::Xml::DecodeEscapedXmlText(poolIdNode.GetText());
      m_poolIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode poolCidrBlocksNode = resultNode.FirstChild("poolCidrBlockSet");
    if(!poolCidrBlocksNode.IsNull())
    {
      XmlNode poolCidrBlocksMember = poolCidrBlocksNode.FirstChild("item");
      while(!poolCidrBlocksMember.IsNull())
      {
        m_poolCidrBlocks.push_back(poolCidrBlocksMember);
        poolCidrBlocksMember = poolCidrBlocksMember.NextNode("item");
      }

      m_poolCidrBlocksHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void Ipv6Pool::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_poolCidrBlocksHasBeenSet)
  {
      unsigned poolCidrBlocksIdx = 1;
      for(auto& item : m_poolCidrBlocks)
      {
        Aws::StringStream poolCidrBlocksSs;
        poolCidrBlocksSs << location << index << locationValue << ".PoolCidrBlockSet." << poolCidrBlocksIdx++;
        item.OutputToStream(oStream, poolCidrBlocksSs.str().c_str());
      }
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void Ipv6Pool::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_poolCidrBlocksHasBeenSet)
  {
      unsigned poolCidrBlocksIdx = 1;
      for(auto& item : m_poolCidrBlocks)
      {
        Aws::StringStream poolCidrBlocksSs;
        poolCidrBlocksSs << location <<  ".PoolCidrBlockSet." << poolCidrBlocksIdx++;
        item.OutputToStream(oStream, poolCidrBlocksSs.str().c_str());
      }
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
