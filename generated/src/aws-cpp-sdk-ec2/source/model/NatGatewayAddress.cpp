/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ec2/model/NatGatewayAddress.h>
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

NatGatewayAddress::NatGatewayAddress() : 
    m_allocationIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_status(NatGatewayAddressStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
}

NatGatewayAddress::NatGatewayAddress(const XmlNode& xmlNode) : 
    m_allocationIdHasBeenSet(false),
    m_networkInterfaceIdHasBeenSet(false),
    m_privateIpHasBeenSet(false),
    m_publicIpHasBeenSet(false),
    m_associationIdHasBeenSet(false),
    m_isPrimary(false),
    m_isPrimaryHasBeenSet(false),
    m_failureMessageHasBeenSet(false),
    m_status(NatGatewayAddressStatus::NOT_SET),
    m_statusHasBeenSet(false)
{
  *this = xmlNode;
}

NatGatewayAddress& NatGatewayAddress::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode allocationIdNode = resultNode.FirstChild("allocationId");
    if(!allocationIdNode.IsNull())
    {
      m_allocationId = Aws::Utils::Xml::DecodeEscapedXmlText(allocationIdNode.GetText());
      m_allocationIdHasBeenSet = true;
    }
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("networkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode privateIpNode = resultNode.FirstChild("privateIp");
    if(!privateIpNode.IsNull())
    {
      m_privateIp = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpNode.GetText());
      m_privateIpHasBeenSet = true;
    }
    XmlNode publicIpNode = resultNode.FirstChild("publicIp");
    if(!publicIpNode.IsNull())
    {
      m_publicIp = Aws::Utils::Xml::DecodeEscapedXmlText(publicIpNode.GetText());
      m_publicIpHasBeenSet = true;
    }
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if(!associationIdNode.IsNull())
    {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
    }
    XmlNode isPrimaryNode = resultNode.FirstChild("isPrimary");
    if(!isPrimaryNode.IsNull())
    {
      m_isPrimary = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isPrimaryNode.GetText()).c_str()).c_str());
      m_isPrimaryHasBeenSet = true;
    }
    XmlNode failureMessageNode = resultNode.FirstChild("failureMessage");
    if(!failureMessageNode.IsNull())
    {
      m_failureMessage = Aws::Utils::Xml::DecodeEscapedXmlText(failureMessageNode.GetText());
      m_failureMessageHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if(!statusNode.IsNull())
    {
      m_status = NatGatewayAddressStatusMapper::GetNatGatewayAddressStatusForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()).c_str());
      m_statusHasBeenSet = true;
    }
  }

  return *this;
}

void NatGatewayAddress::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }

  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_privateIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIp=" << StringUtils::URLEncode(m_privateIp.c_str()) << "&";
  }

  if(m_publicIpHasBeenSet)
  {
      oStream << location << index << locationValue << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }

  if(m_associationIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if(m_isPrimaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".IsPrimary=" << std::boolalpha << m_isPrimary << "&";
  }

  if(m_failureMessageHasBeenSet)
  {
      oStream << location << index << locationValue << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }

  if(m_statusHasBeenSet)
  {
      oStream << location << index << locationValue << ".Status=" << NatGatewayAddressStatusMapper::GetNameForNatGatewayAddressStatus(m_status) << "&";
  }

}

void NatGatewayAddress::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_allocationIdHasBeenSet)
  {
      oStream << location << ".AllocationId=" << StringUtils::URLEncode(m_allocationId.c_str()) << "&";
  }
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_privateIpHasBeenSet)
  {
      oStream << location << ".PrivateIp=" << StringUtils::URLEncode(m_privateIp.c_str()) << "&";
  }
  if(m_publicIpHasBeenSet)
  {
      oStream << location << ".PublicIp=" << StringUtils::URLEncode(m_publicIp.c_str()) << "&";
  }
  if(m_associationIdHasBeenSet)
  {
      oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if(m_isPrimaryHasBeenSet)
  {
      oStream << location << ".IsPrimary=" << std::boolalpha << m_isPrimary << "&";
  }
  if(m_failureMessageHasBeenSet)
  {
      oStream << location << ".FailureMessage=" << StringUtils::URLEncode(m_failureMessage.c_str()) << "&";
  }
  if(m_statusHasBeenSet)
  {
      oStream << location << ".Status=" << NatGatewayAddressStatusMapper::GetNameForNatGatewayAddressStatus(m_status) << "&";
  }
}

} // namespace Model
} // namespace EC2
} // namespace Aws
