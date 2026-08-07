/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamRoutingPolicyRegistration::IpamRoutingPolicyRegistration(const XmlNode& xmlNode) { *this = xmlNode; }

IpamRoutingPolicyRegistration& IpamRoutingPolicyRegistration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode cidrNode = resultNode.FirstChild("cidr");
    if (!cidrNode.IsNull()) {
      m_cidr = Aws::Utils::Xml::DecodeEscapedXmlText(cidrNode.GetText());
      m_cidrHasBeenSet = true;
    }
    XmlNode asnsNode = resultNode.FirstChild("asnSet");
    if (!asnsNode.IsNull()) {
      XmlNode asnsMember = asnsNode.FirstChild("item");
      m_asnsHasBeenSet = !asnsMember.IsNull();
      while (!asnsMember.IsNull()) {
        m_asns.push_back(asnsMember.GetText());
        asnsMember = asnsMember.NextNode("item");
      }

      m_asnsHasBeenSet = true;
    }
    XmlNode permitMoreSpecificAnnouncementsNode = resultNode.FirstChild("permitMoreSpecificAnnouncements");
    if (!permitMoreSpecificAnnouncementsNode.IsNull()) {
      m_permitMoreSpecificAnnouncements = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(permitMoreSpecificAnnouncementsNode.GetText()).c_str()).c_str());
      m_permitMoreSpecificAnnouncementsHasBeenSet = true;
    }
    XmlNode maxLengthNode = resultNode.FirstChild("maxLength");
    if (!maxLengthNode.IsNull()) {
      m_maxLength =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maxLengthNode.GetText()).c_str()).c_str());
      m_maxLengthHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode latestDeltaIdNode = resultNode.FirstChild("latestDeltaId");
    if (!latestDeltaIdNode.IsNull()) {
      m_latestDeltaId = Aws::Utils::Xml::DecodeEscapedXmlText(latestDeltaIdNode.GetText());
      m_latestDeltaIdHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamRoutingPolicyRegistrationStateMapper::GetIpamRoutingPolicyRegistrationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
  }

  return *this;
}

void IpamRoutingPolicyRegistration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                   const char* locationValue) const {
  if (m_cidrHasBeenSet) {
    oStream << location << index << locationValue << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }

  if (m_asnsHasBeenSet) {
    unsigned asnsIdx = 1;
    for (auto& item : m_asns) {
      oStream << location << index << locationValue << ".AsnSet." << asnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_permitMoreSpecificAnnouncementsHasBeenSet) {
    oStream << location << index << locationValue << ".PermitMoreSpecificAnnouncements=" << std::boolalpha
            << m_permitMoreSpecificAnnouncements << "&";
  }

  if (m_maxLengthHasBeenSet) {
    oStream << location << index << locationValue << ".MaxLength=" << m_maxLength << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_latestDeltaIdHasBeenSet) {
    oStream << location << index << locationValue << ".LatestDeltaId=" << StringUtils::URLEncode(m_latestDeltaId.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(IpamRoutingPolicyRegistrationStateMapper::GetNameForIpamRoutingPolicyRegistrationState(m_state))
            << "&";
  }
}

void IpamRoutingPolicyRegistration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_cidrHasBeenSet) {
    oStream << location << ".Cidr=" << StringUtils::URLEncode(m_cidr.c_str()) << "&";
  }
  if (m_asnsHasBeenSet) {
    unsigned asnsIdx = 1;
    for (auto& item : m_asns) {
      oStream << location << ".AsnSet." << asnsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_permitMoreSpecificAnnouncementsHasBeenSet) {
    oStream << location << ".PermitMoreSpecificAnnouncements=" << std::boolalpha << m_permitMoreSpecificAnnouncements << "&";
  }
  if (m_maxLengthHasBeenSet) {
    oStream << location << ".MaxLength=" << m_maxLength << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_latestDeltaIdHasBeenSet) {
    oStream << location << ".LatestDeltaId=" << StringUtils::URLEncode(m_latestDeltaId.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(IpamRoutingPolicyRegistrationStateMapper::GetNameForIpamRoutingPolicyRegistrationState(m_state))
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
