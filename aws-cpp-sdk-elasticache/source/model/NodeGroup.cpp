/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticache/model/NodeGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElastiCache
{
namespace Model
{

NodeGroup::NodeGroup() : 
    m_nodeGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryEndpointHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_nodeGroupMembersHasBeenSet(false)
{
}

NodeGroup::NodeGroup(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_primaryEndpointHasBeenSet(false),
    m_slotsHasBeenSet(false),
    m_nodeGroupMembersHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroup& NodeGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nodeGroupIdNode = resultNode.FirstChild("NodeGroupId");
    if(!nodeGroupIdNode.IsNull())
    {
      m_nodeGroupId = StringUtils::Trim(nodeGroupIdNode.GetText().c_str());
      m_nodeGroupIdHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode primaryEndpointNode = resultNode.FirstChild("PrimaryEndpoint");
    if(!primaryEndpointNode.IsNull())
    {
      m_primaryEndpoint = primaryEndpointNode;
      m_primaryEndpointHasBeenSet = true;
    }
    XmlNode slotsNode = resultNode.FirstChild("Slots");
    if(!slotsNode.IsNull())
    {
      m_slots = StringUtils::Trim(slotsNode.GetText().c_str());
      m_slotsHasBeenSet = true;
    }
    XmlNode nodeGroupMembersNode = resultNode.FirstChild("NodeGroupMembers");
    if(!nodeGroupMembersNode.IsNull())
    {
      XmlNode nodeGroupMembersMember = nodeGroupMembersNode.FirstChild("NodeGroupMember");
      while(!nodeGroupMembersMember.IsNull())
      {
        m_nodeGroupMembers.push_back(nodeGroupMembersMember);
        nodeGroupMembersMember = nodeGroupMembersMember.NextNode("NodeGroupMember");
      }

      m_nodeGroupMembersHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_primaryEndpointHasBeenSet)
  {
      Aws::StringStream primaryEndpointLocationAndMemberSs;
      primaryEndpointLocationAndMemberSs << location << index << locationValue << ".PrimaryEndpoint";
      m_primaryEndpoint.OutputToStream(oStream, primaryEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_slotsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }

  if(m_nodeGroupMembersHasBeenSet)
  {
      unsigned nodeGroupMembersIdx = 1;
      for(auto& item : m_nodeGroupMembers)
      {
        Aws::StringStream nodeGroupMembersSs;
        nodeGroupMembersSs << location << index << locationValue << ".NodeGroupMember." << nodeGroupMembersIdx++;
        item.OutputToStream(oStream, nodeGroupMembersSs.str().c_str());
      }
  }

}

void NodeGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_primaryEndpointHasBeenSet)
  {
      Aws::String primaryEndpointLocationAndMember(location);
      primaryEndpointLocationAndMember += ".PrimaryEndpoint";
      m_primaryEndpoint.OutputToStream(oStream, primaryEndpointLocationAndMember.c_str());
  }
  if(m_slotsHasBeenSet)
  {
      oStream << location << ".Slots=" << StringUtils::URLEncode(m_slots.c_str()) << "&";
  }
  if(m_nodeGroupMembersHasBeenSet)
  {
      unsigned nodeGroupMembersIdx = 1;
      for(auto& item : m_nodeGroupMembers)
      {
        Aws::StringStream nodeGroupMembersSs;
        nodeGroupMembersSs << location <<  ".NodeGroupMember." << nodeGroupMembersIdx++;
        item.OutputToStream(oStream, nodeGroupMembersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
