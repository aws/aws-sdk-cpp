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

#include <aws/cloudsearch/model/Suggester.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudSearch
{
namespace Model
{

Suggester::Suggester() : 
    m_suggesterNameHasBeenSet(false),
    m_documentSuggesterOptionsHasBeenSet(false)
{
}

Suggester::Suggester(const XmlNode& xmlNode) : 
    m_suggesterNameHasBeenSet(false),
    m_documentSuggesterOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

Suggester& Suggester::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode suggesterNameNode = resultNode.FirstChild("SuggesterName");
    if(!suggesterNameNode.IsNull())
    {
      m_suggesterName = suggesterNameNode.GetText();
      m_suggesterNameHasBeenSet = true;
    }
    XmlNode documentSuggesterOptionsNode = resultNode.FirstChild("DocumentSuggesterOptions");
    if(!documentSuggesterOptionsNode.IsNull())
    {
      m_documentSuggesterOptions = documentSuggesterOptionsNode;
      m_documentSuggesterOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void Suggester::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_suggesterNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".SuggesterName=" << StringUtils::URLEncode(m_suggesterName.c_str()) << "&";
  }

  if(m_documentSuggesterOptionsHasBeenSet)
  {
      Aws::StringStream documentSuggesterOptionsLocationAndMemberSs;
      documentSuggesterOptionsLocationAndMemberSs << location << index << locationValue << ".DocumentSuggesterOptions";
      m_documentSuggesterOptions.OutputToStream(oStream, documentSuggesterOptionsLocationAndMemberSs.str().c_str());
  }

}

void Suggester::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_suggesterNameHasBeenSet)
  {
      oStream << location << ".SuggesterName=" << StringUtils::URLEncode(m_suggesterName.c_str()) << "&";
  }
  if(m_documentSuggesterOptionsHasBeenSet)
  {
      Aws::String documentSuggesterOptionsLocationAndMember(location);
      documentSuggesterOptionsLocationAndMember += ".DocumentSuggesterOptions";
      m_documentSuggesterOptions.OutputToStream(oStream, documentSuggesterOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
