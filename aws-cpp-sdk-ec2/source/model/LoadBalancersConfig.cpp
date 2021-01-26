/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/LoadBalancersConfig.h>
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

LoadBalancersConfig::LoadBalancersConfig() : 
    m_classicLoadBalancersConfigHasBeenSet(false),
    m_targetGroupsConfigHasBeenSet(false)
{
}

LoadBalancersConfig::LoadBalancersConfig(const XmlNode& xmlNode) : 
    m_classicLoadBalancersConfigHasBeenSet(false),
    m_targetGroupsConfigHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancersConfig& LoadBalancersConfig::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode classicLoadBalancersConfigNode = resultNode.FirstChild("classicLoadBalancersConfig");
    if(!classicLoadBalancersConfigNode.IsNull())
    {
      m_classicLoadBalancersConfig = classicLoadBalancersConfigNode;
      m_classicLoadBalancersConfigHasBeenSet = true;
    }
    XmlNode targetGroupsConfigNode = resultNode.FirstChild("targetGroupsConfig");
    if(!targetGroupsConfigNode.IsNull())
    {
      m_targetGroupsConfig = targetGroupsConfigNode;
      m_targetGroupsConfigHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancersConfig::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_classicLoadBalancersConfigHasBeenSet)
  {
      Aws::StringStream classicLoadBalancersConfigLocationAndMemberSs;
      classicLoadBalancersConfigLocationAndMemberSs << location << index << locationValue << ".ClassicLoadBalancersConfig";
      m_classicLoadBalancersConfig.OutputToStream(oStream, classicLoadBalancersConfigLocationAndMemberSs.str().c_str());
  }

  if(m_targetGroupsConfigHasBeenSet)
  {
      Aws::StringStream targetGroupsConfigLocationAndMemberSs;
      targetGroupsConfigLocationAndMemberSs << location << index << locationValue << ".TargetGroupsConfig";
      m_targetGroupsConfig.OutputToStream(oStream, targetGroupsConfigLocationAndMemberSs.str().c_str());
  }

}

void LoadBalancersConfig::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_classicLoadBalancersConfigHasBeenSet)
  {
      Aws::String classicLoadBalancersConfigLocationAndMember(location);
      classicLoadBalancersConfigLocationAndMember += ".ClassicLoadBalancersConfig";
      m_classicLoadBalancersConfig.OutputToStream(oStream, classicLoadBalancersConfigLocationAndMember.c_str());
  }
  if(m_targetGroupsConfigHasBeenSet)
  {
      Aws::String targetGroupsConfigLocationAndMember(location);
      targetGroupsConfigLocationAndMember += ".TargetGroupsConfig";
      m_targetGroupsConfig.OutputToStream(oStream, targetGroupsConfigLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
