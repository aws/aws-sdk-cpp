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

#include <aws/ec2/model/SpotOptionsRequest.h>
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

SpotOptionsRequest::SpotOptionsRequest() : 
    m_allocationStrategy(SpotAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_instanceInterruptionBehavior(SpotInstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
}

SpotOptionsRequest::SpotOptionsRequest(const XmlNode& xmlNode) : 
    m_allocationStrategy(SpotAllocationStrategy::NOT_SET),
    m_allocationStrategyHasBeenSet(false),
    m_instanceInterruptionBehavior(SpotInstanceInterruptionBehavior::NOT_SET),
    m_instanceInterruptionBehaviorHasBeenSet(false)
{
  *this = xmlNode;
}

SpotOptionsRequest& SpotOptionsRequest::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationStrategyNode = resultNode.FirstChild("AllocationStrategy");
    if(!allocationStrategyNode.IsNull())
    {
      m_allocationStrategy = SpotAllocationStrategyMapper::GetSpotAllocationStrategyForName(StringUtils::Trim(allocationStrategyNode.GetText().c_str()).c_str());
      m_allocationStrategyHasBeenSet = true;
    }
    XmlNode instanceInterruptionBehaviorNode = resultNode.FirstChild("InstanceInterruptionBehavior");
    if(!instanceInterruptionBehaviorNode.IsNull())
    {
      m_instanceInterruptionBehavior = SpotInstanceInterruptionBehaviorMapper::GetSpotInstanceInterruptionBehaviorForName(StringUtils::Trim(instanceInterruptionBehaviorNode.GetText().c_str()).c_str());
      m_instanceInterruptionBehaviorHasBeenSet = true;
    }
  }

  return *this;
}

void SpotOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationStrategy=" << SpotAllocationStrategyMapper::GetNameForSpotAllocationStrategy(m_allocationStrategy) << "&";
  }

  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceInterruptionBehavior=" << SpotInstanceInterruptionBehaviorMapper::GetNameForSpotInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }

}

void SpotOptionsRequest::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationStrategyHasBeenSet)
  {
      oStream << location << ".AllocationStrategy=" << SpotAllocationStrategyMapper::GetNameForSpotAllocationStrategy(m_allocationStrategy) << "&";
  }
  if(m_instanceInterruptionBehaviorHasBeenSet)
  {
      oStream << location << ".InstanceInterruptionBehavior=" << SpotInstanceInterruptionBehaviorMapper::GetNameForSpotInstanceInterruptionBehavior(m_instanceInterruptionBehavior) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
