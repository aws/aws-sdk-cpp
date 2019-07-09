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

#include <aws/ec2/model/CapacityReservation.h>
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

CapacityReservation::CapacityReservation() : 
    m_capacityReservationIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_tenancy(CapacityReservationTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_totalInstanceCount(0),
    m_totalInstanceCountHasBeenSet(false),
    m_availableInstanceCount(0),
    m_availableInstanceCountHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_ephemeralStorage(false),
    m_ephemeralStorageHasBeenSet(false),
    m_state(CapacityReservationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_endDateType(EndDateType::NOT_SET),
    m_endDateTypeHasBeenSet(false),
    m_instanceMatchCriteria(InstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CapacityReservation::CapacityReservation(const XmlNode& xmlNode) : 
    m_capacityReservationIdHasBeenSet(false),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_tenancy(CapacityReservationTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_totalInstanceCount(0),
    m_totalInstanceCountHasBeenSet(false),
    m_availableInstanceCount(0),
    m_availableInstanceCountHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_ephemeralStorage(false),
    m_ephemeralStorageHasBeenSet(false),
    m_state(CapacityReservationState::NOT_SET),
    m_stateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_endDateType(EndDateType::NOT_SET),
    m_endDateTypeHasBeenSet(false),
    m_instanceMatchCriteria(InstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservation& CapacityReservation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationIdNode = resultNode.FirstChild("capacityReservationId");
    if(!capacityReservationIdNode.IsNull())
    {
      m_capacityReservationId = capacityReservationIdNode.GetText();
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instancePlatformNode = resultNode.FirstChild("instancePlatform");
    if(!instancePlatformNode.IsNull())
    {
      m_instancePlatform = CapacityReservationInstancePlatformMapper::GetCapacityReservationInstancePlatformForName(StringUtils::Trim(instancePlatformNode.GetText().c_str()).c_str());
      m_instancePlatformHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = CapacityReservationTenancyMapper::GetCapacityReservationTenancyForName(StringUtils::Trim(tenancyNode.GetText().c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
    XmlNode totalInstanceCountNode = resultNode.FirstChild("totalInstanceCount");
    if(!totalInstanceCountNode.IsNull())
    {
      m_totalInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(totalInstanceCountNode.GetText().c_str()).c_str());
      m_totalInstanceCountHasBeenSet = true;
    }
    XmlNode availableInstanceCountNode = resultNode.FirstChild("availableInstanceCount");
    if(!availableInstanceCountNode.IsNull())
    {
      m_availableInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(availableInstanceCountNode.GetText().c_str()).c_str());
      m_availableInstanceCountHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("ebsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(ebsOptimizedNode.GetText().c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode ephemeralStorageNode = resultNode.FirstChild("ephemeralStorage");
    if(!ephemeralStorageNode.IsNull())
    {
      m_ephemeralStorage = StringUtils::ConvertToBool(StringUtils::Trim(ephemeralStorageNode.GetText().c_str()).c_str());
      m_ephemeralStorageHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityReservationStateMapper::GetCapacityReservationStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(endDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode endDateTypeNode = resultNode.FirstChild("endDateType");
    if(!endDateTypeNode.IsNull())
    {
      m_endDateType = EndDateTypeMapper::GetEndDateTypeForName(StringUtils::Trim(endDateTypeNode.GetText().c_str()).c_str());
      m_endDateTypeHasBeenSet = true;
    }
    XmlNode instanceMatchCriteriaNode = resultNode.FirstChild("instanceMatchCriteria");
    if(!instanceMatchCriteriaNode.IsNull())
    {
      m_instanceMatchCriteria = InstanceMatchCriteriaMapper::GetInstanceMatchCriteriaForName(StringUtils::Trim(instanceMatchCriteriaNode.GetText().c_str()).c_str());
      m_instanceMatchCriteriaHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(createDateNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
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

void CapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }

  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy) << "&";
  }

  if(m_totalInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalInstanceCount=" << m_totalInstanceCount << "&";
  }

  if(m_availableInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailableInstanceCount=" << m_availableInstanceCount << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_ephemeralStorageHasBeenSet)
  {
      oStream << location << index << locationValue << ".EphemeralStorage=" << std::boolalpha << m_ephemeralStorage << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << CapacityReservationStateMapper::GetNameForCapacityReservationState(m_state) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDateType=" << EndDateTypeMapper::GetNameForEndDateType(m_endDateType) << "&";
  }

  if(m_instanceMatchCriteriaHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMatchCriteria=" << InstanceMatchCriteriaMapper::GetNameForInstanceMatchCriteria(m_instanceMatchCriteria) << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

void CapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << CapacityReservationTenancyMapper::GetNameForCapacityReservationTenancy(m_tenancy) << "&";
  }
  if(m_totalInstanceCountHasBeenSet)
  {
      oStream << location << ".TotalInstanceCount=" << m_totalInstanceCount << "&";
  }
  if(m_availableInstanceCountHasBeenSet)
  {
      oStream << location << ".AvailableInstanceCount=" << m_availableInstanceCount << "&";
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_ephemeralStorageHasBeenSet)
  {
      oStream << location << ".EphemeralStorage=" << std::boolalpha << m_ephemeralStorage << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << CapacityReservationStateMapper::GetNameForCapacityReservationState(m_state) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateTypeHasBeenSet)
  {
      oStream << location << ".EndDateType=" << EndDateTypeMapper::GetNameForEndDateType(m_endDateType) << "&";
  }
  if(m_instanceMatchCriteriaHasBeenSet)
  {
      oStream << location << ".InstanceMatchCriteria=" << InstanceMatchCriteriaMapper::GetNameForInstanceMatchCriteria(m_instanceMatchCriteria) << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
