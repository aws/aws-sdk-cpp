/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPrefixListResolver.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPrefixListResolver::IpamPrefixListResolver(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPrefixListResolver& IpamPrefixListResolver::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ipamPrefixListResolverIdNode = resultNode.FirstChild("ipamPrefixListResolverId");
    if (!ipamPrefixListResolverIdNode.IsNull()) {
      m_ipamPrefixListResolverId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPrefixListResolverIdNode.GetText());
      m_ipamPrefixListResolverIdHasBeenSet = true;
    }
    XmlNode ipamPrefixListResolverArnNode = resultNode.FirstChild("ipamPrefixListResolverArn");
    if (!ipamPrefixListResolverArnNode.IsNull()) {
      m_ipamPrefixListResolverArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPrefixListResolverArnNode.GetText());
      m_ipamPrefixListResolverArnHasBeenSet = true;
    }
    XmlNode ipamArnNode = resultNode.FirstChild("ipamArn");
    if (!ipamArnNode.IsNull()) {
      m_ipamArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamArnNode.GetText());
      m_ipamArnHasBeenSet = true;
    }
    XmlNode ipamRegionNode = resultNode.FirstChild("ipamRegion");
    if (!ipamRegionNode.IsNull()) {
      m_ipamRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamRegionNode.GetText());
      m_ipamRegionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("description");
    if (!descriptionNode.IsNull()) {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode addressFamilyNode = resultNode.FirstChild("addressFamily");
    if (!addressFamilyNode.IsNull()) {
      m_addressFamily = AddressFamilyMapper::GetAddressFamilyForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(addressFamilyNode.GetText()).c_str()));
      m_addressFamilyHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamPrefixListResolverStateMapper::GetIpamPrefixListResolverStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
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
    XmlNode lastVersionCreationStatusNode = resultNode.FirstChild("lastVersionCreationStatus");
    if (!lastVersionCreationStatusNode.IsNull()) {
      m_lastVersionCreationStatus =
          IpamPrefixListResolverVersionCreationStatusMapper::GetIpamPrefixListResolverVersionCreationStatusForName(
              StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastVersionCreationStatusNode.GetText()).c_str()));
      m_lastVersionCreationStatusHasBeenSet = true;
    }
    XmlNode lastVersionCreationStatusMessageNode = resultNode.FirstChild("lastVersionCreationStatusMessage");
    if (!lastVersionCreationStatusMessageNode.IsNull()) {
      m_lastVersionCreationStatusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(lastVersionCreationStatusMessageNode.GetText());
      m_lastVersionCreationStatusMessageHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPrefixListResolver::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_ipamPrefixListResolverIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }

  if (m_ipamPrefixListResolverArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamPrefixListResolverArn=" << StringUtils::URLEncode(m_ipamPrefixListResolverArn.c_str()) << "&";
  }

  if (m_ipamArnHasBeenSet) {
    oStream << location << index << locationValue << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }

  if (m_ipamRegionHasBeenSet) {
    oStream << location << index << locationValue << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }

  if (m_descriptionHasBeenSet) {
    oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if (m_addressFamilyHasBeenSet) {
    oStream << location << index << locationValue
            << ".AddressFamily=" << StringUtils::URLEncode(AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily)) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(IpamPrefixListResolverStateMapper::GetNameForIpamPrefixListResolverState(m_state))
            << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }

  if (m_lastVersionCreationStatusHasBeenSet) {
    oStream << location << index << locationValue << ".LastVersionCreationStatus="
            << StringUtils::URLEncode(
                   IpamPrefixListResolverVersionCreationStatusMapper::GetNameForIpamPrefixListResolverVersionCreationStatus(
                       m_lastVersionCreationStatus))
            << "&";
  }

  if (m_lastVersionCreationStatusMessageHasBeenSet) {
    oStream << location << index << locationValue
            << ".LastVersionCreationStatusMessage=" << StringUtils::URLEncode(m_lastVersionCreationStatusMessage.c_str()) << "&";
  }
}

void IpamPrefixListResolver::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_ipamPrefixListResolverIdHasBeenSet) {
    oStream << location << ".IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }
  if (m_ipamPrefixListResolverArnHasBeenSet) {
    oStream << location << ".IpamPrefixListResolverArn=" << StringUtils::URLEncode(m_ipamPrefixListResolverArn.c_str()) << "&";
  }
  if (m_ipamArnHasBeenSet) {
    oStream << location << ".IpamArn=" << StringUtils::URLEncode(m_ipamArn.c_str()) << "&";
  }
  if (m_ipamRegionHasBeenSet) {
    oStream << location << ".IpamRegion=" << StringUtils::URLEncode(m_ipamRegion.c_str()) << "&";
  }
  if (m_descriptionHasBeenSet) {
    oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if (m_addressFamilyHasBeenSet) {
    oStream << location << ".AddressFamily=" << StringUtils::URLEncode(AddressFamilyMapper::GetNameForAddressFamily(m_addressFamily))
            << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location
            << ".State=" << StringUtils::URLEncode(IpamPrefixListResolverStateMapper::GetNameForIpamPrefixListResolverState(m_state))
            << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
  if (m_lastVersionCreationStatusHasBeenSet) {
    oStream << location << ".LastVersionCreationStatus="
            << StringUtils::URLEncode(
                   IpamPrefixListResolverVersionCreationStatusMapper::GetNameForIpamPrefixListResolverVersionCreationStatus(
                       m_lastVersionCreationStatus))
            << "&";
  }
  if (m_lastVersionCreationStatusMessageHasBeenSet) {
    oStream << location << ".LastVersionCreationStatusMessage=" << StringUtils::URLEncode(m_lastVersionCreationStatusMessage.c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
