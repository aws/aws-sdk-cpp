/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/InstanceNetworkPerformanceOptions.h>
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

InstanceNetworkPerformanceOptions::InstanceNetworkPerformanceOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

InstanceNetworkPerformanceOptions& InstanceNetworkPerformanceOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode bandwidthWeightingNode = resultNode.FirstChild("bandwidthWeighting");
    if(!bandwidthWeightingNode.IsNull())
    {
      m_bandwidthWeighting = InstanceBandwidthWeightingMapper::GetInstanceBandwidthWeightingForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(bandwidthWeightingNode.GetText()).c_str()));
      m_bandwidthWeightingHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceNetworkPerformanceOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_bandwidthWeightingHasBeenSet)
  {
      oStream << location << index << locationValue << ".BandwidthWeighting=" << StringUtils::URLEncode(InstanceBandwidthWeightingMapper::GetNameForInstanceBandwidthWeighting(m_bandwidthWeighting)) << "&";
  }

}

void InstanceNetworkPerformanceOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_bandwidthWeightingHasBeenSet)
  {
      oStream << location << ".BandwidthWeighting=" << StringUtils::URLEncode(InstanceBandwidthWeightingMapper::GetNameForInstanceBandwidthWeighting(m_bandwidthWeighting)) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
