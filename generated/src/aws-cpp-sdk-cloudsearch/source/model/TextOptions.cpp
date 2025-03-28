﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/TextOptions.h>
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

TextOptions::TextOptions(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

TextOptions& TextOptions::operator =(const XmlNode& xmlNode)
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
    XmlNode sourceFieldNode = resultNode.FirstChild("SourceField");
    if(!sourceFieldNode.IsNull())
    {
      m_sourceField = Aws::Utils::Xml::DecodeEscapedXmlText(sourceFieldNode.GetText());
      m_sourceFieldHasBeenSet = true;
    }
    XmlNode returnEnabledNode = resultNode.FirstChild("ReturnEnabled");
    if(!returnEnabledNode.IsNull())
    {
      m_returnEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(returnEnabledNode.GetText()).c_str()).c_str());
      m_returnEnabledHasBeenSet = true;
    }
    XmlNode sortEnabledNode = resultNode.FirstChild("SortEnabled");
    if(!sortEnabledNode.IsNull())
    {
      m_sortEnabled = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sortEnabledNode.GetText()).c_str()).c_str());
      m_sortEnabledHasBeenSet = true;
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

void TextOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << index << locationValue << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }

  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }

  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }

  if(m_sortEnabledHasBeenSet)
  {
      oStream << location << index << locationValue << ".SortEnabled=" << std::boolalpha << m_sortEnabled << "&";
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

void TextOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_defaultValueHasBeenSet)
  {
      oStream << location << ".DefaultValue=" << StringUtils::URLEncode(m_defaultValue.c_str()) << "&";
  }
  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }
  if(m_returnEnabledHasBeenSet)
  {
      oStream << location << ".ReturnEnabled=" << std::boolalpha << m_returnEnabled << "&";
  }
  if(m_sortEnabledHasBeenSet)
  {
      oStream << location << ".SortEnabled=" << std::boolalpha << m_sortEnabled << "&";
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
