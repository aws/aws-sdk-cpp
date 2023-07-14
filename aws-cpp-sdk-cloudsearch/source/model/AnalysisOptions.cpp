/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cloudsearch/model/AnalysisOptions.h>
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

AnalysisOptions::AnalysisOptions() : 
    m_synonymsHasBeenSet(false),
    m_stopwordsHasBeenSet(false),
    m_stemmingDictionaryHasBeenSet(false),
    m_japaneseTokenizationDictionaryHasBeenSet(false),
    m_algorithmicStemming(AlgorithmicStemming::NOT_SET),
    m_algorithmicStemmingHasBeenSet(false)
{
}

AnalysisOptions::AnalysisOptions(const XmlNode& xmlNode) : 
    m_synonymsHasBeenSet(false),
    m_stopwordsHasBeenSet(false),
    m_stemmingDictionaryHasBeenSet(false),
    m_japaneseTokenizationDictionaryHasBeenSet(false),
    m_algorithmicStemming(AlgorithmicStemming::NOT_SET),
    m_algorithmicStemmingHasBeenSet(false)
{
  *this = xmlNode;
}

AnalysisOptions& AnalysisOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode synonymsNode = resultNode.FirstChild("Synonyms");
    if(!synonymsNode.IsNull())
    {
      m_synonyms = Aws::Utils::Xml::DecodeEscapedXmlText(synonymsNode.GetText());
      m_synonymsHasBeenSet = true;
    }
    XmlNode stopwordsNode = resultNode.FirstChild("Stopwords");
    if(!stopwordsNode.IsNull())
    {
      m_stopwords = Aws::Utils::Xml::DecodeEscapedXmlText(stopwordsNode.GetText());
      m_stopwordsHasBeenSet = true;
    }
    XmlNode stemmingDictionaryNode = resultNode.FirstChild("StemmingDictionary");
    if(!stemmingDictionaryNode.IsNull())
    {
      m_stemmingDictionary = Aws::Utils::Xml::DecodeEscapedXmlText(stemmingDictionaryNode.GetText());
      m_stemmingDictionaryHasBeenSet = true;
    }
    XmlNode japaneseTokenizationDictionaryNode = resultNode.FirstChild("JapaneseTokenizationDictionary");
    if(!japaneseTokenizationDictionaryNode.IsNull())
    {
      m_japaneseTokenizationDictionary = Aws::Utils::Xml::DecodeEscapedXmlText(japaneseTokenizationDictionaryNode.GetText());
      m_japaneseTokenizationDictionaryHasBeenSet = true;
    }
    XmlNode algorithmicStemmingNode = resultNode.FirstChild("AlgorithmicStemming");
    if(!algorithmicStemmingNode.IsNull())
    {
      m_algorithmicStemming = AlgorithmicStemmingMapper::GetAlgorithmicStemmingForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(algorithmicStemmingNode.GetText()).c_str()).c_str());
      m_algorithmicStemmingHasBeenSet = true;
    }
  }

  return *this;
}

void AnalysisOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_synonymsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Synonyms=" << StringUtils::URLEncode(m_synonyms.c_str()) << "&";
  }

  if(m_stopwordsHasBeenSet)
  {
      oStream << location << index << locationValue << ".Stopwords=" << StringUtils::URLEncode(m_stopwords.c_str()) << "&";
  }

  if(m_stemmingDictionaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".StemmingDictionary=" << StringUtils::URLEncode(m_stemmingDictionary.c_str()) << "&";
  }

  if(m_japaneseTokenizationDictionaryHasBeenSet)
  {
      oStream << location << index << locationValue << ".JapaneseTokenizationDictionary=" << StringUtils::URLEncode(m_japaneseTokenizationDictionary.c_str()) << "&";
  }

  if(m_algorithmicStemmingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlgorithmicStemming=" << AlgorithmicStemmingMapper::GetNameForAlgorithmicStemming(m_algorithmicStemming) << "&";
  }

}

void AnalysisOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_synonymsHasBeenSet)
  {
      oStream << location << ".Synonyms=" << StringUtils::URLEncode(m_synonyms.c_str()) << "&";
  }
  if(m_stopwordsHasBeenSet)
  {
      oStream << location << ".Stopwords=" << StringUtils::URLEncode(m_stopwords.c_str()) << "&";
  }
  if(m_stemmingDictionaryHasBeenSet)
  {
      oStream << location << ".StemmingDictionary=" << StringUtils::URLEncode(m_stemmingDictionary.c_str()) << "&";
  }
  if(m_japaneseTokenizationDictionaryHasBeenSet)
  {
      oStream << location << ".JapaneseTokenizationDictionary=" << StringUtils::URLEncode(m_japaneseTokenizationDictionary.c_str()) << "&";
  }
  if(m_algorithmicStemmingHasBeenSet)
  {
      oStream << location << ".AlgorithmicStemming=" << AlgorithmicStemmingMapper::GetNameForAlgorithmicStemming(m_algorithmicStemming) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
