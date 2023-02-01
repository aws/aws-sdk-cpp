/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/PathComponent.h>
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

PathComponent::PathComponent() : 
    m_sequenceNumber(0),
    m_sequenceNumberHasBeenSet(false),
    m_aclRuleHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_destinationVpcHasBeenSet(false),
    m_outboundHeaderHasBeenSet(false),
    m_inboundHeaderHasBeenSet(false),
    m_routeTableRouteHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_additionalDetailsHasBeenSet(false),
    m_transitGatewayHasBeenSet(false),
    m_transitGatewayRouteTableRouteHasBeenSet(false),
    m_explanationsHasBeenSet(false),
    m_elasticLoadBalancerListenerHasBeenSet(false)
{
}

PathComponent::PathComponent(const XmlNode& xmlNode) : 
    m_sequenceNumber(0),
    m_sequenceNumberHasBeenSet(false),
    m_aclRuleHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_destinationVpcHasBeenSet(false),
    m_outboundHeaderHasBeenSet(false),
    m_inboundHeaderHasBeenSet(false),
    m_routeTableRouteHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_additionalDetailsHasBeenSet(false),
    m_transitGatewayHasBeenSet(false),
    m_transitGatewayRouteTableRouteHasBeenSet(false),
    m_explanationsHasBeenSet(false),
    m_elasticLoadBalancerListenerHasBeenSet(false)
{
  *this = xmlNode;
}

PathComponent& PathComponent::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sequenceNumberNode = resultNode.FirstChild("sequenceNumber");
    if(!sequenceNumberNode.IsNull())
    {
      m_sequenceNumber = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sequenceNumberNode.GetText()).c_str()).c_str());
      m_sequenceNumberHasBeenSet = true;
    }
    XmlNode aclRuleNode = resultNode.FirstChild("aclRule");
    if(!aclRuleNode.IsNull())
    {
      m_aclRule = aclRuleNode;
      m_aclRuleHasBeenSet = true;
    }
    XmlNode attachedToNode = resultNode.FirstChild("attachedTo");
    if(!attachedToNode.IsNull())
    {
      m_attachedTo = attachedToNode;
      m_attachedToHasBeenSet = true;
    }
    XmlNode componentNode = resultNode.FirstChild("component");
    if(!componentNode.IsNull())
    {
      m_component = componentNode;
      m_componentHasBeenSet = true;
    }
    XmlNode destinationVpcNode = resultNode.FirstChild("destinationVpc");
    if(!destinationVpcNode.IsNull())
    {
      m_destinationVpc = destinationVpcNode;
      m_destinationVpcHasBeenSet = true;
    }
    XmlNode outboundHeaderNode = resultNode.FirstChild("outboundHeader");
    if(!outboundHeaderNode.IsNull())
    {
      m_outboundHeader = outboundHeaderNode;
      m_outboundHeaderHasBeenSet = true;
    }
    XmlNode inboundHeaderNode = resultNode.FirstChild("inboundHeader");
    if(!inboundHeaderNode.IsNull())
    {
      m_inboundHeader = inboundHeaderNode;
      m_inboundHeaderHasBeenSet = true;
    }
    XmlNode routeTableRouteNode = resultNode.FirstChild("routeTableRoute");
    if(!routeTableRouteNode.IsNull())
    {
      m_routeTableRoute = routeTableRouteNode;
      m_routeTableRouteHasBeenSet = true;
    }
    XmlNode securityGroupRuleNode = resultNode.FirstChild("securityGroupRule");
    if(!securityGroupRuleNode.IsNull())
    {
      m_securityGroupRule = securityGroupRuleNode;
      m_securityGroupRuleHasBeenSet = true;
    }
    XmlNode sourceVpcNode = resultNode.FirstChild("sourceVpc");
    if(!sourceVpcNode.IsNull())
    {
      m_sourceVpc = sourceVpcNode;
      m_sourceVpcHasBeenSet = true;
    }
    XmlNode subnetNode = resultNode.FirstChild("subnet");
    if(!subnetNode.IsNull())
    {
      m_subnet = subnetNode;
      m_subnetHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = vpcNode;
      m_vpcHasBeenSet = true;
    }
    XmlNode additionalDetailsNode = resultNode.FirstChild("additionalDetailSet");
    if(!additionalDetailsNode.IsNull())
    {
      XmlNode additionalDetailsMember = additionalDetailsNode.FirstChild("item");
      while(!additionalDetailsMember.IsNull())
      {
        m_additionalDetails.push_back(additionalDetailsMember);
        additionalDetailsMember = additionalDetailsMember.NextNode("item");
      }

      m_additionalDetailsHasBeenSet = true;
    }
    XmlNode transitGatewayNode = resultNode.FirstChild("transitGateway");
    if(!transitGatewayNode.IsNull())
    {
      m_transitGateway = transitGatewayNode;
      m_transitGatewayHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableRouteNode = resultNode.FirstChild("transitGatewayRouteTableRoute");
    if(!transitGatewayRouteTableRouteNode.IsNull())
    {
      m_transitGatewayRouteTableRoute = transitGatewayRouteTableRouteNode;
      m_transitGatewayRouteTableRouteHasBeenSet = true;
    }
    XmlNode explanationsNode = resultNode.FirstChild("explanationSet");
    if(!explanationsNode.IsNull())
    {
      XmlNode explanationsMember = explanationsNode.FirstChild("item");
      while(!explanationsMember.IsNull())
      {
        m_explanations.push_back(explanationsMember);
        explanationsMember = explanationsMember.NextNode("item");
      }

      m_explanationsHasBeenSet = true;
    }
    XmlNode elasticLoadBalancerListenerNode = resultNode.FirstChild("elasticLoadBalancerListener");
    if(!elasticLoadBalancerListenerNode.IsNull())
    {
      m_elasticLoadBalancerListener = elasticLoadBalancerListenerNode;
      m_elasticLoadBalancerListenerHasBeenSet = true;
    }
  }

  return *this;
}

