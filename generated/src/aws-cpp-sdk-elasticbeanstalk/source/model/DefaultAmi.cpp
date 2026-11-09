/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/DefaultAmi.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {

DefaultAmi::DefaultAmi(const XmlNode& xmlNode) { *this = xmlNode; }

DefaultAmi& DefaultAmi::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode architectureNode = resultNode.FirstChild("Architecture");
    if (!architectureNode.IsNull()) {
      m_architecture = AmiArchitectureMapper::GetAmiArchitectureForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText()).c_str()));
      m_architectureHasBeenSet = true;
    }
    XmlNode imageIdNode = resultNode.FirstChild("ImageId");
    if (!imageIdNode.IsNull()) {
      m_imageId = Aws::Utils::Xml::DecodeEscapedXmlText(imageIdNode.GetText());
      m_imageIdHasBeenSet = true;
    }
  }

  return *this;
}

void DefaultAmi::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_architectureHasBeenSet) {
    oStream << location << index << locationValue
            << ".Architecture=" << StringUtils::URLEncode(AmiArchitectureMapper::GetNameForAmiArchitecture(m_architecture)) << "&";
  }

  if (m_imageIdHasBeenSet) {
    oStream << location << index << locationValue << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
}

void DefaultAmi::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_architectureHasBeenSet) {
    oStream << location << ".Architecture=" << StringUtils::URLEncode(AmiArchitectureMapper::GetNameForAmiArchitecture(m_architecture))
            << "&";
  }
  if (m_imageIdHasBeenSet) {
    oStream << location << ".ImageId=" << StringUtils::URLEncode(m_imageId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
