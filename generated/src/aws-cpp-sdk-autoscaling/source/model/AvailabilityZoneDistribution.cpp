/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/autoscaling/model/AvailabilityZoneDistribution.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

AvailabilityZoneDistribution::AvailabilityZoneDistribution(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AvailabilityZoneDistribution& AvailabilityZoneDistribution::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode capacityDistributionStrategyNode = resultNode.FirstChild("CapacityDistributionStrategy");
    if(!capacityDistributionStrategyNode.IsNull())
    {
      m_capacityDistributionStrategy = CapacityDistributionStrategyMapper::GetCapacityDistributionStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityDistributionStrategyNode.GetText()).c_str()));
      m_capacityDistributionStrategyHasBeenSet = true;
    }
  }

  return *this;
}

void AvailabilityZoneDistribution::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_capacityDistributionStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityDistributionStrategy=" << StringUtils::URLEncode(CapacityDistributionStrategyMapper::GetNameForCapacityDistributionStrategy(m_capacityDistributionStrategy)) << "&";
  }

}

void AvailabilityZoneDistribution::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_capacityDistributionStrategyHasBeenSet)
  {
      oStream << location << ".CapacityDistributionStrategy=" << StringUtils::URLEncode(CapacityDistributionStrategyMapper::GetNameForCapacityDistributionStrategy(m_capacityDistributionStrategy)) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
