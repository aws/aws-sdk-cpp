/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ServiceDetail.h>
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

ServiceDetail::ServiceDetail(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

ServiceDetail& ServiceDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serviceNameNode = resultNode.FirstChild("serviceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNameNode.GetText());
      m_serviceNameHasBeenSet = true;
    }
    XmlNode serviceIdNode = resultNode.FirstChild("serviceId");
    if(!serviceIdNode.IsNull())
    {
      m_serviceId = Aws::Utils::Xml::DecodeEscapedXmlText(serviceIdNode.GetText());
      m_serviceIdHasBeenSet = true;
    }
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
    XmlNode serviceRegionNode = resultNode.FirstChild("serviceRegion");
    if(!serviceRegionNode.IsNull())
    {
      m_serviceRegion = Aws::Utils::Xml::DecodeEscapedXmlText(serviceRegionNode.GetText());
      m_serviceRegionHasBeenSet = true;
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
    XmlNode ownerNode = resultNode.FirstChild("owner");
    if(!ownerNode.IsNull())
    {
      m_owner = Aws::Utils::Xml::DecodeEscapedXmlText(ownerNode.GetText());
      m_ownerHasBeenSet = true;
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
    XmlNode privateDnsNamesNode = resultNode.FirstChild("privateDnsNameSet");
    if(!privateDnsNamesNode.IsNull())
    {
      XmlNode privateDnsNamesMember = privateDnsNamesNode.FirstChild("item");
      m_privateDnsNamesHasBeenSet = !privateDnsNamesMember.IsNull();
      while(!privateDnsNamesMember.IsNull())
      {
        m_privateDnsNames.push_back(privateDnsNamesMember);
        privateDnsNamesMember = privateDnsNamesMember.NextNode("item");
      }

      m_privateDnsNamesHasBeenSet = true;
    }
    XmlNode vpcEndpointPolicySupportedNode = resultNode.FirstChild("vpcEndpointPolicySupported");
    if(!vpcEndpointPolicySupportedNode.IsNull())
    {
      m_vpcEndpointPolicySupported = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpcEndpointPolicySupportedNode.GetText()).c_str()).c_str());
      m_vpcEndpointPolicySupportedHasBeenSet = true;
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
    XmlNode privateDnsNameVerificationStateNode = resultNode.FirstChild("privateDnsNameVerificationState");
    if(!privateDnsNameVerificationStateNode.IsNull())
    {
      m_privateDnsNameVerificationState = DnsNameStateMapper::GetDnsNameStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(privateDnsNameVerificationStateNode.GetText()).c_str()));
      m_privateDnsNameVerificationStateHasBeenSet = true;
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
  }

  return *this;
}

void ServiceDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_serviceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }

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

  if(m_serviceRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceRegion=" << StringUtils::URLEncode(m_serviceRegion.c_str()) << "&";
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

  if(m_ownerHasBeenSet)
  {
      oStream << location << index << locationValue << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
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

  if(m_privateDnsNamesHasBeenSet)
  {
      unsigned privateDnsNamesIdx = 1;
      for(auto& item : m_privateDnsNames)
      {
        Aws::StringStream privateDnsNamesSs;
        privateDnsNamesSs << location << index << locationValue << ".PrivateDnsNameSet." << privateDnsNamesIdx++;
        item.OutputToStream(oStream, privateDnsNamesSs.str().c_str());
      }
  }

  if(m_vpcEndpointPolicySupportedHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcEndpointPolicySupported=" << std::boolalpha << m_vpcEndpointPolicySupported << "&";
  }

  if(m_acceptanceRequiredHasBeenSet)
  {
      oStream << location << index << locationValue << ".AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }

  if(m_managesVpcEndpointsHasBeenSet)
  {
      oStream << location << index << locationValue << ".ManagesVpcEndpoints=" << std::boolalpha << m_managesVpcEndpoints << "&";
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

  if(m_privateDnsNameVerificationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateDnsNameVerificationState=" << StringUtils::URLEncode(DnsNameStateMapper::GetNameForDnsNameState(m_privateDnsNameVerificationState)) << "&";
  }

  if(m_supportedIpAddressTypesHasBeenSet)
  {
      unsigned supportedIpAddressTypesIdx = 1;
      for(auto& item : m_supportedIpAddressTypes)
      {
        oStream << location << index << locationValue << ".SupportedIpAddressTypeSet." << supportedIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(ServiceConnectivityTypeMapper::GetNameForServiceConnectivityType(item)) << "&";
      }
  }

}

void ServiceDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_serviceIdHasBeenSet)
  {
      oStream << location << ".ServiceId=" << StringUtils::URLEncode(m_serviceId.c_str()) << "&";
  }
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
  if(m_serviceRegionHasBeenSet)
  {
      oStream << location << ".ServiceRegion=" << StringUtils::URLEncode(m_serviceRegion.c_str()) << "&";
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
  if(m_ownerHasBeenSet)
  {
      oStream << location << ".Owner=" << StringUtils::URLEncode(m_owner.c_str()) << "&";
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
  if(m_privateDnsNamesHasBeenSet)
  {
      unsigned privateDnsNamesIdx = 1;
      for(auto& item : m_privateDnsNames)
      {
        Aws::StringStream privateDnsNamesSs;
        privateDnsNamesSs << location << ".PrivateDnsNameSet." << privateDnsNamesIdx++;
        item.OutputToStream(oStream, privateDnsNamesSs.str().c_str());
      }
  }
  if(m_vpcEndpointPolicySupportedHasBeenSet)
  {
      oStream << location << ".VpcEndpointPolicySupported=" << std::boolalpha << m_vpcEndpointPolicySupported << "&";
  }
  if(m_acceptanceRequiredHasBeenSet)
  {
      oStream << location << ".AcceptanceRequired=" << std::boolalpha << m_acceptanceRequired << "&";
  }
  if(m_managesVpcEndpointsHasBeenSet)
  {
      oStream << location << ".ManagesVpcEndpoints=" << std::boolalpha << m_managesVpcEndpoints << "&";
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
  if(m_privateDnsNameVerificationStateHasBeenSet)
  {
      oStream << location << ".PrivateDnsNameVerificationState=" << StringUtils::URLEncode(DnsNameStateMapper::GetNameForDnsNameState(m_privateDnsNameVerificationState)) << "&";
  }
  if(m_supportedIpAddressTypesHasBeenSet)
  {
      unsigned supportedIpAddressTypesIdx = 1;
      for(auto& item : m_supportedIpAddressTypes)
      {
        oStream << location << ".SupportedIpAddressTypeSet." << supportedIpAddressTypesIdx++ << "=" << StringUtils::URLEncode(ServiceConnectivityTypeMapper::GetNameForServiceConnectivityType(item)) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
