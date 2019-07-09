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

#include <aws/ec2/model/TransitGatewayAttachment.h>
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

TransitGatewayAttachment::TransitGatewayAttachment() : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_transitGatewayOwnerIdHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_associationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

TransitGatewayAttachment::TransitGatewayAttachment(const XmlNode& xmlNode) : 
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_transitGatewayIdHasBeenSet(false),
    m_transitGatewayOwnerIdHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_state(TransitGatewayAttachmentState::NOT_SET),
    m_stateHasBeenSet(false),
    m_associationHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayAttachment& TransitGatewayAttachment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = transitGatewayAttachmentIdNode.GetText();
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if(!transitGatewayIdNode.IsNull())
    {
      m_transitGatewayId = transitGatewayIdNode.GetText();
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode transitGatewayOwnerIdNode = resultNode.FirstChild("transitGatewayOwnerId");
    if(!transitGatewayOwnerIdNode.IsNull())
    {
      m_transitGatewayOwnerId = transitGatewayOwnerIdNode.GetText();
      m_transitGatewayOwnerIdHasBeenSet = true;
    }
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if(!resourceOwnerIdNode.IsNull())
    {
      m_resourceOwnerId = resourceOwnerIdNode.GetText();
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(StringUtils::Trim(resourceTypeNode.GetText().c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = resourceIdNode.GetText();
      m_resourceIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = TransitGatewayAttachmentStateMapper::GetTransitGatewayAttachmentStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode associationNode = resultNode.FirstChild("association");
    if(!associationNode.IsNull())
    {
      m_association = associationNode;
      m_associationHasBeenSet = true;
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

void TransitGatewayAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if(m_transitGatewayOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayOwnerId=" << StringUtils::URLEncode(m_transitGatewayOwnerId.c_str()) << "&";
  }

  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
  }

  if(m_associationHasBeenSet)
  {
      Aws::StringStream associationLocationAndMemberSs;
      associationLocationAndMemberSs << location << index << locationValue << ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMemberSs.str().c_str());
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

void TransitGatewayAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_transitGatewayIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if(m_transitGatewayOwnerIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayOwnerId=" << StringUtils::URLEncode(m_transitGatewayOwnerId.c_str()) << "&";
  }
  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state) << "&";
  }
  if(m_associationHasBeenSet)
  {
      Aws::String associationLocationAndMember(location);
      associationLocationAndMember += ".Association";
      m_association.OutputToStream(oStream, associationLocationAndMember.c_str());
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
