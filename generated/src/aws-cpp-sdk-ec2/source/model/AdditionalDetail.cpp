/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/AdditionalDetail.h>
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

AdditionalDetail::AdditionalDetail() : 
    m_additionalDetailTypeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_vpcEndpointServiceHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false),
    m_ruleGroupTypePairsHasBeenSet(false),
    m_ruleGroupRuleOptionsPairsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_loadBalancersHasBeenSet(false)
{
}

AdditionalDetail::AdditionalDetail(const XmlNode& xmlNode) : 
    m_additionalDetailTypeHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_vpcEndpointServiceHasBeenSet(false),
    m_ruleOptionsHasBeenSet(false),
    m_ruleGroupTypePairsHasBeenSet(false),
    m_ruleGroupRuleOptionsPairsHasBeenSet(false),
    m_serviceNameHasBeenSet(false),
    m_loadBalancersHasBeenSet(false)
{
  *this = xmlNode;
}

AdditionalDetail& AdditionalDetail::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode additionalDetailTypeNode = resultNode.FirstChild("additionalDetailType");
    if(!additionalDetailTypeNode.IsNull())
    {
      m_additionalDetailType = Aws::Utils::Xml::DecodeEscapedXmlText(additionalDetailTypeNode.GetText());
      m_additionalDetailTypeHasBeenSet = true;
    }
    XmlNode componentNode = resultNode.FirstChild("component");
    if(!componentNode.IsNull())
    {
      m_component = componentNode;
      m_componentHasBeenSet = true;
    }
    XmlNode vpcEndpointServiceNode = resultNode.FirstChild("vpcEndpointService");
    if(!vpcEndpointServiceNode.IsNull())
    {
      m_vpcEndpointService = vpcEndpointServiceNode;
      m_vpcEndpointServiceHasBeenSet = true;
    }
    XmlNode ruleOptionsNode = resultNode.FirstChild("ruleOptionSet");
    if(!ruleOptionsNode.IsNull())
    {
      XmlNode ruleOptionsMember = ruleOptionsNode.FirstChild("item");
      while(!ruleOptionsMember.IsNull())
      {
        m_ruleOptions.push_back(ruleOptionsMember);
        ruleOptionsMember = ruleOptionsMember.NextNode("item");
      }

      m_ruleOptionsHasBeenSet = true;
    }
    XmlNode ruleGroupTypePairsNode = resultNode.FirstChild("ruleGroupTypePairSet");
    if(!ruleGroupTypePairsNode.IsNull())
    {
      XmlNode ruleGroupTypePairsMember = ruleGroupTypePairsNode.FirstChild("item");
      while(!ruleGroupTypePairsMember.IsNull())
      {
        m_ruleGroupTypePairs.push_back(ruleGroupTypePairsMember);
        ruleGroupTypePairsMember = ruleGroupTypePairsMember.NextNode("item");
      }

      m_ruleGroupTypePairsHasBeenSet = true;
    }
    XmlNode ruleGroupRuleOptionsPairsNode = resultNode.FirstChild("ruleGroupRuleOptionsPairSet");
    if(!ruleGroupRuleOptionsPairsNode.IsNull())
    {
      XmlNode ruleGroupRuleOptionsPairsMember = ruleGroupRuleOptionsPairsNode.FirstChild("item");
      while(!ruleGroupRuleOptionsPairsMember.IsNull())
      {
        m_ruleGroupRuleOptionsPairs.push_back(ruleGroupRuleOptionsPairsMember);
        ruleGroupRuleOptionsPairsMember = ruleGroupRuleOptionsPairsMember.NextNode("item");
      }

      m_ruleGroupRuleOptionsPairsHasBeenSet = true;
    }
    XmlNode serviceNameNode = resultNode.FirstChild("serviceName");
    if(!serviceNameNode.IsNull())
    {
      m_serviceName = Aws::Utils::Xml::DecodeEscapedXmlText(serviceNameNode.GetText());
      m_serviceNameHasBeenSet = true;
    }
    XmlNode loadBalancersNode = resultNode.FirstChild("loadBalancerSet");
    if(!loadBalancersNode.IsNull())
    {
      XmlNode loadBalancersMember = loadBalancersNode.FirstChild("item");
      while(!loadBalancersMember.IsNull())
      {
        m_loadBalancers.push_back(loadBalancersMember);
        loadBalancersMember = loadBalancersMember.NextNode("item");
      }

      m_loadBalancersHasBeenSet = true;
    }
  }

  return *this;
}

