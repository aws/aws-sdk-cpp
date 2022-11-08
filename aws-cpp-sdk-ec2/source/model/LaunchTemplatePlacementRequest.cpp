/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LaunchTemplatePlacementRequest.h>
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

LaunchTemplatePlacementRequest::LaunchTemplatePlacementRequest() : 
    m_availabilityZoneHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_spreadDomainHasBeenSet(false),
    m_hostResourceGroupArnHasBeenSet(false),
    m_partitionNumber(0),
    m_partitionNumberHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
}

LaunchTemplatePlacementRequest::LaunchTemplatePlacementRequest(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_affinityHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_spreadDomainHasBeenSet(false),
    m_hostResourceGroupArnHasBeenSet(false),
    m_partitionNumber(0),
    m_partitionNumberHasBeenSet(false),
    m_groupIdHasBeenSet(false)
{
  *this = xmlNode;
}

LaunchTemplatePlacementRequest& LaunchTemplatePlacementRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode affinityNode = resultNode.FirstChild("Affinity");
    if(!affinityNode.IsNull())
    {
      m_affinity = Aws::Utils::Xml::DecodeEscapedXmlText(affinityNode.GetText());
      m_affinityHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("GroupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
    XmlNode hostIdNode = resultNode.FirstChild("HostId");
    if(!hostIdNode.IsNull())
    {
      m_hostId = Aws::Utils::Xml::DecodeEscapedXmlText(hostIdNode.GetText());
      m_hostIdHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("Tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = TenancyMapper::GetTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
    XmlNode spreadDomainNode = resultNode.FirstChild("SpreadDomain");
    if(!spreadDomainNode.IsNull())
    {
      m_spreadDomain = Aws::Utils::Xml::DecodeEscapedXmlText(spreadDomainNode.GetText());
      m_spreadDomainHasBeenSet = true;
    }
    XmlNode hostResourceGroupArnNode = resultNode.FirstChild("HostResourceGroupArn");
    if(!hostResourceGroupArnNode.IsNull())
    {
      m_hostResourceGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(hostResourceGroupArnNode.GetText());
      m_hostResourceGroupArnHasBeenSet = true;
    }
    XmlNode partitionNumberNode = resultNode.FirstChild("PartitionNumber");
    if(!partitionNumberNode.IsNull())
    {
      m_partitionNumber = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partitionNumberNode.GetText()).c_str()).c_str());
      m_partitionNumberHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("GroupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = Aws::Utils::Xml::DecodeEscapedXmlText(groupIdNode.GetText());
      m_groupIdHasBeenSet = true;
    }
  }

  return *this;
}

void LaunchTemplatePlacementRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_affinityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Affinity=" << StringUtils::URLEncode(m_affinity.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_hostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }

  if(m_spreadDomainHasBeenSet)
  {
      oStream << location << index << locationValue << ".SpreadDomain=" << StringUtils::URLEncode(m_spreadDomain.c_str()) << "&";
  }

  if(m_hostResourceGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostResourceGroupArn=" << StringUtils::URLEncode(m_hostResourceGroupArn.c_str()) << "&";
  }

  if(m_partitionNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartitionNumber=" << m_partitionNumber << "&";
  }

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

}

void LaunchTemplatePlacementRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_affinityHasBeenSet)
  {
      oStream << location << ".Affinity=" << StringUtils::URLEncode(m_affinity.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_hostIdHasBeenSet)
  {
      oStream << location << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }
  if(m_spreadDomainHasBeenSet)
  {
      oStream << location << ".SpreadDomain=" << StringUtils::URLEncode(m_spreadDomain.c_str()) << "&";
  }
  if(m_hostResourceGroupArnHasBeenSet)
  {
      oStream << location << ".HostResourceGroupArn=" << StringUtils::URLEncode(m_hostResourceGroupArn.c_str()) << "&";
  }
  if(m_partitionNumberHasBeenSet)
  {
      oStream << location << ".PartitionNumber=" << m_partitionNumber << "&";
  }
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
