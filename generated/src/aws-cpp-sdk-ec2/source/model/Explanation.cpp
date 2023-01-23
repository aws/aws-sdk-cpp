/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/Explanation.h>
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

Explanation::Explanation() : 
    m_aclHasBeenSet(false),
    m_aclRuleHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_customerGatewayHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationVpcHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_explanationCodeHasBeenSet(false),
    m_ingressRouteTableHasBeenSet(false),
    m_internetGatewayHasBeenSet(false),
    m_loadBalancerArnHasBeenSet(false),
    m_classicLoadBalancerListenerHasBeenSet(false),
    m_loadBalancerListenerPort(0),
    m_loadBalancerListenerPortHasBeenSet(false),
    m_loadBalancerTargetHasBeenSet(false),
    m_loadBalancerTargetGroupHasBeenSet(false),
    m_loadBalancerTargetGroupsHasBeenSet(false),
    m_loadBalancerTargetPort(0),
    m_loadBalancerTargetPortHasBeenSet(false),
    m_elasticLoadBalancerListenerHasBeenSet(false),
    m_missingComponentHasBeenSet(false),
    m_natGatewayHasBeenSet(false),
    m_networkInterfaceHasBeenSet(false),
    m_packetFieldHasBeenSet(false),
    m_vpcPeeringConnectionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_prefixListHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_routeTableRouteHasBeenSet(false),
    m_routeTableHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_subnetRouteTableHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpnConnectionHasBeenSet(false),
    m_vpnGatewayHasBeenSet(false),
    m_transitGatewayHasBeenSet(false),
    m_transitGatewayRouteTableHasBeenSet(false),
    m_transitGatewayRouteTableRouteHasBeenSet(false),
    m_transitGatewayAttachmentHasBeenSet(false),
    m_componentAccountHasBeenSet(false),
    m_componentRegionHasBeenSet(false)
{
}

Explanation::Explanation(const XmlNode& xmlNode) : 
    m_aclHasBeenSet(false),
    m_aclRuleHasBeenSet(false),
    m_addressHasBeenSet(false),
    m_addressesHasBeenSet(false),
    m_attachedToHasBeenSet(false),
    m_availabilityZonesHasBeenSet(false),
    m_cidrsHasBeenSet(false),
    m_componentHasBeenSet(false),
    m_customerGatewayHasBeenSet(false),
    m_destinationHasBeenSet(false),
    m_destinationVpcHasBeenSet(false),
    m_directionHasBeenSet(false),
    m_explanationCodeHasBeenSet(false),
    m_ingressRouteTableHasBeenSet(false),
    m_internetGatewayHasBeenSet(false),
    m_loadBalancerArnHasBeenSet(false),
    m_classicLoadBalancerListenerHasBeenSet(false),
    m_loadBalancerListenerPort(0),
    m_loadBalancerListenerPortHasBeenSet(false),
    m_loadBalancerTargetHasBeenSet(false),
    m_loadBalancerTargetGroupHasBeenSet(false),
    m_loadBalancerTargetGroupsHasBeenSet(false),
    m_loadBalancerTargetPort(0),
    m_loadBalancerTargetPortHasBeenSet(false),
    m_elasticLoadBalancerListenerHasBeenSet(false),
    m_missingComponentHasBeenSet(false),
    m_natGatewayHasBeenSet(false),
    m_networkInterfaceHasBeenSet(false),
    m_packetFieldHasBeenSet(false),
    m_vpcPeeringConnectionHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_portRangesHasBeenSet(false),
    m_prefixListHasBeenSet(false),
    m_protocolsHasBeenSet(false),
    m_routeTableRouteHasBeenSet(false),
    m_routeTableHasBeenSet(false),
    m_securityGroupHasBeenSet(false),
    m_securityGroupRuleHasBeenSet(false),
    m_securityGroupsHasBeenSet(false),
    m_sourceVpcHasBeenSet(false),
    m_stateHasBeenSet(false),
    m_subnetHasBeenSet(false),
    m_subnetRouteTableHasBeenSet(false),
    m_vpcHasBeenSet(false),
    m_vpcEndpointHasBeenSet(false),
    m_vpnConnectionHasBeenSet(false),
    m_vpnGatewayHasBeenSet(false),
    m_transitGatewayHasBeenSet(false),
    m_transitGatewayRouteTableHasBeenSet(false),
    m_transitGatewayRouteTableRouteHasBeenSet(false),
    m_transitGatewayAttachmentHasBeenSet(false),
    m_componentAccountHasBeenSet(false),
    m_componentRegionHasBeenSet(false)
{
  *this = xmlNode;
}