void AdditionalDetail::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_additionalDetailTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AdditionalDetailType=" << StringUtils::URLEncode(m_additionalDetailType.c_str()) << "&";
  }

  if(m_componentHasBeenSet)
  {
      Aws::StringStream componentLocationAndMemberSs;
      componentLocationAndMemberSs << location << index << locationValue << ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMemberSs.str().c_str());
  }

  if(m_vpcEndpointServiceHasBeenSet)
  {
      Aws::StringStream vpcEndpointServiceLocationAndMemberSs;
      vpcEndpointServiceLocationAndMemberSs << location << index << locationValue << ".VpcEndpointService";
      m_vpcEndpointService.OutputToStream(oStream, vpcEndpointServiceLocationAndMemberSs.str().c_str());
  }

  if(m_ruleOptionsHasBeenSet)
  {
      unsigned ruleOptionsIdx = 1;
      for(auto& item : m_ruleOptions)
      {
        Aws::StringStream ruleOptionsSs;
        ruleOptionsSs << location << index << locationValue << ".RuleOptionSet." << ruleOptionsIdx++;
        item.OutputToStream(oStream, ruleOptionsSs.str().c_str());
      }
  }

  if(m_ruleGroupTypePairsHasBeenSet)
  {
      unsigned ruleGroupTypePairsIdx = 1;
      for(auto& item : m_ruleGroupTypePairs)
      {
        Aws::StringStream ruleGroupTypePairsSs;
        ruleGroupTypePairsSs << location << index << locationValue << ".RuleGroupTypePairSet." << ruleGroupTypePairsIdx++;
        item.OutputToStream(oStream, ruleGroupTypePairsSs.str().c_str());
      }
  }

  if(m_ruleGroupRuleOptionsPairsHasBeenSet)
  {
      unsigned ruleGroupRuleOptionsPairsIdx = 1;
      for(auto& item : m_ruleGroupRuleOptionsPairs)
      {
        Aws::StringStream ruleGroupRuleOptionsPairsSs;
        ruleGroupRuleOptionsPairsSs << location << index << locationValue << ".RuleGroupRuleOptionsPairSet." << ruleGroupRuleOptionsPairsIdx++;
        item.OutputToStream(oStream, ruleGroupRuleOptionsPairsSs.str().c_str());
      }
  }

  if(m_serviceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }

  if(m_loadBalancersHasBeenSet)
  {
      unsigned loadBalancersIdx = 1;
      for(auto& item : m_loadBalancers)
      {
        Aws::StringStream loadBalancersSs;
        loadBalancersSs << location << index << locationValue << ".LoadBalancerSet." << loadBalancersIdx++;
        item.OutputToStream(oStream, loadBalancersSs.str().c_str());
      }
  }

}

void AdditionalDetail::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_additionalDetailTypeHasBeenSet)
  {
      oStream << location << ".AdditionalDetailType=" << StringUtils::URLEncode(m_additionalDetailType.c_str()) << "&";
  }
  if(m_componentHasBeenSet)
  {
      Aws::String componentLocationAndMember(location);
      componentLocationAndMember += ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMember.c_str());
  }
  if(m_vpcEndpointServiceHasBeenSet)
  {
      Aws::String vpcEndpointServiceLocationAndMember(location);
      vpcEndpointServiceLocationAndMember += ".VpcEndpointService";
      m_vpcEndpointService.OutputToStream(oStream, vpcEndpointServiceLocationAndMember.c_str());
  }
  if(m_ruleOptionsHasBeenSet)
  {
      unsigned ruleOptionsIdx = 1;
      for(auto& item : m_ruleOptions)
      {
        Aws::StringStream ruleOptionsSs;
        ruleOptionsSs << location <<  ".RuleOptionSet." << ruleOptionsIdx++;
        item.OutputToStream(oStream, ruleOptionsSs.str().c_str());
      }
  }
  if(m_ruleGroupTypePairsHasBeenSet)
  {
      unsigned ruleGroupTypePairsIdx = 1;
      for(auto& item : m_ruleGroupTypePairs)
      {
        Aws::StringStream ruleGroupTypePairsSs;
        ruleGroupTypePairsSs << location <<  ".RuleGroupTypePairSet." << ruleGroupTypePairsIdx++;
        item.OutputToStream(oStream, ruleGroupTypePairsSs.str().c_str());
      }
  }
  if(m_ruleGroupRuleOptionsPairsHasBeenSet)
  {
      unsigned ruleGroupRuleOptionsPairsIdx = 1;
      for(auto& item : m_ruleGroupRuleOptionsPairs)
      {
        Aws::StringStream ruleGroupRuleOptionsPairsSs;
        ruleGroupRuleOptionsPairsSs << location <<  ".RuleGroupRuleOptionsPairSet." << ruleGroupRuleOptionsPairsIdx++;
        item.OutputToStream(oStream, ruleGroupRuleOptionsPairsSs.str().c_str());
      }
  }
  if(m_serviceNameHasBeenSet)
  {
      oStream << location << ".ServiceName=" << StringUtils::URLEncode(m_serviceName.c_str()) << "&";
  }
  if(m_loadBalancersHasBeenSet)
  {
      unsigned loadBalancersIdx = 1;
      for(auto& item : m_loadBalancers)
      {
        Aws::StringStream loadBalancersSs;
        loadBalancersSs << location <<  ".LoadBalancerSet." << loadBalancersIdx++;
        item.OutputToStream(oStream, loadBalancersSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
