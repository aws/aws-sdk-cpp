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
#include <aws/elasticbeanstalk/model/EnvironmentResourceDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticBeanstalk::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

EnvironmentResourceDescription::EnvironmentResourceDescription() : 
    m_environmentNameHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_launchConfigurationsHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_queuesHasBeenSet(false)
{
}

EnvironmentResourceDescription::EnvironmentResourceDescription(const XmlNode& xmlNode) : 
    m_environmentNameHasBeenSet(false),
    m_autoScalingGroupsHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_launchConfigurationsHasBeenSet(false),
    m_loadBalancersHasBeenSet(false),
    m_triggersHasBeenSet(false),
    m_queuesHasBeenSet(false)
{
  *this = xmlNode;
}

EnvironmentResourceDescription& EnvironmentResourceDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode environmentNameNode = resultNode.FirstChild("EnvironmentName");
    if(!environmentNameNode.IsNull())
    {
      m_environmentName = StringUtils::Trim(environmentNameNode.GetText().c_str());
      m_environmentNameHasBeenSet = true;
    }
    XmlNode autoScalingGroupsNode = resultNode.FirstChild("AutoScalingGroups");
    if(!autoScalingGroupsNode.IsNull())
    {
      while(!autoScalingGroupsNode.IsNull())
      {
        m_autoScalingGroups.push_back(autoScalingGroupsNode);
        autoScalingGroupsNode = autoScalingGroupsNode.NextNode("AutoScalingGroups");
      }

      m_autoScalingGroupsHasBeenSet = true;
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
    XmlNode launchConfigurationsNode = resultNode.FirstChild("LaunchConfigurations");
    if(!launchConfigurationsNode.IsNull())
    {
      while(!launchConfigurationsNode.IsNull())
      {
        m_launchConfigurations.push_back(launchConfigurationsNode);
        launchConfigurationsNode = launchConfigurationsNode.NextNode("LaunchConfigurations");
      }

      m_launchConfigurationsHasBeenSet = true;
    }
    XmlNode loadBalancersNode = resultNode.FirstChild("LoadBalancers");
    if(!loadBalancersNode.IsNull())
    {
      while(!loadBalancersNode.IsNull())
      {
        m_loadBalancers.push_back(loadBalancersNode);
        loadBalancersNode = loadBalancersNode.NextNode("LoadBalancers");
      }

      m_loadBalancersHasBeenSet = true;
    }
    XmlNode triggersNode = resultNode.FirstChild("Triggers");
    if(!triggersNode.IsNull())
    {
      while(!triggersNode.IsNull())
      {
        m_triggers.push_back(triggersNode);
        triggersNode = triggersNode.NextNode("Triggers");
      }

      m_triggersHasBeenSet = true;
    }
    XmlNode queuesNode = resultNode.FirstChild("Queues");
    if(!queuesNode.IsNull())
    {
      while(!queuesNode.IsNull())
      {
        m_queues.push_back(queuesNode);
        queuesNode = queuesNode.NextNode("Queues");
      }

      m_queuesHasBeenSet = true;
    }
  }

  return *this;
}

void EnvironmentResourceDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_autoScalingGroupsHasBeenSet)
  {
      for(auto& item : m_autoScalingGroups)
      {
        Aws::StringStream autoScalingGroupsSs;
        autoScalingGroupsSs << location << index << locationValue << ".AutoScalingGroups";
        item.OutputToStream(oStream, autoScalingGroupsSs.str().c_str());
      }
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
  if(m_launchConfigurationsHasBeenSet)
  {
      for(auto& item : m_launchConfigurations)
      {
        Aws::StringStream launchConfigurationsSs;
        launchConfigurationsSs << location << index << locationValue << ".LaunchConfigurations";
        item.OutputToStream(oStream, launchConfigurationsSs.str().c_str());
      }
  }
  if(m_loadBalancersHasBeenSet)
  {
      for(auto& item : m_loadBalancers)
      {
        Aws::StringStream loadBalancersSs;
        loadBalancersSs << location << index << locationValue << ".LoadBalancers";
        item.OutputToStream(oStream, loadBalancersSs.str().c_str());
      }
  }
  if(m_triggersHasBeenSet)
  {
      for(auto& item : m_triggers)
      {
        Aws::StringStream triggersSs;
        triggersSs << location << index << locationValue << ".Triggers";
        item.OutputToStream(oStream, triggersSs.str().c_str());
      }
  }
  if(m_queuesHasBeenSet)
  {
      for(auto& item : m_queues)
      {
        Aws::StringStream queuesSs;
        queuesSs << location << index << locationValue << ".Queues";
        item.OutputToStream(oStream, queuesSs.str().c_str());
      }
  }
}

void EnvironmentResourceDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_environmentNameHasBeenSet)
  {
      oStream << location << ".EnvironmentName=" << StringUtils::URLEncode(m_environmentName.c_str()) << "&";
  }
  if(m_autoScalingGroupsHasBeenSet)
  {
      for(auto& item : m_autoScalingGroups)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".AutoScalingGroups";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
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
  if(m_launchConfigurationsHasBeenSet)
  {
      for(auto& item : m_launchConfigurations)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".LaunchConfigurations";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_loadBalancersHasBeenSet)
  {
      for(auto& item : m_loadBalancers)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".LoadBalancers";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_triggersHasBeenSet)
  {
      for(auto& item : m_triggers)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Triggers";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_queuesHasBeenSet)
  {
      for(auto& item : m_queues)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".Queues";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
}
