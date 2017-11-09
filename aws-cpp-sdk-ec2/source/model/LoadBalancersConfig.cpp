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
