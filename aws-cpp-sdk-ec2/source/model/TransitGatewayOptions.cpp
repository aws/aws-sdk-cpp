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
    m_dnsSupportHasBeenSet(false)
{
}

TransitGatewayOptions::TransitGatewayOptions(const XmlNode& xmlNode) : 
    m_amazonSideAsn(0),
    m_amazonSideAsnHasBeenSet(false),
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
    m_dnsSupportHasBeenSet(false)
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
      m_amazonSideAsn = StringUtils::ConvertToInt64(StringUtils::Trim(amazonSideAsnNode.GetText().c_str()).c_str());
      m_amazonSideAsnHasBeenSet = true;
    }
    XmlNode autoAcceptSharedAttachmentsNode = resultNode.FirstChild("autoAcceptSharedAttachments");
    if(!autoAcceptSharedAttachmentsNode.IsNull())
    {
      m_autoAcceptSharedAttachments = AutoAcceptSharedAttachmentsValueMapper::GetAutoAcceptSharedAttachmentsValueForName(StringUtils::Trim(autoAcceptSharedAttachmentsNode.GetText().c_str()).c_str());
      m_autoAcceptSharedAttachmentsHasBeenSet = true;
    }
    XmlNode defaultRouteTableAssociationNode = resultNode.FirstChild("defaultRouteTableAssociation");
    if(!defaultRouteTableAssociationNode.IsNull())
    {
      m_defaultRouteTableAssociation = DefaultRouteTableAssociationValueMapper::GetDefaultRouteTableAssociationValueForName(StringUtils::Trim(defaultRouteTableAssociationNode.GetText().c_str()).c_str());
      m_defaultRouteTableAssociationHasBeenSet = true;
    }
    XmlNode associationDefaultRouteTableIdNode = resultNode.FirstChild("associationDefaultRouteTableId");
    if(!associationDefaultRouteTableIdNode.IsNull())
    {
      m_associationDefaultRouteTableId = associationDefaultRouteTableIdNode.GetText();
      m_associationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode defaultRouteTablePropagationNode = resultNode.FirstChild("defaultRouteTablePropagation");
    if(!defaultRouteTablePropagationNode.IsNull())
    {
      m_defaultRouteTablePropagation = DefaultRouteTablePropagationValueMapper::GetDefaultRouteTablePropagationValueForName(StringUtils::Trim(defaultRouteTablePropagationNode.GetText().c_str()).c_str());
      m_defaultRouteTablePropagationHasBeenSet = true;
    }
    XmlNode propagationDefaultRouteTableIdNode = resultNode.FirstChild("propagationDefaultRouteTableId");
    if(!propagationDefaultRouteTableIdNode.IsNull())
    {
      m_propagationDefaultRouteTableId = propagationDefaultRouteTableIdNode.GetText();
      m_propagationDefaultRouteTableIdHasBeenSet = true;
    }
    XmlNode vpnEcmpSupportNode = resultNode.FirstChild("vpnEcmpSupport");
    if(!vpnEcmpSupportNode.IsNull())
    {
      m_vpnEcmpSupport = VpnEcmpSupportValueMapper::GetVpnEcmpSupportValueForName(StringUtils::Trim(vpnEcmpSupportNode.GetText().c_str()).c_str());
      m_vpnEcmpSupportHasBeenSet = true;
    }
    XmlNode dnsSupportNode = resultNode.FirstChild("dnsSupport");
    if(!dnsSupportNode.IsNull())
    {
      m_dnsSupport = DnsSupportValueMapper::GetDnsSupportValueForName(StringUtils::Trim(dnsSupportNode.GetText().c_str()).c_str());
      m_dnsSupportHasBeenSet = true;
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

}

void TransitGatewayOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_amazonSideAsnHasBeenSet)
  {
      oStream << location << ".AmazonSideAsn=" << m_amazonSideAsn << "&";
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
}

} // namespace Model
} // namespace EC2
} // namespace Aws
