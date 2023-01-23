/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/SourceBuildInformation.h>
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

SourceBuildInformation::SourceBuildInformation() : 
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceRepository(SourceRepository::NOT_SET),
    m_sourceRepositoryHasBeenSet(false),
    m_sourceLocationHasBeenSet(false)
{
}

SourceBuildInformation::SourceBuildInformation(const XmlNode& xmlNode) : 
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_sourceRepository(SourceRepository::NOT_SET),
    m_sourceRepositoryHasBeenSet(false),
    m_sourceLocationHasBeenSet(false)
{
  *this = xmlNode;
}

SourceBuildInformation& SourceBuildInformation::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = SourceTypeMapper::GetSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode sourceRepositoryNode = resultNode.FirstChild("SourceRepository");
    if(!sourceRepositoryNode.IsNull())
    {
      m_sourceRepository = SourceRepositoryMapper::GetSourceRepositoryForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceRepositoryNode.GetText()).c_str()).c_str());
      m_sourceRepositoryHasBeenSet = true;
    }
    XmlNode sourceLocationNode = resultNode.FirstChild("SourceLocation");
    if(!sourceLocationNode.IsNull())
    {
      m_sourceLocation = Aws::Utils::Xml::DecodeEscapedXmlText(sourceLocationNode.GetText());
      m_sourceLocationHasBeenSet = true;
    }
  }

  return *this;
}

void SourceBuildInformation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }

  if(m_sourceRepositoryHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceRepository=" << SourceRepositoryMapper::GetNameForSourceRepository(m_sourceRepository) << "&";
  }

  if(m_sourceLocationHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceLocation=" << StringUtils::URLEncode(m_sourceLocation.c_str()) << "&";
  }

}

void SourceBuildInformation::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }
  if(m_sourceRepositoryHasBeenSet)
  {
      oStream << location << ".SourceRepository=" << SourceRepositoryMapper::GetNameForSourceRepository(m_sourceRepository) << "&";
  }
  if(m_sourceLocationHasBeenSet)
  {
      oStream << location << ".SourceLocation=" << StringUtils::URLEncode(m_sourceLocation.c_str()) << "&";
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
