/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/SecondarySubnet.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

SecondarySubnet::SecondarySubnet(const XmlNode& xmlNode) { *this = xmlNode; }

SecondarySubnet& SecondarySubnet::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode secondarySubnetIdNode = resultNode.FirstChild("secondarySubnetId");
    if (!secondarySubnetIdNode.IsNull()) {
      m_secondarySubnetId = Aws::Utils::Xml::DecodeEscapedXmlText(secondarySubnetIdNode.GetText());
      m_secondarySubnetIdHasBeenSet = true;
    }
    XmlNode secondarySubnetArnNode = resultNode.FirstChild("secondarySubnetArn");
    if (!secondarySubnetArnNode.IsNull()) {
      m_secondarySubnetArn = Aws::Utils::Xml::DecodeEscapedXmlText(secondarySubnetArnNode.GetText());
      m_secondarySubnetArnHasBeenSet = true;
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
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode availabilityZoneIdNode = resultNode.FirstChild("availabilityZoneId");
    if (!availabilityZoneIdNode.IsNull()) {
      m_availabilityZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneIdNode.GetText());
      m_availabilityZoneIdHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("availabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode ipv4CidrBlockAssociationsNode = resultNode.FirstChild("ipv4CidrBlockAssociationSet");
    if (!ipv4CidrBlockAssociationsNode.IsNull()) {
      XmlNode ipv4CidrBlockAssociationsMember = ipv4CidrBlockAssociationsNode.FirstChild("item");
      m_ipv4CidrBlockAssociationsHasBeenSet = !ipv4CidrBlockAssociationsMember.IsNull();
      while (!ipv4CidrBlockAssociationsMember.IsNull()) {
        m_ipv4CidrBlockAssociations.push_back(ipv4CidrBlockAssociationsMember);
        ipv4CidrBlockAssociationsMember = ipv4CidrBlockAssociationsMember.NextNode("item");
      }

      m_ipv4CidrBlockAssociationsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = SecondarySubnetStateMapper::GetSecondarySubnetStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if (!stateReasonNode.IsNull()) {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
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

void SecondarySubnet::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }

  if (m_secondarySubnetArnHasBeenSet) {
    oStream << location << index << locationValue << ".SecondarySubnetArn=" << StringUtils::URLEncode(m_secondarySubnetArn.c_str()) << "&";
  }

  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }

  if (m_secondaryNetworkTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SecondaryNetworkType="
            << StringUtils::URLEncode(SecondaryNetworkTypeMapper::GetNameForSecondaryNetworkType(m_secondaryNetworkType)) << "&";
  }

  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }

  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_ipv4CidrBlockAssociationsHasBeenSet) {
    unsigned ipv4CidrBlockAssociationsIdx = 1;
    for (auto& item : m_ipv4CidrBlockAssociations) {
      Aws::StringStream ipv4CidrBlockAssociationsSs;
      ipv4CidrBlockAssociationsSs << location << index << locationValue << ".Ipv4CidrBlockAssociationSet."
                                  << ipv4CidrBlockAssociationsIdx++;
      item.OutputToStream(oStream, ipv4CidrBlockAssociationsSs.str().c_str());
    }
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(SecondarySubnetStateMapper::GetNameForSecondarySubnetState(m_state)) << "&";
  }

  if (m_stateReasonHasBeenSet) {
    oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
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

void SecondarySubnet::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_secondarySubnetIdHasBeenSet) {
    oStream << location << ".SecondarySubnetId=" << StringUtils::URLEncode(m_secondarySubnetId.c_str()) << "&";
  }
  if (m_secondarySubnetArnHasBeenSet) {
    oStream << location << ".SecondarySubnetArn=" << StringUtils::URLEncode(m_secondarySubnetArn.c_str()) << "&";
  }
  if (m_secondaryNetworkIdHasBeenSet) {
    oStream << location << ".SecondaryNetworkId=" << StringUtils::URLEncode(m_secondaryNetworkId.c_str()) << "&";
  }
  if (m_secondaryNetworkTypeHasBeenSet) {
    oStream << location << ".SecondaryNetworkType="
            << StringUtils::URLEncode(SecondaryNetworkTypeMapper::GetNameForSecondaryNetworkType(m_secondaryNetworkType)) << "&";
  }
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_availabilityZoneIdHasBeenSet) {
    oStream << location << ".AvailabilityZoneId=" << StringUtils::URLEncode(m_availabilityZoneId.c_str()) << "&";
  }
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_ipv4CidrBlockAssociationsHasBeenSet) {
    unsigned ipv4CidrBlockAssociationsIdx = 1;
    for (auto& item : m_ipv4CidrBlockAssociations) {
      Aws::StringStream ipv4CidrBlockAssociationsSs;
      ipv4CidrBlockAssociationsSs << location << ".Ipv4CidrBlockAssociationSet." << ipv4CidrBlockAssociationsIdx++;
      item.OutputToStream(oStream, ipv4CidrBlockAssociationsSs.str().c_str());
    }
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(SecondarySubnetStateMapper::GetNameForSecondarySubnetState(m_state)) << "&";
  }
  if (m_stateReasonHasBeenSet) {
    oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
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
