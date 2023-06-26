/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetCapacityReservation.h>
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

FleetCapacityReservation::FleetCapacityReservation() : 
    m_capacityReservationIdHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_totalInstanceCount(0),
    m_totalInstanceCountHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

FleetCapacityReservation::FleetCapacityReservation(const XmlNode& xmlNode) : 
    m_capacityReservationIdHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_totalInstanceCount(0),
    m_totalInstanceCountHasBeenSet(false),
    m_fulfilledCapacity(0.0),
    m_fulfilledCapacityHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_createDateHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = xmlNode;
}

FleetCapacityReservation& FleetCapacityReservation::operator =(const XmlNode& xmlNode)
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
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("instanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
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
    XmlNode totalInstanceCountNode = resultNode.FirstChild("totalInstanceCount");
    if(!totalInstanceCountNode.IsNull())
    {
      m_totalInstanceCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(totalInstanceCountNode.GetText()).c_str()).c_str());
      m_totalInstanceCountHasBeenSet = true;
    }
    XmlNode fulfilledCapacityNode = resultNode.FirstChild("fulfilledCapacity");
    if(!fulfilledCapacityNode.IsNull())
    {
      m_fulfilledCapacity = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fulfilledCapacityNode.GetText()).c_str()).c_str());
      m_fulfilledCapacityHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("ebsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedNode.GetText()).c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("createDate");
    if(!createDateNode.IsNull())
    {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode weightNode = resultNode.FirstChild("weight");
    if(!weightNode.IsNull())
    {
      m_weight = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(weightNode.GetText()).c_str()).c_str());
      m_weightHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priorityNode.GetText()).c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
  }

  return *this;
}

void FleetCapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_totalInstanceCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".TotalInstanceCount=" << m_totalInstanceCount << "&";
  }

  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << index << locationValue << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_createDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_weightHasBeenSet)
  {
        oStream << location << index << locationValue << ".Weight=" << StringUtils::URLEncode(m_weight) << "&";
  }

  if(m_priorityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Priority=" << m_priority << "&";
  }

}

void FleetCapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityReservationIdHasBeenSet)
  {
      oStream << location << ".CapacityReservationId=" << StringUtils::URLEncode(m_capacityReservationId.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_totalInstanceCountHasBeenSet)
  {
      oStream << location << ".TotalInstanceCount=" << m_totalInstanceCount << "&";
  }
  if(m_fulfilledCapacityHasBeenSet)
  {
        oStream << location << ".FulfilledCapacity=" << StringUtils::URLEncode(m_fulfilledCapacity) << "&";
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_createDateHasBeenSet)
  {
      oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_weightHasBeenSet)
  {
        oStream << location << ".Weight=" << StringUtils::URLEncode(m_weight) << "&";
  }
  if(m_priorityHasBeenSet)
  {
      oStream << location << ".Priority=" << m_priority << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
