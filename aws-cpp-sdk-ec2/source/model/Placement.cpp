/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/Placement.h>
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

Placement::Placement() : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_affinityHasBeenSet(false)
{
}

Placement::Placement(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_groupNameHasBeenSet(false),
    m_tenancy(Tenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_hostIdHasBeenSet(false),
    m_affinityHasBeenSet(false)
{
  *this = xmlNode;
}

Placement& Placement::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = StringUtils::Trim(groupNameNode.GetText().c_str());
      m_groupNameHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = TenancyMapper::GetTenancyForName(StringUtils::Trim(tenancyNode.GetText().c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
    XmlNode hostIdNode = resultNode.FirstChild("hostId");
    if(!hostIdNode.IsNull())
    {
      m_hostId = StringUtils::Trim(hostIdNode.GetText().c_str());
      m_hostIdHasBeenSet = true;
    }
    XmlNode affinityNode = resultNode.FirstChild("affinity");
    if(!affinityNode.IsNull())
    {
      m_affinity = StringUtils::Trim(affinityNode.GetText().c_str());
      m_affinityHasBeenSet = true;
    }
  }

  return *this;
}

void Placement::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }

  if(m_hostIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }

  if(m_affinityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Affinity=" << StringUtils::URLEncode(m_affinity.c_str()) << "&";
  }

}

void Placement::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << TenancyMapper::GetNameForTenancy(m_tenancy) << "&";
  }
  if(m_hostIdHasBeenSet)
  {
      oStream << location << ".HostId=" << StringUtils::URLEncode(m_hostId.c_str()) << "&";
  }
  if(m_affinityHasBeenSet)
  {
      oStream << location << ".Affinity=" << StringUtils::URLEncode(m_affinity.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
