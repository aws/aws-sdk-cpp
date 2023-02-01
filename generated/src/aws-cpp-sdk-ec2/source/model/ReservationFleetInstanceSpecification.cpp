/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ReservationFleetInstanceSpecification.h>
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

ReservationFleetInstanceSpecification::ReservationFleetInstanceSpecification() : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
}

ReservationFleetInstanceSpecification::ReservationFleetInstanceSpecification(const XmlNode& xmlNode) : 
    m_instanceType(InstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_instancePlatform(CapacityReservationInstancePlatform::NOT_SET),
    m_instancePlatformHasBeenSet(false),
    m_weight(0.0),
    m_weightHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_availabilityZoneIdHasBeenSet(false),
    m_ebsOptimized(false),
    m_ebsOptimizedHasBeenSet(false),
    m_priority(0),
    m_priorityHasBeenSet(false)
{
  *this = xmlNode;
}

ReservationFleetInstanceSpecification& ReservationFleetInstanceSpecification::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = InstanceTypeMapper::GetInstanceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceTypeNode.GetText()).c_str()).c_str());
      m_instanceTypeHasBeenSet = true;
    }
    XmlNode instancePlatformNode = resultNode.FirstChild("InstancePlatform");
    if(!instancePlatformNode.IsNull())
    {
      m_instancePlatform = CapacityReservationInstancePlatformMapper::GetCapacityReservationInstancePlatformForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePlatformNode.GetText()).c_str()).c_str());
      m_instancePlatformHasBeenSet = true;
    }
    XmlNode weightNode = resultNode.FirstChild("Weight");
    if(!weightNode.IsNull())
    {
      m_weight = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(weightNode.GetText()).c_str()).c_str());
      m_weightHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("AvailabilityZoneId");
    if(!availabilityZoneIdNode.IsNull())
    {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode ebsOptimizedNode = resultNode.FirstChild("EbsOptimized");
    if(!ebsOptimizedNode.IsNull())
    {
      m_ebsOptimized = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(ebsOptimizedNode.GetText()).c_str()).c_str());
      m_ebsOptimizedHasBeenSet = true;
    }
    XmlNode priorityNode = resultNode.FirstChild("Priority");
    if(!priorityNode.IsNull())
    {
      m_priority = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(priorityNode.GetText()).c_str()).c_str());
      m_priorityHasBeenSet = true;
    }
  }

  return *this;
}

void ReservationFleetInstanceSpecification::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }

  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }

  if(m_weightHasBeenSet)
  {
        oStream << location << index << locationValue << ".Weight=" << StringUtils::URLEncode(m_weight) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << index << locationValue << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }

  if(m_priorityHasBeenSet)
  {
      oStream << location << index << locationValue << ".Priority=" << m_priority << "&";
  }

}

void ReservationFleetInstanceSpecification::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << InstanceTypeMapper::GetNameForInstanceType(m_instanceType) << "&";
  }
  if(m_instancePlatformHasBeenSet)
  {
      oStream << location << ".InstancePlatform=" << CapacityReservationInstancePlatformMapper::GetNameForCapacityReservationInstancePlatform(m_instancePlatform) << "&";
  }
  if(m_weightHasBeenSet)
  {
        oStream << location << ".Weight=" << StringUtils::URLEncode(m_weight) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_availabilityZoneIdHasBeenSet)
  {
      oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if(m_ebsOptimizedHasBeenSet)
  {
      oStream << location << ".EbsOptimized=" << std::boolalpha << m_ebsOptimized << "&";
  }
  if(m_priorityHasBeenSet)
  {
      oStream << location << ".Priority=" << m_priority << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
