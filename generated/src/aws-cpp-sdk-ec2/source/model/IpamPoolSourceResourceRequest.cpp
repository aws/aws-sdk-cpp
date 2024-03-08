/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolSourceResourceRequest.h>
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

IpamPoolSourceResourceRequest::IpamPoolSourceResourceRequest() : 
    m_resourceIdHasBeenSet(false),
    m_resourceType(IpamPoolSourceResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
}

IpamPoolSourceResourceRequest::IpamPoolSourceResourceRequest(const XmlNode& xmlNode) : 
    m_resourceIdHasBeenSet(false),
    m_resourceType(IpamPoolSourceResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
  *this = xmlNode;
}

IpamPoolSourceResourceRequest& IpamPoolSourceResourceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceIdNode = resultNode.FirstChild("ResourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = IpamPoolSourceResourceTypeMapper::GetIpamPoolSourceResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("ResourceRegion");
    if(!resourceRegionNode.IsNull())
    {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("ResourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPoolSourceResourceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << IpamPoolSourceResourceTypeMapper::GetNameForIpamPoolSourceResourceType(m_resourceType) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }

}

void IpamPoolSourceResourceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << IpamPoolSourceResourceTypeMapper::GetNameForIpamPoolSourceResourceType(m_resourceType) << "&";
  }
  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if(m_resourceOwnerHasBeenSet)
  {
      oStream << location << ".ResourceOwner=" << StringUtils::URLEncode(m_resourceOwner.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
