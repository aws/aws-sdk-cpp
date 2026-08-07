/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamInternetRegistryAssociation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamInternetRegistryAssociation::IpamInternetRegistryAssociation(const XmlNode& xmlNode) { *this = xmlNode; }

IpamInternetRegistryAssociation& IpamInternetRegistryAssociation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ipamInternetRegistryAssociationIdNode = resultNode.FirstChild("ipamInternetRegistryAssociationId");
    if (!ipamInternetRegistryAssociationIdNode.IsNull()) {
      m_ipamInternetRegistryAssociationId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamInternetRegistryAssociationIdNode.GetText());
      m_ipamInternetRegistryAssociationIdHasBeenSet = true;
    }
    XmlNode ipamInternetRegistryAssociationArnNode = resultNode.FirstChild("ipamInternetRegistryAssociationArn");
    if (!ipamInternetRegistryAssociationArnNode.IsNull()) {
      m_ipamInternetRegistryAssociationArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamInternetRegistryAssociationArnNode.GetText());
      m_ipamInternetRegistryAssociationArnHasBeenSet = true;
    }
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if (!ipamIdNode.IsNull()) {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
    }
    XmlNode ipamRegionNode = resultNode.FirstChild("ipamRegion");
    if (!ipamRegionNode.IsNull()) {
      m_ipamRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamRegionNode.GetText());
      m_ipamRegionHasBeenSet = true;
    }
    XmlNode rirNode = resultNode.FirstChild("rir");
    if (!rirNode.IsNull()) {
      m_rir = RirMapper::GetRirForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(rirNode.GetText()).c_str()));
      m_rirHasBeenSet = true;
    }
    XmlNode organizationHandleNode = resultNode.FirstChild("organizationHandle");
    if (!organizationHandleNode.IsNull()) {
      m_organizationHandle = Aws::Utils::Xml::DecodeEscapedXmlText(organizationHandleNode.GetText());
      m_organizationHandleHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamInternetRegistryAssociationStateMapper::GetIpamInternetRegistryAssociationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode childRequestXmlNode = resultNode.FirstChild("childRequestXml");
    if (!childRequestXmlNode.IsNull()) {
      m_childRequestXml = Aws::Utils::Xml::DecodeEscapedXmlText(childRequestXmlNode.GetText());
      m_childRequestXmlHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("tagSet");
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

void IpamInternetRegistryAssociation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                     const char* locationValue) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str()) << "&";
  }

  if (m_ipamInternetRegistryAssociationArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamInternetRegistryAssociationArn=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationArn.c_str()) << "&";
  }

  if (m_ipamIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }

  if (m_ipamRegionHasBeenSet) {
    oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if (m_rirHasBeenSet) {
    oStream << location << index << locationValue << ".Rir=" << StringUtils::URLEncode(RirMapper::GetNameForRir(m_rir)) << "&";
  }

  if (m_organizationHandleHasBeenSet) {
    oStream << location << index << locationValue << ".OrganizationHandle=" << StringUtils::URLEncode(m_organizationHandle.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(IpamInternetRegistryAssociationStateMapper::GetNameForIpamInternetRegistryAssociationState(m_state))
            << "&";
  }

  if (m_childRequestXmlHasBeenSet) {
    oStream << location << index << locationValue << ".ChildRequestXml=" << StringUtils::URLEncode(m_childRequestXml.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void IpamInternetRegistryAssociation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_ipamInternetRegistryAssociationIdHasBeenSet) {
    oStream << location << ".IpamInternetRegistryAssociationId=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationId.c_str())
            << "&";
  }
  if (m_ipamInternetRegistryAssociationArnHasBeenSet) {
    oStream << location << ".IpamInternetRegistryAssociationArn=" << StringUtils::URLEncode(m_ipamInternetRegistryAssociationArn.c_str())
            << "&";
  }
  if (m_ipamIdHasBeenSet) {
    oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
  if (m_ipamRegionHasBeenSet) {
    oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if (m_rirHasBeenSet) {
    oStream << location << ".Rir=" << StringUtils::URLEncode(RirMapper::GetNameForRir(m_rir)) << "&";
  }
  if (m_organizationHandleHasBeenSet) {
    oStream << location << ".OrganizationHandle=" << StringUtils::URLEncode(m_organizationHandle.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(IpamInternetRegistryAssociationStateMapper::GetNameForIpamInternetRegistryAssociationState(m_state))
            << "&";
  }
  if (m_childRequestXmlHasBeenSet) {
    oStream << location << ".ChildRequestXml=" << StringUtils::URLEncode(m_childRequestXml.c_str()) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
