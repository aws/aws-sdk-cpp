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
    AWS_MACIE2_API SearchResourcesTagCriterion();
    AWS_MACIE2_API SearchResourcesTagCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API SearchResourcesTagCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline const SearchResourcesComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(const SearchResourcesComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(SearchResourcesComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SearchResourcesTagCriterion& WithComparator(const SearchResourcesComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline SearchResourcesTagCriterion& WithComparator(SearchResourcesComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline const Aws::Vector<SearchResourcesTagCriterionPair>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline void SetTagValues(const Aws::Vector<SearchResourcesTagCriterionPair>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline void SetTagValues(Aws::Vector<SearchResourcesTagCriterionPair>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline SearchResourcesTagCriterion& WithTagValues(const Aws::Vector<SearchResourcesTagCriterionPair>& value) { SetTagValues(value); return *this;}

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline SearchResourcesTagCriterion& WithTagValues(Aws::Vector<SearchResourcesTagCriterionPair>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline SearchResourcesTagCriterion& AddTagValues(const SearchResourcesTagCriterionPair& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline SearchResourcesTagCriterion& AddTagValues(SearchResourcesTagCriterionPair&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

  private:

    SearchResourcesComparator m_comparator;
    bool m_comparatorHasBeenSet = false;

    Aws::Vector<SearchResourcesTagCriterionPair> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
