/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/FleetSpotCapacityRebalanceRequest.h>
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

FleetSpotCapacityRebalanceRequest::FleetSpotCapacityRebalanceRequest() : 
    m_replacementStrategy(FleetReplacementStrategy::NOT_SET),
    m_replacementStrategyHasBeenSet(false)
{
}

FleetSpotCapacityRebalanceRequest::FleetSpotCapacityRebalanceRequest(const XmlNode& xmlNode) : 
    m_replacementStrategy(FleetReplacementStrategy::NOT_SET),
    m_replacementStrategyHasBeenSet(false)
{
  *this = xmlNode;
}

FleetSpotCapacityRebalanceRequest& FleetSpotCapacityRebalanceRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode replacementStrategyNode = resultNode.FirstChild("ReplacementStrategy");
    if(!replacementStrategyNode.IsNull())
    {
      m_replacementStrategy = FleetReplacementStrategyMapper::GetFleetReplacementStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replacementStrategyNode.GetText()).c_str()).c_str());
      m_replacementStrategyHasBeenSet = true;
    }
  }

  return *this;
}

void FleetSpotCapacityRebalanceRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_replacementStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReplacementStrategy=" << FleetReplacementStrategyMapper::GetNameForFleetReplacementStrategy(m_replacementStrategy) << "&";
  }

}

void FleetSpotCapacityRebalanceRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_replacementStrategyHasBeenSet)
  {
      oStream << location << ".ReplacementStrategy=" << FleetReplacementStrategyMapper::GetNameForFleetReplacementStrategy(m_replacementStrategy) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
