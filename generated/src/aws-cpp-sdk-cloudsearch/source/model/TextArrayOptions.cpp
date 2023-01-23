/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/TextArrayOptions.h>
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

TextArrayOptions::TextArrayOptions() : 
    m_defaultValueHasBeenSet(false),
    m_sourceFieldsHasBeenSet(false),
    m_returnEnabled(false),
    m_returnEnabledHasBeenSet(false),
    m_highlightEnabled(false),
    m_highlightEnabledHasBeenSet(false),
    m_analysisSchemeHasBeenSet(false)
{
}

TextArrayOptions::TextArrayOptions(const XmlNode& xmlNode) : 
    m_defaultValueHasBeenSet(false),
    m_sourceFieldsHasBeenSet(false),
    m_returnEnabled(false),
    m_returnEnabledHasBeenSet(false),
    m_highlightEnabled(false),
    m_highlightEnabledHasBeenSet(false),
    m_analysisSchemeHasBeenSet(false)
{
  *this = xmlNode;
}

TextArrayOptions& TextArrayOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode defaultValueNode = resultNode.FirstChild("DefaultValue");
    if(!defaultValueNode.IsNull())
    {
      m_defaultValue = Aws::Utils::Xml::DecodeEscapedXmlText(defaultValueNode.GetText());
      m_defaultValueHasBeenSet = true;
    }
    XmlNode sourceFieldsNode = resultNode.FirstChild("SourceFields");
    if(!sourceFieldsNode.IsNull())
    {
      m_sourceFields = Aws::Utils::Xml::DecodeEscapedXmlText(sourceFieldsNode.GetText());
      m_sourceFieldsHasBeenSet = true;
    }
    XmlNode returnEnabledNode = resultNode.FirstChild("ReturnEnabled");
    if(!returnEnabledNode.IsNull())
    {
      m_returnEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnEnabledNode.GetText()).c_str()).c_str());
      m_returnEnabledHasBeenSet = true;
    }
    XmlNode highlightEnabledNode = resultNode.FirstChild("HighlightEnabled");
    if(!highlightEnabledNode.IsNull())
    {
      m_highlightEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(highlightEnabledNode.GetText()).c_str()).c_str());
      m_highlightEnabledHasBeenSet = true;
    }
    XmlNode analysisSchemeNode = resultNode.FirstChild("AnalysisScheme");
    if(!analysisSchemeNode.IsNull())
    {
      m_analysisScheme = Aws::Utils::Xml::DecodeEscapedXmlText(analysisSchemeNode.GetText());
      m_analysisSchemeHasBeenSet = true;
    }
  }

  return *this;
}

void TextArrayOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_sourceFieldsHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceFields=" << StringUtils::URLEncode(m_sourceFields.c_str()) << "&";
  }

  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }

  if(m_highlightEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".HighlightEnabled=" << std::boolalpha << m_highlightEnabled << "&";
  }

  if(m_analysisSchemeHasBeenSet)
  {
      oStream << location << index << locationValue << ".AnalysisScheme=" << StringUtils::URLEncode(m_analysisScheme.c_str()) << "&";
  }

}

void TextArrayOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_sourceFieldsHasBeenSet)
  {
      oStream << location << ".SourceFields=" << StringUtils::URLEncode(m_sourceFields.c_str()) << "&";
  }
  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }
  if(m_highlightEnabledHasBeenSet)
  {
      oStream << location << ".HighlightEnabled=" << std::boolalpha << m_highlightEnabled << "&";
  }
  if(m_analysisSchemeHasBeenSet)
  {
      oStream << location << ".AnalysisScheme=" << StringUtils::URLEncode(m_analysisScheme.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
