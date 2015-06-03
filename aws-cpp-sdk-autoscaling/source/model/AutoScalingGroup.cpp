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
#include <aws/autoscaling/model/AutoScalingGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::AutoScaling::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

AutoScalingGroup::AutoScalingGroup() : 
    m_autoScalingGroupARNHasBeenSet(false),
    m_minSize(0),
    m_maxSize(0),
    m_desiredCapacity(0),
    m_defaultCooldown(0),
    m_loadBalancerNamesHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_createdTime(0.0),
    m_suspendedProcessesHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_enabledMetricsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false)
{
}

AutoScalingGroup::AutoScalingGroup(const XmlNode& xmlNode) : 
    m_autoScalingGroupARNHasBeenSet(false),
    m_minSize(0),
    m_maxSize(0),
    m_desiredCapacity(0),
    m_defaultCooldown(0),
    m_loadBalancerNamesHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_createdTime(0.0),
    m_suspendedProcessesHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_enabledMetricsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false)
{
  *this = xmlNode;
}

AutoScalingGroup& AutoScalingGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    m_autoScalingGroupName = StringUtils::Trim(autoScalingGroupNameNode.GetText().c_str());
    XmlNode autoScalingGroupARNNode = resultNode.FirstChild("AutoScalingGroupARN");
    if(!autoScalingGroupARNNode.IsNull())
    {
      m_autoScalingGroupARN = StringUtils::Trim(autoScalingGroupARNNode.GetText().c_str());
      m_autoScalingGroupARNHasBeenSet = true;
    }
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    m_launchConfigurationName = StringUtils::Trim(launchConfigurationNameNode.GetText().c_str());
    XmlNode minSizeNode = resultNode.FirstChild("MinSize");
    m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(minSizeNode.GetText().c_str()).c_str());
    XmlNode maxSizeNode = resultNode.FirstChild("MaxSize");
    m_maxSize = StringUtils::ConvertToInt32(StringUtils::Trim(maxSizeNode.GetText().c_str()).c_str());
    XmlNode desiredCapacityNode = resultNode.FirstChild("DesiredCapacity");
    m_desiredCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(desiredCapacityNode.GetText().c_str()).c_str());
    XmlNode defaultCooldownNode = resultNode.FirstChild("DefaultCooldown");
    m_defaultCooldown = StringUtils::ConvertToInt32(StringUtils::Trim(defaultCooldownNode.GetText().c_str()).c_str());
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    while(!availabilityZonesNode.IsNull())
    {
      m_availabilityZones.push_back(StringUtils::Trim(availabilityZonesNode.GetText().c_str()));
      availabilityZonesNode = availabilityZonesNode.NextNode("AvailabilityZones");
    }

    XmlNode loadBalancerNamesNode = resultNode.FirstChild("LoadBalancerNames");
    if(!loadBalancerNamesNode.IsNull())
    {
      while(!loadBalancerNamesNode.IsNull())
      {
        m_loadBalancerNames.push_back(StringUtils::Trim(loadBalancerNamesNode.GetText().c_str()));
        loadBalancerNamesNode = loadBalancerNamesNode.NextNode("LoadBalancerNames");
      }

      m_loadBalancerNamesHasBeenSet = true;
    }
    XmlNode healthCheckTypeNode = resultNode.FirstChild("HealthCheckType");
    m_healthCheckType = StringUtils::Trim(healthCheckTypeNode.GetText().c_str());
    XmlNode healthCheckGracePeriodNode = resultNode.FirstChild("HealthCheckGracePeriod");
    if(!loadBalancerNamesNode.IsNull())
    {
      m_healthCheckGracePeriod = StringUtils::ConvertToInt32(StringUtils::Trim(healthCheckGracePeriodNode.GetText().c_str()).c_str());
      m_healthCheckGracePeriodHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("Instances");
    if(!instancesNode.IsNull())
    {
      while(!instancesNode.IsNull())
      {
        m_instances.push_back(instancesNode);
        instancesNode = instancesNode.NextNode("Instances");
      }

      m_instancesHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    m_createdTime = StringUtils::ConvertToDouble(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str());
    XmlNode suspendedProcessesNode = resultNode.FirstChild("SuspendedProcesses");
    if(!suspendedProcessesNode.IsNull())
    {
      while(!suspendedProcessesNode.IsNull())
      {
        m_suspendedProcesses.push_back(suspendedProcessesNode);
        suspendedProcessesNode = suspendedProcessesNode.NextNode("SuspendedProcesses");
      }

      m_suspendedProcessesHasBeenSet = true;
    }
    XmlNode placementGroupNode = resultNode.FirstChild("PlacementGroup");
    if(!suspendedProcessesNode.IsNull())
    {
      m_placementGroup = StringUtils::Trim(placementGroupNode.GetText().c_str());
      m_placementGroupHasBeenSet = true;
    }
    XmlNode vPCZoneIdentifierNode = resultNode.FirstChild("VPCZoneIdentifier");
    if(!suspendedProcessesNode.IsNull())
    {
      m_vPCZoneIdentifier = StringUtils::Trim(vPCZoneIdentifierNode.GetText().c_str());
      m_vPCZoneIdentifierHasBeenSet = true;
    }
    XmlNode enabledMetricsNode = resultNode.FirstChild("EnabledMetrics");
    if(!enabledMetricsNode.IsNull())
    {
      while(!enabledMetricsNode.IsNull())
      {
        m_enabledMetrics.push_back(enabledMetricsNode);
        enabledMetricsNode = enabledMetricsNode.NextNode("EnabledMetrics");
      }

      m_enabledMetricsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!enabledMetricsNode.IsNull())
    {
      m_status = StringUtils::Trim(statusNode.GetText().c_str());
      m_statusHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      while(!tagsNode.IsNull())
      {
        m_tags.push_back(tagsNode);
        tagsNode = tagsNode.NextNode("Tags");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode terminationPoliciesNode = resultNode.FirstChild("TerminationPolicies");
    if(!terminationPoliciesNode.IsNull())
    {
      while(!terminationPoliciesNode.IsNull())
      {
        m_terminationPolicies.push_back(StringUtils::Trim(terminationPoliciesNode.GetText().c_str()));
        terminationPoliciesNode = terminationPoliciesNode.NextNode("TerminationPolicies");
      }

      m_terminationPoliciesHasBeenSet = true;
    }
  }

  return *this;
}

void AutoScalingGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
  }
  oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  oStream << location << index << locationValue << ".MinSize=" << m_minSize << "&";
  oStream << location << index << locationValue << ".MaxSize=" << m_maxSize << "&";
  oStream << location << index << locationValue << ".DesiredCapacity=" << m_desiredCapacity << "&";
  oStream << location << index << locationValue << ".DefaultCooldown=" << m_defaultCooldown << "&";
  for(auto& item : m_availabilityZones)
  {
    oStream << location << index << locationValue << ".AvailabilityZones=" << StringUtils::URLEncode(item.c_str()) << "&";
  }
  if(m_loadBalancerNamesHasBeenSet)
  {
      for(auto& item : m_loadBalancerNames)
      {
        oStream << location << index << locationValue << ".LoadBalancerNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  oStream << location << index << locationValue << ".HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  if(m_healthCheckGracePeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }
  if(m_instancesHasBeenSet)
  {
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location << index << locationValue << ".Instances";
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  oStream << location << index << locationValue << ".CreatedTime=" << m_createdTime << "&";
  if(m_suspendedProcessesHasBeenSet)
  {
      for(auto& item : m_suspendedProcesses)
      {
        Aws::StringStream suspendedProcessesSs;
        suspendedProcessesSs << location << index << locationValue << ".SuspendedProcesses";
        item.OutputToStream(oStream, suspendedProcessesSs.str().c_str());
      }
  }
  if(m_placementGroupHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlacementGroup=" << StringUtils::URLEncode(m_placementGroup.c_str()) << "&";
  }
  if(m_vPCZoneIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".VPCZoneIdentifier=" << StringUtils::URLEncode(m_vPCZoneIdentifier.c_str()) << "&";
  }
  if(m_enabledMetricsHasBeenSet)
  {
      for(auto& item : m_enabledMetrics)
      {
        Aws::StringStream enabledMetricsSs;
        enabledMetricsSs << location << index << locationValue << ".EnabledMetrics";
        item.OutputToStream(oStream, enabledMetricsSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags";
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_terminationPoliciesHasBeenSet)
  {
      for(auto& item : m_terminationPolicies)
      {
        oStream << location << index << locationValue << ".TerminationPolicies=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

void AutoScalingGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
  }
  oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  oStream << location << ".MinSize=" << m_minSize << "&";
  oStream << location << ".MaxSize=" << m_maxSize << "&";
  oStream << location << ".DesiredCapacity=" << m_desiredCapacity << "&";
  oStream << location << ".DefaultCooldown=" << m_defaultCooldown << "&";
  for(auto& item : m_availabilityZones)
  {
    oStream << location << ".AvailabilityZones=" << StringUtils::URLEncode(item.c_str()) << "&";
  }
  if(m_loadBalancerNamesHasBeenSet)
  {
      for(auto& item : m_loadBalancerNames)
      {
        oStream << location << ".LoadBalancerNames=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  oStream << location << ".HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  if(m_healthCheckGracePeriodHasBeenSet)
  {
      oStream << location << ".HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }
  if(m_instancesHasBeenSet)
  {
      for(auto& item : m_instances)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Instances";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  oStream << location << ".CreatedTime=" << m_createdTime << "&";
  if(m_suspendedProcessesHasBeenSet)
  {
      for(auto& item : m_suspendedProcesses)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".SuspendedProcesses";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_placementGroupHasBeenSet)
  {
      oStream << location << ".PlacementGroup=" << StringUtils::URLEncode(m_placementGroup.c_str()) << "&";
  }
  if(m_vPCZoneIdentifierHasBeenSet)
  {
      oStream << location << ".VPCZoneIdentifier=" << StringUtils::URLEncode(m_vPCZoneIdentifier.c_str()) << "&";
  }
  if(m_enabledMetricsHasBeenSet)
  {
      for(auto& item : m_enabledMetrics)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".EnabledMetrics";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      for(auto& item : m_tags)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Tags";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_terminationPoliciesHasBeenSet)
  {
      for(auto& item : m_terminationPolicies)
      {
        oStream << location << ".TerminationPolicies=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}
