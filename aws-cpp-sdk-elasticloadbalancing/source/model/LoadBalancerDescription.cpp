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
#include <aws/elasticloadbalancing/model/LoadBalancerDescription.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ElasticLoadBalancing::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

LoadBalancerDescription::LoadBalancerDescription() : 
    m_loadBalancerNameHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_canonicalHostedZoneNameHasBeenSet(false),
    m_canonicalHostedZoneNameIDHasBeenSet(false),
    m_listenerDescriptionsHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_backendServerDescriptionsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_sourceSecurityGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_createdTime(0.0),
    m_createdTimeHasBeenSet(false),
    m_schemeHasBeenSet(false)
{
}

LoadBalancerDescription::LoadBalancerDescription(const XmlNode& xmlNode) : 
    m_loadBalancerNameHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_canonicalHostedZoneNameHasBeenSet(false),
    m_canonicalHostedZoneNameIDHasBeenSet(false),
    m_listenerDescriptionsHasBeenSet(false),
    m_policiesHasBeenSet(false),
    m_backendServerDescriptionsHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_subnetsHasBeenSet(false),
    m_vPCIdHasBeenSet(false),
    m_instancesHasBeenSet(false),
    m_healthCheckHasBeenSet(false),
    m_sourceSecurityGroupHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_createdTime(0.0),
    m_createdTimeHasBeenSet(false),
    m_schemeHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancerDescription& LoadBalancerDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerNameNode = resultNode.FirstChild("LoadBalancerName");
    if(!loadBalancerNameNode.IsNull())
    {
      m_loadBalancerName = StringUtils::Trim(loadBalancerNameNode.GetText().c_str());
      m_loadBalancerNameHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = StringUtils::Trim(dNSNameNode.GetText().c_str());
      m_dNSNameHasBeenSet = true;
    }
    XmlNode canonicalHostedZoneNameNode = resultNode.FirstChild("CanonicalHostedZoneName");
    if(!canonicalHostedZoneNameNode.IsNull())
    {
      m_canonicalHostedZoneName = StringUtils::Trim(canonicalHostedZoneNameNode.GetText().c_str());
      m_canonicalHostedZoneNameHasBeenSet = true;
    }
    XmlNode canonicalHostedZoneNameIDNode = resultNode.FirstChild("CanonicalHostedZoneNameID");
    if(!canonicalHostedZoneNameIDNode.IsNull())
    {
      m_canonicalHostedZoneNameID = StringUtils::Trim(canonicalHostedZoneNameIDNode.GetText().c_str());
      m_canonicalHostedZoneNameIDHasBeenSet = true;
    }
    XmlNode listenerDescriptionsNode = resultNode.FirstChild("ListenerDescriptions");
    if(!listenerDescriptionsNode.IsNull())
    {
      while(!listenerDescriptionsNode.IsNull())
      {
        m_listenerDescriptions.push_back(listenerDescriptionsNode);
        listenerDescriptionsNode = listenerDescriptionsNode.NextNode("ListenerDescriptions");
      }

      m_listenerDescriptionsHasBeenSet = true;
    }
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    if(!listenerDescriptionsNode.IsNull())
    {
      m_policies = policiesNode;
      m_policiesHasBeenSet = true;
    }
    XmlNode backendServerDescriptionsNode = resultNode.FirstChild("BackendServerDescriptions");
    if(!backendServerDescriptionsNode.IsNull())
    {
      while(!backendServerDescriptionsNode.IsNull())
      {
        m_backendServerDescriptions.push_back(backendServerDescriptionsNode);
        backendServerDescriptionsNode = backendServerDescriptionsNode.NextNode("BackendServerDescriptions");
      }

      m_backendServerDescriptionsHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      while(!availabilityZonesNode.IsNull())
      {
        m_availabilityZones.push_back(StringUtils::Trim(availabilityZonesNode.GetText().c_str()));
        availabilityZonesNode = availabilityZonesNode.NextNode("AvailabilityZones");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      while(!subnetsNode.IsNull())
      {
        m_subnets.push_back(StringUtils::Trim(subnetsNode.GetText().c_str()));
        subnetsNode = subnetsNode.NextNode("Subnets");
      }

      m_subnetsHasBeenSet = true;
    }
    XmlNode vPCIdNode = resultNode.FirstChild("VPCId");
    if(!subnetsNode.IsNull())
    {
      m_vPCId = StringUtils::Trim(vPCIdNode.GetText().c_str());
      m_vPCIdHasBeenSet = true;
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
    XmlNode healthCheckNode = resultNode.FirstChild("HealthCheck");
    if(!instancesNode.IsNull())
    {
      m_healthCheck = healthCheckNode;
      m_healthCheckHasBeenSet = true;
    }
    XmlNode sourceSecurityGroupNode = resultNode.FirstChild("SourceSecurityGroup");
    if(!instancesNode.IsNull())
    {
      m_sourceSecurityGroup = sourceSecurityGroupNode;
      m_sourceSecurityGroupHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroups");
    if(!securityGroupsNode.IsNull())
    {
      while(!securityGroupsNode.IsNull())
      {
        m_securityGroups.push_back(StringUtils::Trim(securityGroupsNode.GetText().c_str()));
        securityGroupsNode = securityGroupsNode.NextNode("SecurityGroups");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!securityGroupsNode.IsNull())
    {
      m_createdTime = StringUtils::ConvertToDouble(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str());
      m_createdTimeHasBeenSet = true;
    }
    XmlNode schemeNode = resultNode.FirstChild("Scheme");
    if(!securityGroupsNode.IsNull())
    {
      m_scheme = StringUtils::Trim(schemeNode.GetText().c_str());
      m_schemeHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancerDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }
  if(m_dNSNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DNSName=" << StringUtils::URLEncode(m_dNSName.c_str()) << "&";
  }
  if(m_canonicalHostedZoneNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".CanonicalHostedZoneName=" << StringUtils::URLEncode(m_canonicalHostedZoneName.c_str()) << "&";
  }
  if(m_canonicalHostedZoneNameIDHasBeenSet)
  {
      oStream << location << index << locationValue << ".CanonicalHostedZoneNameID=" << StringUtils::URLEncode(m_canonicalHostedZoneNameID.c_str()) << "&";
  }
  if(m_listenerDescriptionsHasBeenSet)
  {
      for(auto& item : m_listenerDescriptions)
      {
        Aws::StringStream listenerDescriptionsSs;
        listenerDescriptionsSs << location << index << locationValue << ".ListenerDescriptions";
        item.OutputToStream(oStream, listenerDescriptionsSs.str().c_str());
      }
  }
  if(m_policiesHasBeenSet)
  {
      Aws::StringStream policiesLocationAndMemberSs;
      policiesLocationAndMemberSs << location << index << locationValue << ".Policies";
      m_policies.OutputToStream(oStream, policiesLocationAndMemberSs.str().c_str());
  }
  if(m_backendServerDescriptionsHasBeenSet)
  {
      for(auto& item : m_backendServerDescriptions)
      {
        Aws::StringStream backendServerDescriptionsSs;
        backendServerDescriptionsSs << location << index << locationValue << ".BackendServerDescriptions";
        item.OutputToStream(oStream, backendServerDescriptionsSs.str().c_str());
      }
  }
  if(m_availabilityZonesHasBeenSet)
  {
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZones=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_subnetsHasBeenSet)
  {
      for(auto& item : m_subnets)
      {
        oStream << location << index << locationValue << ".Subnets=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vPCIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VPCId=" << StringUtils::URLEncode(m_vPCId.c_str()) << "&";
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
  if(m_healthCheckHasBeenSet)
  {
      Aws::StringStream healthCheckLocationAndMemberSs;
      healthCheckLocationAndMemberSs << location << index << locationValue << ".HealthCheck";
      m_healthCheck.OutputToStream(oStream, healthCheckLocationAndMemberSs.str().c_str());
  }
  if(m_sourceSecurityGroupHasBeenSet)
  {
      Aws::StringStream sourceSecurityGroupLocationAndMemberSs;
      sourceSecurityGroupLocationAndMemberSs << location << index << locationValue << ".SourceSecurityGroup";
      m_sourceSecurityGroup.OutputToStream(oStream, sourceSecurityGroupLocationAndMemberSs.str().c_str());
  }
  if(m_securityGroupsHasBeenSet)
  {
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroups=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << m_createdTime << "&";
  }
  if(m_schemeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scheme=" << StringUtils::URLEncode(m_scheme.c_str()) << "&";
  }
}

void LoadBalancerDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }
  if(m_dNSNameHasBeenSet)
  {
      oStream << location << ".DNSName=" << StringUtils::URLEncode(m_dNSName.c_str()) << "&";
  }
  if(m_canonicalHostedZoneNameHasBeenSet)
  {
      oStream << location << ".CanonicalHostedZoneName=" << StringUtils::URLEncode(m_canonicalHostedZoneName.c_str()) << "&";
  }
  if(m_canonicalHostedZoneNameIDHasBeenSet)
  {
      oStream << location << ".CanonicalHostedZoneNameID=" << StringUtils::URLEncode(m_canonicalHostedZoneNameID.c_str()) << "&";
  }
  if(m_listenerDescriptionsHasBeenSet)
  {
      for(auto& item : m_listenerDescriptions)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".ListenerDescriptions";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_policiesHasBeenSet)
  {
      Aws::String policiesLocationAndMember(location);
      policiesLocationAndMember += ".Policies";
      m_policies.OutputToStream(oStream, policiesLocationAndMember.c_str());
  }
  if(m_backendServerDescriptionsHasBeenSet)
  {
      for(auto& item : m_backendServerDescriptions)
      {
        Aws::String locationAndListMember(location);
        locationAndListMember += ".BackendServerDescriptions";
        item.OutputToStream(oStream, locationAndListMember.c_str());
      }
  }
  if(m_availabilityZonesHasBeenSet)
  {
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZones=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_subnetsHasBeenSet)
  {
      for(auto& item : m_subnets)
      {
        oStream << location << ".Subnets=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vPCIdHasBeenSet)
  {
      oStream << location << ".VPCId=" << StringUtils::URLEncode(m_vPCId.c_str()) << "&";
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
  if(m_healthCheckHasBeenSet)
  {
      Aws::String healthCheckLocationAndMember(location);
      healthCheckLocationAndMember += ".HealthCheck";
      m_healthCheck.OutputToStream(oStream, healthCheckLocationAndMember.c_str());
  }
  if(m_sourceSecurityGroupHasBeenSet)
  {
      Aws::String sourceSecurityGroupLocationAndMember(location);
      sourceSecurityGroupLocationAndMember += ".SourceSecurityGroup";
      m_sourceSecurityGroup.OutputToStream(oStream, sourceSecurityGroupLocationAndMember.c_str());
  }
  if(m_securityGroupsHasBeenSet)
  {
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroups=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << m_createdTime << "&";
  }
  if(m_schemeHasBeenSet)
  {
      oStream << location << ".Scheme=" << StringUtils::URLEncode(m_scheme.c_str()) << "&";
  }
}
