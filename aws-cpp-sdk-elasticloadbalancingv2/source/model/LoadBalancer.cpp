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

#include <aws/elasticloadbalancingv2/model/LoadBalancer.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticLoadBalancingv2
{
namespace Model
{

LoadBalancer::LoadBalancer() : 
    m_loadBalancerArnHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_canonicalHostedZoneIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_scheme(LoadBalancerSchemeEnum::NOT_SET),
    m_schemeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_type(LoadBalancerTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false)
{
}

LoadBalancer::LoadBalancer(const XmlNode& xmlNode) : 
    m_loadBalancerArnHasBeenSet(false),
    m_dNSNameHasBeenSet(false),
    m_canonicalHostedZoneIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_loadBalancerNameHasBeenSet(false),
    m_scheme(LoadBalancerSchemeEnum::NOT_SET),
    m_schemeHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_type(LoadBalancerTypeEnum::NOT_SET),
    m_typeHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_ipAddressType(IpAddressType::NOT_SET),
    m_ipAddressTypeHasBeenSet(false)
{
  *this = xmlNode;
}

LoadBalancer& LoadBalancer::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode loadBalancerArnNode = resultNode.FirstChild("LoadBalancerArn");
    if(!loadBalancerArnNode.IsNull())
    {
      m_loadBalancerArn = loadBalancerArnNode.GetText();
      m_loadBalancerArnHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = dNSNameNode.GetText();
      m_dNSNameHasBeenSet = true;
    }
    XmlNode canonicalHostedZoneIdNode = resultNode.FirstChild("CanonicalHostedZoneId");
    if(!canonicalHostedZoneIdNode.IsNull())
    {
      m_canonicalHostedZoneId = canonicalHostedZoneIdNode.GetText();
      m_canonicalHostedZoneIdHasBeenSet = true;
    }
    XmlNode createdTimeNode = resultNode.FirstChild("CreatedTime");
    if(!createdTimeNode.IsNull())
    {
      m_createdTime = DateTime(StringUtils::Trim(createdTimeNode.GetText().c_str()).c_str(), DateFormat::ISO_8601);
      m_createdTimeHasBeenSet = true;
    }
    XmlNode loadBalancerNameNode = resultNode.FirstChild("LoadBalancerName");
    if(!loadBalancerNameNode.IsNull())
    {
      m_loadBalancerName = loadBalancerNameNode.GetText();
      m_loadBalancerNameHasBeenSet = true;
    }
    XmlNode schemeNode = resultNode.FirstChild("Scheme");
    if(!schemeNode.IsNull())
    {
      m_scheme = LoadBalancerSchemeEnumMapper::GetLoadBalancerSchemeEnumForName(StringUtils::Trim(schemeNode.GetText().c_str()).c_str());
      m_schemeHasBeenSet = true;
    }
    XmlNode vpcIdNode = resultNode.FirstChild("VpcId");
    if(!vpcIdNode.IsNull())
    {
      m_vpcId = vpcIdNode.GetText();
      m_vpcIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if(!stateNode.IsNull())
    {
      m_state = stateNode;
      m_stateHasBeenSet = true;
    }
    XmlNode typeNode = resultNode.FirstChild("Type");
    if(!typeNode.IsNull())
    {
      m_type = LoadBalancerTypeEnumMapper::GetLoadBalancerTypeEnumForName(StringUtils::Trim(typeNode.GetText().c_str()).c_str());
      m_typeHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("AvailabilityZones");
    if(!availabilityZonesNode.IsNull())
    {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("member");
      while(!availabilityZonesMember.IsNull())
      {
        m_availabilityZones.push_back(availabilityZonesMember);
        availabilityZonesMember = availabilityZonesMember.NextNode("member");
      }

      m_availabilityZonesHasBeenSet = true;
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
    XmlNode ipAddressTypeNode = resultNode.FirstChild("IpAddressType");
    if(!ipAddressTypeNode.IsNull())
    {
      m_ipAddressType = IpAddressTypeMapper::GetIpAddressTypeForName(StringUtils::Trim(ipAddressTypeNode.GetText().c_str()).c_str());
      m_ipAddressTypeHasBeenSet = true;
    }
  }

  return *this;
}

void LoadBalancer::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_dNSNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".DNSName=" << StringUtils::URLEncode(m_dNSName.c_str()) << "&";
  }

  if(m_canonicalHostedZoneIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".CanonicalHostedZoneId=" << StringUtils::URLEncode(m_canonicalHostedZoneId.c_str()) << "&";
  }

  if(m_createdTimeHasBeenSet)
  {
      oStream << location << index << locationValue << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }

  if(m_schemeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Scheme=" << LoadBalancerSchemeEnumMapper::GetNameForLoadBalancerSchemeEnum(m_scheme) << "&";
  }

  if(m_vpcIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }

  if(m_stateHasBeenSet)
  {
      Aws::StringStream stateLocationAndMemberSs;
      stateLocationAndMemberSs << location << index << locationValue << ".State";
      m_state.OutputToStream(oStream, stateLocationAndMemberSs.str().c_str());
  }

  if(m_typeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Type=" << LoadBalancerTypeEnumMapper::GetNameForLoadBalancerTypeEnum(m_type) << "&";
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location << index << locationValue << ".AvailabilityZones.member." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << index << locationValue << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_ipAddressTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }

}

void LoadBalancer::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }
  if(m_dNSNameHasBeenSet)
  {
      oStream << location << ".DNSName=" << StringUtils::URLEncode(m_dNSName.c_str()) << "&";
  }
  if(m_canonicalHostedZoneIdHasBeenSet)
  {
      oStream << location << ".CanonicalHostedZoneId=" << StringUtils::URLEncode(m_canonicalHostedZoneId.c_str()) << "&";
  }
  if(m_createdTimeHasBeenSet)
  {
      oStream << location << ".CreatedTime=" << StringUtils::URLEncode(m_createdTime.ToGmtString(DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_loadBalancerNameHasBeenSet)
  {
      oStream << location << ".LoadBalancerName=" << StringUtils::URLEncode(m_loadBalancerName.c_str()) << "&";
  }
  if(m_schemeHasBeenSet)
  {
      oStream << location << ".Scheme=" << LoadBalancerSchemeEnumMapper::GetNameForLoadBalancerSchemeEnum(m_scheme) << "&";
  }
  if(m_vpcIdHasBeenSet)
  {
      oStream << location << ".VpcId=" << StringUtils::URLEncode(m_vpcId.c_str()) << "&";
  }
  if(m_stateHasBeenSet)
  {
      Aws::String stateLocationAndMember(location);
      stateLocationAndMember += ".State";
      m_state.OutputToStream(oStream, stateLocationAndMember.c_str());
  }
  if(m_typeHasBeenSet)
  {
      oStream << location << ".Type=" << LoadBalancerTypeEnumMapper::GetNameForLoadBalancerTypeEnum(m_type) << "&";
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        Aws::StringStream availabilityZonesSs;
        availabilityZonesSs << location <<  ".AvailabilityZones.member." << availabilityZonesIdx++;
        item.OutputToStream(oStream, availabilityZonesSs.str().c_str());
      }
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        oStream << location << ".SecurityGroups.member." << securityGroupsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_ipAddressTypeHasBeenSet)
  {
      oStream << location << ".IpAddressType=" << IpAddressTypeMapper::GetNameForIpAddressType(m_ipAddressType) << "&";
  }
}

} // namespace Model
} // namespace ElasticLoadBalancingv2
} // namespace Aws
