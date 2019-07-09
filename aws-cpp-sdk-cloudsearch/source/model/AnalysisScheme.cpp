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

#include <aws/cloudsearch/model/AnalysisScheme.h>
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

AnalysisScheme::AnalysisScheme() : 
    m_analysisSchemeNameHasBeenSet(false),
    m_analysisSchemeLanguage(AnalysisSchemeLanguage::NOT_SET),
    m_analysisSchemeLanguageHasBeenSet(false),
    m_analysisOptionsHasBeenSet(false)
{
}

AnalysisScheme::AnalysisScheme(const XmlNode& xmlNode) : 
    m_analysisSchemeNameHasBeenSet(false),
    m_analysisSchemeLanguage(AnalysisSchemeLanguage::NOT_SET),
    m_analysisSchemeLanguageHasBeenSet(false),
    m_analysisOptionsHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisScheme& AnalysisScheme::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode analysisSchemeNameNode = resultNode.FirstChild("AnalysisSchemeName");
    if(!analysisSchemeNameNode.IsNull())
    {
      m_analysisSchemeName = analysisSchemeNameNode.GetText();
      m_analysisSchemeNameHasBeenSet = true;
    }
    XmlNode analysisSchemeLanguageNode = resultNode.FirstChild("AnalysisSchemeLanguage");
    if(!analysisSchemeLanguageNode.IsNull())
    {
      m_analysisSchemeLanguage = AnalysisSchemeLanguageMapper::GetAnalysisSchemeLanguageForName(StringUtils::Trim(analysisSchemeLanguageNode.GetText().c_str()).c_str());
      m_analysisSchemeLanguageHasBeenSet = true;
    }
    XmlNode analysisOptionsNode = resultNode.FirstChild("AnalysisOptions");
    if(!analysisOptionsNode.IsNull())
    {
      m_analysisOptions = analysisOptionsNode;
      m_analysisOptionsHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisScheme::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_analysisSchemeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AnalysisSchemeName=" << StringUtils::URLEncode(m_analysisSchemeName.c_str()) << "&";
  }

  if(m_analysisSchemeLanguageHasBeenSet)
  {
      oStream << location << index << locationValue << ".AnalysisSchemeLanguage=" << AnalysisSchemeLanguageMapper::GetNameForAnalysisSchemeLanguage(m_analysisSchemeLanguage) << "&";
  }

  if(m_analysisOptionsHasBeenSet)
  {
      Aws::StringStream analysisOptionsLocationAndMemberSs;
      analysisOptionsLocationAndMemberSs << location << index << locationValue << ".AnalysisOptions";
      m_analysisOptions.OutputToStream(oStream, analysisOptionsLocationAndMemberSs.str().c_str());
  }

}

void AnalysisScheme::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_analysisSchemeNameHasBeenSet)
  {
      oStream << location << ".AnalysisSchemeName=" << StringUtils::URLEncode(m_analysisSchemeName.c_str()) << "&";
  }
  if(m_analysisSchemeLanguageHasBeenSet)
  {
      oStream << location << ".AnalysisSchemeLanguage=" << AnalysisSchemeLanguageMapper::GetNameForAnalysisSchemeLanguage(m_analysisSchemeLanguage) << "&";
  }
  if(m_analysisOptionsHasBeenSet)
  {
      Aws::String analysisOptionsLocationAndMember(location);
      analysisOptionsLocationAndMember += ".AnalysisOptions";
      m_analysisOptions.OutputToStream(oStream, analysisOptionsLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
