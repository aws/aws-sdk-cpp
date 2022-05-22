/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamResourceCidr.h>
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

IpamResourceCidr::IpamResourceCidr() : 
    m_ipamIdHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceType(IpamResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipUsage(0.0),
    m_ipUsageHasBeenSet(false),
    m_complianceStatus(IpamComplianceStatus::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_managementState(IpamManagementState::NOT_SET),
    m_managementStateHasBeenSet(false),
    m_overlapStatus(IpamOverlapStatus::NOT_SET),
    m_overlapStatusHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
}

IpamResourceCidr::IpamResourceCidr(const XmlNode& xmlNode) : 
    m_ipamIdHasBeenSet(false),
    m_ipamScopeIdHasBeenSet(false),
    m_ipamPoolIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceType(IpamResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceTagsHasBeenSet(false),
    m_ipUsage(0.0),
    m_ipUsageHasBeenSet(false),
    m_complianceStatus(IpamComplianceStatus::NOT_SET),
    m_complianceStatusHasBeenSet(false),
    m_managementState(IpamManagementState::NOT_SET),
    m_managementStateHasBeenSet(false),
    m_overlapStatus(IpamOverlapStatus::NOT_SET),
    m_overlapStatusHasBeenSet(false),
    m_vpcIdHasBeenSet(false)
{
  *this = xmlNode;
}

IpamResourceCidr& IpamResourceCidr::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if(!ipamIdNode.IsNull())
    {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
    }
    XmlNode ipamScopeIdNode = resultNode.FirstChild("ipamScopeId");
    if(!ipamScopeIdNode.IsNull())
    {
      m_ipamScopeId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamScopeIdNode.GetText());
      m_ipamScopeIdHasBeenSet = true;
    }
    XmlNode ipamPoolIdNode = resultNode.FirstChild("ipamPoolId");
    if(!ipamPoolIdNode.IsNull())
    {
      m_ipamPoolId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPoolIdNode.GetText());
      m_ipamPoolIdHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if(!resourceRegionNode.IsNull())
    {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if(!resourceOwnerIdNode.IsNull())
    {
      m_resourceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerIdNode.GetText());
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceNameNode = resultNode.FirstChild("resourceName");
    if(!resourceNameNode.IsNull())
    {
      m_resourceName = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNameNode.GetText());
      m_resourceNameHasBeenSet = true;
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
    XmlNode complianceStatusNode = resultNode.FirstChild("complianceStatus");
    if(!complianceStatusNode.IsNull())
    {
      m_complianceStatus = IpamComplianceStatusMapper::GetIpamComplianceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(complianceStatusNode.GetText()).c_str()).c_str());
      m_complianceStatusHasBeenSet = true;
    }
    XmlNode managementStateNode = resultNode.FirstChild("managementState");
    if(!managementStateNode.IsNull())
    {
      m_managementState = IpamManagementStateMapper::GetIpamManagementStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managementStateNode.GetText()).c_str()).c_str());
      m_managementStateHasBeenSet = true;
    }
    XmlNode overlapStatusNode = resultNode.FirstChild("overlapStatus");
    if(!overlapStatusNode.IsNull())
    {
      m_overlapStatus = IpamOverlapStatusMapper::GetIpamOverlapStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(overlapStatusNode.GetText()).c_str()).c_str());
      m_overlapStatusHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
  }

  return *this;
}

void IpamResourceCidr::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_ipamIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if(m_ipamScopeIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }

  if(m_ipamPoolIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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

  if(m_complianceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComplianceStatus=" << IpamComplianceStatusMapper::GetNameForIpamComplianceStatus(m_complianceStatus) << "&";
  }

  if(m_managementStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagementState=" << IpamManagementStateMapper::GetNameForIpamManagementState(m_managementState) << "&";
  }

  if(m_overlapStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".OverlapStatus=" << IpamOverlapStatusMapper::GetNameForIpamOverlapStatus(m_overlapStatus) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

}

void IpamResourceCidr::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_ipamIdHasBeenSet)
  {
      oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
  if(m_ipamScopeIdHasBeenSet)
  {
      oStream << location << ".IpamScopeId=" << StringUtils::URLEncode(m_ipamScopeId.c_str()) << "&";
  }
  if(m_ipamPoolIdHasBeenSet)
  {
      oStream << location << ".IpamPoolId=" << StringUtils::URLEncode(m_ipamPoolId.c_str()) << "&";
  }
  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceNameHasBeenSet)
  {
      oStream << location << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
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
  if(m_complianceStatusHasBeenSet)
  {
      oStream << location << ".ComplianceStatus=" << IpamComplianceStatusMapper::GetNameForIpamComplianceStatus(m_complianceStatus) << "&";
  }
  if(m_managementStateHasBeenSet)
  {
      oStream << location << ".ManagementState=" << IpamManagementStateMapper::GetNameForIpamManagementState(m_managementState) << "&";
  }
  if(m_overlapStatusHasBeenSet)
  {
      oStream << location << ".OverlapStatus=" << IpamOverlapStatusMapper::GetNameForIpamOverlapStatus(m_overlapStatus) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
