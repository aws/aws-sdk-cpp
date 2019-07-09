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
      m_synonyms = synonymsNode.GetText();
      m_synonymsHasBeenSet = true;
    }
    XmlNode stopwordsNode = resultNode.FirstChild("Stopwords");
    if(!stopwordsNode.IsNull())
    {
      m_stopwords = stopwordsNode.GetText();
      m_stopwordsHasBeenSet = true;
    }
    XmlNode stemmingDictionaryNode = resultNode.FirstChild("StemmingDictionary");
    if(!stemmingDictionaryNode.IsNull())
    {
      m_stemmingDictionary = stemmingDictionaryNode.GetText();
      m_stemmingDictionaryHasBeenSet = true;
    }
    XmlNode japaneseTokenizationDictionaryNode = resultNode.FirstChild("JapaneseTokenizationDictionary");
    if(!japaneseTokenizationDictionaryNode.IsNull())
    {
      m_japaneseTokenizationDictionary = japaneseTokenizationDictionaryNode.GetText();
      m_japaneseTokenizationDictionaryHasBeenSet = true;
    }
    XmlNode algorithmicStemmingNode = resultNode.FirstChild("AlgorithmicStemming");
    if(!algorithmicStemmingNode.IsNull())
    {
      m_algorithmicStemming = AlgorithmicStemmingMapper::GetAlgorithmicStemmingForName(StringUtils::Trim(algorithmicStemmingNode.GetText().c_str()).c_str());
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
