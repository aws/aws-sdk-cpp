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

#include <aws/cloudsearch/model/DocumentSuggesterOptions.h>
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

DocumentSuggesterOptions::DocumentSuggesterOptions() : 
    m_sourceFieldHasBeenSet(false),
    m_fuzzyMatching(SuggesterFuzzyMatching::NOT_SET),
    m_fuzzyMatchingHasBeenSet(false),
    m_sortExpressionHasBeenSet(false)
{
}

DocumentSuggesterOptions::DocumentSuggesterOptions(const XmlNode& xmlNode) : 
    m_sourceFieldHasBeenSet(false),
    m_fuzzyMatching(SuggesterFuzzyMatching::NOT_SET),
    m_fuzzyMatchingHasBeenSet(false),
    m_sortExpressionHasBeenSet(false)
{
  *this = xmlNode;
}

DocumentSuggesterOptions& DocumentSuggesterOptions::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceFieldNode = resultNode.FirstChild("SourceField");
    if(!sourceFieldNode.IsNull())
    {
      m_sourceField = sourceFieldNode.GetText();
      m_sourceFieldHasBeenSet = true;
    }
    XmlNode fuzzyMatchingNode = resultNode.FirstChild("FuzzyMatching");
    if(!fuzzyMatchingNode.IsNull())
    {
      m_fuzzyMatching = SuggesterFuzzyMatchingMapper::GetSuggesterFuzzyMatchingForName(StringUtils::Trim(fuzzyMatchingNode.GetText().c_str()).c_str());
      m_fuzzyMatchingHasBeenSet = true;
    }
    XmlNode sortExpressionNode = resultNode.FirstChild("SortExpression");
    if(!sortExpressionNode.IsNull())
    {
      m_sortExpression = sortExpressionNode.GetText();
      m_sortExpressionHasBeenSet = true;
    }
  }

  return *this;
}

void DocumentSuggesterOptions::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }

  if(m_fuzzyMatchingHasBeenSet)
  {
      oStream << location << index << locationValue << ".FuzzyMatching=" << SuggesterFuzzyMatchingMapper::GetNameForSuggesterFuzzyMatching(m_fuzzyMatching) << "&";
  }

  if(m_sortExpressionHasBeenSet)
  {
      oStream << location << index << locationValue << ".SortExpression=" << StringUtils::URLEncode(m_sortExpression.c_str()) << "&";
  }

}

void DocumentSuggesterOptions::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceFieldHasBeenSet)
  {
      oStream << location << ".SourceField=" << StringUtils::URLEncode(m_sourceField.c_str()) << "&";
  }
  if(m_fuzzyMatchingHasBeenSet)
  {
      oStream << location << ".FuzzyMatching=" << SuggesterFuzzyMatchingMapper::GetNameForSuggesterFuzzyMatching(m_fuzzyMatching) << "&";
  }
  if(m_sortExpressionHasBeenSet)
  {
      oStream << location << ".SortExpression=" << StringUtils::URLEncode(m_sortExpression.c_str()) << "&";
  }
}

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
