/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticloadbalancingv2/model/ForwardActionConfig.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

ForwardActionConfig::ForwardActionConfig() : 
    m_targetGroupsHasBeenSet(false),
    m_targetGroupStickinessConfigHasBeenSet(false)
{
}

ForwardActionConfig::ForwardActionConfig(const XmlNode& xmlNode) : 
    m_targetGroupsHasBeenSet(false),
    m_targetGroupStickinessConfigHasBeenSet(false)
{
  *this = xmlNode;
}

ForwardActionConfig& ForwardActionConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode targetGroupsNode = resultNode.FirstChild("TargetGroups");
    if(!targetGroupsNode.IsNull())
    {
      XmlNode targetGroupsMember = targetGroupsNode.FirstChild("member");
      while(!targetGroupsMember.IsNull())
      {
        m_targetGroups.push_back(targetGroupsMember);
        targetGroupsMember = targetGroupsMember.NextNode("member");
      }

      m_targetGroupsHasBeenSet = true;
    }
    XmlNode targetGroupStickinessConfigNode = resultNode.FirstChild("TargetGroupStickinessConfig");
    if(!targetGroupStickinessConfigNode.IsNull())
    {
      m_targetGroupStickinessConfig = targetGroupStickinessConfigNode;
      m_targetGroupStickinessConfigHasBeenSet = true;
    }
  }

  return *this;
}

void ForwardActionConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_targetGroupsHasBeenSet)
  {
      unsigned targetGroupsIdx = 1;
      for(auto& item : m_targetGroups)
      {
        Aws::StringStream targetGroupsSs;
        targetGroupsSs << location << index << locationValue << ".TargetGroups.member." << targetGroupsIdx++;
        item.OutputToStream(oStream, targetGroupsSs.str().c_str());
      }
  }

  if(m_targetGroupStickinessConfigHasBeenSet)
  {
      Aws::StringStream targetGroupStickinessConfigLocationAndMemberSs;
      targetGroupStickinessConfigLocationAndMemberSs << location << index << locationValue << ".TargetGroupStickinessConfig";
      m_targetGroupStickinessConfig.OutputToStream(oStream, targetGroupStickinessConfigLocationAndMemberSs.str().c_str());
  }

}

void ForwardActionConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_targetGroupsHasBeenSet)
  {
      unsigned targetGroupsIdx = 1;
      for(auto& item : m_targetGroups)
      {
        Aws::StringStream targetGroupsSs;
        targetGroupsSs << location <<  ".TargetGroups.member." << targetGroupsIdx++;
        item.OutputToStream(oStream, targetGroupsSs.str().c_str());
      }
  }
  if(m_targetGroupStickinessConfigHasBeenSet)
  {
      Aws::String targetGroupStickinessConfigLocationAndMember(location);
      targetGroupStickinessConfigLocationAndMember += ".TargetGroupStickinessConfig";
      m_targetGroupStickinessConfig.OutputToStream(oStream, targetGroupStickinessConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
