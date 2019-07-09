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

#include <aws/autoscaling/model/AutoScalingGroup.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace AutoScaling
{
namespace Model
{

AutoScalingGroup::AutoScalingGroup() : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_autoScalingGroupARNHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_defaultCooldown(0),
    m_defaultCooldownHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_targetGroupARNsHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_suspendedProcessesHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_enabledMetricsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_newInstancesProtectedFromScaleIn(false),
    m_newInstancesProtectedFromScaleInHasBeenSet(false),
    m_serviceLinkedRoleARNHasBeenSet(false)
{
}

AutoScalingGroup::AutoScalingGroup(const XmlNode& xmlNode) : 
    m_autoScalingGroupNameHasBeenSet(false),
    m_autoScalingGroupARNHasBeenSet(false),
    m_launchConfigurationNameHasBeenSet(false),
    m_launchTemplateHasBeenSet(false),
    m_mixedInstancesPolicyHasBeenSet(false),
    m_minSize(0),
    m_minSizeHasBeenSet(false),
    m_maxSize(0),
    m_maxSizeHasBeenSet(false),
    m_desiredCapacity(0),
    m_desiredCapacityHasBeenSet(false),
    m_defaultCooldown(0),
    m_defaultCooldownHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_loadBalancerNamesHasBeenSet(false),
    m_targetGroupARNsHasBeenSet(false),
    m_healthCheckTypeHasBeenSet(false),
    m_healthCheckGracePeriod(0),
    m_healthCheckGracePeriodHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_suspendedProcessesHasBeenSet(false),
    m_placementGroupHasBeenSet(false),
    m_vPCZoneIdentifierHasBeenSet(false),
    m_enabledMetricsHasBeenSet(false),
    m_statusHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_terminationPoliciesHasBeenSet(false),
    m_newInstancesProtectedFromScaleIn(false),
    m_newInstancesProtectedFromScaleInHasBeenSet(false),
    m_serviceLinkedRoleARNHasBeenSet(false)
{
  *this = xmlNode;
}

AutoScalingGroup& AutoScalingGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode autoScalingGroupNameNode = resultNode.FirstChild("AutoScalingGroupName");
    if(!autoScalingGroupNameNode.IsNull())
    {
      m_autoScalingGroupName = autoScalingGroupNameNode.GetText();
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode autoScalingGroupARNNode = resultNode.FirstChild("AutoScalingGroupARN");
    if(!autoScalingGroupARNNode.IsNull())
    {
      m_autoScalingGroupARN = autoScalingGroupARNNode.GetText();
      m_autoScalingGroupARNHasBeenSet = true;
    }
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    if(!launchConfigurationNameNode.IsNull())
    {
      m_launchConfigurationName = launchConfigurationNameNode.GetText();
      m_launchConfigurationNameHasBeenSet = true;
    }
    XmlNode launchTemplateNode = resultNode.FirstChild("LaunchTemplate");
    if(!launchTemplateNode.IsNull())
    {
      m_launchTemplate = launchTemplateNode;
      m_launchTemplateHasBeenSet = true;
    }
    XmlNode mixedInstancesPolicyNode = resultNode.FirstChild("MixedInstancesPolicy");
    if(!mixedInstancesPolicyNode.IsNull())
    {
      m_mixedInstancesPolicy = mixedInstancesPolicyNode;
      m_mixedInstancesPolicyHasBeenSet = true;
    }
    XmlNode minSizeNode = resultNode.FirstChild("MinSize");
    if(!minSizeNode.IsNull())
    {
      m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(minSizeNode.GetText().c_str()).c_str());
      m_minSizeHasBeenSet = true;
    }
    XmlNode maxSizeNode = resultNode.FirstChild("MaxSize");
    if(!maxSizeNode.IsNull())
    {
      m_maxSize = StringUtils::ConvertToInt32(StringUtils::Trim(maxSizeNode.GetText().c_str()).c_str());
      m_maxSizeHasBeenSet = true;
    }
    XmlNode desiredCapacityNode = resultNode.FirstChild("DesiredCapacity");
    if(!desiredCapacityNode.IsNull())
    {
      m_desiredCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(desiredCapacityNode.GetText().c_str()).c_str());
      m_desiredCapacityHasBeenSet = true;
    }
    XmlNode defaultCooldownNode = resultNode.FirstChild("DefaultCooldown");
    if(!defaultCooldownNode.IsNull())
    {
      m_defaultCooldown = StringUtils::ConvertToInt32(StringUtils::Trim(defaultCooldownNode.GetText().c_str()).c_str());
      m_defaultCooldownHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("member");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("member");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode loadBalancerNamesNode = resultNode.FirstChild("LoadBalancerNames");
    if(!loadBalancerNamesNode.IsNull())
    {
      XmlNode loadBalancerNamesMember = loadBalancerNamesNode.FirstChild("member");
      while(!loadBalancerNamesMember.IsNull())
      {
        m_loadBalancerNames.push_back(loadBalancerNamesMember.GetText());
        loadBalancerNamesMember = loadBalancerNamesMember.NextNode("member");
      }

      m_loadBalancerNamesHasBeenSet = true;
    }
    XmlNode targetGroupARNsNode = resultNode.FirstChild("TargetGroupARNs");
    if(!targetGroupARNsNode.IsNull())
    {
      XmlNode targetGroupARNsMember = targetGroupARNsNode.FirstChild("member");
      while(!targetGroupARNsMember.IsNull())
      {
        m_targetGroupARNs.push_back(targetGroupARNsMember.GetText());
        targetGroupARNsMember = targetGroupARNsMember.NextNode("member");
      }

      m_targetGroupARNsHasBeenSet = true;
    }
    XmlNode healthCheckTypeNode = resultNode.FirstChild("HealthCheckType");
    if(!healthCheckTypeNode.IsNull())
    {
      m_healthCheckType = healthCheckTypeNode.GetText();
      m_healthCheckTypeHasBeenSet = true;
    }
    XmlNode healthCheckGracePeriodNode = resultNode.FirstChild("HealthCheckGracePeriod");
    if(!healthCheckGracePeriodNode.IsNull())
    {
      m_healthCheckGracePeriod = StringUtils::ConvertToInt32(StringUtils::Trim(healthCheckGracePeriodNode.GetText().c_str()).c_str());
      m_healthCheckGracePeriodHasBeenSet = true;
    }
    XmlNode instancesNode = resultNode.FirstChild("Instances");
    if(!instancesNode.IsNull())
    {
      XmlNode instancesMember = instancesNode.FirstChild("member");
      while(!instancesMember.IsNull())
      {
        m_instances.push_back(instancesMember);
        instancesMember = instancesMember.NextNode("member");
      }

      m_instancesHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode suspendedProcessesNode = resultNode.FirstChild("SuspendedProcesses");
    if(!suspendedProcessesNode.IsNull())
    {
      XmlNode suspendedProcessesMember = suspendedProcessesNode.FirstChild("member");
      while(!suspendedProcessesMember.IsNull())
      {
        m_suspendedProcesses.push_back(suspendedProcessesMember);
        suspendedProcessesMember = suspendedProcessesMember.NextNode("member");
      }

      m_suspendedProcessesHasBeenSet = true;
    }
    XmlNode placementGroupNode = resultNode.FirstChild("PlacementGroup");
    if(!placementGroupNode.IsNull())
    {
      m_placementGroup = placementGroupNode.GetText();
      m_placementGroupHasBeenSet = true;
    }
    XmlNode vPCZoneIdentifierNode = resultNode.FirstChild("VPCZoneIdentifier");
    if(!vPCZoneIdentifierNode.IsNull())
    {
      m_vPCZoneIdentifier = vPCZoneIdentifierNode.GetText();
      m_vPCZoneIdentifierHasBeenSet = true;
    }
    XmlNode enabledMetricsNode = resultNode.FirstChild("EnabledMetrics");
    if(!enabledMetricsNode.IsNull())
    {
      XmlNode enabledMetricsMember = enabledMetricsNode.FirstChild("member");
      while(!enabledMetricsMember.IsNull())
      {
        m_enabledMetrics.push_back(enabledMetricsMember);
        enabledMetricsMember = enabledMetricsMember.NextNode("member");
      }

      m_enabledMetricsHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode.GetText();
      m_statusHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("member");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("member");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode terminationPoliciesNode = resultNode.FirstChild("TerminationPolicies");
    if(!terminationPoliciesNode.IsNull())
    {
      XmlNode terminationPoliciesMember = terminationPoliciesNode.FirstChild("member");
      while(!terminationPoliciesMember.IsNull())
      {
        m_terminationPolicies.push_back(terminationPoliciesMember.GetText());
        terminationPoliciesMember = terminationPoliciesMember.NextNode("member");
      }

      m_terminationPoliciesHasBeenSet = true;
    }
    XmlNode newInstancesProtectedFromScaleInNode = resultNode.FirstChild("NewInstancesProtectedFromScaleIn");
    if(!newInstancesProtectedFromScaleInNode.IsNull())
    {
      m_newInstancesProtectedFromScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(newInstancesProtectedFromScaleInNode.GetText().c_str()).c_str());
      m_newInstancesProtectedFromScaleInHasBeenSet = true;
    }
    XmlNode serviceLinkedRoleARNNode = resultNode.FirstChild("ServiceLinkedRoleARN");
    if(!serviceLinkedRoleARNNode.IsNull())
    {
      m_serviceLinkedRoleARN = serviceLinkedRoleARNNode.GetText();
      m_serviceLinkedRoleARNHasBeenSet = true;
    }
  }

  return *this;
}

void AutoScalingGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }

  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
  }

  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }

  if(m_launchTemplateHasBeenSet)
  {
      Aws::StringStream launchTemplateLocationAndMemberSs;
      launchTemplateLocationAndMemberSs << location << index << locationValue << ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMemberSs.str().c_str());
  }

  if(m_mixedInstancesPolicyHasBeenSet)
  {
      Aws::StringStream mixedInstancesPolicyLocationAndMemberSs;
      mixedInstancesPolicyLocationAndMemberSs << location << index << locationValue << ".MixedInstancesPolicy";
      m_mixedInstancesPolicy.OutputToStream(oStream, mixedInstancesPolicyLocationAndMemberSs.str().c_str());
  }

  if(m_minSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MinSize=" << m_minSize << "&";
  }

  if(m_maxSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxSize=" << m_maxSize << "&";
  }

  if(m_desiredCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredCapacity=" << m_desiredCapacity << "&";
  }

  if(m_defaultCooldownHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultCooldown=" << m_defaultCooldown << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZones.member." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_loadBalancerNamesHasBeenSet)
  {
      unsigned loadBalancerNamesIdx = 1;
      for(auto& item : m_loadBalancerNames)
      {
        oStream << location << index << locationValue << ".LoadBalancerNames.member." << loadBalancerNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_targetGroupARNsHasBeenSet)
  {
      unsigned targetGroupARNsIdx = 1;
      for(auto& item : m_targetGroupARNs)
      {
        oStream << location << index << locationValue << ".TargetGroupARNs.member." << targetGroupARNsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_healthCheckTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  }

  if(m_healthCheckGracePeriodHasBeenSet)
  {
      oStream << location << index << locationValue << ".HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }

  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location << index << locationValue << ".Instances.member." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }

  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_suspendedProcessesHasBeenSet)
  {
      unsigned suspendedProcessesIdx = 1;
      for(auto& item : m_suspendedProcesses)
      {
        Aws::StringStream suspendedProcessesSs;
        suspendedProcessesSs << location << index << locationValue << ".SuspendedProcesses.member." << suspendedProcessesIdx++;
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
      unsigned enabledMetricsIdx = 1;
      for(auto& item : m_enabledMetrics)
      {
        Aws::StringStream enabledMetricsSs;
        enabledMetricsSs << location << index << locationValue << ".EnabledMetrics.member." << enabledMetricsIdx++;
        item.OutputToStream(oStream, enabledMetricsSs.str().c_str());
      }
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

  if(m_terminationPoliciesHasBeenSet)
  {
      unsigned terminationPoliciesIdx = 1;
      for(auto& item : m_terminationPolicies)
      {
        oStream << location << index << locationValue << ".TerminationPolicies.member." << terminationPoliciesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_newInstancesProtectedFromScaleInHasBeenSet)
  {
      oStream << location << index << locationValue << ".NewInstancesProtectedFromScaleIn=" << std::boolalpha << m_newInstancesProtectedFromScaleIn << "&";
  }

  if(m_serviceLinkedRoleARNHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceLinkedRoleARN=" << StringUtils::URLEncode(m_serviceLinkedRoleARN.c_str()) << "&";
  }

}

void AutoScalingGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_autoScalingGroupNameHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupName=" << StringUtils::URLEncode(m_autoScalingGroupName.c_str()) << "&";
  }
  if(m_autoScalingGroupARNHasBeenSet)
  {
      oStream << location << ".AutoScalingGroupARN=" << StringUtils::URLEncode(m_autoScalingGroupARN.c_str()) << "&";
  }
  if(m_launchConfigurationNameHasBeenSet)
  {
      oStream << location << ".LaunchConfigurationName=" << StringUtils::URLEncode(m_launchConfigurationName.c_str()) << "&";
  }
  if(m_launchTemplateHasBeenSet)
  {
      Aws::String launchTemplateLocationAndMember(location);
      launchTemplateLocationAndMember += ".LaunchTemplate";
      m_launchTemplate.OutputToStream(oStream, launchTemplateLocationAndMember.c_str());
  }
  if(m_mixedInstancesPolicyHasBeenSet)
  {
      Aws::String mixedInstancesPolicyLocationAndMember(location);
      mixedInstancesPolicyLocationAndMember += ".MixedInstancesPolicy";
      m_mixedInstancesPolicy.OutputToStream(oStream, mixedInstancesPolicyLocationAndMember.c_str());
  }
  if(m_minSizeHasBeenSet)
  {
      oStream << location << ".MinSize=" << m_minSize << "&";
  }
  if(m_maxSizeHasBeenSet)
  {
      oStream << location << ".MaxSize=" << m_maxSize << "&";
  }
  if(m_desiredCapacityHasBeenSet)
  {
      oStream << location << ".DesiredCapacity=" << m_desiredCapacity << "&";
  }
  if(m_defaultCooldownHasBeenSet)
  {
      oStream << location << ".DefaultCooldown=" << m_defaultCooldown << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZones.member." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_loadBalancerNamesHasBeenSet)
  {
      unsigned loadBalancerNamesIdx = 1;
      for(auto& item : m_loadBalancerNames)
      {
        oStream << location << ".LoadBalancerNames.member." << loadBalancerNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_targetGroupARNsHasBeenSet)
  {
      unsigned targetGroupARNsIdx = 1;
      for(auto& item : m_targetGroupARNs)
      {
        oStream << location << ".TargetGroupARNs.member." << targetGroupARNsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_healthCheckTypeHasBeenSet)
  {
      oStream << location << ".HealthCheckType=" << StringUtils::URLEncode(m_healthCheckType.c_str()) << "&";
  }
  if(m_healthCheckGracePeriodHasBeenSet)
  {
      oStream << location << ".HealthCheckGracePeriod=" << m_healthCheckGracePeriod << "&";
  }
  if(m_instancesHasBeenSet)
  {
      unsigned instancesIdx = 1;
      for(auto& item : m_instances)
      {
        Aws::StringStream instancesSs;
        instancesSs << location <<  ".Instances.member." << instancesIdx++;
        item.OutputToStream(oStream, instancesSs.str().c_str());
      }
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_suspendedProcessesHasBeenSet)
  {
      unsigned suspendedProcessesIdx = 1;
      for(auto& item : m_suspendedProcesses)
      {
        Aws::StringStream suspendedProcessesSs;
        suspendedProcessesSs << location <<  ".SuspendedProcesses.member." << suspendedProcessesIdx++;
        item.OutputToStream(oStream, suspendedProcessesSs.str().c_str());
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
      unsigned enabledMetricsIdx = 1;
      for(auto& item : m_enabledMetrics)
      {
        Aws::StringStream enabledMetricsSs;
        enabledMetricsSs << location <<  ".EnabledMetrics.member." << enabledMetricsIdx++;
        item.OutputToStream(oStream, enabledMetricsSs.str().c_str());
      }
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tags.member." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_terminationPoliciesHasBeenSet)
  {
      unsigned terminationPoliciesIdx = 1;
      for(auto& item : m_terminationPolicies)
      {
        oStream << location << ".TerminationPolicies.member." << terminationPoliciesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_newInstancesProtectedFromScaleInHasBeenSet)
  {
      oStream << location << ".NewInstancesProtectedFromScaleIn=" << std::boolalpha << m_newInstancesProtectedFromScaleIn << "&";
  }
  if(m_serviceLinkedRoleARNHasBeenSet)
  {
      oStream << location << ".ServiceLinkedRoleARN=" << StringUtils::URLEncode(m_serviceLinkedRoleARN.c_str()) << "&";
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
