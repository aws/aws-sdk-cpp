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

#pragma once
#include <aws/cloudsearch/CloudSearch_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/cloudsearch/model/SuggesterFuzzyMatching.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace CloudSearch
{
namespace Model
{

  /**
   * <p>Options for a search suggester.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/cloudsearch-2013-01-01/DocumentSuggesterOptions">AWS
   * API Reference</a></p>
   */
  class AWS_CLOUDSEARCH_API DocumentSuggesterOptions
  {
  public:
    DocumentSuggesterOptions();
    DocumentSuggesterOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    DocumentSuggesterOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline const Aws::String& GetSourceField() const{ return m_sourceField; }

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline void SetSourceField(const Aws::String& value) { m_sourceFieldHasBeenSet = true; m_sourceField = value; }

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline void SetSourceField(Aws::String&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::move(value); }

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline void SetSourceField(const char* value) { m_sourceFieldHasBeenSet = true; m_sourceField.assign(value); }

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline DocumentSuggesterOptions& WithSourceField(const Aws::String& value) { SetSourceField(value); return *this;}

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline DocumentSuggesterOptions& WithSourceField(Aws::String&& value) { SetSourceField(std::move(value)); return *this;}

    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline DocumentSuggesterOptions& WithSourceField(const char* value) { SetSourceField(value); return *this;}


    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline const SuggesterFuzzyMatching& GetFuzzyMatching() const{ return m_fuzzyMatching; }

    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline bool FuzzyMatchingHasBeenSet() const { return m_fuzzyMatchingHasBeenSet; }

    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline void SetFuzzyMatching(const SuggesterFuzzyMatching& value) { m_fuzzyMatchingHasBeenSet = true; m_fuzzyMatching = value; }

    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline void SetFuzzyMatching(SuggesterFuzzyMatching&& value) { m_fuzzyMatchingHasBeenSet = true; m_fuzzyMatching = std::move(value); }

    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline DocumentSuggesterOptions& WithFuzzyMatching(const SuggesterFuzzyMatching& value) { SetFuzzyMatching(value); return *this;}

    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline DocumentSuggesterOptions& WithFuzzyMatching(SuggesterFuzzyMatching&& value) { SetFuzzyMatching(std::move(value)); return *this;}


    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline const Aws::String& GetSortExpression() const{ return m_sortExpression; }

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline bool SortExpressionHasBeenSet() const { return m_sortExpressionHasBeenSet; }

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline void SetSortExpression(const Aws::String& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = value; }

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline void SetSortExpression(Aws::String&& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = std::move(value); }

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline void SetSortExpression(const char* value) { m_sortExpressionHasBeenSet = true; m_sortExpression.assign(value); }

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline DocumentSuggesterOptions& WithSortExpression(const Aws::String& value) { SetSortExpression(value); return *this;}

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline DocumentSuggesterOptions& WithSortExpression(Aws::String&& value) { SetSortExpression(std::move(value)); return *this;}

    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline DocumentSuggesterOptions& WithSortExpression(const char* value) { SetSortExpression(value); return *this;}

  private:

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet;

    SuggesterFuzzyMatching m_fuzzyMatching;
    bool m_fuzzyMatchingHasBeenSet;

    Aws::String m_sortExpression;
    bool m_sortExpressionHasBeenSet;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
