/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/SecondaryInterface.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

SecondaryInterface::SecondaryInterface(const XmlNode& xmlNode) { *this = xmlNode; }

SecondaryInterface& SecondaryInterface::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode privateIpv4AddressesNode = resultNode.FirstChild("privateIpv4AddressSet");
    if (!privateIpv4AddressesNode.IsNull()) {
      XmlNode privateIpv4AddressesMember = privateIpv4AddressesNode.FirstChild("item");
      m_privateIpv4AddressesHasBeenSet = !privateIpv4AddressesMember.IsNull();
      while (!privateIpv4AddressesMember.IsNull()) {
        m_privateIpv4Addresses.push_back(privateIpv4AddressesMember);
        privateIpv4AddressesMember = privateIpv4AddressesMember.NextNode("item");
      }

      m_privateIpv4AddressesHasBeenSet = true;
    }
    XmlNode secondaryInterfaceIdNode = resultNode.FirstChild("secondaryInterfaceId");
    if (!secondaryInterfaceIdNode.IsNull()) {
      m_secondaryInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(secondaryInterfaceIdNode.GetText());
      m_secondaryInterfaceIdHasBeenSet = true;
    }
    XmlNode secondaryInterfaceArnNode = resultNode.FirstChild("secondaryInterfaceArn");
    if (!secondaryInterfaceArnNode.IsNull()) {
      m_secondaryInterfaceArn = Aws::Utils::Xml::DecodeEscapedXmlText(secondaryInterfaceArnNode.GetText());
      m_secondaryInterfaceArnHasBeenSet = true;
    }
    XmlNode secondaryInterfaceTypeNode = resultNode.FirstChild("secondaryInterfaceType");
    if (!secondaryInterfaceTypeNode.IsNull()) {
      m_secondaryInterfaceType = SecondaryInterfaceTypeMapper::GetSecondaryInterfaceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondaryInterfaceTypeNode.GetText()).c_str()));
      m_secondaryInterfaceTypeHasBeenSet = true;
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
    XmlNode secondaryNetworkTypeNode = resultNode.FirstChild("secondaryNetworkType");
    if (!secondaryNetworkTypeNode.IsNull()) {
      m_secondaryNetworkType = SecondaryNetworkTypeMapper::GetSecondaryNetworkTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(secondaryNetworkTypeNode.GetText()).c_str()));
      m_secondaryNetworkTypeHasBeenSet = true;
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
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("item");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("item");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void SecondaryInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_attachmentHasBeenSet) {
    Aws::StringStream attachmentLocationAndMemberSs;
    attachmentLocationAndMemberSs << location << index << locationValue << ".Attachment";
    m_attachment.OutputToStream(oStream, attachmentLocationAndMemberSs.str().c_str());
  }

  if (m_macAddressHasBeenSet) {
    oStream << location << index << locationValue << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }

  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_privateIpv4AddressesHasBeenSet) {
    unsigned privateIpv4AddressesIdx = 1;
    for (auto& item : m_privateIpv4Addresses) {
      Aws::StringStream privateIpv4AddressesSs;
      privateIpv4AddressesSs << location << index << locationValue << ".PrivateIpv4AddressSet." << privateIpv4AddressesIdx++;
      item.OutputToStream(oStream, privateIpv4AddressesSs.str().c_str());
    }
  }

  if (m_secondaryInterfaceIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryInterfaceId=" << StringUtils::URLEncode(m_secondaryInterfaceId.c_str())
            << "&";
  }

  if (m_secondaryInterfaceArnHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryInterfaceArn=" << StringUtils::URLEncode(m_secondaryInterfaceArn.c_str())
            << "&";
  }

  if (m_secondaryInterfaceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryInterfaceType="
            << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_secondaryInterfaceType)) << "&";
  }

  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }

  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }

  if (m_secondaryNetworkTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryNetworkType="
            << StringUtils::URLEncode(SecondaryNetworkTypeMapper::GetNameForSecondaryNetworkType(m_secondaryNetworkType)) << "&";
  }

  if (m_sourceDestCheckHasBeenSet) {
    oStream << location << index << locationValue << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue
            << ".Status=" << StringUtils::URLEncode(SecondaryInterfaceStatusMapper::GetNameForSecondaryInterfaceStatus(m_status)) << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void SecondaryInterface::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_attachmentHasBeenSet) {
    Aws::String attachmentLocationAndMember(location);
    attachmentLocationAndMember += ".Attachment";
    m_attachment.OutputToStream(oStream, attachmentLocationAndMember.c_str());
  }
  if (m_macAddressHasBeenSet) {
    oStream << location << ".MacAddress=" << StringUtils::URLEncode(m_macAddress.c_str()) << "&";
  }
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_privateIpv4AddressesHasBeenSet) {
    unsigned privateIpv4AddressesIdx = 1;
    for (auto& item : m_privateIpv4Addresses) {
      Aws::StringStream privateIpv4AddressesSs;
      privateIpv4AddressesSs << location << ".PrivateIpv4AddressSet." << privateIpv4AddressesIdx++;
      item.OutputToStream(oStream, privateIpv4AddressesSs.str().c_str());
    }
  }
  if (m_secondaryInterfaceIdHasBeenSet) {
    oStream << location << ".SecondaryInterfaceId=" << StringUtils::URLEncode(m_secondaryInterfaceId.c_str()) << "&";
  }
  if (m_secondaryInterfaceArnHasBeenSet) {
    oStream << location << ".SecondaryInterfaceArn=" << StringUtils::URLEncode(m_secondaryInterfaceArn.c_str()) << "&";
  }
  if (m_secondaryInterfaceTypeHasBeenSet) {
    oStream << location << ".SecondaryInterfaceType="
            << StringUtils::URLEncode(SecondaryInterfaceTypeMapper::GetNameForSecondaryInterfaceType(m_secondaryInterfaceType)) << "&";
  }
  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }
  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }
  if (m_secondaryNetworkTypeHasBeenSet) {
    oStream << location << ".SecondaryNetworkType="
            << StringUtils::URLEncode(SecondaryNetworkTypeMapper::GetNameForSecondaryNetworkType(m_secondaryNetworkType)) << "&";
  }
  if (m_sourceDestCheckHasBeenSet) {
    oStream << location << ".SourceDestCheck=" << std::boolalpha << m_sourceDestCheck << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location
            << ".Status=" << StringUtils::URLEncode(SecondaryInterfaceStatusMapper::GetNameForSecondaryInterfaceStatus(m_status)) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
