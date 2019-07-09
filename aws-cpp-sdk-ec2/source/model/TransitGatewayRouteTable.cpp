/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/ec2/model/TransitGatewayRouteTable.h>
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

TransitGatewayRouteTable::TransitGatewayRouteTable() : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayRouteTableState::NOT_SET),
    m_stateHasBeenSet(false),
    m_defaultAssociationRouteTable(false),
    m_defaultAssociationRouteTableHasBeenSet(false),
    m_defaultPropagationRouteTable(false),
    m_defaultPropagationRouteTableHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayRouteTable::TransitGatewayRouteTable(const XmlNode& xmlNode) : 
    m_transitGatewayRouteTableIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_state(TransitGatewayRouteTableState::NOT_SET),
    m_stateHasBeenSet(false),
    m_defaultAssociationRouteTable(false),
    m_defaultAssociationRouteTableHasBeenSet(false),
    m_defaultPropagationRouteTable(false),
    m_defaultPropagationRouteTableHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayRouteTable& TransitGatewayRouteTable::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayRouteTableIdNode = resultNode.FirstChild("transitGatewayRouteTableId");
    if(!transitGatewayRouteTableIdNode.IsNull())
    {
      m_transitGatewayRouteTableId = transitGatewayRouteTableIdNode.GetText();
      m_transitGatewayRouteTableIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = transitGatewayIdNode.GetText();
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayRouteTableStateMapper::GetTransitGatewayRouteTableStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode defaultAssociationRouteTableNode = resultNode.FirstChild("defaultAssociationRouteTable");
    if(!defaultAssociationRouteTableNode.IsNull())
    {
      m_defaultAssociationRouteTable = StringUtils::ConvertToBool(StringUtils::Trim(defaultAssociationRouteTableNode.GetText().c_str()).c_str());
      m_defaultAssociationRouteTableHasBeenSet = true;
    }
    XmlNode defaultPropagationRouteTableNode = resultNode.FirstChild("defaultPropagationRouteTable");
    if(!defaultPropagationRouteTableNode.IsNull())
    {
      m_defaultPropagationRouteTable = StringUtils::ConvertToBool(StringUtils::Trim(defaultPropagationRouteTableNode.GetText().c_str()).c_str());
      m_defaultPropagationRouteTableHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if(!creationTimeNode.IsNull())
    {
      m_creationTime = DateTime(StringUtils::Trim(creationTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
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

void TransitGatewayRouteTable::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayRouteTableStateMapper::GetNameForTransitGatewayRouteTableState(m_state) << "&";
  }

  if(m_defaultAssociationRouteTableHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultAssociationRouteTable=" << std::boolalpha << m_defaultAssociationRouteTable << "&";
  }

  if(m_defaultPropagationRouteTableHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultPropagationRouteTable=" << std::boolalpha << m_defaultPropagationRouteTable << "&";
  }

  if(m_creationTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

void TransitGatewayRouteTable::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayRouteTableIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayRouteTableId=" << StringUtils::URLEncode(m_transitGatewayRouteTableId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayRouteTableStateMapper::GetNameForTransitGatewayRouteTableState(m_state) << "&";
  }
  if(m_defaultAssociationRouteTableHasBeenSet)
  {
      oStream << location << ".DefaultAssociationRouteTable=" << std::boolalpha << m_defaultAssociationRouteTable << "&";
  }
  if(m_defaultPropagationRouteTableHasBeenSet)
  {
      oStream << location << ".DefaultPropagationRouteTable=" << std::boolalpha << m_defaultPropagationRouteTable << "&";
  }
  if(m_creationTimeHasBeenSet)
  {
      oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
