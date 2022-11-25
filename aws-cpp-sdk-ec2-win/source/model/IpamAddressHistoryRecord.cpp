/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/IpamAddressHistoryRecord.h>
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

IpamAddressHistoryRecord::IpamAddressHistoryRecord() : 
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceType(IpamAddressHistoryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceComplianceStatus(IpamComplianceStatus::NOT_SET),
    m_resourceComplianceStatusHasBeenSet(false),
    m_resourceOverlapStatus(IpamOverlapStatus::NOT_SET),
    m_resourceOverlapStatusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_sampledStartTimeHasBeenSet(false),
    m_sampledEndTimeHasBeenSet(false)
{
}

IpamAddressHistoryRecord::IpamAddressHistoryRecord(const XmlNode& xmlNode) : 
    m_resourceOwnerIdHasBeenSet(false),
    m_resourceRegionHasBeenSet(false),
    m_resourceType(IpamAddressHistoryResourceType::NOT_SET),
    m_resourceTypeHasBeenSet(false),
    m_resourceIdHasBeenSet(false),
    m_resourceCidrHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceComplianceStatus(IpamComplianceStatus::NOT_SET),
    m_resourceComplianceStatusHasBeenSet(false),
    m_resourceOverlapStatus(IpamOverlapStatus::NOT_SET),
    m_resourceOverlapStatusHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_sampledStartTimeHasBeenSet(false),
    m_sampledEndTimeHasBeenSet(false)
{
  *this = xmlNode;
}

IpamAddressHistoryRecord& IpamAddressHistoryRecord::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if(!resourceOwnerIdNode.IsNull())
    {
      m_resourceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerIdNode.GetText());
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode resourceRegionNode = resultNode.FirstChild("resourceRegion");
    if(!resourceRegionNode.IsNull())
    {
      m_resourceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(resourceRegionNode.GetText());
      m_resourceRegionHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("resourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = IpamAddressHistoryResourceTypeMapper::GetIpamAddressHistoryResourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText()).c_str()).c_str());
      m_resourceTypeHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if(!resourceIdNode.IsNull())
    {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode resourceCidrNode = resultNode.FirstChild("resourceCidr");
    if(!resourceCidrNode.IsNull())
    {
      m_resourceCidr = Aws::Utils::Xml::DecodeEscapedXmlText(resourceCidrNode.GetText());
      m_resourceCidrHasBeenSet = true;
    }
    XmlNode resourceNameNode = resultNode.FirstChild("resourceName");
    if(!resourceNameNode.IsNull())
    {
      m_resourceName = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNameNode.GetText());
      m_resourceNameHasBeenSet = true;
    }
    XmlNode resourceComplianceStatusNode = resultNode.FirstChild("resourceComplianceStatus");
    if(!resourceComplianceStatusNode.IsNull())
    {
      m_resourceComplianceStatus = IpamComplianceStatusMapper::GetIpamComplianceStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceComplianceStatusNode.GetText()).c_str()).c_str());
      m_resourceComplianceStatusHasBeenSet = true;
    }
    XmlNode resourceOverlapStatusNode = resultNode.FirstChild("resourceOverlapStatus");
    if(!resourceOverlapStatusNode.IsNull())
    {
      m_resourceOverlapStatus = IpamOverlapStatusMapper::GetIpamOverlapStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(resourceOverlapStatusNode.GetText()).c_str()).c_str());
      m_resourceOverlapStatusHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("vpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = Aws::Utils::Xml::DecodeEscapedXmlText(vpcIdNode.GetText());
      m_vpcIdHasBeenSet = true;
    }
    XmlNode sampledStartTimeNode = resultNode.FirstChild("sampledStartTime");
    if(!sampledStartTimeNode.IsNull())
    {
      m_sampledStartTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampledStartTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_sampledStartTimeHasBeenSet = true;
    }
    XmlNode sampledEndTimeNode = resultNode.FirstChild("sampledEndTime");
    if(!sampledEndTimeNode.IsNull())
    {
      m_sampledEndTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sampledEndTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_sampledEndTimeHasBeenSet = true;
    }
  }

  return *this;
}

void IpamAddressHistoryRecord::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << IpamAddressHistoryResourceTypeMapper::GetNameForIpamAddressHistoryResourceType(m_resourceType) << "&";
  }

  if(m_resourceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if(m_resourceCidrHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceCidr=" << StringUtils::URLEncode(m_resourceCidr.c_str()) << "&";
  }

  if(m_resourceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
  }

  if(m_resourceComplianceStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceComplianceStatus=" << IpamComplianceStatusMapper::GetNameForIpamComplianceStatus(m_resourceComplianceStatus) << "&";
  }

  if(m_resourceOverlapStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceOverlapStatus=" << IpamOverlapStatusMapper::GetNameForIpamOverlapStatus(m_resourceOverlapStatus) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_sampledStartTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampledStartTime=" << StringUtils::URLEncode(m_sampledStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sampledEndTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SampledEndTime=" << StringUtils::URLEncode(m_sampledEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void IpamAddressHistoryRecord::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_resourceOwnerIdHasBeenSet)
  {
      oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if(m_resourceRegionHasBeenSet)
  {
      oStream << location << ".ResourceRegion=" << StringUtils::URLEncode(m_resourceRegion.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << IpamAddressHistoryResourceTypeMapper::GetNameForIpamAddressHistoryResourceType(m_resourceType) << "&";
  }
  if(m_resourceIdHasBeenSet)
  {
      oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if(m_resourceCidrHasBeenSet)
  {
      oStream << location << ".ResourceCidr=" << StringUtils::URLEncode(m_resourceCidr.c_str()) << "&";
  }
  if(m_resourceNameHasBeenSet)
  {
      oStream << location << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
  }
  if(m_resourceComplianceStatusHasBeenSet)
  {
      oStream << location << ".ResourceComplianceStatus=" << IpamComplianceStatusMapper::GetNameForIpamComplianceStatus(m_resourceComplianceStatus) << "&";
  }
  if(m_resourceOverlapStatusHasBeenSet)
  {
      oStream << location << ".ResourceOverlapStatus=" << IpamOverlapStatusMapper::GetNameForIpamOverlapStatus(m_resourceOverlapStatus) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_sampledStartTimeHasBeenSet)
  {
      oStream << location << ".SampledStartTime=" << StringUtils::URLEncode(m_sampledStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sampledEndTimeHasBeenSet)
  {
      oStream << location << ".SampledEndTime=" << StringUtils::URLEncode(m_sampledEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