Explanation& Explanation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode aclNode = resultNode.FirstChild("acl");
    if(!aclNode.IsNull())
    {
      m_acl = aclNode;
      m_aclHasBeenSet = true;
    }
    XmlNode aclRuleNode = resultNode.FirstChild("aclRule");
    if(!aclRuleNode.IsNull())
    {
      m_aclRule = aclRuleNode;
      m_aclRuleHasBeenSet = true;
    }
    XmlNode addressNode = resultNode.FirstChild("address");
    if(!addressNode.IsNull())
    {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode addressesNode = resultNode.FirstChild("addressSet");
    if(!addressesNode.IsNull())
    {
      XmlNode addressesMember = addressesNode.FirstChild("item");
      while(!addressesMember.IsNull())
      {
        m_addresses.push_back(addressesMember.GetText());
        addressesMember = addressesMember.NextNode("item");
      }

      m_addressesHasBeenSet = true;
    }
    XmlNode attachedToNode = resultNode.FirstChild("attachedTo");
    if(!attachedToNode.IsNull())
    {
      m_attachedTo = attachedToNode;
      m_attachedToHasBeenSet = true;
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
    XmlNode cidrsNode = resultNode.FirstChild("cidrSet");
    if(!cidrsNode.IsNull())
    {
      XmlNode cidrsMember = cidrsNode.FirstChild("item");
      while(!cidrsMember.IsNull())
      {
        m_cidrs.push_back(cidrsMember.GetText());
        cidrsMember = cidrsMember.NextNode("item");
      }

      m_cidrsHasBeenSet = true;
    }
    XmlNode componentNode = resultNode.FirstChild("component");
    if(!componentNode.IsNull())
    {
      m_component = componentNode;
      m_componentHasBeenSet = true;
    }
    XmlNode customerGatewayNode = resultNode.FirstChild("customerGateway");
    if(!customerGatewayNode.IsNull())
    {
      m_customerGateway = customerGatewayNode;
      m_customerGatewayHasBeenSet = true;
    }
    XmlNode destinationNode = resultNode.FirstChild("destination");
    if(!destinationNode.IsNull())
    {
      m_destination = destinationNode;
      m_destinationHasBeenSet = true;
    }
    XmlNode destinationVpcNode = resultNode.FirstChild("destinationVpc");
    if(!destinationVpcNode.IsNull())
    {
      m_destinationVpc = destinationVpcNode;
      m_destinationVpcHasBeenSet = true;
    }
    XmlNode directionNode = resultNode.FirstChild("direction");
    if(!directionNode.IsNull())
    {
      m_direction = Aws::Utils::Xml::DecodeEscapedXmlText(directionNode.GetText());
      m_directionHasBeenSet = true;
    }
    XmlNode explanationCodeNode = resultNode.FirstChild("explanationCode");
    if(!explanationCodeNode.IsNull())
    {
      m_explanationCode = Aws::Utils::Xml::DecodeEscapedXmlText(explanationCodeNode.GetText());
      m_explanationCodeHasBeenSet = true;
    }
    XmlNode ingressRouteTableNode = resultNode.FirstChild("ingressRouteTable");
    if(!ingressRouteTableNode.IsNull())
    {
      m_ingressRouteTable = ingressRouteTableNode;
      m_ingressRouteTableHasBeenSet = true;
    }
    XmlNode internetGatewayNode = resultNode.FirstChild("internetGateway");
    if(!internetGatewayNode.IsNull())
    {
      m_internetGateway = internetGatewayNode;
      m_internetGatewayHasBeenSet = true;
    }
    XmlNode loadBalancerArnNode = resultNode.FirstChild("loadBalancerArn");
    if(!loadBalancerArnNode.IsNull())
    {
      m_loadBalancerArn = Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerArnNode.GetText());
      m_loadBalancerArnHasBeenSet = true;
    }
    XmlNode classicLoadBalancerListenerNode = resultNode.FirstChild("classicLoadBalancerListener");
    if(!classicLoadBalancerListenerNode.IsNull())
    {
      m_classicLoadBalancerListener = classicLoadBalancerListenerNode;
      m_classicLoadBalancerListenerHasBeenSet = true;
    }
    XmlNode loadBalancerListenerPortNode = resultNode.FirstChild("loadBalancerListenerPort");
    if(!loadBalancerListenerPortNode.IsNull())
    {
      m_loadBalancerListenerPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerListenerPortNode.GetText()).c_str()).c_str());
      m_loadBalancerListenerPortHasBeenSet = true;
    }
    XmlNode loadBalancerTargetNode = resultNode.FirstChild("loadBalancerTarget");
    if(!loadBalancerTargetNode.IsNull())
    {
      m_loadBalancerTarget = loadBalancerTargetNode;
      m_loadBalancerTargetHasBeenSet = true;
    }
    XmlNode loadBalancerTargetGroupNode = resultNode.FirstChild("loadBalancerTargetGroup");
    if(!loadBalancerTargetGroupNode.IsNull())
    {
      m_loadBalancerTargetGroup = loadBalancerTargetGroupNode;
      m_loadBalancerTargetGroupHasBeenSet = true;
    }
    XmlNode loadBalancerTargetGroupsNode = resultNode.FirstChild("loadBalancerTargetGroupSet");
    if(!loadBalancerTargetGroupsNode.IsNull())
    {
      XmlNode loadBalancerTargetGroupsMember = loadBalancerTargetGroupsNode.FirstChild("item");
      while(!loadBalancerTargetGroupsMember.IsNull())
      {
        m_loadBalancerTargetGroups.push_back(loadBalancerTargetGroupsMember);
        loadBalancerTargetGroupsMember = loadBalancerTargetGroupsMember.NextNode("item");
      }

      m_loadBalancerTargetGroupsHasBeenSet = true;
    }
    XmlNode loadBalancerTargetPortNode = resultNode.FirstChild("loadBalancerTargetPort");
    if(!loadBalancerTargetPortNode.IsNull())
    {
      m_loadBalancerTargetPort = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(loadBalancerTargetPortNode.GetText()).c_str()).c_str());
      m_loadBalancerTargetPortHasBeenSet = true;
    }
    XmlNode elasticLoadBalancerListenerNode = resultNode.FirstChild("elasticLoadBalancerListener");
    if(!elasticLoadBalancerListenerNode.IsNull())
    {
      m_elasticLoadBalancerListener = elasticLoadBalancerListenerNode;
      m_elasticLoadBalancerListenerHasBeenSet = true;
    }
    XmlNode missingComponentNode = resultNode.FirstChild("missingComponent");
    if(!missingComponentNode.IsNull())
    {
      m_missingComponent = Aws::Utils::Xml::DecodeEscapedXmlText(missingComponentNode.GetText());
      m_missingComponentHasBeenSet = true;
    }
    XmlNode natGatewayNode = resultNode.FirstChild("natGateway");
    if(!natGatewayNode.IsNull())
    {
      m_natGateway = natGatewayNode;
      m_natGatewayHasBeenSet = true;
    }
    XmlNode networkInterfaceNode = resultNode.FirstChild("networkInterface");
    if(!networkInterfaceNode.IsNull())
    {
      m_networkInterface = networkInterfaceNode;
      m_networkInterfaceHasBeenSet = true;
    }
    XmlNode packetFieldNode = resultNode.FirstChild("packetField");
    if(!packetFieldNode.IsNull())
    {
      m_packetField = Aws::Utils::Xml::DecodeEscapedXmlText(packetFieldNode.GetText());
      m_packetFieldHasBeenSet = true;
    }
    XmlNode vpcPeeringConnectionNode = resultNode.FirstChild("vpcPeeringConnection");
    if(!vpcPeeringConnectionNode.IsNull())
    {
      m_vpcPeeringConnection = vpcPeeringConnectionNode;
      m_vpcPeeringConnectionHasBeenSet = true;
    }
    XmlNode portNode = resultNode.FirstChild("port");
    if(!portNode.IsNull())
    {
      m_port = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(portNode.GetText()).c_str()).c_str());
      m_portHasBeenSet = true;
    }
    XmlNode portRangesNode = resultNode.FirstChild("portRangeSet");
    if(!portRangesNode.IsNull())
    {
      XmlNode portRangesMember = portRangesNode.FirstChild("item");
      while(!portRangesMember.IsNull())
      {
        m_portRanges.push_back(portRangesMember);
        portRangesMember = portRangesMember.NextNode("item");
      }

      m_portRangesHasBeenSet = true;
    }
    XmlNode prefixListNode = resultNode.FirstChild("prefixList");
    if(!prefixListNode.IsNull())
    {
      m_prefixList = prefixListNode;
      m_prefixListHasBeenSet = true;
    }
    XmlNode protocolsNode = resultNode.FirstChild("protocolSet");
    if(!protocolsNode.IsNull())
    {
      XmlNode protocolsMember = protocolsNode.FirstChild("item");
      while(!protocolsMember.IsNull())
      {
        m_protocols.push_back(protocolsMember.GetText());
        protocolsMember = protocolsMember.NextNode("item");
      }

      m_protocolsHasBeenSet = true;
    }
    XmlNode routeTableRouteNode = resultNode.FirstChild("routeTableRoute");
    if(!routeTableRouteNode.IsNull())
    {
      m_routeTableRoute = routeTableRouteNode;
      m_routeTableRouteHasBeenSet = true;
    }
    XmlNode routeTableNode = resultNode.FirstChild("routeTable");
    if(!routeTableNode.IsNull())
    {
      m_routeTable = routeTableNode;
      m_routeTableHasBeenSet = true;
    }
    XmlNode securityGroupNode = resultNode.FirstChild("securityGroup");
    if(!securityGroupNode.IsNull())
    {
      m_securityGroup = securityGroupNode;
      m_securityGroupHasBeenSet = true;
    }
    XmlNode securityGroupRuleNode = resultNode.FirstChild("securityGroupRule");
    if(!securityGroupRuleNode.IsNull())
    {
      m_securityGroupRule = securityGroupRuleNode;
      m_securityGroupRuleHasBeenSet = true;
    }
    XmlNode securityGroupsNode = resultNode.FirstChild("securityGroupSet");
    if(!securityGroupsNode.IsNull())
    {
      XmlNode securityGroupsMember = securityGroupsNode.FirstChild("item");
      while(!securityGroupsMember.IsNull())
      {
        m_securityGroups.push_back(securityGroupsMember);
        securityGroupsMember = securityGroupsMember.NextNode("item");
      }

      m_securityGroupsHasBeenSet = true;
    }
    XmlNode sourceVpcNode = resultNode.FirstChild("sourceVpc");
    if(!sourceVpcNode.IsNull())
    {
      m_sourceVpc = sourceVpcNode;
      m_sourceVpcHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if(!stateNode.IsNull())
    {
      m_state = Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText());
      m_stateHasBeenSet = true;
    }
    XmlNode subnetNode = resultNode.FirstChild("subnet");
    if(!subnetNode.IsNull())
    {
      m_subnet = subnetNode;
      m_subnetHasBeenSet = true;
    }
    XmlNode subnetRouteTableNode = resultNode.FirstChild("subnetRouteTable");
    if(!subnetRouteTableNode.IsNull())
    {
      m_subnetRouteTable = subnetRouteTableNode;
      m_subnetRouteTableHasBeenSet = true;
    }
    XmlNode vpcNode = resultNode.FirstChild("vpc");
    if(!vpcNode.IsNull())
    {
      m_vpc = vpcNode;
      m_vpcHasBeenSet = true;
    }
    XmlNode vpcEndpointNode = resultNode.FirstChild("vpcEndpoint");
    if(!vpcEndpointNode.IsNull())
    {
      m_vpcEndpoint = vpcEndpointNode;
      m_vpcEndpointHasBeenSet = true;
    }
    XmlNode vpnConnectionNode = resultNode.FirstChild("vpnConnection");
    if(!vpnConnectionNode.IsNull())
    {
      m_vpnConnection = vpnConnectionNode;
      m_vpnConnectionHasBeenSet = true;
    }
    XmlNode vpnGatewayNode = resultNode.FirstChild("vpnGateway");
    if(!vpnGatewayNode.IsNull())
    {
      m_vpnGateway = vpnGatewayNode;
      m_vpnGatewayHasBeenSet = true;
    }
    XmlNode transitGatewayNode = resultNode.FirstChild("transitGateway");
    if(!transitGatewayNode.IsNull())
    {
      m_transitGateway = transitGatewayNode;
      m_transitGatewayHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableNode = resultNode.FirstChild("transitGatewayRouteTable");
    if(!transitGatewayRouteTableNode.IsNull())
    {
      m_transitGatewayRouteTable = transitGatewayRouteTableNode;
      m_transitGatewayRouteTableHasBeenSet = true;
    }
    XmlNode transitGatewayRouteTableRouteNode = resultNode.FirstChild("transitGatewayRouteTableRoute");
    if(!transitGatewayRouteTableRouteNode.IsNull())
    {
      m_transitGatewayRouteTableRoute = transitGatewayRouteTableRouteNode;
      m_transitGatewayRouteTableRouteHasBeenSet = true;
    }
    XmlNode transitGatewayAttachmentNode = resultNode.FirstChild("transitGatewayAttachment");
    if(!transitGatewayAttachmentNode.IsNull())
    {
      m_transitGatewayAttachment = transitGatewayAttachmentNode;
      m_transitGatewayAttachmentHasBeenSet = true;
    }
    XmlNode componentAccountNode = resultNode.FirstChild("componentAccount");
    if(!componentAccountNode.IsNull())
    {
      m_componentAccount = Aws::Utils::Xml::DecodeEscapedXmlText(componentAccountNode.GetText());
      m_componentAccountHasBeenSet = true;
    }
    XmlNode componentRegionNode = resultNode.FirstChild("componentRegion");
    if(!componentRegionNode.IsNull())
    {
      m_componentRegion = Aws::Utils::Xml::DecodeEscapedXmlText(componentRegionNode.GetText());
      m_componentRegionHasBeenSet = true;
    }
  }

  return *this;
}

