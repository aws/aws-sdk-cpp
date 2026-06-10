/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ImageWatermark.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ImageWatermark::ImageWatermark(const XmlNode& xmlNode) { *this = xmlNode; }

ImageWatermark& ImageWatermark::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode watermarkKeyNode = resultNode.FirstChild("watermarkKey");
    if (!watermarkKeyNode.IsNull()) {
      m_watermarkKey = Aws::Utils::Xml::DecodeEscapedXmlText(watermarkKeyNode.GetText());
      m_watermarkKeyHasBeenSet = true;
    }
    XmlNode sourceImageRegionNode = resultNode.FirstChild("sourceImageRegion");
    if (!sourceImageRegionNode.IsNull()) {
      m_sourceImageRegion = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageRegionNode.GetText());
      m_sourceImageRegionHasBeenSet = true;
    }
    XmlNode sourceImageIdNode = resultNode.FirstChild("sourceImageId");
    if (!sourceImageIdNode.IsNull()) {
      m_sourceImageId = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageIdNode.GetText());
      m_sourceImageIdHasBeenSet = true;
    }
    XmlNode sourceImageCreationTimeNode = resultNode.FirstChild("sourceImageCreationTime");
    if (!sourceImageCreationTimeNode.IsNull()) {
      m_sourceImageCreationTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageCreationTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_sourceImageCreationTimeHasBeenSet = true;
    }
    XmlNode watermarkCreationTimeNode = resultNode.FirstChild("watermarkCreationTime");
    if (!watermarkCreationTimeNode.IsNull()) {
      m_watermarkCreationTime =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(watermarkCreationTimeNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_watermarkCreationTimeHasBeenSet = true;
    }
  }

  return *this;
}

void ImageWatermark::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_watermarkKeyHasBeenSet) {
    oStream << location << index << locationValue << ".WatermarkKey=" << StringUtils::URLEncode(m_watermarkKey.c_str()) << "&";
  }

  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }

  if (m_sourceImageIdHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }

  if (m_sourceImageCreationTimeHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageCreationTime="
            << StringUtils::URLEncode(m_sourceImageCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_watermarkCreationTimeHasBeenSet) {
    oStream << location << index << locationValue << ".WatermarkCreationTime="
            << StringUtils::URLEncode(m_watermarkCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

void ImageWatermark::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_watermarkKeyHasBeenSet) {
    oStream << location << ".WatermarkKey=" << StringUtils::URLEncode(m_watermarkKey.c_str()) << "&";
  }
  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }
  if (m_sourceImageIdHasBeenSet) {
    oStream << location << ".SourceImageId=" << StringUtils::URLEncode(m_sourceImageId.c_str()) << "&";
  }
  if (m_sourceImageCreationTimeHasBeenSet) {
    oStream << location << ".SourceImageCreationTime="
            << StringUtils::URLEncode(m_sourceImageCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_watermarkCreationTimeHasBeenSet) {
    oStream << location << ".WatermarkCreationTime="
            << StringUtils::URLEncode(m_watermarkCreationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
