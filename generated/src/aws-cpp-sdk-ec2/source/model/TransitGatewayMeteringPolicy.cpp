/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayMeteringPolicy.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayMeteringPolicy::TransitGatewayMeteringPolicy(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayMeteringPolicy& TransitGatewayMeteringPolicy::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayMeteringPolicyIdNode = resultNode.FirstChild("transitGatewayMeteringPolicyId");
    if (!transitGatewayMeteringPolicyIdNode.IsNull()) {
      m_transitGatewayMeteringPolicyId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayMeteringPolicyIdNode.GetText());
      m_transitGatewayMeteringPolicyIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if (!transitGatewayIdNode.IsNull()) {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode middleboxAttachmentIdsNode = resultNode.FirstChild("middleboxAttachmentIdSet");
    if (!middleboxAttachmentIdsNode.IsNull()) {
      XmlNode middleboxAttachmentIdsMember = middleboxAttachmentIdsNode.FirstChild("item");
      m_middleboxAttachmentIdsHasBeenSet = !middleboxAttachmentIdsMember.IsNull();
      while (!middleboxAttachmentIdsMember.IsNull()) {
        m_middleboxAttachmentIds.push_back(middleboxAttachmentIdsMember.GetText());
        middleboxAttachmentIdsMember = middleboxAttachmentIdsMember.NextNode("item");
      }

      m_middleboxAttachmentIdsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = TransitGatewayMeteringPolicyStateMapper::GetTransitGatewayMeteringPolicyStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode updateEffectiveAtNode = resultNode.FirstChild("updateEffectiveAt");
    if (!updateEffectiveAtNode.IsNull()) {
      m_updateEffectiveAt =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updateEffectiveAtNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_updateEffectiveAtHasBeenSet = true;
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

void TransitGatewayMeteringPolicy::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                  const char* locationValue) const {
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }

  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_middleboxAttachmentIdsHasBeenSet) {
    unsigned middleboxAttachmentIdsIdx = 1;
    for (auto& item : m_middleboxAttachmentIds) {
      oStream << location << index << locationValue << ".MiddleboxAttachmentIdSet." << middleboxAttachmentIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue << ".State="
            << StringUtils::URLEncode(TransitGatewayMeteringPolicyStateMapper::GetNameForTransitGatewayMeteringPolicyState(m_state)) << "&";
  }

  if (m_updateEffectiveAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdateEffectiveAt=" << StringUtils::URLEncode(m_updateEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
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
}

void TransitGatewayMeteringPolicy::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_transitGatewayMeteringPolicyIdHasBeenSet) {
    oStream << location << ".TransitGatewayMeteringPolicyId=" << StringUtils::URLEncode(m_transitGatewayMeteringPolicyId.c_str()) << "&";
  }
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if (m_middleboxAttachmentIdsHasBeenSet) {
    unsigned middleboxAttachmentIdsIdx = 1;
    for (auto& item : m_middleboxAttachmentIds) {
      oStream << location << ".MiddleboxAttachmentIdSet." << middleboxAttachmentIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }
  if (m_stateHasBeenSet) {
    oStream << location << ".State="
            << StringUtils::URLEncode(TransitGatewayMeteringPolicyStateMapper::GetNameForTransitGatewayMeteringPolicyState(m_state)) << "&";
  }
  if (m_updateEffectiveAtHasBeenSet) {
    oStream << location
            << ".UpdateEffectiveAt=" << StringUtils::URLEncode(m_updateEffectiveAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
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
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
