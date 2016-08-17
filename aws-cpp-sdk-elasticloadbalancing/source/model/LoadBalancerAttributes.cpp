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
#include <aws/elasticloadbalancing/model/LoadBalancerAttributes.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancing
{
namespace Model
{

LoadBalancerAttributes::LoadBalancerAttributes() : 
    m_crossZoneLoadBalancingHasBeenSet(false),
    m_accessLogHasBeenSet(false),
    m_connectionDrainingHasBeenSet(false),
    m_connectionSettingsHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
}

LoadBalancerAttributes::LoadBalancerAttributes(const XmlNode& xmlNode) : 
    m_crossZoneLoadBalancingHasBeenSet(false),
    m_accessLogHasBeenSet(false),
    m_connectionDrainingHasBeenSet(false),
    m_connectionSettingsHasBeenSet(false),
    m_additionalAttributesHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerAttributes& LoadBalancerAttributes::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode crossZoneLoadBalancingNode = resultNode.FirstChild("CrossZoneLoadBalancing");
    if(!crossZoneLoadBalancingNode.IsNull())
    {
      m_crossZoneLoadBalancing = crossZoneLoadBalancingNode;
      m_crossZoneLoadBalancingHasBeenSet = true;
    }
    XmlNode accessLogNode = resultNode.FirstChild("AccessLog");
    if(!accessLogNode.IsNull())
    {
      m_accessLog = accessLogNode;
      m_accessLogHasBeenSet = true;
    }
    XmlNode connectionDrainingNode = resultNode.FirstChild("ConnectionDraining");
    if(!connectionDrainingNode.IsNull())
    {
      m_connectionDraining = connectionDrainingNode;
      m_connectionDrainingHasBeenSet = true;
    }
    XmlNode connectionSettingsNode = resultNode.FirstChild("ConnectionSettings");
    if(!connectionSettingsNode.IsNull())
    {
      m_connectionSettings = connectionSettingsNode;
      m_connectionSettingsHasBeenSet = true;
    }
    XmlNode additionalAttributesNode = resultNode.FirstChild("AdditionalAttributes");
    if(!additionalAttributesNode.IsNull())
    {
      XmlNode additionalAttributesMember = additionalAttributesNode.FirstChild("member");
      while(!additionalAttributesMember.IsNull())
      {
        m_additionalAttributes.push_back(additionalAttributesMember);
        additionalAttributesMember = additionalAttributesMember.NextNode("member");
      }

      m_additionalAttributesHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancerAttributes::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_crossZoneLoadBalancingHasBeenSet)
  {
      Aws::StringStream crossZoneLoadBalancingLocationAndMemberSs;
      crossZoneLoadBalancingLocationAndMemberSs << location << index << locationValue << ".CrossZoneLoadBalancing";
      m_crossZoneLoadBalancing.OutputToStream(oStream, crossZoneLoadBalancingLocationAndMemberSs.str().c_str());
  }

  if(m_accessLogHasBeenSet)
  {
      Aws::StringStream accessLogLocationAndMemberSs;
      accessLogLocationAndMemberSs << location << index << locationValue << ".AccessLog";
      m_accessLog.OutputToStream(oStream, accessLogLocationAndMemberSs.str().c_str());
  }

  if(m_connectionDrainingHasBeenSet)
  {
      Aws::StringStream connectionDrainingLocationAndMemberSs;
      connectionDrainingLocationAndMemberSs << location << index << locationValue << ".ConnectionDraining";
      m_connectionDraining.OutputToStream(oStream, connectionDrainingLocationAndMemberSs.str().c_str());
  }

  if(m_connectionSettingsHasBeenSet)
  {
      Aws::StringStream connectionSettingsLocationAndMemberSs;
      connectionSettingsLocationAndMemberSs << location << index << locationValue << ".ConnectionSettings";
      m_connectionSettings.OutputToStream(oStream, connectionSettingsLocationAndMemberSs.str().c_str());
  }

  if(m_additionalAttributesHasBeenSet)
  {
      unsigned additionalAttributesIdx = 1;
      for(auto& item : m_additionalAttributes)
      {
        Aws::StringStream additionalAttributesSs;
        additionalAttributesSs << location << index << locationValue << ".AdditionalAttributes.member." << additionalAttributesIdx++;
        item.OutputToStream(oStream, additionalAttributesSs.str().c_str());
      }
  }

}

void LoadBalancerAttributes::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_crossZoneLoadBalancingHasBeenSet)
  {
      Aws::String crossZoneLoadBalancingLocationAndMember(location);
      crossZoneLoadBalancingLocationAndMember += ".CrossZoneLoadBalancing";
      m_crossZoneLoadBalancing.OutputToStream(oStream, crossZoneLoadBalancingLocationAndMember.c_str());
  }
  if(m_accessLogHasBeenSet)
  {
      Aws::String accessLogLocationAndMember(location);
      accessLogLocationAndMember += ".AccessLog";
      m_accessLog.OutputToStream(oStream, accessLogLocationAndMember.c_str());
  }
  if(m_connectionDrainingHasBeenSet)
  {
      Aws::String connectionDrainingLocationAndMember(location);
      connectionDrainingLocationAndMember += ".ConnectionDraining";
      m_connectionDraining.OutputToStream(oStream, connectionDrainingLocationAndMember.c_str());
  }
  if(m_connectionSettingsHasBeenSet)
  {
      Aws::String connectionSettingsLocationAndMember(location);
      connectionSettingsLocationAndMember += ".ConnectionSettings";
      m_connectionSettings.OutputToStream(oStream, connectionSettingsLocationAndMember.c_str());
  }
  if(m_additionalAttributesHasBeenSet)
  {
      unsigned additionalAttributesIdx = 1;
      for(auto& item : m_additionalAttributes)
      {
        Aws::StringStream additionalAttributesSs;
        additionalAttributesSs << location <<  ".AdditionalAttributes.member." << additionalAttributesIdx++;
        item.OutputToStream(oStream, additionalAttributesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
