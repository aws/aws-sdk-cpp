/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/IpamPolicy.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

IpamPolicy::IpamPolicy(const XmlNode& xmlNode) { *this = xmlNode; }

IpamPolicy& IpamPolicy::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode ownerIdNode = resultNode.FirstChild("ownerId");
    if (!ownerIdNode.IsNull()) {
      m_ownerId = Aws::Utils::Xml::DecodeEscapedXmlText(ownerIdNode.GetText());
      m_ownerIdHasBeenSet = true;
    }
    XmlNode ipamPolicyIdNode = resultNode.FirstChild("ipamPolicyId");
    if (!ipamPolicyIdNode.IsNull()) {
      m_ipamPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyIdNode.GetText());
      m_ipamPolicyIdHasBeenSet = true;
    }
    XmlNode ipamPolicyArnNode = resultNode.FirstChild("ipamPolicyArn");
    if (!ipamPolicyArnNode.IsNull()) {
      m_ipamPolicyArn = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyArnNode.GetText());
      m_ipamPolicyArnHasBeenSet = true;
    }
    XmlNode ipamPolicyRegionNode = resultNode.FirstChild("ipamPolicyRegion");
    if (!ipamPolicyRegionNode.IsNull()) {
      m_ipamPolicyRegion = Aws::Utils::Xml::DecodeEscapedXmlText(ipamPolicyRegionNode.GetText());
      m_ipamPolicyRegionHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = IpamPolicyStateMapper::GetIpamPolicyStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode stateMessageNode = resultNode.FirstChild("stateMessage");
    if (!stateMessageNode.IsNull()) {
      m_stateMessage = Aws::Utils::Xml::DecodeEscapedXmlText(stateMessageNode.GetText());
      m_stateMessageHasBeenSet = true;
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
    XmlNode ipamIdNode = resultNode.FirstChild("ipamId");
    if (!ipamIdNode.IsNull()) {
      m_ipamId = Aws::Utils::Xml::DecodeEscapedXmlText(ipamIdNode.GetText());
      m_ipamIdHasBeenSet = true;
    }
  }

  return *this;
}

void IpamPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << index << locationValue << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }

  if (m_ipamPolicyIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }

  if (m_ipamPolicyArnHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPolicyArn=" << StringUtils::URLEncode(m_ipamPolicyArn.c_str()) << "&";
  }

  if (m_ipamPolicyRegionHasBeenSet) {
    oStream << location << index << locationValue << ".IpamPolicyRegion=" << StringUtils::URLEncode(m_ipamPolicyRegion.c_str()) << "&";
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(IpamPolicyStateMapper::GetNameForIpamPolicyState(m_state)) << "&";
  }

  if (m_stateMessageHasBeenSet) {
    oStream << location << index << locationValue << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }

  if (m_ipamIdHasBeenSet) {
    oStream << location << index << locationValue << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
}

void IpamPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_ownerIdHasBeenSet) {
    oStream << location << ".OwnerId=" << StringUtils::URLEncode(m_ownerId.c_str()) << "&";
  }
  if (m_ipamPolicyIdHasBeenSet) {
    oStream << location << ".IpamPolicyId=" << StringUtils::URLEncode(m_ipamPolicyId.c_str()) << "&";
  }
  if (m_ipamPolicyArnHasBeenSet) {
    oStream << location << ".IpamPolicyArn=" << StringUtils::URLEncode(m_ipamPolicyArn.c_str()) << "&";
  }
  if (m_ipamPolicyRegionHasBeenSet) {
    oStream << location << ".IpamPolicyRegion=" << StringUtils::URLEncode(m_ipamPolicyRegion.c_str()) << "&";
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State=" << StringUtils::URLEncode(IpamPolicyStateMapper::GetNameForIpamPolicyState(m_state)) << "&";
  }
  if (m_stateMessageHasBeenSet) {
    oStream << location << ".StateMessage=" << StringUtils::URLEncode(m_stateMessage.c_str()) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".TagSet." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
  if (m_ipamIdHasBeenSet) {
    oStream << location << ".IpamId=" << StringUtils::URLEncode(m_ipamId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
