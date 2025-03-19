/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SearchResourcesComparator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/SearchResourcesTagCriterionPair.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Macie2
{
namespace Model
{

  /**
   * <p>Specifies a tag-based filter condition that determines which Amazon Web
   * Services resources are included or excluded from the query
   * results.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/SearchResourcesTagCriterion">AWS
   * API Reference</a></p>
   */
  class SearchResourcesTagCriterion
  {
  public:
    AWS_MACIE2_API SearchResourcesTagCriterion() = default;
    AWS_MACIE2_API SearchResourcesTagCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesTagCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SearchResourcesComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(SearchResourcesComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline SearchResourcesTagCriterion& WithComparator(SearchResourcesComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline const Aws::Vector<SearchResourcesTagCriterionPair>& GetTagValues() const { return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    template<typename TagValuesT = Aws::Vector<SearchResourcesTagCriterionPair>>
    void SetTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::forward<TagValuesT>(value); }
    template<typename TagValuesT = Aws::Vector<SearchResourcesTagCriterionPair>>
    SearchResourcesTagCriterion& WithTagValues(TagValuesT&& value) { SetTagValues(std::forward<TagValuesT>(value)); return *this;}
    template<typename TagValuesT = SearchResourcesTagCriterionPair>
    SearchResourcesTagCriterion& AddTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues.emplace_back(std::forward<TagValuesT>(value)); return *this; }
    ///@}
  private:

    SearchResourcesComparator m_comparator{SearchResourcesComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    Aws::Vector<SearchResourcesTagCriterionPair> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
