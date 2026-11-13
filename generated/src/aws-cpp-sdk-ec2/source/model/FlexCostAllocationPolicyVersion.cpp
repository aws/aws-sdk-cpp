/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/FlexCostAllocationPolicyVersion.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

FlexCostAllocationPolicyVersion::FlexCostAllocationPolicyVersion(const XmlNode& xmlNode) { *this = xmlNode; }

FlexCostAllocationPolicyVersion& FlexCostAllocationPolicyVersion::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fcaPolicyIdNode = resultNode.FirstChild("fcaPolicyId");
    if (!fcaPolicyIdNode.IsNull()) {
      m_fcaPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(fcaPolicyIdNode.GetText());
      m_fcaPolicyIdHasBeenSet = true;
    }
    XmlNode versionNode = resultNode.FirstChild("version");
    if (!versionNode.IsNull()) {
      m_version =
          StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(versionNode.GetText()).c_str()).c_str());
      m_versionHasBeenSet = true;
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
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode expectedEffectiveAtNode = resultNode.FirstChild("expectedEffectiveAt");
    if (!expectedEffectiveAtNode.IsNull()) {
      m_expectedEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(expectedEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_expectedEffectiveAtHasBeenSet = true;
    }
    XmlNode createdAtNode = resultNode.FirstChild("createdAt");
    if (!createdAtNode.IsNull()) {
      m_createdAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createdAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_createdAtHasBeenSet = true;
    }
  }

  return *this;
}

void FlexCostAllocationPolicyVersion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << index << locationValue << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }

  if (m_versionHasBeenSet) {
    oStream << location << index << locationValue << ".Version=" << m_version << "&";
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

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_expectedEffectiveAtHasBeenSet) {
    oStream << location << index << locationValue << ".ExpectedEffectiveAt="
            << StringUtils::URLEncode(m_expectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_createdAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void FlexCostAllocationPolicyVersion::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fcaPolicyIdHasBeenSet) {
    oStream << location << ".FcaPolicyId=" << StringUtils::URLEncode(m_fcaPolicyId.c_str()) << "&";
  }
  if (m_versionHasBeenSet) {
    oStream << location << ".Version=" << m_version << "&";
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
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_expectedEffectiveAtHasBeenSet) {
    oStream << location << ".ExpectedEffectiveAt="
            << StringUtils::URLEncode(m_expectedEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_createdAtHasBeenSet) {
    oStream << location << ".CreatedAt=" << StringUtils::URLEncode(m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
