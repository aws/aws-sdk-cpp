/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ImageAncestryEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ImageAncestryEntry::ImageAncestryEntry(const XmlNode& xmlNode) { *this = xmlNode; }

ImageAncestryEntry& ImageAncestryEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode creationDateNode = resultNode.FirstChild("creationDate");
    if (!creationDateNode.IsNull()) {
      m_creationDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(creationDateNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_creationDateHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("imageId");
    if (!imageIdNode.IsNull()) {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
    XmlNode imageOwnerAliasNode = resultNode.FirstChild("imageOwnerAlias");
    if (!imageOwnerAliasNode.IsNull()) {
      m_imageOwnerAlias = Aws::Utils::Xml::DecodeEscapedXmlText(imageOwnerAliasNode.GetText());
      m_imageOwnerAliasHasBeenSet = true;
    }
    XmlNode sourceImageIdNode = resultNode.FirstChild("sourceImageId");
    if (!sourceImageIdNode.IsNull()) {
      m_sourceImageId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageIdNode.GetText());
      m_sourceImageIdHasBeenSet = true;
    }
    XmlNode sourceImageRegionNode = resultNode.FirstChild("sourceImageRegion");
    if (!sourceImageRegionNode.IsNull()) {
      m_sourceImageRegion = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageRegionNode.GetText());
      m_sourceImageRegionHasBeenSet = true;
    }
  }

  return *this;
}

void ImageAncestryEntry::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_creationDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_imageIdHasBeenSet) {
    oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }

  if (m_imageOwnerAliasHasBeenSet) {
    oStream << location << index << locationValue << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }

  if (m_sourceImageIdHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }

  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }
}

void ImageAncestryEntry::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_creationDateHasBeenSet) {
    oStream << location << ".CreationDate=" << StringUtils::URLEncode(m_creationDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_imageIdHasBeenSet) {
    oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
  if (m_imageOwnerAliasHasBeenSet) {
    oStream << location << ".ImageOwnerAlias=" << StringUtils::URLEncode(m_imageOwnerAlias.c_str()) << "&";
  }
  if (m_sourceImageIdHasBeenSet) {
    oStream << location << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }
  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
