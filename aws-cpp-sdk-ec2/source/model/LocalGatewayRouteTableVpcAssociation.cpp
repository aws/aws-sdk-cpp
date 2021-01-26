/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LocalGatewayRouteTableVpcAssociation.h>
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

LocalGatewayRouteTableVpcAssociation::LocalGatewayRouteTableVpcAssociation() : 
    m_localGatewayRouteTableVpcAssociationIdHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

LocalGatewayRouteTableVpcAssociation::LocalGatewayRouteTableVpcAssociation(const XmlNode& xmlNode) : 
    m_localGatewayRouteTableVpcAssociationIdHasBeenSet(false),
    m_localGatewayRouteTableIdHasBeenSet(false),
    m_localGatewayRouteTableArnHasBeenSet(false),
    m_localGatewayIdHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

LocalGatewayRouteTableVpcAssociation& LocalGatewayRouteTableVpcAssociation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode localGatewayRouteTableVpcAssociationIdNode = resultNode.FirstChild("localGatewayRouteTableVpcAssociationId");
    if(!localGatewayRouteTableVpcAssociationIdNode.IsNull())
    {
      m_localGatewayRouteTableVpcAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableVpcAssociationIdNode.GetText());
      m_localGatewayRouteTableVpcAssociationIdHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableIdNode = resultNode.FirstChild("localGatewayRouteTableId");
    if(!localGatewayRouteTableIdNode.IsNull())
    {
      m_localGatewayRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableIdNode.GetText());
      m_localGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode localGatewayRouteTableArnNode = resultNode.FirstChild("localGatewayRouteTableArn");
    if(!localGatewayRouteTableArnNode.IsNull())
    {
      m_localGatewayRouteTableArn = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayRouteTableArnNode.GetText());
      m_localGatewayRouteTableArnHasBeenSet = true;
    }
    XmlNode localGatewayIdNode = resultNode.FirstChild("localGatewayId");
    if(!localGatewayIdNode.IsNull())
    {
      m_localGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(localGatewayIdNode.GetText());
      m_localGatewayIdHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
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

void LocalGatewayRouteTableVpcAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_localGatewayRouteTableVpcAssociationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableVpcAssociationId=" << StringUtils::URLEncode(m_localGatewayRouteTableVpcAssociationId.c_str()) << "&";
  }

  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }

  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }

  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
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

void LocalGatewayRouteTableVpcAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_localGatewayRouteTableVpcAssociationIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableVpcAssociationId=" << StringUtils::URLEncode(m_localGatewayRouteTableVpcAssociationId.c_str()) << "&";
  }
  if(m_localGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableId=" << StringUtils::URLEncode(m_localGatewayRouteTableId.c_str()) << "&";
  }
  if(m_localGatewayRouteTableArnHasBeenSet)
  {
      oStream << location << ".LocalGatewayRouteTableArn=" << StringUtils::URLEncode(m_localGatewayRouteTableArn.c_str()) << "&";
  }
  if(m_localGatewayIdHasBeenSet)
  {
      oStream << location << ".LocalGatewayId=" << StringUtils::URLEncode(m_localGatewayId.c_str()) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
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
