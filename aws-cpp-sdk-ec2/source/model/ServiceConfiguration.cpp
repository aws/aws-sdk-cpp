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

#include <aws/ec2/model/ServiceConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace EC2
{
namespace Model
{

ServiceConfiguration::ServiceConfiguration() : 
    m_serviceTypeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceState(ServiceState::NOT_SET),
    m_serviceStateHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_managesVpcEndpoints(false),
    m_managesVpcEndpointsHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false),
    m_baseEndpointDnsNamesHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ServiceConfiguration::ServiceConfiguration(const XmlNode& xmlNode) : 
    m_serviceTypeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_serviceState(ServiceState::NOT_SET),
    m_serviceStateHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_acceptanceRequired(false),
    m_acceptanceRequiredHasBeenSet(false),
    m_managesVpcEndpoints(false),
    m_managesVpcEndpointsHasBeenSet(false),
    m_networkLoadBalancerArnsHasBeenSet(false),
    m_baseEndpointDnsNamesHasBeenSet(false),
    m_privateDnsNameHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ServiceConfiguration& ServiceConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceTypeNode = resultNode.FirstChild("serviceType");
    if(!serviceTypeNode.IsNull())
    {
      XmlNode serviceTypeMember = serviceTypeNode.FirstChild("item");
      while(!serviceTypeMember.IsNull())
      {
        m_serviceType.push_back(serviceTypeMember);
        serviceTypeMember = serviceTypeMember.NextNode("item");
      }

      m_serviceTypeHasBeenSet = true;
    }
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = serviceIdNode.GetText();
      m_serviceIdHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("serviceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = serviceNameNode.GetText();
      m_serviceNameHasBeenSet = true;
    }
    XmlNode serviceStateNode = resultNode.FirstChild("serviceState");
    if(!serviceStateNode.IsNull())
    {
      m_serviceState = ServiceStateMapper::GetServiceStateForName(StringUtils::Trim(serviceStateNode.GetText().c_str()).c_str());
      m_serviceStateHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("availabilityZoneSet");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("item");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("item");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode acceptanceRequiredNode = resultNode.FirstChild("acceptanceRequired");
    if(!acceptanceRequiredNode.IsNull())
    {
      m_acceptanceRequired = StringUtils::ConvertToBool(StringUtils::Trim(acceptanceRequiredNode.GetText().c_str()).c_str());
      m_acceptanceRequiredHasBeenSet = true;
    }
    XmlNode managesVpcEndpointsNode = resultNode.FirstChild("managesVpcEndpoints");
    if(!managesVpcEndpointsNode.IsNull())
    {
      m_managesVpcEndpoints = StringUtils::ConvertToBool(StringUtils::Trim(managesVpcEndpointsNode.GetText().c_str()).c_str());
      m_managesVpcEndpointsHasBeenSet = true;
    }
    XmlNode networkLoadBalancerArnsNode = resultNode.FirstChild("networkLoadBalancerArnSet");
    if(!networkLoadBalancerArnsNode.IsNull())
    {
      XmlNode networkLoadBalancerArnsMember = networkLoadBalancerArnsNode.FirstChild("item");
      while(!networkLoadBalancerArnsMember.IsNull())
      {
        m_networkLoadBalancerArns.push_back(networkLoadBalancerArnsMember.GetText());
        networkLoadBalancerArnsMember = networkLoadBalancerArnsMember.NextNode("item");
      }

      m_networkLoadBalancerArnsHasBeenSet = true;
    }
    XmlNode baseEndpointDnsNamesNode = resultNode.FirstChild("baseEndpointDnsNameSet");
    if(!baseEndpointDnsNamesNode.IsNull())
    {
      XmlNode baseEndpointDnsNamesMember = baseEndpointDnsNamesNode.FirstChild("item");
      while(!baseEndpointDnsNamesMember.IsNull())
      {
        m_baseEndpointDnsNames.push_back(baseEndpointDnsNamesMember.GetText());
        baseEndpointDnsNamesMember = baseEndpointDnsNamesMember.NextNode("item");
      }

      m_baseEndpointDnsNamesHasBeenSet = true;
    }
    XmlNode privateDnsNameNode = resultNode.FirstChild("privateDnsName");
    if(!privateDnsNameNode.IsNull())
    {
      m_privateDnsName = privateDnsNameNode.GetText();
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ServiceConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceTypeHasBeenSet)
  {
      unsigned serviceTypeIdx = 1;
      for(auto& item : m_serviceType)
      {
        Aws::StringStream serviceTypeSs;
        serviceTypeSs << location << index << locationValue << ".ServiceType." << serviceTypeIdx++;
        item.OutputToStream(oStream, serviceTypeSs.str().c_str());
      }
  }

  if(m_serviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_serviceStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceState=" << ServiceStateMapper::GetNameForServiceState(m_serviceState) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_acceptanceRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }

  if(m_managesVpcEndpointsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagesVpcEndpoints=" << std::boolalpha << m_managesVpcEndpoints << "&";
  }

  if(m_networkLoadBalancerArnsHasBeenSet)
  {
      unsigned networkLoadBalancerArnsIdx = 1;
      for(auto& item : m_networkLoadBalancerArns)
      {
        oStream << location << index << locationValue << ".NetworkLoadBalancerArnSet." << networkLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_baseEndpointDnsNamesHasBeenSet)
  {
      unsigned baseEndpointDnsNamesIdx = 1;
      for(auto& item : m_baseEndpointDnsNames)
      {
        oStream << location << index << locationValue << ".BaseEndpointDnsNameSet." << baseEndpointDnsNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void ServiceConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceTypeHasBeenSet)
  {
      unsigned serviceTypeIdx = 1;
      for(auto& item : m_serviceType)
      {
        Aws::StringStream serviceTypeSs;
        serviceTypeSs << location <<  ".ServiceType." << serviceTypeIdx++;
        item.OutputToStream(oStream, serviceTypeSs.str().c_str());
      }
  }
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_serviceStateHasBeenSet)
  {
      oStream << location << ".ServiceState=" << ServiceStateMapper::GetNameForServiceState(m_serviceState) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_acceptanceRequiredHasBeenSet)
  {
      oStream << location << ".AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }
  if(m_managesVpcEndpointsHasBeenSet)
  {
      oStream << location << ".ManagesVpcEndpoints=" << std::boolalpha << m_managesVpcEndpoints << "&";
  }
  if(m_networkLoadBalancerArnsHasBeenSet)
  {
      unsigned networkLoadBalancerArnsIdx = 1;
      for(auto& item : m_networkLoadBalancerArns)
      {
        oStream << location << ".NetworkLoadBalancerArnSet." << networkLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_baseEndpointDnsNamesHasBeenSet)
  {
      unsigned baseEndpointDnsNamesIdx = 1;
      for(auto& item : m_baseEndpointDnsNames)
      {
        oStream << location << ".BaseEndpointDnsNameSet." << baseEndpointDnsNamesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_privateDnsNameHasBeenSet)
  {
      oStream << location << ".PrivateDnsName=" << StringUtils::URLEncode(m_privateDnsName.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
