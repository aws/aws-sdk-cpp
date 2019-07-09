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

#include <aws/ec2/model/TransitGatewayRouteAttachment.h>
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

TransitGatewayRouteAttachment::TransitGatewayRouteAttachment() : 
    m_resourceIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
}

TransitGatewayRouteAttachment::TransitGatewayRouteAttachment(const XmlNode& xmlNode) : 
    m_resourceIdHasBeenSet(false),
    m_transitGatewayAttachmentIdHasBeenSet(false),
    m_resourceType(TransitGatewayAttachmentResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayRouteAttachment& TransitGatewayRouteAttachment::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = resourceIdNode.GetText();
      m_resourceIdHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if(!transitGatewayAttachmentIdNode.IsNull())
    {
      m_transitGatewayAttachmentId = transitGatewayAttachmentIdNode.GetText();
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = TransitGatewayAttachmentResourceTypeMapper::GetTransitGatewayAttachmentResourceTypeForName(StringUtils::Trim(resourceTypeNode.GetText().c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRouteAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }

}

void TransitGatewayRouteAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_transitGatewayAttachmentIdHasBeenSet)
  {
      oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << TransitGatewayAttachmentResourceTypeMapper::GetNameForTransitGatewayAttachmentResourceType(m_resourceType) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
