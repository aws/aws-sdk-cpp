/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamDiscoveredResourceCidr.h>
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

IpamDiscoveredResourceCidr::IpamDiscoveredResourceCidr() : 
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceType(IpamResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipUsage(0.0),
    m_ipUsageHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
}

IpamDiscoveredResourceCidr::IpamDiscoveredResourceCidr(const XmlNode& xmlNode) : 
    m_ipamResourceDiscoveryIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceType(IpamResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipUsage(0.0),
    m_ipUsageHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_sampleTimeHasBeenSet(false)
{
  *this = xmlNode;
}

IpamDiscoveredResourceCidr& IpamDiscoveredResourceCidr::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipamResourceDiscoveryIdNode = resultNode.FirstChild("ipamResourceDiscoveryId");
    if(!ipamResourceDiscoveryIdNode.IsNull())
    {
      m_ipamResourceDiscoveryId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamResourceDiscoveryIdNode.GetText());
      m_ipamResourceDiscoveryIdHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if(!resourceRegionNode.IsNull())
    {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if(!resourceOwnerIdNode.IsNull())
    {
      m_resourceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerIdNode.GetText());
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode resourceCidrNode = resultNode.FirstChild("resourceCidr");
    if(!resourceCidrNode.IsNull())
    {
      m_resourceCidr = Aws::Utils::Xml::DecodeEscapedXmlText(resourceCidrNode.GetText());
      m_resourceCidrHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = IpamResourceTypeMapper::GetIpamResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceTagsNode = resultNode.FirstChild("resourceTagSet");
    if(!resourceTagsNode.IsNull())
    {
      XmlNode resourceTagsMember = resourceTagsNode.FirstChild("item");
      while(!resourceTagsMember.IsNull())
      {
        m_resourceTags.push_back(resourceTagsMember);
        resourceTagsMember = resourceTagsMember.NextNode("item");
      }

      m_resourceTagsHasBeenSet = true;
    }
    XmlNode ipUsageNode = resultNode.FirstChild("ipUsage");
    if(!ipUsageNode.IsNull())
    {
      m_ipUsage = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ipUsageNode.GetText()).c_str()).c_str());
      m_ipUsageHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode sampleTimeNode = resultNode.FirstChild("sampleTime");
    if(!sampleTimeNode.IsNull())
    {
      m_sampleTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampleTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_sampleTimeHasBeenSet = true;
    }
  }

  return *this;
}

void IpamDiscoveredResourceCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if(m_resourceCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceCidr=" << StringUtils::URLEncode(m_resourceCidr.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << IpamResourceTypeMapper::GetNameForIpamResourceType(m_resourceType) << "&";
  }

  if(m_resourceTagsHasBeenSet)
  {
      unsigned resourceTagsIdx = 1;
      for(auto& item : m_resourceTags)
      {
        Aws::StringStream resourceTagsSs;
        resourceTagsSs << location << index << locationValue << ".ResourceTagSet." << resourceTagsIdx++;
        item.OutputToStream(oStream, resourceTagsSs.str().c_str());
      }
  }

  if(m_ipUsageHasBeenSet)
  {
        oStream << location << index << locationValue << ".IpUsage=" << StringUtils::URLEncode(m_ipUsage) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_sampleTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IpamDiscoveredResourceCidr::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipamResourceDiscoveryIdHasBeenSet)
  {
      oStream << location << ".IpamResourceDiscoveryId=" << StringUtils::URLEncode(m_ipamResourceDiscoveryId.c_str()) << "&";
  }
  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if(m_resourceCidrHasBeenSet)
  {
      oStream << location << ".ResourceCidr=" << StringUtils::URLEncode(m_resourceCidr.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << IpamResourceTypeMapper::GetNameForIpamResourceType(m_resourceType) << "&";
  }
  if(m_resourceTagsHasBeenSet)
  {
      unsigned resourceTagsIdx = 1;
      for(auto& item : m_resourceTags)
      {
        Aws::StringStream resourceTagsSs;
        resourceTagsSs << location <<  ".ResourceTagSet." << resourceTagsIdx++;
        item.OutputToStream(oStream, resourceTagsSs.str().c_str());
      }
  }
  if(m_ipUsageHasBeenSet)
  {
        oStream << location << ".IpUsage=" << StringUtils::URLEncode(m_ipUsage) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_sampleTimeHasBeenSet)
  {
      oStream << location << ".SampleTime=" << StringUtils::URLEncode(m_sampleTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
