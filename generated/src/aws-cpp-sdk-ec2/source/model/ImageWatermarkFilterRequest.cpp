/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/ec2/model/ImageWatermarkFilterRequest.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace EC2 {
namespace Model {

ImageWatermarkFilterRequest::ImageWatermarkFilterRequest(const XmlNode& xmlNode) { *this = xmlNode; }

ImageWatermarkFilterRequest& ImageWatermarkFilterRequest::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode watermarkKeyNode = resultNode.FirstChild("WatermarkKey");
    if (!watermarkKeyNode.IsNull()) {
      m_watermarkKey = Aws::Utils::Xml::DecodeEscapedXmlText(watermarkKeyNode.GetText());
      m_watermarkKeyHasBeenSet = true;
    }
    XmlNode sourceImageRegionNode = resultNode.FirstChild("SourceImageRegion");
    if (!sourceImageRegionNode.IsNull()) {
      m_sourceImageRegion = Aws::Utils::Xml::DecodeEscapedXmlText(sourceImageRegionNode.GetText());
      m_sourceImageRegionHasBeenSet = true;
    }
    XmlNode maximumDaysSinceSourceImageCreatedNode = resultNode.FirstChild("MaximumDaysSinceSourceImageCreated");
    if (!maximumDaysSinceSourceImageCreatedNode.IsNull()) {
      m_maximumDaysSinceSourceImageCreated = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumDaysSinceSourceImageCreatedNode.GetText()).c_str()).c_str());
      m_maximumDaysSinceSourceImageCreatedHasBeenSet = true;
    }
    XmlNode maximumDaysSinceWatermarkCreatedNode = resultNode.FirstChild("MaximumDaysSinceWatermarkCreated");
    if (!maximumDaysSinceWatermarkCreatedNode.IsNull()) {
      m_maximumDaysSinceWatermarkCreated = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(maximumDaysSinceWatermarkCreatedNode.GetText()).c_str()).c_str());
      m_maximumDaysSinceWatermarkCreatedHasBeenSet = true;
    }
  }

  return *this;
}

void ImageWatermarkFilterRequest::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                 const char* locationValue) const {
  if (m_watermarkKeyHasBeenSet) {
    oStream << location << index << locationValue << ".WatermarkKey=" << StringUtils::URLEncode(m_watermarkKey.c_str()) << "&";
  }

  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << index << locationValue << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }

  if (m_maximumDaysSinceSourceImageCreatedHasBeenSet) {
    oStream << location << index << locationValue << ".MaximumDaysSinceSourceImageCreated=" << m_maximumDaysSinceSourceImageCreated << "&";
  }

  if (m_maximumDaysSinceWatermarkCreatedHasBeenSet) {
    oStream << location << index << locationValue << ".MaximumDaysSinceWatermarkCreated=" << m_maximumDaysSinceWatermarkCreated << "&";
  }
}

void ImageWatermarkFilterRequest::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_watermarkKeyHasBeenSet) {
    oStream << location << ".WatermarkKey=" << StringUtils::URLEncode(m_watermarkKey.c_str()) << "&";
  }
  if (m_sourceImageRegionHasBeenSet) {
    oStream << location << ".SourceImageRegion=" << StringUtils::URLEncode(m_sourceImageRegion.c_str()) << "&";
  }
  if (m_maximumDaysSinceSourceImageCreatedHasBeenSet) {
    oStream << location << ".MaximumDaysSinceSourceImageCreated=" << m_maximumDaysSinceSourceImageCreated << "&";
  }
  if (m_maximumDaysSinceWatermarkCreatedHasBeenSet) {
    oStream << location << ".MaximumDaysSinceWatermarkCreated=" << m_maximumDaysSinceWatermarkCreated << "&";
  }
}

}  // namespace Model
}  // namespace EC2
}  // namespace Aws
