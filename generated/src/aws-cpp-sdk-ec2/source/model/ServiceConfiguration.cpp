/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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

ServiceConfiguration::ServiceConfiguration(const XmlNode& xmlNode)
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
      m_serviceTypeHasBeenSet = !serviceTypeMember.IsNull();
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
      m_serviceId = Aws::Utils::Xml::DecodeEscapedXmlText(serviceIdNode.GetText());
      m_serviceIdHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("serviceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNameNode.GetText());
      m_serviceNameHasBeenSet = true;
    }
    XmlNode serviceStateNode = resultNode.FirstChild("serviceState");
    if(!serviceStateNode.IsNull())
    {
      m_serviceState = ServiceStateMapper::GetServiceStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(serviceStateNode.GetText()).c_str()));
      m_serviceStateHasBeenSet = true;
    }
    XmlNode availabilityZoneIdsNode = resultNode.FirstChild("availabilityZoneIdSet");
    if(!availabilityZoneIdsNode.IsNull())
    {
      XmlNode availabilityZoneIdsMember = availabilityZoneIdsNode.FirstChild("item");
      m_availabilityZoneIdsHasBeenSet = !availabilityZoneIdsMember.IsNull();
      while(!availabilityZoneIdsMember.IsNull())
      {
        m_availabilityZoneIds.push_back(availabilityZoneIdsMember.GetText());
        availabilityZoneIdsMember = availabilityZoneIdsMember.NextNode("item");
      }

      m_availabilityZoneIdsHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("availabilityZoneSet");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("item");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
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
      m_acceptanceRequired = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(acceptanceRequiredNode.GetText()).c_str()).c_str());
      m_acceptanceRequiredHasBeenSet = true;
    }
    XmlNode managesVpcEndpointsNode = resultNode.FirstChild("managesVpcEndpoints");
    if(!managesVpcEndpointsNode.IsNull())
    {
      m_managesVpcEndpoints = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managesVpcEndpointsNode.GetText()).c_str()).c_str());
      m_managesVpcEndpointsHasBeenSet = true;
    }
    XmlNode networkLoadBalancerArnsNode = resultNode.FirstChild("networkLoadBalancerArnSet");
    if(!networkLoadBalancerArnsNode.IsNull())
    {
      XmlNode networkLoadBalancerArnsMember = networkLoadBalancerArnsNode.FirstChild("item");
      m_networkLoadBalancerArnsHasBeenSet = !networkLoadBalancerArnsMember.IsNull();
      while(!networkLoadBalancerArnsMember.IsNull())
      {
        m_networkLoadBalancerArns.push_back(networkLoadBalancerArnsMember.GetText());
        networkLoadBalancerArnsMember = networkLoadBalancerArnsMember.NextNode("item");
      }

      m_networkLoadBalancerArnsHasBeenSet = true;
    }
    XmlNode gatewayLoadBalancerArnsNode = resultNode.FirstChild("gatewayLoadBalancerArnSet");
    if(!gatewayLoadBalancerArnsNode.IsNull())
    {
      XmlNode gatewayLoadBalancerArnsMember = gatewayLoadBalancerArnsNode.FirstChild("item");
      m_gatewayLoadBalancerArnsHasBeenSet = !gatewayLoadBalancerArnsMember.IsNull();
      while(!gatewayLoadBalancerArnsMember.IsNull())
      {
        m_gatewayLoadBalancerArns.push_back(gatewayLoadBalancerArnsMember.GetText());
        gatewayLoadBalancerArnsMember = gatewayLoadBalancerArnsMember.NextNode("item");
      }

      m_gatewayLoadBalancerArnsHasBeenSet = true;
    }
    XmlNode supportedIpAddressTypesNode = resultNode.FirstChild("supportedIpAddressTypeSet");
    if(!supportedIpAddressTypesNode.IsNull())
    {
      XmlNode supportedIpAddressTypesMember = supportedIpAddressTypesNode.FirstChild("item");
      m_supportedIpAddressTypesHasBeenSet = !supportedIpAddressTypesMember.IsNull();
      while(!supportedIpAddressTypesMember.IsNull())
      {
        m_supportedIpAddressTypes.push_back(ServiceConnectivityTypeMapper::GetServiceConnectivityTypeForName(StringUtils::Trim(supportedIpAddressTypesMember.GetText().c_str())));
        supportedIpAddressTypesMember = supportedIpAddressTypesMember.NextNode("item");
      }

      m_supportedIpAddressTypesHasBeenSet = true;
    }
    XmlNode baseEndpointDnsNamesNode = resultNode.FirstChild("baseEndpointDnsNameSet");
    if(!baseEndpointDnsNamesNode.IsNull())
    {
      XmlNode baseEndpointDnsNamesMember = baseEndpointDnsNamesNode.FirstChild("item");
      m_baseEndpointDnsNamesHasBeenSet = !baseEndpointDnsNamesMember.IsNull();
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
      m_privateDnsName = Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameNode.GetText());
      m_privateDnsNameHasBeenSet = true;
    }
    XmlNode privateDnsNameConfigurationNode = resultNode.FirstChild("privateDnsNameConfiguration");
    if(!privateDnsNameConfigurationNode.IsNull())
    {
      m_privateDnsNameConfiguration = privateDnsNameConfigurationNode;
      m_privateDnsNameConfigurationHasBeenSet = true;
    }
    XmlNode payerResponsibilityNode = resultNode.FirstChild("payerResponsibility");
    if(!payerResponsibilityNode.IsNull())
    {
      m_payerResponsibility = PayerResponsibilityMapper::GetPayerResponsibilityForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(payerResponsibilityNode.GetText()).c_str()));
      m_payerResponsibilityHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
    XmlNode supportedRegionsNode = resultNode.FirstChild("supportedRegionSet");
    if(!supportedRegionsNode.IsNull())
    {
      XmlNode supportedRegionsMember = supportedRegionsNode.FirstChild("item");
      m_supportedRegionsHasBeenSet = !supportedRegionsMember.IsNull();
      while(!supportedRegionsMember.IsNull())
      {
        m_supportedRegions.push_back(supportedRegionsMember);
        supportedRegionsMember = supportedRegionsMember.NextNode("item");
      }

      m_supportedRegionsHasBeenSet = true;
    }
    XmlNode remoteAccessEnabledNode = resultNode.FirstChild("remoteAccessEnabled");
    if(!remoteAccessEnabledNode.IsNull())
    {
      m_remoteAccessEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(remoteAccessEnabledNode.GetText()).c_str()).c_str());
      m_remoteAccessEnabledHasBeenSet = true;
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
      oStream << location << index << locationValue << ".ServiceState=" << StringUtils::URLEncode(ServiceStateMapper::GetNameForServiceState(m_serviceState)) << "&";
  }

  if(m_availabilityZoneIdsHasBeenSet)
  {
      unsigned availabilityZoneIdsIdx = 1;
      for(auto& item : m_availabilityZoneIds)
      {
        oStream << location << index << locationValue << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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

  if(m_gatewayLoadBalancerArnsHasBeenSet)
  {
      unsigned gatewayLoadBalancerArnsIdx = 1;
      for(auto& item : m_gatewayLoadBalancerArns)
      {
        oStream << location << index << locationValue << ".GatewayLoadBalancerArnSet." << gatewayLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_supportedIpAddressTypesHasBeenSet)
  {
      unsigned supportedIpAddressTypesIdx = 1;
      for(auto& item : m_supportedIpAddressTypes)
      {
        oStream << location << index << locationValue << ".SupportedIpAddressTypeSet." << supportedIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(ServiceConnectivityTypeMapper::GetNameForServiceConnectivityType(item)) << "&";
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

  if(m_privateDnsNameConfigurationHasBeenSet)
  {
      Aws::StringStream privateDnsNameConfigurationLocationAndMemberSs;
      privateDnsNameConfigurationLocationAndMemberSs << location << index << locationValue << ".PrivateDnsNameConfiguration";
      m_privateDnsNameConfiguration.OutputToStream(oStream, privateDnsNameConfigurationLocationAndMemberSs.str().c_str());
  }

  if(m_payerResponsibilityHasBeenSet)
  {
      oStream << location << index << locationValue << ".PayerResponsibility=" << StringUtils::URLEncode(PayerResponsibilityMapper::GetNameForPayerResponsibility(m_payerResponsibility)) << "&";
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

  if(m_supportedRegionsHasBeenSet)
  {
      unsigned supportedRegionsIdx = 1;
      for(auto& item : m_supportedRegions)
      {
        Aws::StringStream supportedRegionsSs;
        supportedRegionsSs << location << index << locationValue << ".SupportedRegionSet." << supportedRegionsIdx++;
        item.OutputToStream(oStream, supportedRegionsSs.str().c_str());
      }
  }

  if(m_remoteAccessEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".RemoteAccessEnabled=" << std::boolalpha << m_remoteAccessEnabled << "&";
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
        serviceTypeSs << location << ".ServiceType." << serviceTypeIdx++;
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
      oStream << location << ".ServiceState=" << StringUtils::URLEncode(ServiceStateMapper::GetNameForServiceState(m_serviceState)) << "&";
  }
  if(m_availabilityZoneIdsHasBeenSet)
  {
      unsigned availabilityZoneIdsIdx = 1;
      for(auto& item : m_availabilityZoneIds)
      {
        oStream << location << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
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
  if(m_gatewayLoadBalancerArnsHasBeenSet)
  {
      unsigned gatewayLoadBalancerArnsIdx = 1;
      for(auto& item : m_gatewayLoadBalancerArns)
      {
        oStream << location << ".GatewayLoadBalancerArnSet." << gatewayLoadBalancerArnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_supportedIpAddressTypesHasBeenSet)
  {
      unsigned supportedIpAddressTypesIdx = 1;
      for(auto& item : m_supportedIpAddressTypes)
      {
        oStream << location << ".SupportedIpAddressTypeSet." << supportedIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(ServiceConnectivityTypeMapper::GetNameForServiceConnectivityType(item)) << "&";
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
  if(m_privateDnsNameConfigurationHasBeenSet)
  {
      Aws::String privateDnsNameConfigurationLocationAndMember(location);
      privateDnsNameConfigurationLocationAndMember += ".PrivateDnsNameConfiguration";
      m_privateDnsNameConfiguration.OutputToStream(oStream, privateDnsNameConfigurationLocationAndMember.c_str());
  }
  if(m_payerResponsibilityHasBeenSet)
  {
      oStream << location << ".PayerResponsibility=" << StringUtils::URLEncode(PayerResponsibilityMapper::GetNameForPayerResponsibility(m_payerResponsibility)) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << ".TagSet." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
  if(m_supportedRegionsHasBeenSet)
  {
      unsigned supportedRegionsIdx = 1;
      for(auto& item : m_supportedRegions)
      {
        Aws::StringStream supportedRegionsSs;
        supportedRegionsSs << location << ".SupportedRegionSet." << supportedRegionsIdx++;
        item.OutputToStream(oStream, supportedRegionsSs.str().c_str());
      }
  }
  if(m_remoteAccessEnabledHasBeenSet)
  {
      oStream << location << ".RemoteAccessEnabled=" << std::boolalpha << m_remoteAccessEnabled << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
