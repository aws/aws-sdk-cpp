/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DocumentSuggesterOptions
  {
  public:
    AWS_CLOUDSEARCH_API DocumentSuggesterOptions() = default;
    AWS_CLOUDSEARCH_API DocumentSuggesterOptions(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_CLOUDSEARCH_API DocumentSuggesterOptions& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_CLOUDSEARCH_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the index field you want to use for suggestions. </p>
     */
    inline const Aws::String& GetSourceField() const { return m_sourceField; }
    inline bool SourceFieldHasBeenSet() const { return m_sourceFieldHasBeenSet; }
    template<typename SourceFieldT = Aws::String>
    void SetSourceField(SourceFieldT&& value) { m_sourceFieldHasBeenSet = true; m_sourceField = std::forward<SourceFieldT>(value); }
    template<typename SourceFieldT = Aws::String>
    DocumentSuggesterOptions& WithSourceField(SourceFieldT&& value) { SetSourceField(std::forward<SourceFieldT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The level of fuzziness allowed when suggesting matches for a string:
     * <code>none</code>, <code>low</code>, or <code>high</code>. With none, the
     * specified string is treated as an exact prefix. With low, suggestions must
     * differ from the specified string by no more than one character. With high,
     * suggestions can differ by up to two characters. The default is none. </p>
     */
    inline SuggesterFuzzyMatching GetFuzzyMatching() const { return m_fuzzyMatching; }
    inline bool FuzzyMatchingHasBeenSet() const { return m_fuzzyMatchingHasBeenSet; }
    inline void SetFuzzyMatching(SuggesterFuzzyMatching value) { m_fuzzyMatchingHasBeenSet = true; m_fuzzyMatching = value; }
    inline DocumentSuggesterOptions& WithFuzzyMatching(SuggesterFuzzyMatching value) { SetFuzzyMatching(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An expression that computes a score for each suggestion to control how they
     * are sorted. The scores are rounded to the nearest integer, with a floor of 0 and
     * a ceiling of 2^31-1. A document's relevance score is not computed for
     * suggestions, so sort expressions cannot reference the <code>_score</code> value.
     * To sort suggestions using a numeric field or existing expression, simply specify
     * the name of the field or expression. If no expression is configured for the
     * suggester, the suggestions are sorted with the closest matches listed first.</p>
     */
    inline const Aws::String& GetSortExpression() const { return m_sortExpression; }
    inline bool SortExpressionHasBeenSet() const { return m_sortExpressionHasBeenSet; }
    template<typename SortExpressionT = Aws::String>
    void SetSortExpression(SortExpressionT&& value) { m_sortExpressionHasBeenSet = true; m_sortExpression = std::forward<SortExpressionT>(value); }
    template<typename SortExpressionT = Aws::String>
    DocumentSuggesterOptions& WithSortExpression(SortExpressionT&& value) { SetSortExpression(std::forward<SortExpressionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sourceField;
    bool m_sourceFieldHasBeenSet = false;

    SuggesterFuzzyMatching m_fuzzyMatching{SuggesterFuzzyMatching::NOT_SET};
    bool m_fuzzyMatchingHasBeenSet = false;

    Aws::String m_sortExpression;
    bool m_sortExpressionHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudSearch
} // namespace Aws
