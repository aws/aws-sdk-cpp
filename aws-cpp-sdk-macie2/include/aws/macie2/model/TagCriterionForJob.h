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
    AWS_MACIE2_API TagCriterionForJob();
    AWS_MACIE2_API TagCriterionForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API TagCriterionForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline const JobComparator& GetComparator() const{ return m_comparator; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline bool ComparatorHasBeenSet() const { return m_comparatorHasBeenSet; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(const JobComparator& value) { m_comparatorHasBeenSet = true; m_comparator = value; }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline void SetComparator(JobComparator&& value) { m_comparatorHasBeenSet = true; m_comparator = std::move(value); }

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline TagCriterionForJob& WithComparator(const JobComparator& value) { SetComparator(value); return *this;}

    /**
     * <p>The operator to use in the condition. Valid values are EQ (equals) and NE
     * (not equals).</p>
     */
    inline TagCriterionForJob& WithComparator(JobComparator&& value) { SetComparator(std::move(value)); return *this;}


    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline const Aws::Vector<TagCriterionPairForJob>& GetTagValues() const{ return m_tagValues; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline bool TagValuesHasBeenSet() const { return m_tagValuesHasBeenSet; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline void SetTagValues(const Aws::Vector<TagCriterionPairForJob>& value) { m_tagValuesHasBeenSet = true; m_tagValues = value; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline void SetTagValues(Aws::Vector<TagCriterionPairForJob>&& value) { m_tagValuesHasBeenSet = true; m_tagValues = std::move(value); }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline TagCriterionForJob& WithTagValues(const Aws::Vector<TagCriterionPairForJob>& value) { SetTagValues(value); return *this;}

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline TagCriterionForJob& WithTagValues(Aws::Vector<TagCriterionPairForJob>&& value) { SetTagValues(std::move(value)); return *this;}

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline TagCriterionForJob& AddTagValues(const TagCriterionPairForJob& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(value); return *this; }

    /**
     * <p>The tag keys, tag values, or tag key and value pairs to use in the
     * condition.</p>
     */
    inline TagCriterionForJob& AddTagValues(TagCriterionPairForJob&& value) { m_tagValuesHasBeenSet = true; m_tagValues.push_back(std::move(value)); return *this; }

  private:

    JobComparator m_comparator;
    bool m_comparatorHasBeenSet = false;

    Aws::Vector<TagCriterionPairForJob> m_tagValues;
    bool m_tagValuesHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
