/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/SecondarySubnetIpv4CidrBlockAssociation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

SecondarySubnetIpv4CidrBlockAssociation::SecondarySubnetIpv4CidrBlockAssociation(const XmlNode& xmlNode) { *this = xmlNode; }

SecondarySubnetIpv4CidrBlockAssociation& SecondarySubnetIpv4CidrBlockAssociation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode associationIdNode = resultNode.FirstChild("associationId");
    if (!associationIdNode.IsNull()) {
      m_associationId = Aws::Utils::Xml::DecodeEscapedXmlText(associationIdNode.GetText());
      m_associationIdHasBeenSet = true;
    }
    XmlNode cidrBlockNode = resultNode.FirstChild("cidrBlock");
    if (!cidrBlockNode.IsNull()) {
      m_cidrBlock = Aws::Utils::Xml::DecodeEscapedXmlText(cidrBlockNode.GetText());
      m_cidrBlockHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = SecondarySubnetCidrBlockAssociationStateMapper::GetSecondarySubnetCidrBlockAssociationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateReasonNode = resultNode.FirstChild("stateReason");
    if (!stateReasonNode.IsNull()) {
      m_stateReason = Aws::Utils::Xml::DecodeEscapedXmlText(stateReasonNode.GetText());
      m_stateReasonHasBeenSet = true;
    }
  }

  return *this;
}

void SecondarySubnetIpv4CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                             const char* locationValue) const {
  if (m_associationIdHasBeenSet) {
    oStream << location << index << locationValue << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }

  if (m_cidrBlockHasBeenSet) {
    oStream << location << index << locationValue << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(
                   SecondarySubnetCidrBlockAssociationStateMapper::GetNameForSecondarySubnetCidrBlockAssociationState(m_state))
            << "&";
  }

  if (m_stateReasonHasBeenSet) {
    oStream << location << index << locationValue << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
}

void SecondarySubnetIpv4CidrBlockAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_associationIdHasBeenSet) {
    oStream << location << ".AssociationId=" << StringUtils::URLEncode(m_associationId.c_str()) << "&";
  }
  if (m_cidrBlockHasBeenSet) {
    oStream << location << ".CidrBlock=" << StringUtils::URLEncode(m_cidrBlock.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(
                   SecondarySubnetCidrBlockAssociationStateMapper::GetNameForSecondarySubnetCidrBlockAssociationState(m_state))
            << "&";
  }
  if (m_stateReasonHasBeenSet) {
    oStream << location << ".StateReason=" << StringUtils::URLEncode(m_stateReason.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
