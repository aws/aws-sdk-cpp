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
#include <aws/autoscaling/model/AutoScalingInstanceDetails.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AutoScalingInstanceDetails::AutoScalingInstanceDetails()
{
}

AutoScalingInstanceDetails::AutoScalingInstanceDetails(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AutoScalingInstanceDetails& AutoScalingInstanceDetails::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode instanceIdNode = resultNode.FirstChild("InstanceId");
    m_instanceId = StringUtils::Trim(instanceIdNode.GetText().c_str());
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    m_autoScalingGroupName = StringUtils::Trim(autoScalingGroupNameNode.GetText().c_str());
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    m_availabilityZone = StringUtils::Trim(availabilityZoneNode.GetText().c_str());
    XmlNode lifecycleStateNode = resultNode.FirstChild("LifecycleState");
    m_lifecycleState = StringUtils::Trim(lifecycleStateNode.GetText().c_str());
    XmlNode healthStatusNode = resultNode.FirstChild("HealthStatus");
    m_healthStatus = StringUtils::Trim(healthStatusNode.GetText().c_str());
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    m_launchConfigurationName = StringUtils::Trim(launchConfigurationNameNode.GetText().c_str());
  }

  return *this;
}

void AutoScalingInstanceDetails::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  oStream << location << index << locationValue << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  oStream << location << index << locationValue << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
}

void AutoScalingInstanceDetails::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".InstanceId=" << StringUtils::URLEncode(m_instanceId.c_str()) << "&";
  oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  oStream << location << ".LifecycleState=" << StringUtils::URLEncode(m_lifecycleState.c_str()) << "&";
  oStream << location << ".HealthStatus=" << StringUtils::URLEncode(m_healthStatus.c_str()) << "&";
  oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
}
