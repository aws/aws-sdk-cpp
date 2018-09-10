/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
    m_allocationStrategyHasBeenSet(false)
{
}

OnDemandOptions::OnDemandOptions(const XmlNode& xmlNode) : 
    m_allocationStrategy(FleetOnDemandAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false)
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
      m_allocationStrategy = FleetOnDemandAllocationStrategyMapper::GetFleetOnDemandAllocationStrategyForName(StringUtils::Trim(allocationStrategyNode.GetText().c_str()).c_str());
      m_allocationStrategyHasBeenSet = true;
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

}

void OnDemandOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << FleetOnDemandAllocationStrategyMapper::GetNameForFleetOnDemandAllocationStrategy(m_allocationStrategy) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
