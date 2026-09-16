/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/ImageSource.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {

ImageSource::ImageSource(const XmlNode& xmlNode) { *this = xmlNode; }

ImageSource& ImageSource::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode uriNode = resultNode.FirstChild("Uri");
    if (!uriNode.IsNull()) {
      m_uri = Aws::Utils::Xml::DecodeEscapedXmlText(uriNode.GetText());
      m_uriHasBeenSet = true;
    }
  }

  return *this;
}

void ImageSource::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_uriHasBeenSet) {
    oStream << location << index << locationValue << ".Uri=" << StringUtils::URLEncode(m_uri.c_str()) << "&";
  }
}

void ImageSource::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_uriHasBeenSet) {
    oStream << location << ".Uri=" << StringUtils::URLEncode(m_uri.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
