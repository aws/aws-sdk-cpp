/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_ownerIdHasBeenSet(false),
    m_capacityReservationArnHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
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
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_endDateType(EndDateType::NOT_SET),
    m_endDateTypeHasBeenSet(false),
    m_instanceMatchCriteria(InstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_capacityReservationFleetIdHasBeenSet(false),
    m_placementGroupArnHasBeenSet(false),
    m_capacityAllocationsHasBeenSet(false)
{
}

CapacityReservation::CapacityReservation(const XmlNode& xmlNode) : 
    m_capacityReservationIdHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_capacityReservationArnHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
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
    m_startDateHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_endDateType(EndDateType::NOT_SET),
    m_endDateTypeHasBeenSet(false),
    m_instanceMatchCriteria(InstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_outpostArnHasBeenSet(false),
    m_capacityReservationFleetIdHasBeenSet(false),
    m_placementGroupArnHasBeenSet(false),
    m_capacityAllocationsHasBeenSet(false)
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
      m_capacityReservationId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationIdNode.GetText());
      m_capacityReservationIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if(!ownerIdNode.IsNull())
    {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode capacityReservationArnNode = resultNode.FirstChild("capacityReservationArn");
    if(!capacityReservationArnNode.IsNull())
    {
      m_capacityReservationArn = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationArnNode.GetText());
      m_capacityReservationArnHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instancePlatformNode = resultNode.FirstChild("instancePlatform");
    if(!instancePlatformNode.IsNull())
    {
      m_instancePlatform = CapacityReservationInstancePlatformMapper::GetCapacityReservationInstancePlatformForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePlatformNode.GetText()).c_str()).c_str());
      m_instancePlatformHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = CapacityReservationTenancyMapper::GetCapacityReservationTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
    XmlNode totalInstanceCountNode = resultNode.FirstChild("totalInstanceCount");
    if(!totalInstanceCountNode.IsNull())
    {
      m_totalInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalInstanceCountNode.GetText()).c_str()).c_str());
      m_totalInstanceCountHasBeenSet = true;
    }
    XmlNode availableInstanceCountNode = resultNode.FirstChild("availableInstanceCount");
    if(!availableInstanceCountNode.IsNull())
    {
      m_availableInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableInstanceCountNode.GetText()).c_str()).c_str());
      m_availableInstanceCountHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("ebsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedNode.GetText()).c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode ephemeralStorageNode = resultNode.FirstChild("ephemeralStorage");
    if(!ephemeralStorageNode.IsNull())
    {
      m_ephemeralStorage = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ephemeralStorageNode.GetText()).c_str()).c_str());
      m_ephemeralStorageHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityReservationStateMapper::GetCapacityReservationStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("startDate");
    if(!startDateNode.IsNull())
    {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode endDateTypeNode = resultNode.FirstChild("endDateType");
    if(!endDateTypeNode.IsNull())
    {
      m_endDateType = EndDateTypeMapper::GetEndDateTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateTypeNode.GetText()).c_str()).c_str());
      m_endDateTypeHasBeenSet = true;
    }
    XmlNode instanceMatchCriteriaNode = resultNode.FirstChild("instanceMatchCriteria");
    if(!instanceMatchCriteriaNode.IsNull())
    {
      m_instanceMatchCriteria = InstanceMatchCriteriaMapper::GetInstanceMatchCriteriaForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMatchCriteriaNode.GetText()).c_str()).c_str());
      m_instanceMatchCriteriaHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
    XmlNode outpostArnNode = resultNode.FirstChild("outpostArn");
    if(!outpostArnNode.IsNull())
    {
      m_outpostArn = Aws::Utils::Xml::DecodeEscapedXmlText(outpostArnNode.GetText());
      m_outpostArnHasBeenSet = true;
    }
    XmlNode capacityReservationFleetIdNode = resultNode.FirstChild("capacityReservationFleetId");
    if(!capacityReservationFleetIdNode.IsNull())
    {
      m_capacityReservationFleetId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetIdNode.GetText());
      m_capacityReservationFleetIdHasBeenSet = true;
    }
    XmlNode placementGroupArnNode = resultNode.FirstChild("placementGroupArn");
    if(!placementGroupArnNode.IsNull())
    {
      m_placementGroupArn = Aws::Utils::Xml::DecodeEscapedXmlText(placementGroupArnNode.GetText());
      m_placementGroupArnHasBeenSet = true;
    }
    XmlNode capacityAllocationsNode = resultNode.FirstChild("capacityAllocationSet");
    if(!capacityAllocationsNode.IsNull())
    {
      XmlNode capacityAllocationsMember = capacityAllocationsNode.FirstChild("item");
      while(!capacityAllocationsMember.IsNull())
      {
        m_capacityAllocations.push_back(capacityAllocationsMember);
        capacityAllocationsMember = capacityAllocationsMember.NextNode("item");
      }

      m_capacityAllocationsHasBeenSet = true;
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

  if(m_ownerIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if(m_capacityReservationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationArn=" << StringUtils::URLEncode(m_capacityReservationArn.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
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

  if(m_startDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_outpostArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }

  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }

  if(m_placementGroupArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlacementGroupArn=" << StringUtils::URLEncode(m_placementGroupArn.c_str()) << "&";
  }

  if(m_capacityAllocationsHasBeenSet)
  {
      unsigned capacityAllocationsIdx = 1;
      for(auto& item : m_capacityAllocations)
      {
        Aws::StringStream capacityAllocationsSs;
        capacityAllocationsSs << location << index << locationValue << ".CapacityAllocationSet." << capacityAllocationsIdx++;
        item.OutputToStream(oStream, capacityAllocationsSs.str().c_str());
      }
  }

}

void CapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_ownerIdHasBeenSet)
  {
      oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if(m_capacityReservationArnHasBeenSet)
  {
      oStream << location << ".CapacityReservationArn=" << StringUtils::URLEncode(m_capacityReservationArn.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
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
  if(m_startDateHasBeenSet)
  {
      oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_outpostArnHasBeenSet)
  {
      oStream << location << ".OutpostArn=" << StringUtils::URLEncode(m_outpostArn.c_str()) << "&";
  }
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }
  if(m_placementGroupArnHasBeenSet)
  {
      oStream << location << ".PlacementGroupArn=" << StringUtils::URLEncode(m_placementGroupArn.c_str()) << "&";
  }
  if(m_capacityAllocationsHasBeenSet)
  {
      unsigned capacityAllocationsIdx = 1;
      for(auto& item : m_capacityAllocations)
      {
        Aws::StringStream capacityAllocationsSs;
        capacityAllocationsSs << location <<  ".CapacityAllocationSet." << capacityAllocationsIdx++;
        item.OutputToStream(oStream, capacityAllocationsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
