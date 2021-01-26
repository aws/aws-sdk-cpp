/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_partitionCountHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

PlacementGroup::PlacementGroup(const XmlNode& xmlNode) : 
    m_groupNameHasBeenSet(false),
    m_state(PlacementGroupState::NOT_SET),
    m_stateHasBeenSet(false),
    m_strategy(PlacementStrategy::NOT_SET),
    m_strategyHasBeenSet(false),
    m_partitionCount(0),
    m_partitionCountHasBeenSet(false),
    m_groupIdHasBeenSet(false),
    m_tagsHasBeenSet(false)
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
      m_groupName = Aws::Utils::Xml::DecodeEscapedXmlText(groupNameNode.GetText());
      m_groupNameHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = PlacementGroupStateMapper::GetPlacementGroupStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()).c_str());
      m_stateHasBeenSet = true;
    }
    XmlNode strategyNode = resultNode.FirstChild("strategy");
    if(!strategyNode.IsNull())
    {
      m_strategy = PlacementStrategyMapper::GetPlacementStrategyForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(strategyNode.GetText()).c_str()).c_str());
      m_strategyHasBeenSet = true;
    }
    XmlNode partitionCountNode = resultNode.FirstChild("partitionCount");
    if(!partitionCountNode.IsNull())
    {
      m_partitionCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(partitionCountNode.GetText()).c_str()).c_str());
      m_partitionCountHasBeenSet = true;
    }
    XmlNode groupIdNode = resultNode.FirstChild("groupId");
    if(!groupIdNode.IsNull())
    {
      m_groupId = Aws::Utils::Xml::DecodeEscapedXmlText(groupIdNode.GetText());
      m_groupIdHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
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

  if(m_groupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
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
  if(m_groupIdHasBeenSet)
  {
      oStream << location << ".GroupId=" << StringUtils::URLEncode(m_groupId.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
