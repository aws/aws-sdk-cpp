﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticache/model/NodeGroupUpdateStatus.h>
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

NodeGroupUpdateStatus::NodeGroupUpdateStatus() : 
    m_nodeGroupIdHasBeenSet(false),
    m_nodeGroupMemberUpdateStatusHasBeenSet(false)
{
}

NodeGroupUpdateStatus::NodeGroupUpdateStatus(const XmlNode& xmlNode) : 
    m_nodeGroupIdHasBeenSet(false),
    m_nodeGroupMemberUpdateStatusHasBeenSet(false)
{
  *this = xmlNode;
}

NodeGroupUpdateStatus& NodeGroupUpdateStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nodeGroupIdNode = resultNode.FirstChild("NodeGroupId");
    if(!nodeGroupIdNode.IsNull())
    {
      m_nodeGroupId = Aws::Utils::Xml::DecodeEscapedXmlText(nodeGroupIdNode.GetText());
      m_nodeGroupIdHasBeenSet = true;
    }
    XmlNode nodeGroupMemberUpdateStatusNode = resultNode.FirstChild("NodeGroupMemberUpdateStatus");
    if(!nodeGroupMemberUpdateStatusNode.IsNull())
    {
      XmlNode nodeGroupMemberUpdateStatusMember = nodeGroupMemberUpdateStatusNode.FirstChild("NodeGroupMemberUpdateStatus");
      while(!nodeGroupMemberUpdateStatusMember.IsNull())
      {
        m_nodeGroupMemberUpdateStatus.push_back(nodeGroupMemberUpdateStatusMember);
        nodeGroupMemberUpdateStatusMember = nodeGroupMemberUpdateStatusMember.NextNode("NodeGroupMemberUpdateStatus");
      }

      m_nodeGroupMemberUpdateStatusHasBeenSet = true;
    }
  }

  return *this;
}

void NodeGroupUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }

  if(m_nodeGroupMemberUpdateStatusHasBeenSet)
  {
      unsigned nodeGroupMemberUpdateStatusIdx = 1;
      for(auto& item : m_nodeGroupMemberUpdateStatus)
      {
        Aws::StringStream nodeGroupMemberUpdateStatusSs;
        nodeGroupMemberUpdateStatusSs << location << index << locationValue << ".NodeGroupMemberUpdateStatus." << nodeGroupMemberUpdateStatusIdx++;
        item.OutputToStream(oStream, nodeGroupMemberUpdateStatusSs.str().c_str());
      }
  }

}

void NodeGroupUpdateStatus::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nodeGroupIdHasBeenSet)
  {
      oStream << location << ".NodeGroupId=" << StringUtils::URLEncode(m_nodeGroupId.c_str()) << "&";
  }
  if(m_nodeGroupMemberUpdateStatusHasBeenSet)
  {
      unsigned nodeGroupMemberUpdateStatusIdx = 1;
      for(auto& item : m_nodeGroupMemberUpdateStatus)
      {
        Aws::StringStream nodeGroupMemberUpdateStatusSs;
        nodeGroupMemberUpdateStatusSs << location <<  ".NodeGroupMemberUpdateStatus." << nodeGroupMemberUpdateStatusIdx++;
        item.OutputToStream(oStream, nodeGroupMemberUpdateStatusSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElastiCache
} // namespace Aws
