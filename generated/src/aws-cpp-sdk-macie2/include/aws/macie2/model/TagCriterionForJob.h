/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/JobComparator.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/macie2/model/TagCriterionPairForJob.h>
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
   * <p>Specifies a tag-based condition that determines whether an S3 bucket is
   * included or excluded from a classification job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/TagCriterionForJob">AWS
   * API Reference</a></p>
   */
  class TagCriterionForJob
  {
  public:
    AWS_MACIE2_API TagCriterionForJob() = default;
    AWS_MACIE2_API TagCriterionForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API TagCriterionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline JobComparator GetComparator() const { return m_comparator; }
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }
    inline void SetComparator(JobComparator value) { m_comparatorHasBeenSet = true; m_comparator = value; }
    inline TagCriterionForJob& WithComparator(JobComparator value) { SetComparator(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline const Aws::Vector<TagCriterionPairForJob>& GetTagValues() const { return m_tagValues; }
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }
    template<typename TagValuesT = Aws::Vector<TagCriterionPairForJob>>
    void SetTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::forward<TagValuesT>(value); }
    template<typename TagValuesT = Aws::Vector<TagCriterionPairForJob>>
    TagCriterionForJob& WithTagValues(TagValuesT&& value) { SetTagValues(std::forward<TagValuesT>(value)); return *this;}
    template<typename TagValuesT = TagCriterionPairForJob>
    TagCriterionForJob& AddTagValues(TagValuesT&& value) { m_tagValuesHasBeenSet = true; m_tagValues.emplace_back(std::forward<TagValuesT>(value)); return *this; }
    ///@}
  private:

    JobComparator m_comparator{JobComparator::NOT_SET};
    bool m_comparatorHasBeenSet = false;

    Aws::Vector<TagCriterionPairForJob> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
