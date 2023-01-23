﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayOptions.h>
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

TransitGatewayOptions::TransitGatewayOptions() : 
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_transitGatewayCidrBlocksHasBeenSet(false),
    m_autoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue::NOT_SET),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociation(DefaultRouteTableAssociationValue::NOT_SET),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_defaultRouteTablePropagation(DefaultRouteTablePropagationValue::NOT_SET),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_vpnEcmpSupport(VpnEcmpSupportValue::NOT_SET),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_multicastSupport(MulticastSupportValue::NOT_SET),
    m_multicastSupportHasBeenSet(false)
{
}

TransitGatewayOptions::TransitGatewayOptions(const XmlNode& xmlNode) : 
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
    m_transitGatewayCidrBlocksHasBeenSet(false),
    m_autoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue::NOT_SET),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociation(DefaultRouteTableAssociationValue::NOT_SET),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_defaultRouteTablePropagation(DefaultRouteTablePropagationValue::NOT_SET),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_vpnEcmpSupport(VpnEcmpSupportValue::NOT_SET),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_multicastSupport(MulticastSupportValue::NOT_SET),
    m_multicastSupportHasBeenSet(false)
{
  *this = xmlNode;
}

TransitGatewayOptions& TransitGatewayOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amazonSideAsnNode = resultNode.FirstChild("amazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amazonSideAsnNode.GetText()).c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
    }
    XmlNode transitGatewayCidrBlocksNode = resultNode.FirstChild("transitGatewayCidrBlocks");
    if(!transitGatewayCidrBlocksNode.IsNull())
    {
      XmlNode transitGatewayCidrBlocksMember = transitGatewayCidrBlocksNode.FirstChild("item");
      while(!transitGatewayCidrBlocksMember.IsNull())
      {
        m_transitGatewayCidrBlocks.push_back(transitGatewayCidrBlocksMember.GetText());
        transitGatewayCidrBlocksMember = transitGatewayCidrBlocksMember.NextNode("item");
      }

      m_transitGatewayCidrBlocksHasBeenSet = true;
    }
    XmlNode autoAcceptSharedAttachmentsNode = resultNode.FirstChild("autoAcceptSharedAttachments");
    if(!autoAcceptSharedAttachmentsNode.IsNull())
    {
      m_autoAcceptSharedAttachments = AutoAcceptSharedAttachmentsValueMapper::GetAutoAcceptSharedAttachmentsValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoAcceptSharedAttachmentsNode.GetText()).c_str()).c_str());
      m_autoAcceptSharedAttachmentsHasBeenSet = true;
    }
    XmlNode defaultRouteTableAssociationNode = resultNode.FirstChild("defaultRouteTableAssociation");
    if(!defaultRouteTableAssociationNode.IsNull())
    {
      m_defaultRouteTableAssociation = DefaultRouteTableAssociationValueMapper::GetDefaultRouteTableAssociationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTableAssociationNode.GetText()).c_str()).c_str());
      m_defaultRouteTableAssociationHasBeenSet = true;
    }
    XmlNode associationDefaultRouteTableIdNode = resultNode.FirstChild("associationDefaultRouteTableId");
    if(!associationDefaultRouteTableIdNode.IsNull())
    {
      m_associationDefaultRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(associationDefaultRouteTableIdNode.GetText());
      m_associationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode defaultRouteTablePropagationNode = resultNode.FirstChild("defaultRouteTablePropagation");
    if(!defaultRouteTablePropagationNode.IsNull())
    {
      m_defaultRouteTablePropagation = DefaultRouteTablePropagationValueMapper::GetDefaultRouteTablePropagationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTablePropagationNode.GetText()).c_str()).c_str());
      m_defaultRouteTablePropagationHasBeenSet = true;
    }
    XmlNode propagationDefaultRouteTableIdNode = resultNode.FirstChild("propagationDefaultRouteTableId");
    if(!propagationDefaultRouteTableIdNode.IsNull())
    {
      m_propagationDefaultRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(propagationDefaultRouteTableIdNode.GetText());
      m_propagationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode vpnEcmpSupportNode = resultNode.FirstChild("vpnEcmpSupport");
    if(!vpnEcmpSupportNode.IsNull())
    {
      m_vpnEcmpSupport = VpnEcmpSupportValueMapper::GetVpnEcmpSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpnEcmpSupportNode.GetText()).c_str()).c_str());
      m_vpnEcmpSupportHasBeenSet = true;
    }
    XmlNode dnsSupportNode = resultNode.FirstChild("dnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode multicastSupportNode = resultNode.FirstChild("multicastSupport");
    if(!multicastSupportNode.IsNull())
    {
      m_multicastSupport = MulticastSupportValueMapper::GetMulticastSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multicastSupportNode.GetText()).c_str()).c_str());
      m_multicastSupportHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }

  if(m_transitGatewayCidrBlocksHasBeenSet)
  {
      unsigned transitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_transitGatewayCidrBlocks)
      {
        oStream << location << index << locationValue << ".TransitGatewayCidrBlocks." << transitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_autoAcceptSharedAttachmentsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoAcceptSharedAttachments=" << AutoAcceptSharedAttachmentsValueMapper::GetNameForAutoAcceptSharedAttachmentsValue(m_autoAcceptSharedAttachments) << "&";
  }

  if(m_defaultRouteTableAssociationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultRouteTableAssociation=" << DefaultRouteTableAssociationValueMapper::GetNameForDefaultRouteTableAssociationValue(m_defaultRouteTableAssociation) << "&";
  }

  if(m_associationDefaultRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationDefaultRouteTableId=" << StringUtils::URLEncode(m_associationDefaultRouteTableId.c_str()) << "&";
  }

  if(m_defaultRouteTablePropagationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultRouteTablePropagation=" << DefaultRouteTablePropagationValueMapper::GetNameForDefaultRouteTablePropagationValue(m_defaultRouteTablePropagation) << "&";
  }

  if(m_propagationDefaultRouteTableIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".PropagationDefaultRouteTableId=" << StringUtils::URLEncode(m_propagationDefaultRouteTableId.c_str()) << "&";
  }

  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnEcmpSupport=" << VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport) << "&";
  }

  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }

  if(m_multicastSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".MulticastSupport=" << MulticastSupportValueMapper::GetNameForMulticastSupportValue(m_multicastSupport) << "&";
  }

}

void TransitGatewayOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }
  if(m_transitGatewayCidrBlocksHasBeenSet)
  {
      unsigned transitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_transitGatewayCidrBlocks)
      {
        oStream << location << ".TransitGatewayCidrBlocks." << transitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_autoAcceptSharedAttachmentsHasBeenSet)
  {
      oStream << location << ".AutoAcceptSharedAttachments=" << AutoAcceptSharedAttachmentsValueMapper::GetNameForAutoAcceptSharedAttachmentsValue(m_autoAcceptSharedAttachments) << "&";
  }
  if(m_defaultRouteTableAssociationHasBeenSet)
  {
      oStream << location << ".DefaultRouteTableAssociation=" << DefaultRouteTableAssociationValueMapper::GetNameForDefaultRouteTableAssociationValue(m_defaultRouteTableAssociation) << "&";
  }
  if(m_associationDefaultRouteTableIdHasBeenSet)
  {
      oStream << location << ".AssociationDefaultRouteTableId=" << StringUtils::URLEncode(m_associationDefaultRouteTableId.c_str()) << "&";
  }
  if(m_defaultRouteTablePropagationHasBeenSet)
  {
      oStream << location << ".DefaultRouteTablePropagation=" << DefaultRouteTablePropagationValueMapper::GetNameForDefaultRouteTablePropagationValue(m_defaultRouteTablePropagation) << "&";
  }
  if(m_propagationDefaultRouteTableIdHasBeenSet)
  {
      oStream << location << ".PropagationDefaultRouteTableId=" << StringUtils::URLEncode(m_propagationDefaultRouteTableId.c_str()) << "&";
  }
  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << ".VpnEcmpSupport=" << VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport) << "&";
  }
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }
  if(m_multicastSupportHasBeenSet)
  {
      oStream << location << ".MulticastSupport=" << MulticastSupportValueMapper::GetNameForMulticastSupportValue(m_multicastSupport) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
