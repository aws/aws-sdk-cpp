/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ActiveVpnTunnelAdditionalKeyExchange.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ActiveVpnTunnelAdditionalKeyExchange::ActiveVpnTunnelAdditionalKeyExchange(const XmlNode& xmlNode) { *this = xmlNode; }

ActiveVpnTunnelAdditionalKeyExchange& ActiveVpnTunnelAdditionalKeyExchange::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode additionalKeyExchangeRoundNode = resultNode.FirstChild("additionalKeyExchangeRound");
    if (!additionalKeyExchangeRoundNode.IsNull()) {
      m_additionalKeyExchangeRound = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(additionalKeyExchangeRoundNode.GetText()).c_str()).c_str());
      m_additionalKeyExchangeRoundHasBeenSet = true;
    }
    XmlNode keyExchangeMethodNode = resultNode.FirstChild("keyExchangeMethod");
    if (!keyExchangeMethodNode.IsNull()) {
      m_keyExchangeMethod = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(keyExchangeMethodNode.GetText()).c_str()).c_str());
      m_keyExchangeMethodHasBeenSet = true;
    }
  }

  return *this;
}

void ActiveVpnTunnelAdditionalKeyExchange::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_additionalKeyExchangeRoundHasBeenSet) {
    oStream << location << index << locationValue << ".AdditionalKeyExchangeRound=" << m_additionalKeyExchangeRound << "&";
  }

  if (m_keyExchangeMethodHasBeenSet) {
    oStream << location << index << locationValue << ".KeyExchangeMethod=" << m_keyExchangeMethod << "&";
  }
}

void ActiveVpnTunnelAdditionalKeyExchange::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_additionalKeyExchangeRoundHasBeenSet) {
    oStream << location << ".AdditionalKeyExchangeRound=" << m_additionalKeyExchangeRound << "&";
  }
  if (m_keyExchangeMethodHasBeenSet) {
    oStream << location << ".KeyExchangeMethod=" << m_keyExchangeMethod << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
