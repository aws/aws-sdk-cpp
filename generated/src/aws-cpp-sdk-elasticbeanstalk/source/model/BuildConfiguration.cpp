﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/BuildConfiguration.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace ElasticBeanstalk
{
namespace Model
{

BuildConfiguration::BuildConfiguration() : 
    m_artifactNameHasBeenSet(false),
    m_codeBuildServiceRoleHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
}

BuildConfiguration::BuildConfiguration(const XmlNode& xmlNode) : 
    m_artifactNameHasBeenSet(false),
    m_codeBuildServiceRoleHasBeenSet(false),
    m_computeType(ComputeType::NOT_SET),
    m_computeTypeHasBeenSet(false),
    m_imageHasBeenSet(false),
    m_timeoutInMinutes(0),
    m_timeoutInMinutesHasBeenSet(false)
{
  *this = xmlNode;
}

BuildConfiguration& BuildConfiguration::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode artifactNameNode = resultNode.FirstChild("ArtifactName");
    if(!artifactNameNode.IsNull())
    {
      m_artifactName = Aws::Utils::Xml::DecodeEscapedXmlText(artifactNameNode.GetText());
      m_artifactNameHasBeenSet = true;
    }
    XmlNode codeBuildServiceRoleNode = resultNode.FirstChild("CodeBuildServiceRole");
    if(!codeBuildServiceRoleNode.IsNull())
    {
      m_codeBuildServiceRole = Aws::Utils::Xml::DecodeEscapedXmlText(codeBuildServiceRoleNode.GetText());
      m_codeBuildServiceRoleHasBeenSet = true;
    }
    XmlNode computeTypeNode = resultNode.FirstChild("ComputeType");
    if(!computeTypeNode.IsNull())
    {
      m_computeType = ComputeTypeMapper::GetComputeTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(computeTypeNode.GetText()).c_str()).c_str());
      m_computeTypeHasBeenSet = true;
    }
    XmlNode imageNode = resultNode.FirstChild("Image");
    if(!imageNode.IsNull())
    {
      m_image = Aws::Utils::Xml::DecodeEscapedXmlText(imageNode.GetText());
      m_imageHasBeenSet = true;
    }
    XmlNode timeoutInMinutesNode = resultNode.FirstChild("TimeoutInMinutes");
    if(!timeoutInMinutesNode.IsNull())
    {
      m_timeoutInMinutes = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(timeoutInMinutesNode.GetText()).c_str()).c_str());
      m_timeoutInMinutesHasBeenSet = true;
    }
  }

  return *this;
}

void BuildConfiguration::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_artifactNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ArtifactName=" << StringUtils::URLEncode(m_artifactName.c_str()) << "&";
  }

  if(m_codeBuildServiceRoleHasBeenSet)
  {
      oStream << location << index << locationValue << ".CodeBuildServiceRole=" << StringUtils::URLEncode(m_codeBuildServiceRole.c_str()) << "&";
  }

  if(m_computeTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ComputeType=" << ComputeTypeMapper::GetNameForComputeType(m_computeType) << "&";
  }

  if(m_imageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Image=" << StringUtils::URLEncode(m_image.c_str()) << "&";
  }

  if(m_timeoutInMinutesHasBeenSet)
  {
      oStream << location << index << locationValue << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }

}

void BuildConfiguration::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_artifactNameHasBeenSet)
  {
      oStream << location << ".ArtifactName=" << StringUtils::URLEncode(m_artifactName.c_str()) << "&";
  }
  if(m_codeBuildServiceRoleHasBeenSet)
  {
      oStream << location << ".CodeBuildServiceRole=" << StringUtils::URLEncode(m_codeBuildServiceRole.c_str()) << "&";
  }
  if(m_computeTypeHasBeenSet)
  {
      oStream << location << ".ComputeType=" << ComputeTypeMapper::GetNameForComputeType(m_computeType) << "&";
  }
  if(m_imageHasBeenSet)
  {
      oStream << location << ".Image=" << StringUtils::URLEncode(m_image.c_str()) << "&";
  }
  if(m_timeoutInMinutesHasBeenSet)
  {
      oStream << location << ".TimeoutInMinutes=" << m_timeoutInMinutes << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
