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

#include <aws/ec2/model/PlacementGroup.h>
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

PlacementGroup::PlacementGroup() : 
    m_groupNameHasBeenSet(false),
    m_state(PlacementGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_strategy(PlacementStrategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_partitionCount(0),
    m_partitionCountHasBeenSet(false)
{
}

PlacementGroup::PlacementGroup(const XmlNode& xmlNode) : 
    m_groupNameHasBeenSet(false),
    m_state(PlacementGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_strategy(PlacementStrategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_partitionCount(0),
    m_partitionCountHasBeenSet(false)
{
  *this = xmlNode;
}

PlacementGroup& PlacementGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode groupNameNode = resultNode.FirstChild("groupName");
    if(!groupNameNode.IsNull())
    {
      m_groupName = groupNameNode.GetText();
      m_groupNameHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = PlacementGroupStateMapper::GetPlacementGroupStateForName(StringUtils::Trim(stateNode.GetText().c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode strategyNode = resultNode.FirstChild("strategy");
    if(!strategyNode.IsNull())
    {
      m_strategy = PlacementStrategyMapper::GetPlacementStrategyForName(StringUtils::Trim(strategyNode.GetText().c_str()).c_str());
      m_strategyHasBeenSet = true;
    }
    XmlNode partitionCountNode = resultNode.FirstChild("partitionCount");
    if(!partitionCountNode.IsNull())
    {
      m_partitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(partitionCountNode.GetText().c_str()).c_str());
      m_partitionCountHasBeenSet = true;
    }
  }

  return *this;
}

void PlacementGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_groupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << PlacementGroupStateMapper::GetNameForPlacementGroupState(m_state) << "&";
  }

  if(m_strategyHasBeenSet)
  {
      oStream << location << index << locationValue << ".Strategy=" << PlacementStrategyMapper::GetNameForPlacementStrategy(m_strategy) << "&";
  }

  if(m_partitionCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".PartitionCount=" << m_partitionCount << "&";
  }

}

void PlacementGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_groupNameHasBeenSet)
  {
      oStream << location << ".GroupName=" << StringUtils::URLEncode(m_groupName.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << PlacementGroupStateMapper::GetNameForPlacementGroupState(m_state) << "&";
  }
  if(m_strategyHasBeenSet)
  {
      oStream << location << ".Strategy=" << PlacementStrategyMapper::GetNameForPlacementStrategy(m_strategy) << "&";
  }
  if(m_partitionCountHasBeenSet)
  {
      oStream << location << ".PartitionCount=" << m_partitionCount << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