void Explanation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_aclHasBeenSet)
  {
      Aws::StringStream aclLocationAndMemberSs;
      aclLocationAndMemberSs << location << index << locationValue << ".Acl";
      m_acl.OutputToStream(oStream, aclLocationAndMemberSs.str().c_str());
  }

  if(m_aclRuleHasBeenSet)
  {
      Aws::StringStream aclRuleLocationAndMemberSs;
      aclRuleLocationAndMemberSs << location << index << locationValue << ".AclRule";
      m_aclRule.OutputToStream(oStream, aclRuleLocationAndMemberSs.str().c_str());
  }

  if(m_addressHasBeenSet)
  {
      oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if(m_addressesHasBeenSet)
  {
      unsigned addressesIdx = 1;
      for(auto& item : m_addresses)
      {
        oStream << location << index << locationValue << ".AddressSet." << addressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_attachedToHasBeenSet)
  {
      Aws::StringStream attachedToLocationAndMemberSs;
      attachedToLocationAndMemberSs << location << index << locationValue << ".AttachedTo";
      m_attachedTo.OutputToStream(oStream, attachedToLocationAndMemberSs.str().c_str());
  }

  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << index << locationValue << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_cidrsHasBeenSet)
  {
      unsigned cidrsIdx = 1;
      for(auto& item : m_cidrs)
      {
        oStream << location << index << locationValue << ".CidrSet." << cidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_componentHasBeenSet)
  {
      Aws::StringStream componentLocationAndMemberSs;
      componentLocationAndMemberSs << location << index << locationValue << ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMemberSs.str().c_str());
  }

  if(m_customerGatewayHasBeenSet)
  {
      Aws::StringStream customerGatewayLocationAndMemberSs;
      customerGatewayLocationAndMemberSs << location << index << locationValue << ".CustomerGateway";
      m_customerGateway.OutputToStream(oStream, customerGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_destinationHasBeenSet)
  {
      Aws::StringStream destinationLocationAndMemberSs;
      destinationLocationAndMemberSs << location << index << locationValue << ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMemberSs.str().c_str());
  }

  if(m_destinationVpcHasBeenSet)
  {
      Aws::StringStream destinationVpcLocationAndMemberSs;
      destinationVpcLocationAndMemberSs << location << index << locationValue << ".DestinationVpc";
      m_destinationVpc.OutputToStream(oStream, destinationVpcLocationAndMemberSs.str().c_str());
  }

  if(m_directionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Direction=" << StringUtils::URLEncode(m_direction.c_str()) << "&";
  }

  if(m_explanationCodeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ExplanationCode=" << StringUtils::URLEncode(m_explanationCode.c_str()) << "&";
  }

  if(m_ingressRouteTableHasBeenSet)
  {
      Aws::StringStream ingressRouteTableLocationAndMemberSs;
      ingressRouteTableLocationAndMemberSs << location << index << locationValue << ".IngressRouteTable";
      m_ingressRouteTable.OutputToStream(oStream, ingressRouteTableLocationAndMemberSs.str().c_str());
  }

  if(m_internetGatewayHasBeenSet)
  {
      Aws::StringStream internetGatewayLocationAndMemberSs;
      internetGatewayLocationAndMemberSs << location << index << locationValue << ".InternetGateway";
      m_internetGateway.OutputToStream(oStream, internetGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }

  if(m_classicLoadBalancerListenerHasBeenSet)
  {
      Aws::StringStream classicLoadBalancerListenerLocationAndMemberSs;
      classicLoadBalancerListenerLocationAndMemberSs << location << index << locationValue << ".ClassicLoadBalancerListener";
      m_classicLoadBalancerListener.OutputToStream(oStream, classicLoadBalancerListenerLocationAndMemberSs.str().c_str());
  }

  if(m_loadBalancerListenerPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerListenerPort=" << m_loadBalancerListenerPort << "&";
  }

  if(m_loadBalancerTargetHasBeenSet)
  {
      Aws::StringStream loadBalancerTargetLocationAndMemberSs;
      loadBalancerTargetLocationAndMemberSs << location << index << locationValue << ".LoadBalancerTarget";
      m_loadBalancerTarget.OutputToStream(oStream, loadBalancerTargetLocationAndMemberSs.str().c_str());
  }

  if(m_loadBalancerTargetGroupHasBeenSet)
  {
      Aws::StringStream loadBalancerTargetGroupLocationAndMemberSs;
      loadBalancerTargetGroupLocationAndMemberSs << location << index << locationValue << ".LoadBalancerTargetGroup";
      m_loadBalancerTargetGroup.OutputToStream(oStream, loadBalancerTargetGroupLocationAndMemberSs.str().c_str());
  }

  if(m_loadBalancerTargetGroupsHasBeenSet)
  {
      unsigned loadBalancerTargetGroupsIdx = 1;
      for(auto& item : m_loadBalancerTargetGroups)
      {
        Aws::StringStream loadBalancerTargetGroupsSs;
        loadBalancerTargetGroupsSs << location << index << locationValue << ".LoadBalancerTargetGroupSet." << loadBalancerTargetGroupsIdx++;
        item.OutputToStream(oStream, loadBalancerTargetGroupsSs.str().c_str());
      }
  }

  if(m_loadBalancerTargetPortHasBeenSet)
  {
      oStream << location << index << locationValue << ".LoadBalancerTargetPort=" << m_loadBalancerTargetPort << "&";
  }

  if(m_elasticLoadBalancerListenerHasBeenSet)
  {
      Aws::StringStream elasticLoadBalancerListenerLocationAndMemberSs;
      elasticLoadBalancerListenerLocationAndMemberSs << location << index << locationValue << ".ElasticLoadBalancerListener";
      m_elasticLoadBalancerListener.OutputToStream(oStream, elasticLoadBalancerListenerLocationAndMemberSs.str().c_str());
  }

  if(m_missingComponentHasBeenSet)
  {
      oStream << location << index << locationValue << ".MissingComponent=" << StringUtils::URLEncode(m_missingComponent.c_str()) << "&";
  }

  if(m_natGatewayHasBeenSet)
  {
      Aws::StringStream natGatewayLocationAndMemberSs;
      natGatewayLocationAndMemberSs << location << index << locationValue << ".NatGateway";
      m_natGateway.OutputToStream(oStream, natGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_networkInterfaceHasBeenSet)
  {
      Aws::StringStream networkInterfaceLocationAndMemberSs;
      networkInterfaceLocationAndMemberSs << location << index << locationValue << ".NetworkInterface";
      m_networkInterface.OutputToStream(oStream, networkInterfaceLocationAndMemberSs.str().c_str());
  }

  if(m_packetFieldHasBeenSet)
  {
      oStream << location << index << locationValue << ".PacketField=" << StringUtils::URLEncode(m_packetField.c_str()) << "&";
  }

  if(m_vpcPeeringConnectionHasBeenSet)
  {
      Aws::StringStream vpcPeeringConnectionLocationAndMemberSs;
      vpcPeeringConnectionLocationAndMemberSs << location << index << locationValue << ".VpcPeeringConnection";
      m_vpcPeeringConnection.OutputToStream(oStream, vpcPeeringConnectionLocationAndMemberSs.str().c_str());
  }

  if(m_portHasBeenSet)
  {
      oStream << location << index << locationValue << ".Port=" << m_port << "&";
  }

  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location << index << locationValue << ".PortRangeSet." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }

  if(m_prefixListHasBeenSet)
  {
      Aws::StringStream prefixListLocationAndMemberSs;
      prefixListLocationAndMemberSs << location << index << locationValue << ".PrefixList";
      m_prefixList.OutputToStream(oStream, prefixListLocationAndMemberSs.str().c_str());
  }

  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << index << locationValue << ".ProtocolSet." << protocolsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_routeTableRouteHasBeenSet)
  {
      Aws::StringStream routeTableRouteLocationAndMemberSs;
      routeTableRouteLocationAndMemberSs << location << index << locationValue << ".RouteTableRoute";
      m_routeTableRoute.OutputToStream(oStream, routeTableRouteLocationAndMemberSs.str().c_str());
  }

  if(m_routeTableHasBeenSet)
  {
      Aws::StringStream routeTableLocationAndMemberSs;
      routeTableLocationAndMemberSs << location << index << locationValue << ".RouteTable";
      m_routeTable.OutputToStream(oStream, routeTableLocationAndMemberSs.str().c_str());
  }

  if(m_securityGroupHasBeenSet)
  {
      Aws::StringStream securityGroupLocationAndMemberSs;
      securityGroupLocationAndMemberSs << location << index << locationValue << ".SecurityGroup";
      m_securityGroup.OutputToStream(oStream, securityGroupLocationAndMemberSs.str().c_str());
  }

  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::StringStream securityGroupRuleLocationAndMemberSs;
      securityGroupRuleLocationAndMemberSs << location << index << locationValue << ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMemberSs.str().c_str());
  }

  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location << index << locationValue << ".SecurityGroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }

  if(m_sourceVpcHasBeenSet)
  {
      Aws::StringStream sourceVpcLocationAndMemberSs;
      sourceVpcLocationAndMemberSs << location << index << locationValue << ".SourceVpc";
      m_sourceVpc.OutputToStream(oStream, sourceVpcLocationAndMemberSs.str().c_str());
  }

  if(m_stateHasBeenSet)
  {
      oStream << location << index << locationValue << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }

  if(m_subnetHasBeenSet)
  {
      Aws::StringStream subnetLocationAndMemberSs;
      subnetLocationAndMemberSs << location << index << locationValue << ".Subnet";
      m_subnet.OutputToStream(oStream, subnetLocationAndMemberSs.str().c_str());
  }

  if(m_subnetRouteTableHasBeenSet)
  {
      Aws::StringStream subnetRouteTableLocationAndMemberSs;
      subnetRouteTableLocationAndMemberSs << location << index << locationValue << ".SubnetRouteTable";
      m_subnetRouteTable.OutputToStream(oStream, subnetRouteTableLocationAndMemberSs.str().c_str());
  }

  if(m_vpcHasBeenSet)
  {
      Aws::StringStream vpcLocationAndMemberSs;
      vpcLocationAndMemberSs << location << index << locationValue << ".Vpc";
      m_vpc.OutputToStream(oStream, vpcLocationAndMemberSs.str().c_str());
  }

  if(m_vpcEndpointHasBeenSet)
  {
      Aws::StringStream vpcEndpointLocationAndMemberSs;
      vpcEndpointLocationAndMemberSs << location << index << locationValue << ".VpcEndpoint";
      m_vpcEndpoint.OutputToStream(oStream, vpcEndpointLocationAndMemberSs.str().c_str());
  }

  if(m_vpnConnectionHasBeenSet)
  {
      Aws::StringStream vpnConnectionLocationAndMemberSs;
      vpnConnectionLocationAndMemberSs << location << index << locationValue << ".VpnConnection";
      m_vpnConnection.OutputToStream(oStream, vpnConnectionLocationAndMemberSs.str().c_str());
  }

  if(m_vpnGatewayHasBeenSet)
  {
      Aws::StringStream vpnGatewayLocationAndMemberSs;
      vpnGatewayLocationAndMemberSs << location << index << locationValue << ".VpnGateway";
      m_vpnGateway.OutputToStream(oStream, vpnGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_transitGatewayHasBeenSet)
  {
      Aws::StringStream transitGatewayLocationAndMemberSs;
      transitGatewayLocationAndMemberSs << location << index << locationValue << ".TransitGateway";
      m_transitGateway.OutputToStream(oStream, transitGatewayLocationAndMemberSs.str().c_str());
  }

  if(m_transitGatewayRouteTableHasBeenSet)
  {
      Aws::StringStream transitGatewayRouteTableLocationAndMemberSs;
      transitGatewayRouteTableLocationAndMemberSs << location << index << locationValue << ".TransitGatewayRouteTable";
      m_transitGatewayRouteTable.OutputToStream(oStream, transitGatewayRouteTableLocationAndMemberSs.str().c_str());
  }

  if(m_transitGatewayRouteTableRouteHasBeenSet)
  {
      Aws::StringStream transitGatewayRouteTableRouteLocationAndMemberSs;
      transitGatewayRouteTableRouteLocationAndMemberSs << location << index << locationValue << ".TransitGatewayRouteTableRoute";
      m_transitGatewayRouteTableRoute.OutputToStream(oStream, transitGatewayRouteTableRouteLocationAndMemberSs.str().c_str());
  }

  if(m_transitGatewayAttachmentHasBeenSet)
  {
      Aws::StringStream transitGatewayAttachmentLocationAndMemberSs;
      transitGatewayAttachmentLocationAndMemberSs << location << index << locationValue << ".TransitGatewayAttachment";
      m_transitGatewayAttachment.OutputToStream(oStream, transitGatewayAttachmentLocationAndMemberSs.str().c_str());
  }

  if(m_componentAccountHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComponentAccount=" << StringUtils::URLEncode(m_componentAccount.c_str()) << "&";
  }

  if(m_componentRegionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComponentRegion=" << StringUtils::URLEncode(m_componentRegion.c_str()) << "&";
  }

}

