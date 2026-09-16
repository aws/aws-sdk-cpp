/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/ImageConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {

ImageConfiguration::ImageConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

ImageConfiguration& ImageConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode sourceNode = resultNode.FirstChild("Source");
    if (!sourceNode.IsNull()) {
      m_source = sourceNode;
      m_sourceHasBeenSet = true;
    }
    XmlNode buildNode = resultNode.FirstChild("Build");
    if (!buildNode.IsNull()) {
      m_build = buildNode;
      m_buildHasBeenSet = true;
    }
  }

  return *this;
}

void ImageConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_sourceHasBeenSet) {
    Aws::StringStream sourceLocationAndMemberSs;
    sourceLocationAndMemberSs << location << index << locationValue << ".Source";
    m_source.OutputToStream(oStream, sourceLocationAndMemberSs.str().c_str());
  }

  if (m_buildHasBeenSet) {
    Aws::StringStream buildLocationAndMemberSs;
    buildLocationAndMemberSs << location << index << locationValue << ".Build";
    m_build.OutputToStream(oStream, buildLocationAndMemberSs.str().c_str());
  }
}

void ImageConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_sourceHasBeenSet) {
    Aws::String sourceLocationAndMember(location);
    sourceLocationAndMember += ".Source";
    m_source.OutputToStream(oStream, sourceLocationAndMember.c_str());
  }
  if (m_buildHasBeenSet) {
    Aws::String buildLocationAndMember(location);
    buildLocationAndMember += ".Build";
    m_build.OutputToStream(oStream, buildLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
