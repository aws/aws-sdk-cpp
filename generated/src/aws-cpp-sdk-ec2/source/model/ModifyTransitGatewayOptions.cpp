/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/ModifyTransitGatewayOptions.h>
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

ModifyTransitGatewayOptions::ModifyTransitGatewayOptions() : 
    m_addTransitGatewayCidrBlocksHasBeenSet(false),
    m_removeTransitGatewayCidrBlocksHasBeenSet(false),
    m_vpnEcmpSupport(VpnEcmpSupportValue::NOT_SET),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_securityGroupReferencingSupport(SecurityGroupReferencingSupportValue::NOT_SET),
    m_securityGroupReferencingSupportHasBeenSet(false),
    m_autoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue::NOT_SET),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociation(DefaultRouteTableAssociationValue::NOT_SET),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_defaultRouteTablePropagation(DefaultRouteTablePropagationValue::NOT_SET),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false)
{
}

ModifyTransitGatewayOptions::ModifyTransitGatewayOptions(const XmlNode& xmlNode) : 
    m_addTransitGatewayCidrBlocksHasBeenSet(false),
    m_removeTransitGatewayCidrBlocksHasBeenSet(false),
    m_vpnEcmpSupport(VpnEcmpSupportValue::NOT_SET),
    m_vpnEcmpSupportHasBeenSet(false),
    m_dnsSupport(DnsSupportValue::NOT_SET),
    m_dnsSupportHasBeenSet(false),
    m_securityGroupReferencingSupport(SecurityGroupReferencingSupportValue::NOT_SET),
    m_securityGroupReferencingSupportHasBeenSet(false),
    m_autoAcceptSharedAttachments(AutoAcceptSharedAttachmentsValue::NOT_SET),
    m_autoAcceptSharedAttachmentsHasBeenSet(false),
    m_defaultRouteTableAssociation(DefaultRouteTableAssociationValue::NOT_SET),
    m_defaultRouteTableAssociationHasBeenSet(false),
    m_associationDefaultRouteTableIdHasBeenSet(false),
    m_defaultRouteTablePropagation(DefaultRouteTablePropagationValue::NOT_SET),
    m_defaultRouteTablePropagationHasBeenSet(false),
    m_propagationDefaultRouteTableIdHasBeenSet(false),
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false)
{
  *this = xmlNode;
}