void Explanation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_aclHasBeenSet)
  {
      Aws::String aclLocationAndMember(location);
      aclLocationAndMember += ".Acl";
      m_acl.OutputToStream(oStream, aclLocationAndMember.c_str());
  }
  if(m_aclRuleHasBeenSet)
  {
      Aws::String aclRuleLocationAndMember(location);
      aclRuleLocationAndMember += ".AclRule";
      m_aclRule.OutputToStream(oStream, aclRuleLocationAndMember.c_str());
  }
  if(m_addressHasBeenSet)
  {
      oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if(m_addressesHasBeenSet)
  {
      unsigned addressesIdx = 1;
      for(auto& item : m_addresses)
      {
        oStream << location << ".AddressSet." << addressesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_attachedToHasBeenSet)
  {
      Aws::String attachedToLocationAndMember(location);
      attachedToLocationAndMember += ".AttachedTo";
      m_attachedTo.OutputToStream(oStream, attachedToLocationAndMember.c_str());
  }
  if(m_availabilityZonesHasBeenSet)
  {
      unsigned availabilityZonesIdx = 1;
      for(auto& item : m_availabilityZones)
      {
        oStream << location << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_cidrsHasBeenSet)
  {
      unsigned cidrsIdx = 1;
      for(auto& item : m_cidrs)
      {
        oStream << location << ".CidrSet." << cidrsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_componentHasBeenSet)
  {
      Aws::String componentLocationAndMember(location);
      componentLocationAndMember += ".Component";
      m_component.OutputToStream(oStream, componentLocationAndMember.c_str());
  }
  if(m_customerGatewayHasBeenSet)
  {
      Aws::String customerGatewayLocationAndMember(location);
      customerGatewayLocationAndMember += ".CustomerGateway";
      m_customerGateway.OutputToStream(oStream, customerGatewayLocationAndMember.c_str());
  }
  if(m_destinationHasBeenSet)
  {
      Aws::String destinationLocationAndMember(location);
      destinationLocationAndMember += ".Destination";
      m_destination.OutputToStream(oStream, destinationLocationAndMember.c_str());
  }
  if(m_destinationVpcHasBeenSet)
  {
      Aws::String destinationVpcLocationAndMember(location);
      destinationVpcLocationAndMember += ".DestinationVpc";
      m_destinationVpc.OutputToStream(oStream, destinationVpcLocationAndMember.c_str());
  }
  if(m_directionHasBeenSet)
  {
      oStream << location << ".Direction=" << StringUtils::URLEncode(m_direction.c_str()) << "&";
  }
  if(m_explanationCodeHasBeenSet)
  {
      oStream << location << ".ExplanationCode=" << StringUtils::URLEncode(m_explanationCode.c_str()) << "&";
  }
  if(m_ingressRouteTableHasBeenSet)
  {
      Aws::String ingressRouteTableLocationAndMember(location);
      ingressRouteTableLocationAndMember += ".IngressRouteTable";
      m_ingressRouteTable.OutputToStream(oStream, ingressRouteTableLocationAndMember.c_str());
  }
  if(m_internetGatewayHasBeenSet)
  {
      Aws::String internetGatewayLocationAndMember(location);
      internetGatewayLocationAndMember += ".InternetGateway";
      m_internetGateway.OutputToStream(oStream, internetGatewayLocationAndMember.c_str());
  }
  if(m_loadBalancerArnHasBeenSet)
  {
      oStream << location << ".LoadBalancerArn=" << StringUtils::URLEncode(m_loadBalancerArn.c_str()) << "&";
  }
  if(m_classicLoadBalancerListenerHasBeenSet)
  {
      Aws::String classicLoadBalancerListenerLocationAndMember(location);
      classicLoadBalancerListenerLocationAndMember += ".ClassicLoadBalancerListener";
      m_classicLoadBalancerListener.OutputToStream(oStream, classicLoadBalancerListenerLocationAndMember.c_str());
  }
  if(m_loadBalancerListenerPortHasBeenSet)
  {
      oStream << location << ".LoadBalancerListenerPort=" << m_loadBalancerListenerPort << "&";
  }
  if(m_loadBalancerTargetHasBeenSet)
  {
      Aws::String loadBalancerTargetLocationAndMember(location);
      loadBalancerTargetLocationAndMember += ".LoadBalancerTarget";
      m_loadBalancerTarget.OutputToStream(oStream, loadBalancerTargetLocationAndMember.c_str());
  }
  if(m_loadBalancerTargetGroupHasBeenSet)
  {
      Aws::String loadBalancerTargetGroupLocationAndMember(location);
      loadBalancerTargetGroupLocationAndMember += ".LoadBalancerTargetGroup";
      m_loadBalancerTargetGroup.OutputToStream(oStream, loadBalancerTargetGroupLocationAndMember.c_str());
  }
  if(m_loadBalancerTargetGroupsHasBeenSet)
  {
      unsigned loadBalancerTargetGroupsIdx = 1;
      for(auto& item : m_loadBalancerTargetGroups)
      {
        Aws::StringStream loadBalancerTargetGroupsSs;
        loadBalancerTargetGroupsSs << location <<  ".LoadBalancerTargetGroupSet." << loadBalancerTargetGroupsIdx++;
        item.OutputToStream(oStream, loadBalancerTargetGroupsSs.str().c_str());
      }
  }
  if(m_loadBalancerTargetPortHasBeenSet)
  {
      oStream << location << ".LoadBalancerTargetPort=" << m_loadBalancerTargetPort << "&";
  }
  if(m_elasticLoadBalancerListenerHasBeenSet)
  {
      Aws::String elasticLoadBalancerListenerLocationAndMember(location);
      elasticLoadBalancerListenerLocationAndMember += ".ElasticLoadBalancerListener";
      m_elasticLoadBalancerListener.OutputToStream(oStream, elasticLoadBalancerListenerLocationAndMember.c_str());
  }
  if(m_missingComponentHasBeenSet)
  {
      oStream << location << ".MissingComponent=" << StringUtils::URLEncode(m_missingComponent.c_str()) << "&";
  }
  if(m_natGatewayHasBeenSet)
  {
      Aws::String natGatewayLocationAndMember(location);
      natGatewayLocationAndMember += ".NatGateway";
      m_natGateway.OutputToStream(oStream, natGatewayLocationAndMember.c_str());
  }
  if(m_networkInterfaceHasBeenSet)
  {
      Aws::String networkInterfaceLocationAndMember(location);
      networkInterfaceLocationAndMember += ".NetworkInterface";
      m_networkInterface.OutputToStream(oStream, networkInterfaceLocationAndMember.c_str());
  }
  if(m_packetFieldHasBeenSet)
  {
      oStream << location << ".PacketField=" << StringUtils::URLEncode(m_packetField.c_str()) << "&";
  }
  if(m_vpcPeeringConnectionHasBeenSet)
  {
      Aws::String vpcPeeringConnectionLocationAndMember(location);
      vpcPeeringConnectionLocationAndMember += ".VpcPeeringConnection";
      m_vpcPeeringConnection.OutputToStream(oStream, vpcPeeringConnectionLocationAndMember.c_str());
  }
  if(m_portHasBeenSet)
  {
      oStream << location << ".Port=" << m_port << "&";
  }
  if(m_portRangesHasBeenSet)
  {
      unsigned portRangesIdx = 1;
      for(auto& item : m_portRanges)
      {
        Aws::StringStream portRangesSs;
        portRangesSs << location <<  ".PortRangeSet." << portRangesIdx++;
        item.OutputToStream(oStream, portRangesSs.str().c_str());
      }
  }
  if(m_prefixListHasBeenSet)
  {
      Aws::String prefixListLocationAndMember(location);
      prefixListLocationAndMember += ".PrefixList";
      m_prefixList.OutputToStream(oStream, prefixListLocationAndMember.c_str());
  }
  if(m_protocolsHasBeenSet)
  {
      unsigned protocolsIdx = 1;
      for(auto& item : m_protocols)
      {
        oStream << location << ".ProtocolSet." << protocolsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_routeTableRouteHasBeenSet)
  {
      Aws::String routeTableRouteLocationAndMember(location);
      routeTableRouteLocationAndMember += ".RouteTableRoute";
      m_routeTableRoute.OutputToStream(oStream, routeTableRouteLocationAndMember.c_str());
  }
  if(m_routeTableHasBeenSet)
  {
      Aws::String routeTableLocationAndMember(location);
      routeTableLocationAndMember += ".RouteTable";
      m_routeTable.OutputToStream(oStream, routeTableLocationAndMember.c_str());
  }
  if(m_securityGroupHasBeenSet)
  {
      Aws::String securityGroupLocationAndMember(location);
      securityGroupLocationAndMember += ".SecurityGroup";
      m_securityGroup.OutputToStream(oStream, securityGroupLocationAndMember.c_str());
  }
  if(m_securityGroupRuleHasBeenSet)
  {
      Aws::String securityGroupRuleLocationAndMember(location);
      securityGroupRuleLocationAndMember += ".SecurityGroupRule";
      m_securityGroupRule.OutputToStream(oStream, securityGroupRuleLocationAndMember.c_str());
  }
  if(m_securityGroupsHasBeenSet)
  {
      unsigned securityGroupsIdx = 1;
      for(auto& item : m_securityGroups)
      {
        Aws::StringStream securityGroupsSs;
        securityGroupsSs << location <<  ".SecurityGroupSet." << securityGroupsIdx++;
        item.OutputToStream(oStream, securityGroupsSs.str().c_str());
      }
  }
  if(m_sourceVpcHasBeenSet)
  {
      Aws::String sourceVpcLocationAndMember(location);
      sourceVpcLocationAndMember += ".SourceVpc";
      m_sourceVpc.OutputToStream(oStream, sourceVpcLocationAndMember.c_str());
  }
  if(m_stateHasBeenSet)
  {
      oStream << location << ".State=" << StringUtils::URLEncode(m_state.c_str()) << "&";
  }
  if(m_subnetHasBeenSet)
  {
      Aws::String subnetLocationAndMember(location);
      subnetLocationAndMember += ".Subnet";
      m_subnet.OutputToStream(oStream, subnetLocationAndMember.c_str());
  }
  if(m_subnetRouteTableHasBeenSet)
  {
      Aws::String subnetRouteTableLocationAndMember(location);
      subnetRouteTableLocationAndMember += ".SubnetRouteTable";
      m_subnetRouteTable.OutputToStream(oStream, subnetRouteTableLocationAndMember.c_str());
  }
  if(m_vpcHasBeenSet)
  {
      Aws::String vpcLocationAndMember(location);
      vpcLocationAndMember += ".Vpc";
      m_vpc.OutputToStream(oStream, vpcLocationAndMember.c_str());
  }
  if(m_vpcEndpointHasBeenSet)
  {
      Aws::String vpcEndpointLocationAndMember(location);
      vpcEndpointLocationAndMember += ".VpcEndpoint";
      m_vpcEndpoint.OutputToStream(oStream, vpcEndpointLocationAndMember.c_str());
  }
  if(m_vpnConnectionHasBeenSet)
  {
      Aws::String vpnConnectionLocationAndMember(location);
      vpnConnectionLocationAndMember += ".VpnConnection";
      m_vpnConnection.OutputToStream(oStream, vpnConnectionLocationAndMember.c_str());
  }
  if(m_vpnGatewayHasBeenSet)
  {
      Aws::String vpnGatewayLocationAndMember(location);
      vpnGatewayLocationAndMember += ".VpnGateway";
      m_vpnGateway.OutputToStream(oStream, vpnGatewayLocationAndMember.c_str());
  }
  if(m_transitGatewayHasBeenSet)
  {
      Aws::String transitGatewayLocationAndMember(location);
      transitGatewayLocationAndMember += ".TransitGateway";
      m_transitGateway.OutputToStream(oStream, transitGatewayLocationAndMember.c_str());
  }
  if(m_transitGatewayRouteTableHasBeenSet)
  {
      Aws::String transitGatewayRouteTableLocationAndMember(location);
      transitGatewayRouteTableLocationAndMember += ".TransitGatewayRouteTable";
      m_transitGatewayRouteTable.OutputToStream(oStream, transitGatewayRouteTableLocationAndMember.c_str());
  }
  if(m_transitGatewayRouteTableRouteHasBeenSet)
  {
      Aws::String transitGatewayRouteTableRouteLocationAndMember(location);
      transitGatewayRouteTableRouteLocationAndMember += ".TransitGatewayRouteTableRoute";
      m_transitGatewayRouteTableRoute.OutputToStream(oStream, transitGatewayRouteTableRouteLocationAndMember.c_str());
  }
  if(m_transitGatewayAttachmentHasBeenSet)
  {
      Aws::String transitGatewayAttachmentLocationAndMember(location);
      transitGatewayAttachmentLocationAndMember += ".TransitGatewayAttachment";
      m_transitGatewayAttachment.OutputToStream(oStream, transitGatewayAttachmentLocationAndMember.c_str());
  }
  if(m_componentAccountHasBeenSet)
  {
      oStream << location << ".ComponentAccount=" << StringUtils::URLEncode(m_componentAccount.c_str()) << "&";
  }
  if(m_componentRegionHasBeenSet)
  {
      oStream << location << ".ComponentRegion=" << StringUtils::URLEncode(m_componentRegion.c_str()) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
