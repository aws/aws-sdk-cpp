/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
      m_analysisSchemeName = Aws::Utils::Xml::DecodeEscapedXmlText(analysisSchemeNameNode.GetText());
      m_analysisSchemeNameHasBeenSet = true;
    }
    XmlNode analysisSchemeLanguageNode = resultNode.FirstChild("AnalysisSchemeLanguage");
    if(!analysisSchemeLanguageNode.IsNull())
    {
      m_analysisSchemeLanguage = AnalysisSchemeLanguageMapper::GetAnalysisSchemeLanguageForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(analysisSchemeLanguageNode.GetText()).c_str()).c_str());
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
