/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/OnDemandOptions.h>
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

OnDemandOptions::OnDemandOptions() : 
    m_allocationStrategy(FleetOnDemandAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_capacityReservationOptionsHasBeenSet(false),
    m_singleInstanceType(false),
    m_singleInstanceTypeHasBeenSet(false),
    m_singleAvailabilityZone(false),
    m_singleAvailabilityZoneHasBeenSet(false),
    m_minTargetCapacity(0),
    m_minTargetCapacityHasBeenSet(false),
    m_maxTotalPriceHasBeenSet(false)
{
}

OnDemandOptions::OnDemandOptions(const XmlNode& xmlNode) : 
    m_allocationStrategy(FleetOnDemandAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_capacityReservationOptionsHasBeenSet(false),
    m_singleInstanceType(false),
    m_singleInstanceTypeHasBeenSet(false),
    m_singleAvailabilityZone(false),
    m_singleAvailabilityZoneHasBeenSet(false),
    m_minTargetCapacity(0),
    m_minTargetCapacityHasBeenSet(false),
    m_maxTotalPriceHasBeenSet(false)
{
  *this = xmlNode;
}

OnDemandOptions& OnDemandOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = FleetOnDemandAllocationStrategyMapper::GetFleetOnDemandAllocationStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText()).c_str()).c_str());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode capacityReservationOptionsNode = resultNode.FirstChild("capacityReservationOptions");
    if(!capacityReservationOptionsNode.IsNull())
    {
      m_capacityReservationOptions = capacityReservationOptionsNode;
      m_capacityReservationOptionsHasBeenSet = true;
    }
    XmlNode singleInstanceTypeNode = resultNode.FirstChild("singleInstanceType");
    if(!singleInstanceTypeNode.IsNull())
    {
      m_singleInstanceType = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(singleInstanceTypeNode.GetText()).c_str()).c_str());
      m_singleInstanceTypeHasBeenSet = true;
    }
    XmlNode singleAvailabilityZoneNode = resultNode.FirstChild("singleAvailabilityZone");
    if(!singleAvailabilityZoneNode.IsNull())
    {
      m_singleAvailabilityZone = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(singleAvailabilityZoneNode.GetText()).c_str()).c_str());
      m_singleAvailabilityZoneHasBeenSet = true;
    }
    XmlNode minTargetCapacityNode = resultNode.FirstChild("minTargetCapacity");
    if(!minTargetCapacityNode.IsNull())
    {
      m_minTargetCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minTargetCapacityNode.GetText()).c_str()).c_str());
      m_minTargetCapacityHasBeenSet = true;
    }
    XmlNode maxTotalPriceNode = resultNode.FirstChild("maxTotalPrice");
    if(!maxTotalPriceNode.IsNull())
    {
      m_maxTotalPrice = Aws::Utils::Xml::DecodeEscapedXmlText(maxTotalPriceNode.GetText());
      m_maxTotalPriceHasBeenSet = true;
    }
  }

  return *this;
}

void OnDemandOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << FleetOnDemandAllocationStrategyMapper::GetNameForFleetOnDemandAllocationStrategy(m_allocationStrategy) << "&";
  }

  if(m_capacityReservationOptionsHasBeenSet)
  {
      Aws::StringStream capacityReservationOptionsLocationAndMemberSs;
      capacityReservationOptionsLocationAndMemberSs << location << index << locationValue << ".CapacityReservationOptions";
      m_capacityReservationOptions.OutputToStream(oStream, capacityReservationOptionsLocationAndMemberSs.str().c_str());
  }

  if(m_singleInstanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SingleInstanceType=" << std::boolalpha << m_singleInstanceType << "&";
  }

  if(m_singleAvailabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".SingleAvailabilityZone=" << std::boolalpha << m_singleAvailabilityZone << "&";
  }

  if(m_minTargetCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinTargetCapacity=" << m_minTargetCapacity << "&";
  }

  if(m_maxTotalPriceHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxTotalPrice=" << StringUtils::URLEncode(m_maxTotalPrice.c_str()) << "&";
  }

}

void OnDemandOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << FleetOnDemandAllocationStrategyMapper::GetNameForFleetOnDemandAllocationStrategy(m_allocationStrategy) << "&";
  }
  if(m_capacityReservationOptionsHasBeenSet)
  {
      Aws::String capacityReservationOptionsLocationAndMember(location);
      capacityReservationOptionsLocationAndMember += ".CapacityReservationOptions";
      m_capacityReservationOptions.OutputToStream(oStream, capacityReservationOptionsLocationAndMember.c_str());
  }
  if(m_singleInstanceTypeHasBeenSet)
  {
      oStream << location << ".SingleInstanceType=" << std::boolalpha << m_singleInstanceType << "&";
  }
  if(m_singleAvailabilityZoneHasBeenSet)
  {
      oStream << location << ".SingleAvailabilityZone=" << std::boolalpha << m_singleAvailabilityZone << "&";
  }
  if(m_minTargetCapacityHasBeenSet)
  {
      oStream << location << ".MinTargetCapacity=" << m_minTargetCapacity << "&";
  }
  if(m_maxTotalPriceHasBeenSet)
  {
      oStream << location << ".MaxTotalPrice=" << StringUtils::URLEncode(m_maxTotalPrice.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
