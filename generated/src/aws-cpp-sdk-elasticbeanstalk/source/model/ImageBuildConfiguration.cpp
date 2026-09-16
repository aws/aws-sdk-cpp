/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/elasticbeanstalk/model/ImageBuildConfiguration.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace ElasticBeanstalk {
namespace Model {

ImageBuildConfiguration::ImageBuildConfiguration(const XmlNode& xmlNode) { *this = xmlNode; }

ImageBuildConfiguration& ImageBuildConfiguration::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode typeNode = resultNode.FirstChild("Type");
    if (!typeNode.IsNull()) {
      m_type = ImageBuildTypeMapper::GetImageBuildTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(typeNode.GetText()).c_str()));
      m_typeHasBeenSet = true;
    }
    XmlNode dockerfileLocationNode = resultNode.FirstChild("DockerfileLocation");
    if (!dockerfileLocationNode.IsNull()) {
      m_dockerfileLocation = Aws::Utils::Xml::DecodeEscapedXmlText(dockerfileLocationNode.GetText());
      m_dockerfileLocationHasBeenSet = true;
    }
    XmlNode buildpackNode = resultNode.FirstChild("Buildpack");
    if (!buildpackNode.IsNull()) {
      m_buildpack = Aws::Utils::Xml::DecodeEscapedXmlText(buildpackNode.GetText());
      m_buildpackHasBeenSet = true;
    }
    XmlNode architectureNode = resultNode.FirstChild("Architecture");
    if (!architectureNode.IsNull()) {
      m_architecture = ArchitectureTypeMapper::GetArchitectureTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(architectureNode.GetText()).c_str()));
      m_architectureHasBeenSet = true;
    }
    XmlNode codeBuildServiceRoleNode = resultNode.FirstChild("CodeBuildServiceRole");
    if (!codeBuildServiceRoleNode.IsNull()) {
      m_codeBuildServiceRole = Aws::Utils::Xml::DecodeEscapedXmlText(codeBuildServiceRoleNode.GetText());
      m_codeBuildServiceRoleHasBeenSet = true;
    }
    XmlNode computeTypeNode = resultNode.FirstChild("ComputeType");
    if (!computeTypeNode.IsNull()) {
      m_computeType = ComputeTypeMapper::GetComputeTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(computeTypeNode.GetText()).c_str()));
      m_computeTypeHasBeenSet = true;
    }
    XmlNode timeoutInMinutesNode = resultNode.FirstChild("TimeoutInMinutes");
    if (!timeoutInMinutesNode.IsNull()) {
      m_timeoutInMinutes = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeoutInMinutesNode.GetText()).c_str()).c_str());
      m_timeoutInMinutesHasBeenSet = true;
    }
  }

  return *this;
}

void ImageBuildConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_typeHasBeenSet) {
    oStream << location << index << locationValue
            << ".Type=" << StringUtils::URLEncode(ImageBuildTypeMapper::GetNameForImageBuildType(m_type)) << "&";
  }

  if (m_dockerfileLocationHasBeenSet) {
    oStream << location << index << locationValue << ".DockerfileLocation=" << StringUtils::URLEncode(m_dockerfileLocation.c_str()) << "&";
  }

  if (m_buildpackHasBeenSet) {
    oStream << location << index << locationValue << ".Buildpack=" << StringUtils::URLEncode(m_buildpack.c_str()) << "&";
  }

  if (m_architectureHasBeenSet) {
    oStream << location << index << locationValue
            << ".Architecture=" << StringUtils::URLEncode(ArchitectureTypeMapper::GetNameForArchitectureType(m_architecture)) << "&";
  }

  if (m_codeBuildServiceRoleHasBeenSet) {
    oStream << location << index << locationValue << ".CodeBuildServiceRole=" << StringUtils::URLEncode(m_codeBuildServiceRole.c_str())
            << "&";
  }

  if (m_computeTypeHasBeenSet) {
    oStream << location << index << locationValue
            << ".ComputeType=" << StringUtils::URLEncode(ComputeTypeMapper::GetNameForComputeType(m_computeType)) << "&";
  }

  if (m_timeoutInMinutesHasBeenSet) {
    oStream << location << index << locationValue << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }
}

void ImageBuildConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_typeHasBeenSet) {
    oStream << location << ".Type=" << StringUtils::URLEncode(ImageBuildTypeMapper::GetNameForImageBuildType(m_type)) << "&";
  }
  if (m_dockerfileLocationHasBeenSet) {
    oStream << location << ".DockerfileLocation=" << StringUtils::URLEncode(m_dockerfileLocation.c_str()) << "&";
  }
  if (m_buildpackHasBeenSet) {
    oStream << location << ".Buildpack=" << StringUtils::URLEncode(m_buildpack.c_str()) << "&";
  }
  if (m_architectureHasBeenSet) {
    oStream << location << ".Architecture=" << StringUtils::URLEncode(ArchitectureTypeMapper::GetNameForArchitectureType(m_architecture))
            << "&";
  }
  if (m_codeBuildServiceRoleHasBeenSet) {
    oStream << location << ".CodeBuildServiceRole=" << StringUtils::URLEncode(m_codeBuildServiceRole.c_str()) << "&";
  }
  if (m_computeTypeHasBeenSet) {
    oStream << location << ".ComputeType=" << StringUtils::URLEncode(ComputeTypeMapper::GetNameForComputeType(m_computeType)) << "&";
  }
  if (m_timeoutInMinutesHasBeenSet) {
    oStream << location << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }
}

}  // namespace Model
}  // namespace ElasticBeanstalk
}  // namespace Aws
