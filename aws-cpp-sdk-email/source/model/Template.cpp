/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#include <aws/email/model/Template.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SES
{
namespace Model
{

Template::Template() : 
    m_templateNameHasBeenSet(false),
    m_subjectPartHasBeenSet(false),
    m_textPartHasBeenSet(false),
    m_htmlPartHasBeenSet(false)
{
}

Template::Template(const XmlNode& xmlNode) : 
    m_templateNameHasBeenSet(false),
    m_subjectPartHasBeenSet(false),
    m_textPartHasBeenSet(false),
    m_htmlPartHasBeenSet(false)
{
  *this = xmlNode;
}

Template& Template::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode templateNameNode = resultNode.FirstChild("TemplateName");
    if(!templateNameNode.IsNull())
    {
      m_templateName = templateNameNode.GetText();
      m_templateNameHasBeenSet = true;
    }
    XmlNode subjectPartNode = resultNode.FirstChild("SubjectPart");
    if(!subjectPartNode.IsNull())
    {
      m_subjectPart = subjectPartNode.GetText();
      m_subjectPartHasBeenSet = true;
    }
    XmlNode textPartNode = resultNode.FirstChild("TextPart");
    if(!textPartNode.IsNull())
    {
      m_textPart = textPartNode.GetText();
      m_textPartHasBeenSet = true;
    }
    XmlNode htmlPartNode = resultNode.FirstChild("HtmlPart");
    if(!htmlPartNode.IsNull())
    {
      m_htmlPart = htmlPartNode.GetText();
      m_htmlPartHasBeenSet = true;
    }
  }

  return *this;
}

void Template::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }

  if(m_subjectPartHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubjectPart=" << StringUtils::URLEncode(m_subjectPart.c_str()) << "&";
  }

  if(m_textPartHasBeenSet)
  {
      oStream << location << index << locationValue << ".TextPart=" << StringUtils::URLEncode(m_textPart.c_str()) << "&";
  }

  if(m_htmlPartHasBeenSet)
  {
      oStream << location << index << locationValue << ".HtmlPart=" << StringUtils::URLEncode(m_htmlPart.c_str()) << "&";
  }

}

void Template::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_templateNameHasBeenSet)
  {
      oStream << location << ".TemplateName=" << StringUtils::URLEncode(m_templateName.c_str()) << "&";
  }
  if(m_subjectPartHasBeenSet)
  {
      oStream << location << ".SubjectPart=" << StringUtils::URLEncode(m_subjectPart.c_str()) << "&";
  }
  if(m_textPartHasBeenSet)
  {
      oStream << location << ".TextPart=" << StringUtils::URLEncode(m_textPart.c_str()) << "&";
  }
  if(m_htmlPartHasBeenSet)
  {
      oStream << location << ".HtmlPart=" << StringUtils::URLEncode(m_htmlPart.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SES
} // namespace Aws
