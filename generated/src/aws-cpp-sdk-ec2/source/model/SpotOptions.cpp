/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/SpotOptions.h>
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

SpotOptions::SpotOptions() : 
    m_allocationStrategy(SpotAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_maintenanceStrategiesHasBeenSet(false),
    m_instanceInterruptionBehavior(SpotInstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false),
    m_instancePoolsToUseCount(0),
    m_instancePoolsToUseCountHasBeenSet(false),
    m_singleInstanceType(false),
    m_singleInstanceTypeHasBeenSet(false),
    m_singleAvailabilityZone(false),
    m_singleAvailabilityZoneHasBeenSet(false),
    m_minTargetCapacity(0),
    m_minTargetCapacityHasBeenSet(false),
    m_maxTotalPriceHasBeenSet(false)
{
}

SpotOptions::SpotOptions(const XmlNode& xmlNode) : 
    m_allocationStrategy(SpotAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_maintenanceStrategiesHasBeenSet(false),
    m_instanceInterruptionBehavior(SpotInstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false),
    m_instancePoolsToUseCount(0),
    m_instancePoolsToUseCountHasBeenSet(false),
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

SpotOptions& SpotOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationStrategyNode = resultNode.FirstChild("allocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = SpotAllocationStrategyMapper::GetSpotAllocationStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(allocationStrategyNode.GetText()).c_str()).c_str());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode maintenanceStrategiesNode = resultNode.FirstChild("maintenanceStrategies");
    if(!maintenanceStrategiesNode.IsNull())
    {
      m_maintenanceStrategies = maintenanceStrategiesNode;
      m_maintenanceStrategiesHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("instanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = SpotInstanceInterruptionBehaviorMapper::GetSpotInstanceInterruptionBehaviorForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instanceInterruptionBehaviorNode.GetText()).c_str()).c_str());
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
    XmlNode instancePoolsToUseCountNode = resultNode.FirstChild("instancePoolsToUseCount");
    if(!instancePoolsToUseCountNode.IsNull())
    {
      m_instancePoolsToUseCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(instancePoolsToUseCountNode.GetText()).c_str()).c_str());
      m_instancePoolsToUseCountHasBeenSet = true;
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

void SpotOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << SpotAllocationStrategyMapper::GetNameForSpotAllocationStrategy(m_allocationStrategy) << "&";
  }

  if(m_maintenanceStrategiesHasBeenSet)
  {
      Aws::StringStream maintenanceStrategiesLocationAndMemberSs;
      maintenanceStrategiesLocationAndMemberSs << location << index << locationValue << ".MaintenanceStrategies";
      m_maintenanceStrategies.OutputToStream(oStream, maintenanceStrategiesLocationAndMemberSs.str().c_str());
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << SpotInstanceInterruptionBehaviorMapper::GetNameForSpotInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }

  if(m_instancePoolsToUseCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstancePoolsToUseCount=" << m_instancePoolsToUseCount << "&";
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

void SpotOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << SpotAllocationStrategyMapper::GetNameForSpotAllocationStrategy(m_allocationStrategy) << "&";
  }
  if(m_maintenanceStrategiesHasBeenSet)
  {
      Aws::String maintenanceStrategiesLocationAndMember(location);
      maintenanceStrategiesLocationAndMember += ".MaintenanceStrategies";
      m_maintenanceStrategies.OutputToStream(oStream, maintenanceStrategiesLocationAndMember.c_str());
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << SpotInstanceInterruptionBehaviorMapper::GetNameForSpotInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }
  if(m_instancePoolsToUseCountHasBeenSet)
  {
      oStream << location << ".InstancePoolsToUseCount=" << m_instancePoolsToUseCount << "&";
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
