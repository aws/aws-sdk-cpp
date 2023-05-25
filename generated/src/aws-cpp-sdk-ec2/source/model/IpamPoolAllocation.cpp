/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamPoolAllocation.h>
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

IpamPoolAllocation::IpamPoolAllocation() : 
    m_cidrHasBeenSet(false),
    m_ipamPoolAllocationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(IpamPoolAllocationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
}

IpamPoolAllocation::IpamPoolAllocation(const XmlNode& xmlNode) : 
    m_cidrHasBeenSet(false),
    m_ipamPoolAllocationIdHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceType(IpamPoolAllocationResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerHasBeenSet(false)
{
  *this = xmlNode;
}

IpamPoolAllocation& IpamPoolAllocation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if(!cidrNode.IsNull())
    {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode ipamPoolAllocationIdNode = resultNode.FirstChild("ipamPoolAllocationId");
    if(!ipamPoolAllocationIdNode.IsNull())
    {
      m_ipamPoolAllocationId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolAllocationIdNode.GetText());
      m_ipamPoolAllocationIdHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = IpamPoolAllocationResourceTypeMapper::GetIpamPoolAllocationResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if(!resourceRegionNode.IsNull())
    {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceOwnerNode = resultNode.FirstChild("resourceOwner");
    if(!resourceOwnerNode.IsNull())
    {
      m_resourceOwner = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerNode.GetText());
      m_resourceOwnerHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPoolAllocation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if(m_ipamPoolAllocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamPoolAllocationId=" << StringUtils::URLEncode(m_ipamPoolAllocationId.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << IpamPoolAllocationResourceTypeMapper::GetNameForIpamPoolAllocationResourceType(m_resourceType) << "&";
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

void IpamPoolAllocation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_cidrHasBeenSet)
  {
      oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if(m_ipamPoolAllocationIdHasBeenSet)
  {
      oStream << location << ".IpamPoolAllocationId=" << StringUtils::URLEncode(m_ipamPoolAllocationId.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << IpamPoolAllocationResourceTypeMapper::GetNameForIpamPoolAllocationResourceType(m_resourceType) << "&";
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
