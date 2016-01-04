/*
* Copyright 2010-2015 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

SingleInstanceHealth::SingleInstanceHealth() : 
    m_instanceIdHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_causesHasBeenSet(false),
    m_launchedAt(0.0),
    m_launchedAtHasBeenSet(false),
    m_applicationMetricsHasBeenSet(false),
    m_systemHasBeenSet(false)
{
}

SingleInstanceHealth::SingleInstanceHealth(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_causesHasBeenSet(false),
    m_launchedAt(0.0),
    m_launchedAtHasBeenSet(false),
    m_applicationMetricsHasBeenSet(false),
    m_systemHasBeenSet(false)
{
  *this = xmlNode;
}

SingleInstanceHealth& SingleInstanceHealth::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    if(!instanceIdNode.IsNull())
    {
      m_instanceId = StringUtils::Trim(instanceIdNode.GetText().c_str());
      m_instanceIdHasBeenSet = true;
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = StringUtils::Trim(healthStatusNode.GetText().c_str());
      m_healthStatusHasBeenSet = true;
    }
    XmlNode colorNode = resultNode.FirstChild("Color");
    if(!colorNode.IsNull())
    {
      m_color = StringUtils::Trim(colorNode.GetText().c_str());
      m_colorHasBeenSet = true;
    }
    XmlNode causesNode = resultNode.FirstChild("Causes");
    if(!causesNode.IsNull())
    {
      XmlNode causesMember = causesNode.FirstChild("member");
      while(!causesMember.IsNull())
      {
        m_causes.push_back(StringUtils::Trim(causesMember.GetText().c_str()));
        causesMember = causesMember.NextNode("member");
      }

      m_causesHasBeenSet = true;
    }
    XmlNode launchedAtNode = resultNode.FirstChild("LaunchedAt");
    if(!launchedAtNode.IsNull())
    {
      m_launchedAt = StringUtils::ConvertToDouble(StringUtils::Trim(launchedAtNode.GetText().c_str()).c_str());
      m_launchedAtHasBeenSet = true;
    }
    XmlNode applicationMetricsNode = resultNode.FirstChild("ApplicationMetrics");
    if(!applicationMetricsNode.IsNull())
    {
      m_applicationMetrics = applicationMetricsNode;
      m_applicationMetricsHasBeenSet = true;
    }
    XmlNode systemNode = resultNode.FirstChild("System");
    if(!systemNode.IsNull())
    {
      m_system = systemNode;
      m_systemHasBeenSet = true;
    }
  }

  return *this;
}

void SingleInstanceHealth::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_healthStatusHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }
  if(m_colorHasBeenSet)
  {
      oStream << location << index << locationValue << ".Color=" << StringUtils::URLEncode(m_color.c_str()) << "&";
  }
  if(m_causesHasBeenSet)
  {
      for(auto& item : m_causes)
      {
        oStream << location << index << locationValue << ".Causes=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_launchedAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchedAt=" << m_launchedAt << "&";
  }
  if(m_applicationMetricsHasBeenSet)
  {
      Aws::StringStream applicationMetricsLocationAndMemberSs;
      applicationMetricsLocationAndMemberSs << location << index << locationValue << ".ApplicationMetrics";
      m_applicationMetrics.OutputToStream(oStream, applicationMetricsLocationAndMemberSs.str().c_str());
  }
  if(m_systemHasBeenSet)
  {
      Aws::StringStream systemLocationAndMemberSs;
      systemLocationAndMemberSs << location << index << locationValue << ".System";
      m_system.OutputToStream(oStream, systemLocationAndMemberSs.str().c_str());
  }
}

void SingleInstanceHealth::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_instanceIdHasBeenSet)
  {
      oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  }
  if(m_healthStatusHasBeenSet)
  {
      oStream << location << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  }
  if(m_colorHasBeenSet)
  {
      oStream << location << ".Color=" << StringUtils::URLEncode(m_color.c_str()) << "&";
  }
  if(m_causesHasBeenSet)
  {
      for(auto& item : m_causes)
      {
        oStream << location << ".Causes=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_launchedAtHasBeenSet)
  {
      oStream << location << ".LaunchedAt=" << m_launchedAt << "&";
  }
  if(m_applicationMetricsHasBeenSet)
  {
      Aws::String applicationMetricsLocationAndMember(location);
      applicationMetricsLocationAndMember += ".ApplicationMetrics";
      m_applicationMetrics.OutputToStream(oStream, applicationMetricsLocationAndMember.c_str());
  }
  if(m_systemHasBeenSet)
  {
      Aws::String systemLocationAndMember(location);
      systemLocationAndMember += ".System";
      m_system.OutputToStream(oStream, systemLocationAndMember.c_str());
  }
}
