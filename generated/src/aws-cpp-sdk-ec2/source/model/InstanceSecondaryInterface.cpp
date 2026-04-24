/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/InstanceSecondaryInterface.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

InstanceSecondaryInterface::InstanceSecondaryInterface(const XmlNode& xmlNode) { *this = xmlNode; }

InstanceSecondaryInterface& InstanceSecondaryInterface::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode attachmentNode = resultNode.FirstChild("attachment");
    if (!attachmentNode.IsNull()) {
      m_attachment = attachmentNode;
      m_attachmentHasBeenSet = true;
    }
    XmlNode macAddressNode = resultNode.FirstChild("macAddress");
    if (!macAddressNode.IsNull()) {
      m_macAddress = Aws::Utils::Xml::DecodeEscapedXmlText(macAddressNode.GetText());
      m_macAddressHasBeenSet = true;
    }
    XmlNode secondaryInterfaceIdNode = resultNode.FirstChild("secondaryInterfaceId");
    if (!secondaryInterfaceIdNode.IsNull()) {
      m_secondaryInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(secondaryInterfaceIdNode.GetText());
      m_secondaryInterfaceIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode privateIpAddressesNode = resultNode.FirstChild("privateIpAddressSet");
    if (!privateIpAddressesNode.IsNull()) {
      XmlNode privateIpAddressesMember = privateIpAddressesNode.FirstChild("item");
      m_privateIpAddressesHasBeenSet = !privateIpAddressesMember.IsNull();
      while (!privateIpAddressesMember.IsNull()) {
        m_privateIpAddresses.push_back(privateIpAddressesMember);
        privateIpAddressesMember = privateIpAddressesMember.NextNode("item");
      }

      m_privateIpAddressesHasBeenSet = true;
    }
    XmlNode sourceDestCheckNode = resultNode.FirstChild("sourceDestCheck");
    if (!sourceDestCheckNode.IsNull()) {
      m_sourceDestCheck = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceDestCheckNode.GetText()).c_str()).c_str());
      m_sourceDestCheckHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("status");
    if (!statusNode.IsNull()) {
      m_status = SecondaryInterfaceStatusMapper::GetSecondaryInterfaceStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText()).c_str()));
      m_statusHasBeenSet = true;
    }
    XmlNode secondarySubnetIdNode = resultNode.FirstChild("secondarySubnetId");
    if (!secondarySubnetIdNode.IsNull()) {
      m_secondarySubnetId = Aws::Utils::Xml::DecodeEscapedXmlText(secondarySubnetIdNode.GetText());
      m_secondarySubnetIdHasBeenSet = true;
    }
    XmlNode secondaryNetworkIdNode = resultNode.FirstChild("secondaryNetworkId");
    if (!secondaryNetworkIdNode.IsNull()) {
      m_secondaryNetworkId = Aws::Utils::Xml::DecodeEscapedXmlText(secondaryNetworkIdNode.GetText());
      m_secondaryNetworkIdHasBeenSet = true;
    }
    XmlNode interfaceTypeNode = resultNode.FirstChild("interfaceType");
    if (!interfaceTypeNode.IsNull()) {
      m_interfaceType = SecondaryInterfaceTypeMapper::GetSecondaryInterfaceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(interfaceTypeNode.GetText()).c_str()));
      m_interfaceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void InstanceSecondaryInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                const char* locationValue) const {
  if (m_attachmentHasBeenSet) {
    Aws::StringStream attachmentLocationAndMemberSs;
    attachmentLocationAndMemberSs << location << index << locationValue << ".Attachment";
    m_attachment.OutputToStream(oStream, attachmentLocationAndMemberSs.str().c_str());
  }

  if (m_macAddressHasBeenSet) {
    oStream << location << index << locationValue << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }

  if (m_secondaryInterfaceIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryInterfaceId=" << StringUtils::URLEncode(m_secondaryInterfaceId.c_str())
            << "&";
  }

  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_privateIpAddressesHasBeenSet) {
    unsigned privateIpAddressesIdx = 1;
    for (auto& item : m_privateIpAddresses) {
      Aws::StringStream privateIpAddressesSs;
      privateIpAddressesSs << location << index << locationValue << ".PrivateIpAddressSet." << privateIpAddressesIdx++;
      item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
    }
  }

  if (m_sourceDestCheckHasBeenSet) {
    oStream << location << index << locationValue << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(SecondaryInterfaceStatusMapper::GetNameForSecondaryInterfaceStatus(m_status)) << "&";
  }

  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }

  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }

  if (m_interfaceTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".InterfaceType=" << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_interfaceType))
            << "&";
  }
}

void InstanceSecondaryInterface::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_attachmentHasBeenSet) {
    Aws::String attachmentLocationAndMember(location);
    attachmentLocationAndMember += ".Attachment";
    m_attachment.OutputToStream(oStream, attachmentLocationAndMember.c_str());
  }
  if (m_macAddressHasBeenSet) {
    oStream << location << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }
  if (m_secondaryInterfaceIdHasBeenSet) {
    oStream << location << ".SecondaryInterfaceId=" << StringUtils::URLEncode(m_secondaryInterfaceId.c_str()) << "&";
  }
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_privateIpAddressesHasBeenSet) {
    unsigned privateIpAddressesIdx = 1;
    for (auto& item : m_privateIpAddresses) {
      Aws::StringStream privateIpAddressesSs;
      privateIpAddressesSs << location << ".PrivateIpAddressSet." << privateIpAddressesIdx++;
      item.OutputToStream(oStream, privateIpAddressesSs.str().c_str());
    }
  }
  if (m_sourceDestCheckHasBeenSet) {
    oStream << location << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location
            << ".Status=" << StringUtils::URLEncode(SecondaryInterfaceStatusMapper::GetNameForSecondaryInterfaceStatus(m_status)) << "&";
  }
  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }
  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }
  if (m_interfaceTypeHasBeenSet) {
    oStream << location
            << ".InterfaceType=" << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_interfaceType))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