ModifyTransitGatewayOptions& ModifyTransitGatewayOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode addTransitGatewayCidrBlocksNode = resultNode.FirstChild("AddTransitGatewayCidrBlocks");
    if(!addTransitGatewayCidrBlocksNode.IsNull())
    {
      XmlNode addTransitGatewayCidrBlocksMember = addTransitGatewayCidrBlocksNode.FirstChild("item");
      while(!addTransitGatewayCidrBlocksMember.IsNull())
      {
        m_addTransitGatewayCidrBlocks.push_back(addTransitGatewayCidrBlocksMember.GetText());
        addTransitGatewayCidrBlocksMember = addTransitGatewayCidrBlocksMember.NextNode("item");
      }

      m_addTransitGatewayCidrBlocksHasBeenSet = true;
    }
    XmlNode removeTransitGatewayCidrBlocksNode = resultNode.FirstChild("RemoveTransitGatewayCidrBlocks");
    if(!removeTransitGatewayCidrBlocksNode.IsNull())
    {
      XmlNode removeTransitGatewayCidrBlocksMember = removeTransitGatewayCidrBlocksNode.FirstChild("item");
      while(!removeTransitGatewayCidrBlocksMember.IsNull())
      {
        m_removeTransitGatewayCidrBlocks.push_back(removeTransitGatewayCidrBlocksMember.GetText());
        removeTransitGatewayCidrBlocksMember = removeTransitGatewayCidrBlocksMember.NextNode("item");
      }

      m_removeTransitGatewayCidrBlocksHasBeenSet = true;
    }
    XmlNode vpnEcmpSupportNode = resultNode.FirstChild("VpnEcmpSupport");
    if(!vpnEcmpSupportNode.IsNull())
    {
      m_vpnEcmpSupport = VpnEcmpSupportValueMapper::GetVpnEcmpSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(vpnEcmpSupportNode.GetText()).c_str()).c_str());
      m_vpnEcmpSupportHasBeenSet = true;
    }
    XmlNode dnsSupportNode = resultNode.FirstChild("DnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dnsSupportNode.GetText()).c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
    }
    XmlNode securityGroupReferencingSupportNode = resultNode.FirstChild("SecurityGroupReferencingSupport");
    if(!securityGroupReferencingSupportNode.IsNull())
    {
      m_securityGroupReferencingSupport = SecurityGroupReferencingSupportValueMapper::GetSecurityGroupReferencingSupportValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(securityGroupReferencingSupportNode.GetText()).c_str()).c_str());
      m_securityGroupReferencingSupportHasBeenSet = true;
    }
    XmlNode autoAcceptSharedAttachmentsNode = resultNode.FirstChild("AutoAcceptSharedAttachments");
    if(!autoAcceptSharedAttachmentsNode.IsNull())
    {
      m_autoAcceptSharedAttachments = AutoAcceptSharedAttachmentsValueMapper::GetAutoAcceptSharedAttachmentsValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(autoAcceptSharedAttachmentsNode.GetText()).c_str()).c_str());
      m_autoAcceptSharedAttachmentsHasBeenSet = true;
    }
    XmlNode defaultRouteTableAssociationNode = resultNode.FirstChild("DefaultRouteTableAssociation");
    if(!defaultRouteTableAssociationNode.IsNull())
    {
      m_defaultRouteTableAssociation = DefaultRouteTableAssociationValueMapper::GetDefaultRouteTableAssociationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTableAssociationNode.GetText()).c_str()).c_str());
      m_defaultRouteTableAssociationHasBeenSet = true;
    }
    XmlNode associationDefaultRouteTableIdNode = resultNode.FirstChild("AssociationDefaultRouteTableId");
    if(!associationDefaultRouteTableIdNode.IsNull())
    {
      m_associationDefaultRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(associationDefaultRouteTableIdNode.GetText());
      m_associationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode defaultRouteTablePropagationNode = resultNode.FirstChild("DefaultRouteTablePropagation");
    if(!defaultRouteTablePropagationNode.IsNull())
    {
      m_defaultRouteTablePropagation = DefaultRouteTablePropagationValueMapper::GetDefaultRouteTablePropagationValueForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(defaultRouteTablePropagationNode.GetText()).c_str()).c_str());
      m_defaultRouteTablePropagationHasBeenSet = true;
    }
    XmlNode propagationDefaultRouteTableIdNode = resultNode.FirstChild("PropagationDefaultRouteTableId");
    if(!propagationDefaultRouteTableIdNode.IsNull())
    {
      m_propagationDefaultRouteTableId = Aws::Utils::Xml::DecodeEscapedXmlText(propagationDefaultRouteTableIdNode.GetText());
      m_propagationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode amazonSideAsnNode = resultNode.FirstChild("AmazonSideAsn");
    if(!amazonSideAsnNode.IsNull())
    {
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(amazonSideAsnNode.GetText()).c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
    }
  }

  return *this;
}

void ModifyTransitGatewayOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_addTransitGatewayCidrBlocksHasBeenSet)
  {
      unsigned addTransitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_addTransitGatewayCidrBlocks)
      {
        oStream << location << index << locationValue << ".AddTransitGatewayCidrBlocks." << addTransitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_removeTransitGatewayCidrBlocksHasBeenSet)
  {
      unsigned removeTransitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_removeTransitGatewayCidrBlocks)
      {
        oStream << location << index << locationValue << ".RemoveTransitGatewayCidrBlocks." << removeTransitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".VpnEcmpSupport=" << VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport) << "&";
  }

  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }

  if(m_securityGroupReferencingSupportHasBeenSet)
  {
      oStream << location << index << locationValue << ".SecurityGroupReferencingSupport=" << SecurityGroupReferencingSupportValueMapper::GetNameForSecurityGroupReferencingSupportValue(m_securityGroupReferencingSupport) << "&";
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

  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << index << locationValue << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }

}

void ModifyTransitGatewayOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_addTransitGatewayCidrBlocksHasBeenSet)
  {
      unsigned addTransitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_addTransitGatewayCidrBlocks)
      {
        oStream << location << ".Item." << addTransitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_removeTransitGatewayCidrBlocksHasBeenSet)
  {
      unsigned removeTransitGatewayCidrBlocksIdx = 1;
      for(auto& item : m_removeTransitGatewayCidrBlocks)
      {
        oStream << location << ".Item." << removeTransitGatewayCidrBlocksIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_vpnEcmpSupportHasBeenSet)
  {
      oStream << location << ".VpnEcmpSupport=" << VpnEcmpSupportValueMapper::GetNameForVpnEcmpSupportValue(m_vpnEcmpSupport) << "&";
  }
  if(m_dnsSupportHasBeenSet)
  {
      oStream << location << ".DnsSupport=" << DnsSupportValueMapper::GetNameForDnsSupportValue(m_dnsSupport) << "&";
  }
  if(m_securityGroupReferencingSupportHasBeenSet)
  {
      oStream << location << ".SecurityGroupReferencingSupport=" << SecurityGroupReferencingSupportValueMapper::GetNameForSecurityGroupReferencingSupportValue(m_securityGroupReferencingSupport) << "&";
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
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
