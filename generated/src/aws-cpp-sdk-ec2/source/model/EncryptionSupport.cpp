/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/EncryptionSupport.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

EncryptionSupport::EncryptionSupport(const XmlNode& xmlNode) { *this = xmlNode; }

EncryptionSupport& EncryptionSupport::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode encryptionStateNode = resultNode.FirstChild("encryptionState");
    if (!encryptionStateNode.IsNull()) {
      m_encryptionState = EncryptionStateValueMapper::GetEncryptionStateValueForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(encryptionStateNode.GetText()).c_str()));
      m_encryptionStateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if (!stateMessageNode.IsNull()) {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
  }

  return *this;
}

void EncryptionSupport::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_encryptionStateHasBeenSet) {
    oStream << location << index << locationValue
            << ".EncryptionState=" << StringUtils::URLEncode(EncryptionStateValueMapper::GetNameForEncryptionStateValue(m_encryptionState))
            << "&";
  }

  if (m_stateMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
}

void EncryptionSupport::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_encryptionStateHasBeenSet) {
    oStream << location
            << ".EncryptionState=" << StringUtils::URLEncode(EncryptionStateValueMapper::GetNameForEncryptionStateValue(m_encryptionState))
            << "&";
  }
  if (m_stateMessageHasBeenSet) {
    oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
