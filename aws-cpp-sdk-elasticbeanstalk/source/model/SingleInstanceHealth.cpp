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

#include <aws/elasticbeanstalk/model/SingleInstanceHealth.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

SingleInstanceHealth::SingleInstanceHealth() : 
    m_instanceIdHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_causesHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_applicationMetricsHasBeenSet(false),
    m_systemHasBeenSet(false),
    m_deploymentHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
{
}

SingleInstanceHealth::SingleInstanceHealth(const XmlNode& xmlNode) : 
    m_instanceIdHasBeenSet(false),
    m_healthStatusHasBeenSet(false),
    m_colorHasBeenSet(false),
    m_causesHasBeenSet(false),
    m_launchedAtHasBeenSet(false),
    m_applicationMetricsHasBeenSet(false),
    m_systemHasBeenSet(false),
    m_deploymentHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceTypeHasBeenSet(false)
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
      m_instanceId = instanceIdNode.GetText();
      m_instanceIdHasBeenSet = true;
    }
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    if(!healthStatusNode.IsNull())
    {
      m_healthStatus = healthStatusNode.GetText();
      m_healthStatusHasBeenSet = true;
    }
    XmlNode colorNode = resultNode.FirstChild("Color");
    if(!colorNode.IsNull())
    {
      m_color = colorNode.GetText();
      m_colorHasBeenSet = true;
    }
    XmlNode causesNode = resultNode.FirstChild("Causes");
    if(!causesNode.IsNull())
    {
      XmlNode causesMember = causesNode.FirstChild("member");
      while(!causesMember.IsNull())
      {
        m_causes.push_back(causesMember.GetText());
        causesMember = causesMember.NextNode("member");
      }

      m_causesHasBeenSet = true;
    }
    XmlNode launchedAtNode = resultNode.FirstChild("LaunchedAt");
    if(!launchedAtNode.IsNull())
    {
      m_launchedAt = DateTime(StringUtils::Trim(launchedAtNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
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
    XmlNode deploymentNode = resultNode.FirstChild("Deployment");
    if(!deploymentNode.IsNull())
    {
      m_deployment = deploymentNode;
      m_deploymentHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = availabilityZoneNode.GetText();
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode instanceTypeNode = resultNode.FirstChild("InstanceType");
    if(!instanceTypeNode.IsNull())
    {
      m_instanceType = instanceTypeNode.GetText();
      m_instanceTypeHasBeenSet = true;
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
      unsigned causesIdx = 1;
      for(auto& item : m_causes)
      {
        oStream << location << index << locationValue << ".Causes.member." << causesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_launchedAtHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchedAt=" << StringUtils::URLEncode(m_launchedAt.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_deploymentHasBeenSet)
  {
      Aws::StringStream deploymentLocationAndMemberSs;
      deploymentLocationAndMemberSs << location << index << locationValue << ".Deployment";
      m_deployment.OutputToStream(oStream, deploymentLocationAndMemberSs.str().c_str());
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
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
      unsigned causesIdx = 1;
      for(auto& item : m_causes)
      {
        oStream << location << ".Causes.member." << causesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_launchedAtHasBeenSet)
  {
      oStream << location << ".LaunchedAt=" << StringUtils::URLEncode(m_launchedAt.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_deploymentHasBeenSet)
  {
      Aws::String deploymentLocationAndMember(location);
      deploymentLocationAndMember += ".Deployment";
      m_deployment.OutputToStream(oStream, deploymentLocationAndMember.c_str());
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_instanceTypeHasBeenSet)
  {
      oStream << location << ".InstanceType=" << StringUtils::URLEncode(m_instanceType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
