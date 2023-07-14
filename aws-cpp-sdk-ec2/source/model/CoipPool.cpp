/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CoipPool.h>
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

CoipPool::CoipPool() : 
    m_poolIdHasBeenSet(false),
    m_poolCidrsHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_poolArnHasBeenSet(false)
{
}

CoipPool::CoipPool(const XmlNode& xmlNode) : 
    m_poolIdHasBeenSet(false),
    m_poolCidrsHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_poolArnHasBeenSet(false)
{
  *this = xmlNode;
}

CoipPool& CoipPool::operator =(const XmlNode& xmlNode)
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
    XmlNode poolCidrsNode = resultNode.FirstChild("poolCidrSet");
    if(!poolCidrsNode.IsNull())
    {
      XmlNode poolCidrsMember = poolCidrsNode.FirstChild("item");
      while(!poolCidrsMember.IsNull())
      {
        m_poolCidrs.push_back(poolCidrsMember.GetText());
        poolCidrsMember = poolCidrsMember.NextNode("item");
      }

      m_poolCidrsHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
      m_localGatewayRouteTableIdHasBeenSet = true;
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
    XmlNode poolArnNode = resultNode.FirstChild("poolArn");
    if(!poolArnNode.IsNull())
    {
      m_poolArn = Aws::Utils::Xml::DecodeEscapedXmlText(poolArnNode.GetText());
      m_poolArnHasBeenSet = true;
    }
  }

  return *this;
}

void CoipPool::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }

  if(m_poolCidrsHasBeenSet)
  {
      unsigned poolCidrsIdx = 1;
      for(auto& item : m_poolCidrs)
      {
        oStream << location << index << locationValue << ".PoolCidrSet." << poolCidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
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

  if(m_poolArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PoolArn=" << StringUtils::URLEncode(m_poolArn.c_str()) << "&";
  }

}

void CoipPool::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_poolIdHasBeenSet)
  {
      oStream << location << ".PoolId=" << StringUtils::URLEncode(m_poolId.c_str()) << "&";
  }
  if(m_poolCidrsHasBeenSet)
  {
      unsigned poolCidrsIdx = 1;
      for(auto& item : m_poolCidrs)
      {
        oStream << location << ".PoolCidrSet." << poolCidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
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
  if(m_poolArnHasBeenSet)
  {
      oStream << location << ".PoolArn=" << StringUtils::URLEncode(m_poolArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
