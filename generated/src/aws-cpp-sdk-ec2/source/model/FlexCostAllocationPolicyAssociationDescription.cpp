/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationPolicyAssociationDescription.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationPolicyAssociationDescription::FlexCostAllocationPolicyAssociationDescription(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationPolicyAssociationDescription& FlexCostAllocationPolicyAssociationDescription::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyAssociationIdNode = resultNode.FirstChild("fcaPolicyAssociationId");
    if (!fcaPolicyAssociationIdNode.IsNull()) {
      m_fcaPolicyAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyAssociationIdNode.GetText());
      m_fcaPolicyAssociationIdHasBeenSet = true;
    }
    XmlNode fcaPolicyIdNode = resultNode.FirstChild("fcaPolicyId");
    if (!fcaPolicyIdNode.IsNull()) {
      m_fcaPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyIdNode.GetText());
      m_fcaPolicyIdHasBeenSet = true;
    }
    XmlNode networkResourceIdNode = resultNode.FirstChild("networkResourceId");
    if (!networkResourceIdNode.IsNull()) {
      m_networkResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkResourceIdNode.GetText());
      m_networkResourceIdHasBeenSet = true;
    }
    XmlNode ownerAccountNode = resultNode.FirstChild("ownerAccount");
    if (!ownerAccountNode.IsNull()) {
      m_ownerAccount = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAccountNode.GetText());
      m_ownerAccountHasBeenSet = true;
    }
    XmlNode associatedAtNode = resultNode.FirstChild("associatedAt");
    if (!associatedAtNode.IsNull()) {
      m_associatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatedAtNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_associatedAtHasBeenSet = true;
    }
    XmlNode expectedEffectiveAtNode = resultNode.FirstChild("expectedEffectiveAt");
    if (!expectedEffectiveAtNode.IsNull()) {
      m_expectedEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expectedEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_expectedEffectiveAtHasBeenSet = true;
    }
    XmlNode associationModeNode = resultNode.FirstChild("associationMode");
    if (!associationModeNode.IsNull()) {
      m_associationMode = FlexCostAllocationAssociationModeMapper::GetFlexCostAllocationAssociationModeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associationModeNode.GetText()).c_str()));
      m_associationModeHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if (!managedByNode.IsNull()) {
      m_managedBy =
          ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()));
      m_managedByHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationPolicyAssociationDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                                    const char* locationValue) const {
  if (m_fcaPolicyAssociationIdHasBeenSet) {
    oStream << location << index << locationValue << ".FcaPolicyAssociationId=" << StringUtils::URLEncode(m_fcaPolicyAssociationId.c_str())
            << "&";
  }

  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << index << locationValue << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }

  if (m_networkResourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".NetworkResourceId=" << StringUtils::URLEncode(m_networkResourceId.c_str()) << "&";
  }

  if (m_ownerAccountHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }

  if (m_associatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".AssociatedAt=" << StringUtils::URLEncode(m_associatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_expectedEffectiveAtHasBeenSet) {
    oStream << location << index << locationValue << ".ExpectedEffectiveAt="
            << StringUtils::URLEncode(m_expectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_associationModeHasBeenSet) {
    oStream << location << index << locationValue << ".AssociationMode="
            << StringUtils::URLEncode(
                   FlexCostAllocationAssociationModeMapper::GetNameForFlexCostAllocationAssociationMode(m_associationMode))
            << "&";
  }

  if (m_managedByHasBeenSet) {
    oStream << location << index << locationValue
            << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }
}

void FlexCostAllocationPolicyAssociationDescription::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fcaPolicyAssociationIdHasBeenSet) {
    oStream << location << ".FcaPolicyAssociationId=" << StringUtils::URLEncode(m_fcaPolicyAssociationId.c_str()) << "&";
  }
  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }
  if (m_networkResourceIdHasBeenSet) {
    oStream << location << ".NetworkResourceId=" << StringUtils::URLEncode(m_networkResourceId.c_str()) << "&";
  }
  if (m_ownerAccountHasBeenSet) {
    oStream << location << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }
  if (m_associatedAtHasBeenSet) {
    oStream << location << ".AssociatedAt=" << StringUtils::URLEncode(m_associatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_expectedEffectiveAtHasBeenSet) {
    oStream << location << ".ExpectedEffectiveAt="
            << StringUtils::URLEncode(m_expectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_associationModeHasBeenSet) {
    oStream << location << ".AssociationMode="
            << StringUtils::URLEncode(
                   FlexCostAllocationAssociationModeMapper::GetNameForFlexCostAllocationAssociationMode(m_associationMode))
            << "&";
  }
  if (m_managedByHasBeenSet) {
    oStream << location << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