void PathComponent::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << index << locationValue << ".SequenceNumber=" << m_sequenceNumber << "&";
  }

  if(m_aclRuleHasBeenSet)
  {
      Aws::StringStream aclRuleLocationAndMemberSs;
      aclRuleLocationAndMemberSs << location << index << locationValue << ".AclRule";
      m_aclRule.OutputToStream(oStream, aclRuleLocationAndMemberSs.str().c_str());
  }

  if(m_attachedToHasBeenSet)
  {
      Aws::StringStream attachedToLocationAndMemberSs;
      attachedToLocationAndMemberSs << location << index << locationValue << ".AttachedTo";
      m_attachedTo.OutputToStream(oStream, attachedToLocationAndMemberSs.str().c_str());
  }

  if(m_componentHasBeenSet)
  {
      Aws::StringStream componentLocationAndMemberSs;
      componentLocationAndMemberSs << location << index << locationValue << ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMemberSs.str().c_str());
  }

  if(m_destinationVpcHasBeenSet)
  {
      Aws::StringStream destinationVpcLocationAndMemberSs;
      destinationVpcLocationAndMemberSs << location << index << locationValue << ".DestinationVpc";
      m_destinationVpc.OutputToStream(oStream, destinationVpcLocationAndMemberSs.str().c_str());
  }

  if(m_outboundHeaderHasBeenSet)
  {
      Aws::StringStream outboundHeaderLocationAndMemberSs;
      outboundHeaderLocationAndMemberSs << location << index << locationValue << ".OutboundHeader";
      m_outboundHeader.OutputToStream(oStream, outboundHeaderLocationAndMemberSs.str().c_str());
  }

  if(m_inboundHeaderHasBeenSet)
  {
      Aws::StringStream inboundHeaderLocationAndMemberSs;
      inboundHeaderLocationAndMemberSs << location << index << locationValue << ".InboundHeader";
      m_inboundHeader.OutputToStream(oStream, inboundHeaderLocationAndMemberSs.str().c_str());
  }

  if(m_routeTableRouteHasBeenSet)
  {
      Aws::StringStream routeTableRouteLocationAndMemberSs;
      routeTableRouteLocationAndMemberSs << location << index << locationValue << ".RouteTableRoute";
      m_routeTableRoute.OutputToStream(oStream, routeTableRouteLocationAndMemberSs.str().c_str());
  }

  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::StringStream securityGroupRuleLocationAndMemberSs;
      securityGroupRuleLocationAndMemberSs << location << index << locationValue << ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMemberSs.str().c_str());
  }

  if(m_sourceVpcHasBeenSet)
  {
      Aws::StringStream sourceVpcLocationAndMemberSs;
      sourceVpcLocationAndMemberSs << location << index << locationValue << ".SourceVpc";
      m_sourceVpc.OutputToStream(oStream, sourceVpcLocationAndMemberSs.str().c_str());
  }

  if(m_subnetHasBeenSet)
  {
      Aws::StringStream subnetLocationAndMemberSs;
      subnetLocationAndMemberSs << location << index << locationValue << ".Subnet";
      m_subnet.OutputToStream(oStream, subnetLocationAndMemberSs.str().c_str());
  }

  if(m_vpcHasBeenSet)
  {
      Aws::StringStream vpcLocationAndMemberSs;
      vpcLocationAndMemberSs << location << index << locationValue << ".Vpc";
      m_vpc.OutputToStream(oStream, vpcLocationAndMemberSs.str().c_str());
  }

  if(m_additionalDetailsHasBeenSet)
  {
      unsigned additionalDetailsIdx = 1;
      for(auto& item : m_additionalDetails)
      {
        Aws::StringStream additionalDetailsSs;
        additionalDetailsSs << location << index << locationValue << ".AdditionalDetailSet." << additionalDetailsIdx++;
        item.OutputToStream(oStream, additionalDetailsSs.str().c_str());
      }
  }

  if(m_transitGatewayHasBeenSet)
  {
      Aws::StringStream transitGatewayLocationAndMemberSs;
      transitGatewayLocationAndMemberSs << location << index << locationValue << ".TransitGateway";
      m_transitGateway.OutputToStream(oStream, transitGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_transitGatewayRouteTableRouteHasBeenSet)
  {
      Aws::StringStream transitGatewayRouteTableRouteLocationAndMemberSs;
      transitGatewayRouteTableRouteLocationAndMemberSs << location << index << locationValue << ".TransitGatewayRouteTableRoute";
      m_transitGatewayRouteTableRoute.OutputToStream(oStream, transitGatewayRouteTableRouteLocationAndMemberSs.str().c_str());
  }

  if(m_explanationsHasBeenSet)
  {
      unsigned explanationsIdx = 1;
      for(auto& item : m_explanations)
      {
        Aws::StringStream explanationsSs;
        explanationsSs << location << index << locationValue << ".ExplanationSet." << explanationsIdx++;
        item.OutputToStream(oStream, explanationsSs.str().c_str());
      }
  }

  if(m_elasticLoadBalancerListenerHasBeenSet)
  {
      Aws::StringStream elasticLoadBalancerListenerLocationAndMemberSs;
      elasticLoadBalancerListenerLocationAndMemberSs << location << index << locationValue << ".ElasticLoadBalancerListener";
      m_elasticLoadBalancerListener.OutputToStream(oStream, elasticLoadBalancerListenerLocationAndMemberSs.str().c_str());
  }

}

