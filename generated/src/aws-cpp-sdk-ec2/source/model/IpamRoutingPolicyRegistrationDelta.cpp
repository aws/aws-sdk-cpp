/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamRoutingPolicyRegistrationDelta.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamRoutingPolicyRegistrationDelta::IpamRoutingPolicyRegistrationDelta(const XmlNode& xmlNode) { *this = xmlNode; }

IpamRoutingPolicyRegistrationDelta& IpamRoutingPolicyRegistrationDelta::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode deltaIdNode = resultNode.FirstChild("deltaId");
    if (!deltaIdNode.IsNull()) {
      m_deltaId = Aws::Utils::Xml::DecodeEscapedXmlText(deltaIdNode.GetText());
      m_deltaIdHasBeenSet = true;
    }
    XmlNode deltaJsonNode = resultNode.FirstChild("deltaJson");
    if (!deltaJsonNode.IsNull()) {
      m_deltaJson = Aws::Utils::Xml::DecodeEscapedXmlText(deltaJsonNode.GetText());
      m_deltaJsonHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamRoutingPolicyRegistrationDeltaStateMapper::GetIpamRoutingPolicyRegistrationDeltaStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if (!stateMessageNode.IsNull()) {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
  }

  return *this;
}

void IpamRoutingPolicyRegistrationDelta::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                        const char* locationValue) const {
  if (m_deltaIdHasBeenSet) {
    oStream << location << index << locationValue << ".DeltaId=" << StringUtils::URLEncode(m_deltaId.c_str()) << "&";
  }

  if (m_deltaJsonHasBeenSet) {
    oStream << location << index << locationValue << ".DeltaJson=" << StringUtils::URLEncode(m_deltaJson.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(
                   IpamRoutingPolicyRegistrationDeltaStateMapper::GetNameForIpamRoutingPolicyRegistrationDeltaState(m_state))
            << "&";
  }

  if (m_stateMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
}

void IpamRoutingPolicyRegistrationDelta::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_deltaIdHasBeenSet) {
    oStream << location << ".DeltaId=" << StringUtils::URLEncode(m_deltaId.c_str()) << "&";
  }
  if (m_deltaJsonHasBeenSet) {
    oStream << location << ".DeltaJson=" << StringUtils::URLEncode(m_deltaJson.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(
                   IpamRoutingPolicyRegistrationDeltaStateMapper::GetNameForIpamRoutingPolicyRegistrationDeltaState(m_state))
            << "&";
  }
  if (m_stateMessageHasBeenSet) {
    oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
