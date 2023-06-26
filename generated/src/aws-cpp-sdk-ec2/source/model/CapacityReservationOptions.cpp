/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/CapacityReservationOptions.h>
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

CapacityReservationOptions::CapacityReservationOptions() : 
    m_usageStrategy(FleetCapacityReservationUsageStrategy::NOT_SET),
    m_usageStrategyHasBeenSet(false)
{
}

CapacityReservationOptions::CapacityReservationOptions(const XmlNode& xmlNode) : 
    m_usageStrategy(FleetCapacityReservationUsageStrategy::NOT_SET),
    m_usageStrategyHasBeenSet(false)
{
  *this = xmlNode;
}

CapacityReservationOptions& CapacityReservationOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode usageStrategyNode = resultNode.FirstChild("usageStrategy");
    if(!usageStrategyNode.IsNull())
    {
      m_usageStrategy = FleetCapacityReservationUsageStrategyMapper::GetFleetCapacityReservationUsageStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(usageStrategyNode.GetText()).c_str()).c_str());
      m_usageStrategyHasBeenSet = true;
    }
  }

  return *this;
}

void CapacityReservationOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_usageStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".UsageStrategy=" << FleetCapacityReservationUsageStrategyMapper::GetNameForFleetCapacityReservationUsageStrategy(m_usageStrategy) << "&";
  }

}

void CapacityReservationOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_usageStrategyHasBeenSet)
  {
      oStream << location << ".UsageStrategy=" << FleetCapacityReservationUsageStrategyMapper::GetNameForFleetCapacityReservationUsageStrategy(m_usageStrategy) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
