﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/TransitGatewayRequestOptions.h>
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

TransitGatewayRequestOptions::TransitGatewayRequestOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TransitGatewayRequestOptions& TransitGatewayRequestOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode amazonSideAsnNode = resultNode.FirstChild("AmazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amazonSideAsnNode.GetText()).c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
    }
    XmlNode autoAcceptSharedAttachmentsNode = resultNode.FirstChild("AutoAcceptSharedAttachments");
    if(!autoAcceptSharedAttachmentsNode.IsNull())
    {
      m_autoAcceptSharedAttachments = AutoAcceptSharedAttachmentsValueMapper::GetAutoAcceptSharedAttachmentsValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoAcceptSharedAttachmentsNode.GetText()).c_str()));
      m_autoAcceptSharedAttachmentsHasBeenSet = true;
    }
    XmlNode defaultRouteTableAssociationNode = resultNode.FirstChild("DefaultRouteTableAssociation");
    if(!defaultRouteTableAssociationNode.IsNull())
    {
      m_defaultRouteTableAssociation = DefaultRouteTableAssociationValueMapper::GetDefaultRouteTableAssociationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTableAssociationNode.GetText()).c_str()));
      m_defaultRouteTableAssociationHasBeenSet = true;
    }
    XmlNode defaultRouteTablePropagationNode = resultNode.FirstChild("DefaultRouteTablePropagation");
    if(!defaultRouteTablePropagationNode.IsNull())
    {
      m_defaultRouteTablePropagation = DefaultRouteTablePropagationValueMapper::GetDefaultRouteTablePropagationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTablePropagationNode.GetText()).c_str()));
      m_defaultRouteTablePropagationHasBeenSet = true;
    }
    XmlNode vpnEcmpSupportNode = resultNode.FirstChild("VpnEcmpSupport");
    if(!vpnEcmpSupportNode.IsNull())
    {
      m_vpnEcmpSupport = VpnEcmpSupportValueMapper::GetVpnEcmpSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpnEcmpSupportNode.GetText()).c_str()));
      m_vpnEcmpSupportHasBeenSet = true;
    }
    XmlNode dnsSupportNode = resultNode.FirstChild("DnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()));
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode securityGroupReferencingSupportNode = resultNode.FirstChild("SecurityGroupReferencingSupport");
    if(!securityGroupReferencingSupportNode.IsNull())
    {
      m_securityGroupReferencingSupport = SecurityGroupReferencingSupportValueMapper::GetSecurityGroupReferencingSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupReferencingSupportNode.GetText()).c_str()));
      m_securityGroupReferencingSupportHasBeenSet = true;
    }
    XmlNode multicastSupportNode = resultNode.FirstChild("MulticastSupport");
    if(!multicastSupportNode.IsNull())
    {
      m_multicastSupport = MulticastSupportValueMapper::GetMulticastSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(multicastSupportNode.GetText()).c_str()));
      m_multicastSupportHasBeenSet = true;
    }
    XmlNode transitGatewayCidrBlocksNode = resultNode.FirstChild("TransitGatewayCidrBlocks");
    if(!transitGatewayCidrBlocksNode.IsNull())
    {
      XmlNode transitGatewayCidrBlocksMember = transitGatewayCidrBlocksNode.FirstChild("item");
      m_transitGatewayCidrBlocksHasBeenSet = !transitGatewayCidrBlocksMember.IsNull();
      while(!transitGatewayCidrBlocksMember.IsNull())
      {
        m_transitGatewayCidrBlocks.push_back(transitGatewayCidrBlocksMember.GetText());
        transitGatewayCidrBlocksMember = transitGatewayCidrBlocksMember.NextNode("item");
      }

      m_transitGatewayCidrBlocksHasBeenSet = true;
    }
  }

  return *this;
}

void TransitGatewayRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }

  if(m_autoAcceptSharedAttachmentsHasBeenSet)
  {
      oStream << location << index << locationValue << ".AutoAcceptSharedAttachments=" << StringUtils::URLEncode(AutoAcceptSharedAttachmentsValueMapper::GetNameForAutoAcceptSharedAttachmentsValue(m_autoAcceptSharedAttachments)) << "&";
  }

  if(m_defaultRouteTableAssociationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultRouteTableAssociation=" << StringUtils::URLEncode(DefaultRouteTableAssociationValueMapper::GetNameForDefaultRouteTableAssociationValue(m_defaultRouteTableAssociation)) << "&";
  }

  if(m_defaultRouteTablePropagationHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultRouteTablePropagation=" << StringUtils::URLEncode(DefaultRouteTablePropagationValueMapper::GetNameForDefaultRouteTablePropagationValue(m_defaultRouteTablePropagation)) << "&";
  }

  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnEcmpSupport=" << StringUtils::URLEncode(VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport)) << "&";
  }

  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << StringUtils::URLEncode(DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport)) << "&";
  }

  if(m_securityGroupReferencingSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupReferencingSupport=" << StringUtils::URLEncode(SecurityGroupReferencingSupportValueMapper::GetNameForSecurityGroupReferencingSupportValue(m_securityGroupReferencingSupport)) << "&";
  }

  if(m_multicastSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".MulticastSupport=" << StringUtils::URLEncode(MulticastSupportValueMapper::GetNameForMulticastSupportValue(m_multicastSupport)) << "&";
  }

  if(m_transitGatewayCidrBlocksHasBeenSet)
  {
      unsigned transitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_transitGatewayCidrBlocks)
      {
        oStream << location << index << locationValue << ".TransitGatewayCidrBlocks." << transitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void TransitGatewayRequestOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }
  if(m_autoAcceptSharedAttachmentsHasBeenSet)
  {
      oStream << location << ".AutoAcceptSharedAttachments=" << StringUtils::URLEncode(AutoAcceptSharedAttachmentsValueMapper::GetNameForAutoAcceptSharedAttachmentsValue(m_autoAcceptSharedAttachments)) << "&";
  }
  if(m_defaultRouteTableAssociationHasBeenSet)
  {
      oStream << location << ".DefaultRouteTableAssociation=" << StringUtils::URLEncode(DefaultRouteTableAssociationValueMapper::GetNameForDefaultRouteTableAssociationValue(m_defaultRouteTableAssociation)) << "&";
  }
  if(m_defaultRouteTablePropagationHasBeenSet)
  {
      oStream << location << ".DefaultRouteTablePropagation=" << StringUtils::URLEncode(DefaultRouteTablePropagationValueMapper::GetNameForDefaultRouteTablePropagationValue(m_defaultRouteTablePropagation)) << "&";
  }
  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << ".VpnEcmpSupport=" << StringUtils::URLEncode(VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport)) << "&";
  }
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << StringUtils::URLEncode(DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport)) << "&";
  }
  if(m_securityGroupReferencingSupportHasBeenSet)
  {
      oStream << location << ".SecurityGroupReferencingSupport=" << StringUtils::URLEncode(SecurityGroupReferencingSupportValueMapper::GetNameForSecurityGroupReferencingSupportValue(m_securityGroupReferencingSupport)) << "&";
  }
  if(m_multicastSupportHasBeenSet)
  {
      oStream << location << ".MulticastSupport=" << StringUtils::URLEncode(MulticastSupportValueMapper::GetNameForMulticastSupportValue(m_multicastSupport)) << "&";
  }
  if(m_transitGatewayCidrBlocksHasBeenSet)
  {
      unsigned transitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_transitGatewayCidrBlocks)
      {
        oStream << location << ".TransitGatewayCidrBlocks." << transitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
