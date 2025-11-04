/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPrefixListResolverTarget.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPrefixListResolverTarget::IpamPrefixListResolverTarget(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPrefixListResolverTarget& IpamPrefixListResolverTarget::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ipamPrefixListResolverTargetIdNode = resultNode.FirstChild("ipamPrefixListResolverTargetId");
    if (!ipamPrefixListResolverTargetIdNode.IsNull()) {
      m_ipamPrefixListResolverTargetId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPrefixListResolverTargetIdNode.GetText());
      m_ipamPrefixListResolverTargetIdHasBeenSet = true;
    }
    XmlNode ipamPrefixListResolverTargetArnNode = resultNode.FirstChild("ipamPrefixListResolverTargetArn");
    if (!ipamPrefixListResolverTargetArnNode.IsNull()) {
      m_ipamPrefixListResolverTargetArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPrefixListResolverTargetArnNode.GetText());
      m_ipamPrefixListResolverTargetArnHasBeenSet = true;
    }
    XmlNode ipamPrefixListResolverIdNode = resultNode.FirstChild("ipamPrefixListResolverId");
    if (!ipamPrefixListResolverIdNode.IsNull()) {
      m_ipamPrefixListResolverId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPrefixListResolverIdNode.GetText());
      m_ipamPrefixListResolverIdHasBeenSet = true;
    }
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode prefixListIdNode = resultNode.FirstChild("prefixListId");
    if (!prefixListIdNode.IsNull()) {
      m_prefixListId = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListIdNode.GetText());
      m_prefixListIdHasBeenSet = true;
    }
    XmlNode prefixListRegionNode = resultNode.FirstChild("prefixListRegion");
    if (!prefixListRegionNode.IsNull()) {
      m_prefixListRegion = Aws::Utils::Xml::DecodeEscapedXmlText(prefixListRegionNode.GetText());
      m_prefixListRegionHasBeenSet = true;
    }
    XmlNode desiredVersionNode = resultNode.FirstChild("desiredVersion");
    if (!desiredVersionNode.IsNull()) {
      m_desiredVersion = StringUtils::ConvertToInt64(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(desiredVersionNode.GetText()).c_str()).c_str());
      m_desiredVersionHasBeenSet = true;
    }
    XmlNode lastSyncedVersionNode = resultNode.FirstChild("lastSyncedVersion");
    if (!lastSyncedVersionNode.IsNull()) {
      m_lastSyncedVersion = StringUtils::ConvertToInt64(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastSyncedVersionNode.GetText()).c_str()).c_str());
      m_lastSyncedVersionHasBeenSet = true;
    }
    XmlNode trackLatestVersionNode = resultNode.FirstChild("trackLatestVersion");
    if (!trackLatestVersionNode.IsNull()) {
      m_trackLatestVersion = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(trackLatestVersionNode.GetText()).c_str()).c_str());
      m_trackLatestVersionHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if (!stateMessageNode.IsNull()) {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamPrefixListResolverTargetStateMapper::GetIpamPrefixListResolverTargetStateForName(
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
  }

  return *this;
}

void IpamPrefixListResolverTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_ipamPrefixListResolverTargetIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamPrefixListResolverTargetId=" << StringUtils::URLEncode(m_ipamPrefixListResolverTargetId.c_str()) << "&";
  }

  if (m_ipamPrefixListResolverTargetArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamPrefixListResolverTargetArn=" << StringUtils::URLEncode(m_ipamPrefixListResolverTargetArn.c_str()) << "&";
  }

  if (m_ipamPrefixListResolverIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }

  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_prefixListIdHasBeenSet) {
    oStream << location << index << locationValue << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }

  if (m_prefixListRegionHasBeenSet) {
    oStream << location << index << locationValue << ".PrefixListRegion=" << StringUtils::URLEncode(m_prefixListRegion.c_str()) << "&";
  }

  if (m_desiredVersionHasBeenSet) {
    oStream << location << index << locationValue << ".DesiredVersion=" << m_desiredVersion << "&";
  }

  if (m_lastSyncedVersionHasBeenSet) {
    oStream << location << index << locationValue << ".LastSyncedVersion=" << m_lastSyncedVersion << "&";
  }

  if (m_trackLatestVersionHasBeenSet) {
    oStream << location << index << locationValue << ".TrackLatestVersion=" << std::boolalpha << m_trackLatestVersion << "&";
  }

  if (m_stateMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(IpamPrefixListResolverTargetStateMapper::GetNameForIpamPrefixListResolverTargetState(m_state)) << "&";
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

void IpamPrefixListResolverTarget::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ipamPrefixListResolverTargetIdHasBeenSet) {
    oStream << location << ".IpamPrefixListResolverTargetId=" << StringUtils::URLEncode(m_ipamPrefixListResolverTargetId.c_str()) << "&";
  }
  if (m_ipamPrefixListResolverTargetArnHasBeenSet) {
    oStream << location << ".IpamPrefixListResolverTargetArn=" << StringUtils::URLEncode(m_ipamPrefixListResolverTargetArn.c_str()) << "&";
  }
  if (m_ipamPrefixListResolverIdHasBeenSet) {
    oStream << location << ".IpamPrefixListResolverId=" << StringUtils::URLEncode(m_ipamPrefixListResolverId.c_str()) << "&";
  }
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_prefixListIdHasBeenSet) {
    oStream << location << ".PrefixListId=" << StringUtils::URLEncode(m_prefixListId.c_str()) << "&";
  }
  if (m_prefixListRegionHasBeenSet) {
    oStream << location << ".PrefixListRegion=" << StringUtils::URLEncode(m_prefixListRegion.c_str()) << "&";
  }
  if (m_desiredVersionHasBeenSet) {
    oStream << location << ".DesiredVersion=" << m_desiredVersion << "&";
  }
  if (m_lastSyncedVersionHasBeenSet) {
    oStream << location << ".LastSyncedVersion=" << m_lastSyncedVersion << "&";
  }
  if (m_trackLatestVersionHasBeenSet) {
    oStream << location << ".TrackLatestVersion=" << std::boolalpha << m_trackLatestVersion << "&";
  }
  if (m_stateMessageHasBeenSet) {
    oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(IpamPrefixListResolverTargetStateMapper::GetNameForIpamPrefixListResolverTargetState(m_state)) << "&";
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
