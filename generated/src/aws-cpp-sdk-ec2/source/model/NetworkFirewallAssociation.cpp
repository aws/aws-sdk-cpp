/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/NetworkFirewallAssociation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

NetworkFirewallAssociation::NetworkFirewallAssociation(const XmlNode& xmlNode) { *this = xmlNode; }

NetworkFirewallAssociation& NetworkFirewallAssociation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode firewallArnNode = resultNode.FirstChild("firewallArn");
    if (!firewallArnNode.IsNull()) {
      m_firewallArn = Aws::Utils::Xml::DecodeEscapedXmlText(firewallArnNode.GetText());
      m_firewallArnHasBeenSet = true;
    }
    XmlNode firewallOnboardingStatusNode = resultNode.FirstChild("firewallOnboardingStatus");
    if (!firewallOnboardingStatusNode.IsNull()) {
      m_firewallOnboardingStatus = FirewallOnboardingStatusMapper::GetFirewallOnboardingStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(firewallOnboardingStatusNode.GetText()).c_str()));
      m_firewallOnboardingStatusHasBeenSet = true;
    }
    XmlNode firewallModeNode = resultNode.FirstChild("firewallMode");
    if (!firewallModeNode.IsNull()) {
      m_firewallMode = FirewallModeMapper::GetFirewallModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(firewallModeNode.GetText()).c_str()));
      m_firewallModeHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkFirewallAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                const char* locationValue) const {
  if (m_firewallArnHasBeenSet) {
    oStream << location << index << locationValue << ".FirewallArn=" << StringUtils::URLEncode(m_firewallArn.c_str()) << "&";
  }

  if (m_firewallOnboardingStatusHasBeenSet) {
    oStream << location << index << locationValue << ".FirewallOnboardingStatus="
            << StringUtils::URLEncode(FirewallOnboardingStatusMapper::GetNameForFirewallOnboardingStatus(m_firewallOnboardingStatus))
            << "&";
  }

  if (m_firewallModeHasBeenSet) {
    oStream << location << index << locationValue
            << ".FirewallMode=" << StringUtils::URLEncode(FirewallModeMapper::GetNameForFirewallMode(m_firewallMode)) << "&";
  }
}

void NetworkFirewallAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_firewallArnHasBeenSet) {
    oStream << location << ".FirewallArn=" << StringUtils::URLEncode(m_firewallArn.c_str()) << "&";
  }
  if (m_firewallOnboardingStatusHasBeenSet) {
    oStream << location << ".FirewallOnboardingStatus="
            << StringUtils::URLEncode(FirewallOnboardingStatusMapper::GetNameForFirewallOnboardingStatus(m_firewallOnboardingStatus))
            << "&";
  }
  if (m_firewallModeHasBeenSet) {
    oStream << location << ".FirewallMode=" << StringUtils::URLEncode(FirewallModeMapper::GetNameForFirewallMode(m_firewallMode)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
