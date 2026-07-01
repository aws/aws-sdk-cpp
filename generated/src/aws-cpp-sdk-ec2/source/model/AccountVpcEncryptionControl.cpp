/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/AccountVpcEncryptionControl.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

AccountVpcEncryptionControl::AccountVpcEncryptionControl(const XmlNode& xmlNode) { *this = xmlNode; }

AccountVpcEncryptionControl& AccountVpcEncryptionControl::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = AccountVpcEncryptionControlStateMapper::GetAccountVpcEncryptionControlStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode modeNode = resultNode.FirstChild("mode");
    if (!modeNode.IsNull()) {
      m_mode = AccountVpcEncryptionControlModeMapper::GetAccountVpcEncryptionControlModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(modeNode.GetText()).c_str()));
      m_modeHasBeenSet = true;
    }
    XmlNode exclusionsNode = resultNode.FirstChild("exclusions");
    if (!exclusionsNode.IsNull()) {
      m_exclusions = exclusionsNode;
      m_exclusionsHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if (!managedByNode.IsNull()) {
      m_managedBy =
          ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()));
      m_managedByHasBeenSet = true;
    }
    XmlNode lastUpdateTimestampNode = resultNode.FirstChild("lastUpdateTimestamp");
    if (!lastUpdateTimestampNode.IsNull()) {
      m_lastUpdateTimestamp =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastUpdateTimestampNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_lastUpdateTimestampHasBeenSet = true;
    }
  }

  return *this;
}

void AccountVpcEncryptionControl::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(AccountVpcEncryptionControlStateMapper::GetNameForAccountVpcEncryptionControlState(m_state)) << "&";
  }

  if (m_modeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Mode=" << StringUtils::URLEncode(AccountVpcEncryptionControlModeMapper::GetNameForAccountVpcEncryptionControlMode(m_mode))
            << "&";
  }

  if (m_exclusionsHasBeenSet) {
    Aws::StringStream exclusionsLocationAndMemberSs;
    exclusionsLocationAndMemberSs << location << index << locationValue << ".Exclusions";
    m_exclusions.OutputToStream(oStream, exclusionsLocationAndMemberSs.str().c_str());
  }

  if (m_managedByHasBeenSet) {
    oStream << location << index << locationValue
            << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }

  if (m_lastUpdateTimestampHasBeenSet) {
    oStream << location << index << locationValue << ".LastUpdateTimestamp="
            << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void AccountVpcEncryptionControl::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(AccountVpcEncryptionControlStateMapper::GetNameForAccountVpcEncryptionControlState(m_state)) << "&";
  }
  if (m_modeHasBeenSet) {
    oStream << location
            << ".Mode=" << StringUtils::URLEncode(AccountVpcEncryptionControlModeMapper::GetNameForAccountVpcEncryptionControlMode(m_mode))
            << "&";
  }
  if (m_exclusionsHasBeenSet) {
    Aws::String exclusionsLocationAndMember(location);
    exclusionsLocationAndMember += ".Exclusions";
    m_exclusions.OutputToStream(oStream, exclusionsLocationAndMember.c_str());
  }
  if (m_managedByHasBeenSet) {
    oStream << location << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }
  if (m_lastUpdateTimestampHasBeenSet) {
    oStream << location << ".LastUpdateTimestamp="
            << StringUtils::URLEncode(m_lastUpdateTimestamp.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