void PathComponent::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sequenceNumberHasBeenSet)
  {
      oStream << location << ".SequenceNumber=" << m_sequenceNumber << "&";
  }
  if(m_aclRuleHasBeenSet)
  {
      Aws::String aclRuleLocationAndMember(location);
      aclRuleLocationAndMember += ".AclRule";
      m_aclRule.OutputToStream(oStream, aclRuleLocationAndMember.c_str());
  }
  if(m_attachedToHasBeenSet)
  {
      Aws::String attachedToLocationAndMember(location);
      attachedToLocationAndMember += ".AttachedTo";
      m_attachedTo.OutputToStream(oStream, attachedToLocationAndMember.c_str());
  }
  if(m_componentHasBeenSet)
  {
      Aws::String componentLocationAndMember(location);
      componentLocationAndMember += ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMember.c_str());
  }
  if(m_destinationVpcHasBeenSet)
  {
      Aws::String destinationVpcLocationAndMember(location);
      destinationVpcLocationAndMember += ".DestinationVpc";
      m_destinationVpc.OutputToStream(oStream, destinationVpcLocationAndMember.c_str());
  }
  if(m_outboundHeaderHasBeenSet)
  {
      Aws::String outboundHeaderLocationAndMember(location);
      outboundHeaderLocationAndMember += ".OutboundHeader";
      m_outboundHeader.OutputToStream(oStream, outboundHeaderLocationAndMember.c_str());
  }
  if(m_inboundHeaderHasBeenSet)
  {
      Aws::String inboundHeaderLocationAndMember(location);
      inboundHeaderLocationAndMember += ".InboundHeader";
      m_inboundHeader.OutputToStream(oStream, inboundHeaderLocationAndMember.c_str());
  }
  if(m_routeTableRouteHasBeenSet)
  {
      Aws::String routeTableRouteLocationAndMember(location);
      routeTableRouteLocationAndMember += ".RouteTableRoute";
      m_routeTableRoute.OutputToStream(oStream, routeTableRouteLocationAndMember.c_str());
  }
  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::String securityGroupRuleLocationAndMember(location);
      securityGroupRuleLocationAndMember += ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMember.c_str());
  }
  if(m_sourceVpcHasBeenSet)
  {
      Aws::String sourceVpcLocationAndMember(location);
      sourceVpcLocationAndMember += ".SourceVpc";
      m_sourceVpc.OutputToStream(oStream, sourceVpcLocationAndMember.c_str());
  }
  if(m_subnetHasBeenSet)
  {
      Aws::String subnetLocationAndMember(location);
      subnetLocationAndMember += ".Subnet";
      m_subnet.OutputToStream(oStream, subnetLocationAndMember.c_str());
  }
  if(m_vpcHasBeenSet)
  {
      Aws::String vpcLocationAndMember(location);
      vpcLocationAndMember += ".Vpc";
      m_vpc.OutputToStream(oStream, vpcLocationAndMember.c_str());
  }
  if(m_additionalDetailsHasBeenSet)
  {
      unsigned additionalDetailsIdx = 1;
      for(auto& item : m_additionalDetails)
      {
        Aws::StringStream additionalDetailsSs;
        additionalDetailsSs << location <<  ".AdditionalDetailSet." << additionalDetailsIdx++;
        item.OutputToStream(oStream, additionalDetailsSs.str().c_str());
      }
  }
  if(m_transitGatewayHasBeenSet)
  {
      Aws::String transitGatewayLocationAndMember(location);
      transitGatewayLocationAndMember += ".TransitGateway";
      m_transitGateway.OutputToStream(oStream, transitGatewayLocationAndMember.c_str());
  }
  if(m_transitGatewayRouteTableRouteHasBeenSet)
  {
      Aws::String transitGatewayRouteTableRouteLocationAndMember(location);
      transitGatewayRouteTableRouteLocationAndMember += ".TransitGatewayRouteTableRoute";
      m_transitGatewayRouteTableRoute.OutputToStream(oStream, transitGatewayRouteTableRouteLocationAndMember.c_str());
  }
  if(m_explanationsHasBeenSet)
  {
      unsigned explanationsIdx = 1;
      for(auto& item : m_explanations)
      {
        Aws::StringStream explanationsSs;
        explanationsSs << location <<  ".ExplanationSet." << explanationsIdx++;
        item.OutputToStream(oStream, explanationsSs.str().c_str());
      }
  }
  if(m_elasticLoadBalancerListenerHasBeenSet)
  {
      Aws::String elasticLoadBalancerListenerLocationAndMember(location);
      elasticLoadBalancerListenerLocationAndMember += ".ElasticLoadBalancerListener";
      m_elasticLoadBalancerListener.OutputToStream(oStream, elasticLoadBalancerListenerLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
