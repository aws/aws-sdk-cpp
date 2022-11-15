/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationFleet.h>
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

CapacityReservationFleet::CapacityReservationFleet() : 
    m_capacityReservationFleetIdHasBeenSet(false),
    m_capacityReservationFleetArnHasBeenSet(false),
    m_state(CapacityReservationFleetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_totalFulfilledCapacity(0.0),
    m_totalFulfilledCapacityHasBeenSet(false),
    m_tenancy(FleetCapacityReservationTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceMatchCriteria(FleetInstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_allocationStrategyHasBeenSet(false),
    m_instanceTypeSpecificationsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

CapacityReservationFleet::CapacityReservationFleet(const XmlNode& xmlNode) : 
    m_capacityReservationFleetIdHasBeenSet(false),
    m_capacityReservationFleetArnHasBeenSet(false),
    m_state(CapacityReservationFleetState::NOT_SET),
    m_stateHasBeenSet(false),
    m_totalTargetCapacity(0),
    m_totalTargetCapacityHasBeenSet(false),
    m_totalFulfilledCapacity(0.0),
    m_totalFulfilledCapacityHasBeenSet(false),
    m_tenancy(FleetCapacityReservationTenancy::NOT_SET),
    m_tenancyHasBeenSet(false),
    m_endDateHasBeenSet(false),
    m_createTimeHasBeenSet(false),
    m_instanceMatchCriteria(FleetInstanceMatchCriteria::NOT_SET),
    m_instanceMatchCriteriaHasBeenSet(false),
    m_allocationStrategyHasBeenSet(false),
    m_instanceTypeSpecificationsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationFleet& CapacityReservationFleet::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityReservationFleetIdNode = resultNode.FirstChild("capacityReservationFleetId");
    if(!capacityReservationFleetIdNode.IsNull())
    {
      m_capacityReservationFleetId = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetIdNode.GetText());
      m_capacityReservationFleetIdHasBeenSet = true;
    }
    XmlNode capacityReservationFleetArnNode = resultNode.FirstChild("capacityReservationFleetArn");
    if(!capacityReservationFleetArnNode.IsNull())
    {
      m_capacityReservationFleetArn = Aws::Utils::Xml::DecodeEscapedXmlText(capacityReservationFleetArnNode.GetText());
      m_capacityReservationFleetArnHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = CapacityReservationFleetStateMapper::GetCapacityReservationFleetStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode totalTargetCapacityNode = resultNode.FirstChild("totalTargetCapacity");
    if(!totalTargetCapacityNode.IsNull())
    {
      m_totalTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalTargetCapacityNode.GetText()).c_str()).c_str());
      m_totalTargetCapacityHasBeenSet = true;
    }
    XmlNode totalFulfilledCapacityNode = resultNode.FirstChild("totalFulfilledCapacity");
    if(!totalFulfilledCapacityNode.IsNull())
    {
      m_totalFulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalFulfilledCapacityNode.GetText()).c_str()).c_str());
      m_totalFulfilledCapacityHasBeenSet = true;
    }
    XmlNode tenancyNode = resultNode.FirstChild("tenancy");
    if(!tenancyNode.IsNull())
    {
      m_tenancy = FleetCapacityReservationTenancyMapper::GetFleetCapacityReservationTenancyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(tenancyNode.GetText()).c_str()).c_str());
      m_tenancyHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("endDate");
    if(!endDateNode.IsNull())
    {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode createTimeNode = resultNode.FirstChild("createTime");
    if(!createTimeNode.IsNull())
    {
      m_createTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createTimeHasBeenSet = true;
    }
    XmlNode instanceMatchCriteriaNode = resultNode.FirstChild("instanceMatchCriteria");
    if(!instanceMatchCriteriaNode.IsNull())
    {
      m_instanceMatchCriteria = FleetInstanceMatchCriteriaMapper::GetFleetInstanceMatchCriteriaForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceMatchCriteriaNode.GetText()).c_str()).c_str());
      m_instanceMatchCriteriaHasBeenSet = true;
    }
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode instanceTypeSpecificationsNode = resultNode.FirstChild("instanceTypeSpecificationSet");
    if(!instanceTypeSpecificationsNode.IsNull())
    {
      XmlNode instanceTypeSpecificationsMember = instanceTypeSpecificationsNode.FirstChild("item");
      while(!instanceTypeSpecificationsMember.IsNull())
      {
        m_instanceTypeSpecifications.push_back(instanceTypeSpecificationsMember);
        instanceTypeSpecificationsMember = instanceTypeSpecificationsMember.NextNode("item");
      }

      m_instanceTypeSpecificationsHasBeenSet = true;
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

void CapacityReservationFleet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }

  if(m_capacityReservationFleetArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationFleetArn=" << StringUtils::URLEncode(m_capacityReservationFleetArn.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_state) << "&";
  }

  if(m_totalTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }

  if(m_totalFulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".TotalFulfilledCapacity=" << StringUtils::URLEncode(m_totalFulfilledCapacity) << "&";
  }

  if(m_tenancyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Tenancy=" << FleetCapacityReservationTenancyMapper::GetNameForFleetCapacityReservationTenancy(m_tenancy) << "&";
  }

  if(m_endDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_createTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_instanceMatchCriteriaHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceMatchCriteria=" << FleetInstanceMatchCriteriaMapper::GetNameForFleetInstanceMatchCriteria(m_instanceMatchCriteria) << "&";
  }

  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << StringUtils::URLEncode(m_allocationStrategy.c_str()) << "&";
  }

  if(m_instanceTypeSpecificationsHasBeenSet)
  {
      unsigned instanceTypeSpecificationsIdx = 1;
      for(auto& item : m_instanceTypeSpecifications)
      {
        Aws::StringStream instanceTypeSpecificationsSs;
        instanceTypeSpecificationsSs << location << index << locationValue << ".InstanceTypeSpecificationSet." << instanceTypeSpecificationsIdx++;
        item.OutputToStream(oStream, instanceTypeSpecificationsSs.str().c_str());
      }
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

void CapacityReservationFleet::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationFleetIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationFleetId=" << StringUtils::URLEncode(m_capacityReservationFleetId.c_str()) << "&";
  }
  if(m_capacityReservationFleetArnHasBeenSet)
  {
      oStream << location << ".CapacityReservationFleetArn=" << StringUtils::URLEncode(m_capacityReservationFleetArn.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << CapacityReservationFleetStateMapper::GetNameForCapacityReservationFleetState(m_state) << "&";
  }
  if(m_totalTargetCapacityHasBeenSet)
  {
      oStream << location << ".TotalTargetCapacity=" << m_totalTargetCapacity << "&";
  }
  if(m_totalFulfilledCapacityHasBeenSet)
  {
        oStream << location << ".TotalFulfilledCapacity=" << StringUtils::URLEncode(m_totalFulfilledCapacity) << "&";
  }
  if(m_tenancyHasBeenSet)
  {
      oStream << location << ".Tenancy=" << FleetCapacityReservationTenancyMapper::GetNameForFleetCapacityReservationTenancy(m_tenancy) << "&";
  }
  if(m_endDateHasBeenSet)
  {
      oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_createTimeHasBeenSet)
  {
      oStream << location << ".CreateTime=" << StringUtils::URLEncode(m_createTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_instanceMatchCriteriaHasBeenSet)
  {
      oStream << location << ".InstanceMatchCriteria=" << FleetInstanceMatchCriteriaMapper::GetNameForFleetInstanceMatchCriteria(m_instanceMatchCriteria) << "&";
  }
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << StringUtils::URLEncode(m_allocationStrategy.c_str()) << "&";
  }
  if(m_instanceTypeSpecificationsHasBeenSet)
  {
      unsigned instanceTypeSpecificationsIdx = 1;
      for(auto& item : m_instanceTypeSpecifications)
      {
        Aws::StringStream instanceTypeSpecificationsSs;
        instanceTypeSpecificationsSs << location <<  ".InstanceTypeSpecificationSet." << instanceTypeSpecificationsIdx++;
        item.OutputToStream(oStream, instanceTypeSpecificationsSs.str().c_str());
      }
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
