/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/TransitGatewayNetworkFunctionAttachment.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

TransitGatewayNetworkFunctionAttachment::TransitGatewayNetworkFunctionAttachment(const XmlNode& xmlNode) { *this = xmlNode; }

TransitGatewayNetworkFunctionAttachment& TransitGatewayNetworkFunctionAttachment::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode transitGatewayAttachmentIdNode = resultNode.FirstChild("transitGatewayAttachmentId");
    if (!transitGatewayAttachmentIdNode.IsNull()) {
      m_transitGatewayAttachmentId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayAttachmentIdNode.GetText());
      m_transitGatewayAttachmentIdHasBeenSet = true;
    }
    XmlNode transitGatewayIdNode = resultNode.FirstChild("transitGatewayId");
    if (!transitGatewayIdNode.IsNull()) {
      m_transitGatewayId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayIdNode.GetText());
      m_transitGatewayIdHasBeenSet = true;
    }
    XmlNode transitGatewayOwnerIdNode = resultNode.FirstChild("transitGatewayOwnerId");
    if (!transitGatewayOwnerIdNode.IsNull()) {
      m_transitGatewayOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(transitGatewayOwnerIdNode.GetText());
      m_transitGatewayOwnerIdHasBeenSet = true;
    }
    XmlNode resourceOwnerIdNode = resultNode.FirstChild("resourceOwnerId");
    if (!resourceOwnerIdNode.IsNull()) {
      m_resourceOwnerId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceOwnerIdNode.GetText());
      m_resourceOwnerIdHasBeenSet = true;
    }
    XmlNode resourceIdNode = resultNode.FirstChild("resourceId");
    if (!resourceIdNode.IsNull()) {
      m_resourceId = Aws::Utils::Xml::DecodeEscapedXmlText(resourceIdNode.GetText());
      m_resourceIdHasBeenSet = true;
    }
    XmlNode availabilityZonesNode = resultNode.FirstChild("availabilityZoneSet");
    if (!availabilityZonesNode.IsNull()) {
      XmlNode availabilityZonesMember = availabilityZonesNode.FirstChild("item");
      m_availabilityZonesHasBeenSet = !availabilityZonesMember.IsNull();
      while (!availabilityZonesMember.IsNull()) {
        m_availabilityZones.push_back(availabilityZonesMember.GetText());
        availabilityZonesMember = availabilityZonesMember.NextNode("item");
      }

      m_availabilityZonesHasBeenSet = true;
    }
    XmlNode availabilityZoneIdsNode = resultNode.FirstChild("availabilityZoneIdSet");
    if (!availabilityZoneIdsNode.IsNull()) {
      XmlNode availabilityZoneIdsMember = availabilityZoneIdsNode.FirstChild("item");
      m_availabilityZoneIdsHasBeenSet = !availabilityZoneIdsMember.IsNull();
      while (!availabilityZoneIdsMember.IsNull()) {
        m_availabilityZoneIds.push_back(availabilityZoneIdsMember.GetText());
        availabilityZoneIdsMember = availabilityZoneIdsMember.NextNode("item");
      }

      m_availabilityZoneIdsHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("state");
    if (!stateNode.IsNull()) {
      m_state = TransitGatewayAttachmentStateMapper::GetTransitGatewayAttachmentStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode creationTimeNode = resultNode.FirstChild("creationTime");
    if (!creationTimeNode.IsNull()) {
      m_creationTime = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationTimeNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_creationTimeHasBeenSet = true;
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

void TransitGatewayNetworkFunctionAttachment::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                             const char* locationValue) const {
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }

  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }

  if (m_transitGatewayOwnerIdHasBeenSet) {
    oStream << location << index << locationValue << ".TransitGatewayOwnerId=" << StringUtils::URLEncode(m_transitGatewayOwnerId.c_str())
            << "&";
  }

  if (m_resourceOwnerIdHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }

  if (m_resourceIdHasBeenSet) {
    oStream << location << index << locationValue << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << index << locationValue << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << index << locationValue << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "="
              << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state))
            << "&";
  }

  if (m_creationTimeHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
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

void TransitGatewayNetworkFunctionAttachment::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_transitGatewayAttachmentIdHasBeenSet) {
    oStream << location << ".TransitGatewayAttachmentId=" << StringUtils::URLEncode(m_transitGatewayAttachmentId.c_str()) << "&";
  }
  if (m_transitGatewayIdHasBeenSet) {
    oStream << location << ".TransitGatewayId=" << StringUtils::URLEncode(m_transitGatewayId.c_str()) << "&";
  }
  if (m_transitGatewayOwnerIdHasBeenSet) {
    oStream << location << ".TransitGatewayOwnerId=" << StringUtils::URLEncode(m_transitGatewayOwnerId.c_str()) << "&";
  }
  if (m_resourceOwnerIdHasBeenSet) {
    oStream << location << ".ResourceOwnerId=" << StringUtils::URLEncode(m_resourceOwnerId.c_str()) << "&";
  }
  if (m_resourceIdHasBeenSet) {
    oStream << location << ".ResourceId=" << StringUtils::URLEncode(m_resourceId.c_str()) << "&";
  }
  if (m_availabilityZonesHasBeenSet) {
    unsigned availabilityZonesIdx = 1;
    for (auto& item : m_availabilityZones) {
      oStream << location << ".AvailabilityZoneSet." << availabilityZonesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_availabilityZoneIdsHasBeenSet) {
    unsigned availabilityZoneIdsIdx = 1;
    for (auto& item : m_availabilityZoneIds) {
      oStream << location << ".AvailabilityZoneIdSet." << availabilityZoneIdsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_stateHasBeenSet) {
    oStream << location
            << ".State=" << StringUtils::URLEncode(TransitGatewayAttachmentStateMapper::GetNameForTransitGatewayAttachmentState(m_state))
            << "&";
  }
  if (m_creationTimeHasBeenSet) {
    oStream << location << ".CreationTime=" << StringUtils::URLEncode(m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
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
