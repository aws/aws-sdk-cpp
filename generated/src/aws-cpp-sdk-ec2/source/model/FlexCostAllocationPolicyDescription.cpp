/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationPolicyDescription.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationPolicyDescription::FlexCostAllocationPolicyDescription(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationPolicyDescription& FlexCostAllocationPolicyDescription::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyIdNode = resultNode.FirstChild("fcaPolicyId");
    if (!fcaPolicyIdNode.IsNull()) {
      m_fcaPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyIdNode.GetText());
      m_fcaPolicyIdHasBeenSet = true;
    }
    XmlNode fcaPolicyArnNode = resultNode.FirstChild("fcaPolicyArn");
    if (!fcaPolicyArnNode.IsNull()) {
      m_fcaPolicyArn = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyArnNode.GetText());
      m_fcaPolicyArnHasBeenSet = true;
    }
    XmlNode networkResourceTypeNode = resultNode.FirstChild("networkResourceType");
    if (!networkResourceTypeNode.IsNull()) {
      m_networkResourceType = FlexCostAllocationNetworkResourceTypeMapper::GetFlexCostAllocationNetworkResourceTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(networkResourceTypeNode.GetText()).c_str()));
      m_networkResourceTypeHasBeenSet = true;
    }
    XmlNode natFcaPolicyDocumentNode = resultNode.FirstChild("natFcaPolicyDocument");
    if (!natFcaPolicyDocumentNode.IsNull()) {
      m_natFcaPolicyDocument = natFcaPolicyDocumentNode;
      m_natFcaPolicyDocumentHasBeenSet = true;
    }
    XmlNode instanceFcaPolicyDocumentNode = resultNode.FirstChild("instanceFcaPolicyDocument");
    if (!instanceFcaPolicyDocumentNode.IsNull()) {
      m_instanceFcaPolicyDocument = instanceFcaPolicyDocumentNode;
      m_instanceFcaPolicyDocumentHasBeenSet = true;
    }
    XmlNode pcxFcaPolicyDocumentNode = resultNode.FirstChild("pcxFcaPolicyDocument");
    if (!pcxFcaPolicyDocumentNode.IsNull()) {
      m_pcxFcaPolicyDocument = pcxFcaPolicyDocumentNode;
      m_pcxFcaPolicyDocumentHasBeenSet = true;
    }
    XmlNode showBackEnabledNode = resultNode.FirstChild("showBackEnabled");
    if (!showBackEnabledNode.IsNull()) {
      m_showBackEnabled = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(showBackEnabledNode.GetText()).c_str()).c_str());
      m_showBackEnabledHasBeenSet = true;
    }
    XmlNode ownerAccountNode = resultNode.FirstChild("ownerAccount");
    if (!ownerAccountNode.IsNull()) {
      m_ownerAccount = Aws::Utils::Xml::DecodeEscapedXmlText(ownerAccountNode.GetText());
      m_ownerAccountHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode latestVersionNode = resultNode.FirstChild("latestVersion");
    if (!latestVersionNode.IsNull()) {
      m_latestVersion = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(latestVersionNode.GetText()).c_str()).c_str());
      m_latestVersionHasBeenSet = true;
    }
    XmlNode versionExpectedEffectiveAtNode = resultNode.FirstChild("versionExpectedEffectiveAt");
    if (!versionExpectedEffectiveAtNode.IsNull()) {
      m_versionExpectedEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionExpectedEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_versionExpectedEffectiveAtHasBeenSet = true;
    }
    XmlNode policyCreatedAtNode = resultNode.FirstChild("policyCreatedAt");
    if (!policyCreatedAtNode.IsNull()) {
      m_policyCreatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(policyCreatedAtNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_policyCreatedAtHasBeenSet = true;
    }
    XmlNode updatedAtNode = resultNode.FirstChild("updatedAt");
    if (!updatedAtNode.IsNull()) {
      m_updatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_updatedAtHasBeenSet = true;
    }
    XmlNode managedByNode = resultNode.FirstChild("managedBy");
    if (!managedByNode.IsNull()) {
      m_managedBy =
          ManagedByMapper::GetManagedByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(managedByNode.GetText()).c_str()));
      m_managedByHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tags");
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

void FlexCostAllocationPolicyDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                         const char* locationValue) const {
  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << index << locationValue << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }

  if (m_fcaPolicyArnHasBeenSet) {
    oStream << location << index << locationValue << ".FcaPolicyArn=" << StringUtils::URLEncode(m_fcaPolicyArn.c_str()) << "&";
  }

  if (m_networkResourceTypeHasBeenSet) {
    oStream << location << index << locationValue << ".NetworkResourceType="
            << StringUtils::URLEncode(
                   FlexCostAllocationNetworkResourceTypeMapper::GetNameForFlexCostAllocationNetworkResourceType(m_networkResourceType))
            << "&";
  }

  if (m_natFcaPolicyDocumentHasBeenSet) {
    Aws::StringStream natFcaPolicyDocumentLocationAndMemberSs;
    natFcaPolicyDocumentLocationAndMemberSs << location << index << locationValue << ".NatFcaPolicyDocument";
    m_natFcaPolicyDocument.OutputToStream(oStream, natFcaPolicyDocumentLocationAndMemberSs.str().c_str());
  }

  if (m_instanceFcaPolicyDocumentHasBeenSet) {
    Aws::StringStream instanceFcaPolicyDocumentLocationAndMemberSs;
    instanceFcaPolicyDocumentLocationAndMemberSs << location << index << locationValue << ".InstanceFcaPolicyDocument";
    m_instanceFcaPolicyDocument.OutputToStream(oStream, instanceFcaPolicyDocumentLocationAndMemberSs.str().c_str());
  }

  if (m_pcxFcaPolicyDocumentHasBeenSet) {
    Aws::StringStream pcxFcaPolicyDocumentLocationAndMemberSs;
    pcxFcaPolicyDocumentLocationAndMemberSs << location << index << locationValue << ".PcxFcaPolicyDocument";
    m_pcxFcaPolicyDocument.OutputToStream(oStream, pcxFcaPolicyDocumentLocationAndMemberSs.str().c_str());
  }

  if (m_showBackEnabledHasBeenSet) {
    oStream << location << index << locationValue << ".ShowBackEnabled=" << std::boolalpha << m_showBackEnabled << "&";
  }

  if (m_ownerAccountHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_latestVersionHasBeenSet) {
    oStream << location << index << locationValue << ".LatestVersion=" << m_latestVersion << "&";
  }

  if (m_versionExpectedEffectiveAtHasBeenSet) {
    oStream << location << index << locationValue << ".VersionExpectedEffectiveAt="
            << StringUtils::URLEncode(m_versionExpectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_policyCreatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".PolicyCreatedAt=" << StringUtils::URLEncode(m_policyCreatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_updatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_managedByHasBeenSet) {
    oStream << location << index << locationValue
            << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".Tags." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void FlexCostAllocationPolicyDescription::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }
  if (m_fcaPolicyArnHasBeenSet) {
    oStream << location << ".FcaPolicyArn=" << StringUtils::URLEncode(m_fcaPolicyArn.c_str()) << "&";
  }
  if (m_networkResourceTypeHasBeenSet) {
    oStream << location << ".NetworkResourceType="
            << StringUtils::URLEncode(
                   FlexCostAllocationNetworkResourceTypeMapper::GetNameForFlexCostAllocationNetworkResourceType(m_networkResourceType))
            << "&";
  }
  if (m_natFcaPolicyDocumentHasBeenSet) {
    Aws::String natFcaPolicyDocumentLocationAndMember(location);
    natFcaPolicyDocumentLocationAndMember += ".NatFcaPolicyDocument";
    m_natFcaPolicyDocument.OutputToStream(oStream, natFcaPolicyDocumentLocationAndMember.c_str());
  }
  if (m_instanceFcaPolicyDocumentHasBeenSet) {
    Aws::String instanceFcaPolicyDocumentLocationAndMember(location);
    instanceFcaPolicyDocumentLocationAndMember += ".InstanceFcaPolicyDocument";
    m_instanceFcaPolicyDocument.OutputToStream(oStream, instanceFcaPolicyDocumentLocationAndMember.c_str());
  }
  if (m_pcxFcaPolicyDocumentHasBeenSet) {
    Aws::String pcxFcaPolicyDocumentLocationAndMember(location);
    pcxFcaPolicyDocumentLocationAndMember += ".PcxFcaPolicyDocument";
    m_pcxFcaPolicyDocument.OutputToStream(oStream, pcxFcaPolicyDocumentLocationAndMember.c_str());
  }
  if (m_showBackEnabledHasBeenSet) {
    oStream << location << ".ShowBackEnabled=" << std::boolalpha << m_showBackEnabled << "&";
  }
  if (m_ownerAccountHasBeenSet) {
    oStream << location << ".OwnerAccount=" << StringUtils::URLEncode(m_ownerAccount.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_latestVersionHasBeenSet) {
    oStream << location << ".LatestVersion=" << m_latestVersion << "&";
  }
  if (m_versionExpectedEffectiveAtHasBeenSet) {
    oStream << location << ".VersionExpectedEffectiveAt="
            << StringUtils::URLEncode(m_versionExpectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_policyCreatedAtHasBeenSet) {
    oStream << location
            << ".PolicyCreatedAt=" << StringUtils::URLEncode(m_policyCreatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_updatedAtHasBeenSet) {
    oStream << location << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_managedByHasBeenSet) {
    oStream << location << ".ManagedBy=" << StringUtils::URLEncode(ManagedByMapper::GetNameForManagedBy(m_managedBy)) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".Tags." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
