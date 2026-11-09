/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ImageFinding.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ImageFinding::ImageFinding(const XmlNode& xmlNode) { *this = xmlNode; }

ImageFinding& ImageFinding::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode fixAvailableNode = resultNode.FirstChild("fixAvailable");
    if (!fixAvailableNode.IsNull()) {
      m_fixAvailable =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(fixAvailableNode.GetText()).c_str()).c_str());
      m_fixAvailableHasBeenSet = true;
    }
    XmlNode scoreNode = resultNode.FirstChild("score");
    if (!scoreNode.IsNull()) {
      m_score = StringUtils::ConvertToDouble(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scoreNode.GetText()).c_str()).c_str());
      m_scoreHasBeenSet = true;
    }
    XmlNode firstObservedAtNode = resultNode.FirstChild("firstObservedAt");
    if (!firstObservedAtNode.IsNull()) {
      m_firstObservedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(firstObservedAtNode.GetText()).c_str()).c_str(),
                                   Aws::Utils::DateFormat::ISO_8601);
      m_firstObservedAtHasBeenSet = true;
    }
    XmlNode updatedAtNode = resultNode.FirstChild("updatedAt");
    if (!updatedAtNode.IsNull()) {
      m_updatedAt = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(updatedAtNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_updatedAtHasBeenSet = true;
    }
    XmlNode titleNode = resultNode.FirstChild("title");
    if (!titleNode.IsNull()) {
      m_title = Aws::Utils::Xml::DecodeEscapedXmlText(titleNode.GetText());
      m_titleHasBeenSet = true;
    }
    XmlNode pathsNode = resultNode.FirstChild("pathSet");
    if (!pathsNode.IsNull()) {
      XmlNode pathsMember = pathsNode.FirstChild("item");
      m_pathsHasBeenSet = !pathsMember.IsNull();
      while (!pathsMember.IsNull()) {
        m_paths.push_back(pathsMember.GetText());
        pathsMember = pathsMember.NextNode("item");
      }

      m_pathsHasBeenSet = true;
    }
    XmlNode severityLabelNode = resultNode.FirstChild("severityLabel");
    if (!severityLabelNode.IsNull()) {
      m_severityLabel = SeverityLabelMapper::GetSeverityLabelForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(severityLabelNode.GetText()).c_str()));
      m_severityLabelHasBeenSet = true;
    }
    XmlNode snapshotIdNode = resultNode.FirstChild("snapshotId");
    if (!snapshotIdNode.IsNull()) {
      m_snapshotId = Aws::Utils::Xml::DecodeEscapedXmlText(snapshotIdNode.GetText());
      m_snapshotIdHasBeenSet = true;
    }
  }

  return *this;
}

void ImageFinding::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_fixAvailableHasBeenSet) {
    oStream << location << index << locationValue << ".FixAvailable=" << std::boolalpha << m_fixAvailable << "&";
  }

  if (m_scoreHasBeenSet) {
    oStream << location << index << locationValue << ".Score=" << StringUtils::URLEncode(m_score) << "&";
  }

  if (m_firstObservedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".FirstObservedAt=" << StringUtils::URLEncode(m_firstObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }

  if (m_updatedAtHasBeenSet) {
    oStream << location << index << locationValue
            << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_titleHasBeenSet) {
    oStream << location << index << locationValue << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }

  if (m_pathsHasBeenSet) {
    unsigned pathsIdx = 1;
    for (auto& item : m_paths) {
      oStream << location << index << locationValue << ".PathSet." << pathsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }

  if (m_severityLabelHasBeenSet) {
    oStream << location << index << locationValue
            << ".SeverityLabel=" << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_severityLabel)) << "&";
  }

  if (m_snapshotIdHasBeenSet) {
    oStream << location << index << locationValue << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
}

void ImageFinding::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_fixAvailableHasBeenSet) {
    oStream << location << ".FixAvailable=" << std::boolalpha << m_fixAvailable << "&";
  }
  if (m_scoreHasBeenSet) {
    oStream << location << ".Score=" << StringUtils::URLEncode(m_score) << "&";
  }
  if (m_firstObservedAtHasBeenSet) {
    oStream << location
            << ".FirstObservedAt=" << StringUtils::URLEncode(m_firstObservedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_updatedAtHasBeenSet) {
    oStream << location << ".UpdatedAt=" << StringUtils::URLEncode(m_updatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_titleHasBeenSet) {
    oStream << location << ".Title=" << StringUtils::URLEncode(m_title.c_str()) << "&";
  }
  if (m_pathsHasBeenSet) {
    unsigned pathsIdx = 1;
    for (auto& item : m_paths) {
      oStream << location << ".PathSet." << pathsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_severityLabelHasBeenSet) {
    oStream << location << ".SeverityLabel=" << StringUtils::URLEncode(SeverityLabelMapper::GetNameForSeverityLabel(m_severityLabel))
            << "&";
  }
  if (m_snapshotIdHasBeenSet) {
    oStream << location << ".SnapshotId=" << StringUtils::URLEncode(m_snapshotId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
