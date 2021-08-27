/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/elasticbeanstalk/model/SolutionStackDescription.h>
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

SolutionStackDescription::SolutionStackDescription() : 
    m_solutionStackNameHasBeenSet(false),
    m_permittedFileTypesHasBeenSet(false)
{
}

SolutionStackDescription::SolutionStackDescription(const XmlNode& xmlNode) : 
    m_solutionStackNameHasBeenSet(false),
    m_permittedFileTypesHasBeenSet(false)
{
  *this = xmlNode;
}

SolutionStackDescription& SolutionStackDescription::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode solutionStackNameNode = resultNode.FirstChild("SolutionStackName");
    if(!solutionStackNameNode.IsNull())
    {
      m_solutionStackName = Aws::Utils::Xml::DecodeEscapedXmlText(solutionStackNameNode.GetText());
      m_solutionStackNameHasBeenSet = true;
    }
    XmlNode permittedFileTypesNode = resultNode.FirstChild("PermittedFileTypes");
    if(!permittedFileTypesNode.IsNull())
    {
      XmlNode permittedFileTypesMember = permittedFileTypesNode.FirstChild("member");
      while(!permittedFileTypesMember.IsNull())
      {
        m_permittedFileTypes.push_back(permittedFileTypesMember.GetText());
        permittedFileTypesMember = permittedFileTypesMember.NextNode("member");
      }

      m_permittedFileTypesHasBeenSet = true;
    }
  }

  return *this;
}

void SolutionStackDescription::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }

  if(m_permittedFileTypesHasBeenSet)
  {
      unsigned permittedFileTypesIdx = 1;
      for(auto& item : m_permittedFileTypes)
      {
        oStream << location << index << locationValue << ".PermittedFileTypes.member." << permittedFileTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void SolutionStackDescription::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_solutionStackNameHasBeenSet)
  {
      oStream << location << ".SolutionStackName=" << StringUtils::URLEncode(m_solutionStackName.c_str()) << "&";
  }
  if(m_permittedFileTypesHasBeenSet)
  {
      unsigned permittedFileTypesIdx = 1;
      for(auto& item : m_permittedFileTypes)
      {
        oStream << location << ".PermittedFileTypes.member." << permittedFileTypesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace ElasticBeanstalk
} // namespace Aws
