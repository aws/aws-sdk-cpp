/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
    m_predictedCapacity(0),
    m_predictedCapacityHasBeenSet(false),
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
    m_serviceLinkedRoleARNHasBeenSet(false),
    m_maxInstanceLifetime(0),
    m_maxInstanceLifetimeHasBeenSet(false),
    m_capacityRebalance(false),
    m_capacityRebalanceHasBeenSet(false),
    m_warmPoolConfigurationHasBeenSet(false),
    m_warmPoolSize(0),
    m_warmPoolSizeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_desiredCapacityTypeHasBeenSet(false),
    m_defaultInstanceWarmup(0),
    m_defaultInstanceWarmupHasBeenSet(false),
    m_trafficSourcesHasBeenSet(false)
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
    m_predictedCapacity(0),
    m_predictedCapacityHasBeenSet(false),
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
    m_serviceLinkedRoleARNHasBeenSet(false),
    m_maxInstanceLifetime(0),
    m_maxInstanceLifetimeHasBeenSet(false),
    m_capacityRebalance(false),
    m_capacityRebalanceHasBeenSet(false),
    m_warmPoolConfigurationHasBeenSet(false),
    m_warmPoolSize(0),
    m_warmPoolSizeHasBeenSet(false),
    m_contextHasBeenSet(false),
    m_desiredCapacityTypeHasBeenSet(false),
    m_defaultInstanceWarmup(0),
    m_defaultInstanceWarmupHasBeenSet(false),
    m_trafficSourcesHasBeenSet(false)
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
      m_autoScalingGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupNameNode.GetText());
      m_autoScalingGroupNameHasBeenSet = true;
    }
    XmlNode autoScalingGroupARNNode = resultNode.FirstChild("AutoScalingGroupARN");
    if(!autoScalingGroupARNNode.IsNull())
    {
      m_autoScalingGroupARN = Aws::Utils::Xml::DecodeEscapedXmlText(autoScalingGroupARNNode.GetText());
      m_autoScalingGroupARNHasBeenSet = true;
    }
    XmlNode launchConfigurationNameNode = resultNode.FirstChild("LaunchConfigurationName");
    if(!launchConfigurationNameNode.IsNull())
    {
      m_launchConfigurationName = Aws::Utils::Xml::DecodeEscapedXmlText(launchConfigurationNameNode.GetText());
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
      m_minSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(minSizeNode.GetText()).c_str()).c_str());
      m_minSizeHasBeenSet = true;
    }
    XmlNode maxSizeNode = resultNode.FirstChild("MaxSize");
    if(!maxSizeNode.IsNull())
    {
      m_maxSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxSizeNode.GetText()).c_str()).c_str());
      m_maxSizeHasBeenSet = true;
    }
    XmlNode desiredCapacityNode = resultNode.FirstChild("DesiredCapacity");
    if(!desiredCapacityNode.IsNull())
    {
      m_desiredCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredCapacityNode.GetText()).c_str()).c_str());
      m_desiredCapacityHasBeenSet = true;
    }
    XmlNode predictedCapacityNode = resultNode.FirstChild("PredictedCapacity");
    if(!predictedCapacityNode.IsNull())
    {
      m_predictedCapacity = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(predictedCapacityNode.GetText()).c_str()).c_str());
      m_predictedCapacityHasBeenSet = true;
    }
    XmlNode defaultCooldownNode = resultNode.FirstChild("DefaultCooldown");
    if(!defaultCooldownNode.IsNull())
    {
      m_defaultCooldown = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultCooldownNode.GetText()).c_str()).c_str());
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
      m_healthCheckType = Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckTypeNode.GetText());
      m_healthCheckTypeHasBeenSet = true;
    }
    XmlNode healthCheckGracePeriodNode = resultNode.FirstChild("HealthCheckGracePeriod");
    if(!healthCheckGracePeriodNode.IsNull())
    {
      m_healthCheckGracePeriod = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(healthCheckGracePeriodNode.GetText()).c_str()).c_str());
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
      m_createdTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdTimeNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
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
      m_placementGroup = Aws::Utils::Xml::DecodeEscapedXmlText(placementGroupNode.GetText());
      m_placementGroupHasBeenSet = true;
    }
    XmlNode vPCZoneIdentifierNode = resultNode.FirstChild("VPCZoneIdentifier");
    if(!vPCZoneIdentifierNode.IsNull())
    {
      m_vPCZoneIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(vPCZoneIdentifierNode.GetText());
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
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
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
      m_newInstancesProtectedFromScaleIn = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(newInstancesProtectedFromScaleInNode.GetText()).c_str()).c_str());
      m_newInstancesProtectedFromScaleInHasBeenSet = true;
    }
    XmlNode serviceLinkedRoleARNNode = resultNode.FirstChild("ServiceLinkedRoleARN");
    if(!serviceLinkedRoleARNNode.IsNull())
    {
      m_serviceLinkedRoleARN = Aws::Utils::Xml::DecodeEscapedXmlText(serviceLinkedRoleARNNode.GetText());
      m_serviceLinkedRoleARNHasBeenSet = true;
    }
    XmlNode maxInstanceLifetimeNode = resultNode.FirstChild("MaxInstanceLifetime");
    if(!maxInstanceLifetimeNode.IsNull())
    {
      m_maxInstanceLifetime = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxInstanceLifetimeNode.GetText()).c_str()).c_str());
      m_maxInstanceLifetimeHasBeenSet = true;
    }
    XmlNode capacityRebalanceNode = resultNode.FirstChild("CapacityRebalance");
    if(!capacityRebalanceNode.IsNull())
    {
      m_capacityRebalance = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(capacityRebalanceNode.GetText()).c_str()).c_str());
      m_capacityRebalanceHasBeenSet = true;
    }
    XmlNode warmPoolConfigurationNode = resultNode.FirstChild("WarmPoolConfiguration");
    if(!warmPoolConfigurationNode.IsNull())
    {
      m_warmPoolConfiguration = warmPoolConfigurationNode;
      m_warmPoolConfigurationHasBeenSet = true;
    }
    XmlNode warmPoolSizeNode = resultNode.FirstChild("WarmPoolSize");
    if(!warmPoolSizeNode.IsNull())
    {
      m_warmPoolSize = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(warmPoolSizeNode.GetText()).c_str()).c_str());
      m_warmPoolSizeHasBeenSet = true;
    }
    XmlNode contextNode = resultNode.FirstChild("Context");
    if(!contextNode.IsNull())
    {
      m_context = Aws::Utils::Xml::DecodeEscapedXmlText(contextNode.GetText());
      m_contextHasBeenSet = true;
    }
    XmlNode desiredCapacityTypeNode = resultNode.FirstChild("DesiredCapacityType");
    if(!desiredCapacityTypeNode.IsNull())
    {
      m_desiredCapacityType = Aws::Utils::Xml::DecodeEscapedXmlText(desiredCapacityTypeNode.GetText());
      m_desiredCapacityTypeHasBeenSet = true;
    }
    XmlNode defaultInstanceWarmupNode = resultNode.FirstChild("DefaultInstanceWarmup");
    if(!defaultInstanceWarmupNode.IsNull())
    {
      m_defaultInstanceWarmup = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultInstanceWarmupNode.GetText()).c_str()).c_str());
      m_defaultInstanceWarmupHasBeenSet = true;
    }
    XmlNode trafficSourcesNode = resultNode.FirstChild("TrafficSources");
    if(!trafficSourcesNode.IsNull())
    {
      XmlNode trafficSourcesMember = trafficSourcesNode.FirstChild("member");
      while(!trafficSourcesMember.IsNull())
      {
        m_trafficSources.push_back(trafficSourcesMember);
        trafficSourcesMember = trafficSourcesMember.NextNode("member");
      }

      m_trafficSourcesHasBeenSet = true;
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

  if(m_predictedCapacityHasBeenSet)
  {
      oStream << location << index << locationValue << ".PredictedCapacity=" << m_predictedCapacity << "&";
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
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

  if(m_maxInstanceLifetimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaxInstanceLifetime=" << m_maxInstanceLifetime << "&";
  }

  if(m_capacityRebalanceHasBeenSet)
  {
      oStream << location << index << locationValue << ".CapacityRebalance=" << std::boolalpha << m_capacityRebalance << "&";
  }

  if(m_warmPoolConfigurationHasBeenSet)
  {
      Aws::StringStream warmPoolConfigurationLocationAndMemberSs;
      warmPoolConfigurationLocationAndMemberSs << location << index << locationValue << ".WarmPoolConfiguration";
      m_warmPoolConfiguration.OutputToStream(oStream, warmPoolConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_warmPoolSizeHasBeenSet)
  {
      oStream << location << index << locationValue << ".WarmPoolSize=" << m_warmPoolSize << "&";
  }

  if(m_contextHasBeenSet)
  {
      oStream << location << index << locationValue << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }

  if(m_desiredCapacityTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".DesiredCapacityType=" << StringUtils::URLEncode(m_desiredCapacityType.c_str()) << "&";
  }

  if(m_defaultInstanceWarmupHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultInstanceWarmup=" << m_defaultInstanceWarmup << "&";
  }

  if(m_trafficSourcesHasBeenSet)
  {
      unsigned trafficSourcesIdx = 1;
      for(auto& item : m_trafficSources)
      {
        Aws::StringStream trafficSourcesSs;
        trafficSourcesSs << location << index << locationValue << ".TrafficSources.member." << trafficSourcesIdx++;
        item.OutputToStream(oStream, trafficSourcesSs.str().c_str());
      }
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
  if(m_predictedCapacityHasBeenSet)
  {
      oStream << location << ".PredictedCapacity=" << m_predictedCapacity << "&";
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
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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
  if(m_maxInstanceLifetimeHasBeenSet)
  {
      oStream << location << ".MaxInstanceLifetime=" << m_maxInstanceLifetime << "&";
  }
  if(m_capacityRebalanceHasBeenSet)
  {
      oStream << location << ".CapacityRebalance=" << std::boolalpha << m_capacityRebalance << "&";
  }
  if(m_warmPoolConfigurationHasBeenSet)
  {
      Aws::String warmPoolConfigurationLocationAndMember(location);
      warmPoolConfigurationLocationAndMember += ".WarmPoolConfiguration";
      m_warmPoolConfiguration.OutputToStream(oStream, warmPoolConfigurationLocationAndMember.c_str());
  }
  if(m_warmPoolSizeHasBeenSet)
  {
      oStream << location << ".WarmPoolSize=" << m_warmPoolSize << "&";
  }
  if(m_contextHasBeenSet)
  {
      oStream << location << ".Context=" << StringUtils::URLEncode(m_context.c_str()) << "&";
  }
  if(m_desiredCapacityTypeHasBeenSet)
  {
      oStream << location << ".DesiredCapacityType=" << StringUtils::URLEncode(m_desiredCapacityType.c_str()) << "&";
  }
  if(m_defaultInstanceWarmupHasBeenSet)
  {
      oStream << location << ".DefaultInstanceWarmup=" << m_defaultInstanceWarmup << "&";
  }
  if(m_trafficSourcesHasBeenSet)
  {
      unsigned trafficSourcesIdx = 1;
      for(auto& item : m_trafficSources)
      {
        Aws::StringStream trafficSourcesSs;
        trafficSourcesSs << location <<  ".TrafficSources.member." << trafficSourcesIdx++;
        item.OutputToStream(oStream, trafficSourcesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace AutoScaling
} // namespace Aws
