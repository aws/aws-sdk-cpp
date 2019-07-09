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

#include <aws/elasticloadbalancing/model/LoadBalancerDescription.h>
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
      m_loadBalancerName = loadBalancerNameNode.GetText();
      m_loadBalancerNameHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = dNSNameNode.GetText();
      m_dNSNameHasBeenSet = true;
    }
    XmlNode canonicalHostedZoneNameNode = resultNode.FirstChild("CanonicalHostedZoneName");
    if(!canonicalHostedZoneNameNode.IsNull())
    {
      m_canonicalHostedZoneName = canonicalHostedZoneNameNode.GetText();
      m_canonicalHostedZoneNameHasBeenSet = true;
    }
    XmlNode canonicalHostedZoneNameIDNode = resultNode.FirstChild("CanonicalHostedZoneNameID");
    if(!canonicalHostedZoneNameIDNode.IsNull())
    {
      m_canonicalHostedZoneNameID = canonicalHostedZoneNameIDNode.GetText();
      m_canonicalHostedZoneNameIDHasBeenSet = true;
    }
    XmlNode listenerDescriptionsNode = resultNode.FirstChild("ListenerDescriptions");
    if(!listenerDescriptionsNode.IsNull())
    {
      XmlNode listenerDescriptionsMember = listenerDescriptionsNode.FirstChild("member");
      while(!listenerDescriptionsMember.IsNull())
      {
        m_listenerDescriptions.push_back(listenerDescriptionsMember);
        listenerDescriptionsMember = listenerDescriptionsMember.NextNode("member");
      }

      m_listenerDescriptionsHasBeenSet = true;
    }
    XmlNode policiesNode = resultNode.FirstChild("Policies");
    if(!policiesNode.IsNull())
    {
      m_policies = policiesNode;
      m_policiesHasBeenSet = true;
    }
    XmlNode backendServerDescriptionsNode = resultNode.FirstChild("BackendServerDescriptions");
    if(!backendServerDescriptionsNode.IsNull())
    {
      XmlNode backendServerDescriptionsMember = backendServerDescriptionsNode.FirstChild("member");
      while(!backendServerDescriptionsMember.IsNull())
      {
        m_backendServerDescriptions.push_back(backendServerDescriptionsMember);
        backendServerDescriptionsMember = backendServerDescriptionsMember.NextNode("member");
      }

      m_backendServerDescriptionsHasBeenSet = true;
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
    XmlNode subnetsNode = resultNode.FirstChild("Subnets");
    if(!subnetsNode.IsNull())
    {
      XmlNode subnetsMember = subnetsNode.FirstChild("member");
      while(!subnetsMember.IsNull())
      {
        m_subnets.push_back(subnetsMember.GetText());
        subnetsMember = subnetsMember.NextNode("member");
      }

      m_subnetsHasBeenSet = true;
    }
    XmlNode vPCIdNode = resultNode.FirstChild("VPCId");
    if(!vPCIdNode.IsNull())
    {
      m_vPCId = vPCIdNode.GetText();
      m_vPCIdHasBeenSet = true;
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
    XmlNode healthCheckNode = resultNode.FirstChild("HealthCheck");
    if(!healthCheckNode.IsNull())
    {
      m_healthCheck = healthCheckNode;
      m_healthCheckHasBeenSet = true;
    }
    XmlNode sourceSecurityGroupNode = resultNode.FirstChild("SourceSecurityGroup");
    if(!sourceSecurityGroupNode.IsNull())
    {
      m_sourceSecurityGroup = sourceSecurityGroupNode;
      m_sourceSecurityGroupHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("SecurityGroups");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("member");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember.GetText());
        securityGroupsMember = securityGroupsMember.NextNode("member");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode schemeNode = resultNode.FirstChild("Scheme");
    if(!schemeNode.IsNull())
    {
      m_scheme = schemeNode.GetText();
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
      unsigned listenerDescriptionsIdx = 1;
      for(auto& item : m_listenerDescriptions)
      {
        Aws::StringStream listenerDescriptionsSs;
        listenerDescriptionsSs << location << index << locationValue << ".ListenerDescriptions.member." << listenerDescriptionsIdx++;
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
      unsigned backendServerDescriptionsIdx = 1;
      for(auto& item : m_backendServerDescriptions)
      {
        Aws::StringStream backendServerDescriptionsSs;
        backendServerDescriptionsSs << location << index << locationValue << ".BackendServerDescriptions.member." << backendServerDescriptionsIdx++;
        item.OutputToStream(oStream, backendServerDescriptionsSs.str().c_str());
      }
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZones.member." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        oStream << location << index << locationValue << ".Subnets.member." << subnetsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vPCIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VPCId=" << StringUtils::URLEncode(m_vPCId.c_str()) << "&";
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
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
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
      unsigned listenerDescriptionsIdx = 1;
      for(auto& item : m_listenerDescriptions)
      {
        Aws::StringStream listenerDescriptionsSs;
        listenerDescriptionsSs << location <<  ".ListenerDescriptions.member." << listenerDescriptionsIdx++;
        item.OutputToStream(oStream, listenerDescriptionsSs.str().c_str());
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
      unsigned backendServerDescriptionsIdx = 1;
      for(auto& item : m_backendServerDescriptions)
      {
        Aws::StringStream backendServerDescriptionsSs;
        backendServerDescriptionsSs << location <<  ".BackendServerDescriptions.member." << backendServerDescriptionsIdx++;
        item.OutputToStream(oStream, backendServerDescriptionsSs.str().c_str());
      }
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZones.member." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_subnetsHasBeenSet)
  {
      unsigned subnetsIdx = 1;
      for(auto& item : m_subnets)
      {
        oStream << location << ".Subnets.member." << subnetsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vPCIdHasBeenSet)
  {
      oStream << location << ".VPCId=" << StringUtils::URLEncode(m_vPCId.c_str()) << "&";
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
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_schemeHasBeenSet)
  {
      oStream << location << ".Scheme=" << StringUtils::URLEncode(m_scheme.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancing
} // namespace Aws
