/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/macie2/Macie2_EXPORTS.h>
#include <aws/macie2/model/SimpleCriterionForJob.h>
#include <aws/macie2/model/TagCriterionForJob.h>
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
   * <p>Specifies a property- or tag-based condition that defines criteria for
   * including or excluding S3 buckets from a classification job.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/macie2-2020-01-01/CriteriaForJob">AWS
   * API Reference</a></p>
   */
  class CriteriaForJob
  {
  public:
    AWS_MACIE2_API CriteriaForJob();
    AWS_MACIE2_API CriteriaForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CriteriaForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline const SimpleCriterionForJob& GetSimpleCriterion() const{ return m_simpleCriterion; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline bool SimpleCriterionHasBeenSet() const { return m_simpleCriterionHasBeenSet; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline void SetSimpleCriterion(const SimpleCriterionForJob& value) { m_simpleCriterionHasBeenSet = true; m_simpleCriterion = value; }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline void SetSimpleCriterion(SimpleCriterionForJob&& value) { m_simpleCriterionHasBeenSet = true; m_simpleCriterion = std::move(value); }

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline CriteriaForJob& WithSimpleCriterion(const SimpleCriterionForJob& value) { SetSimpleCriterion(value); return *this;}

    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline CriteriaForJob& WithSimpleCriterion(SimpleCriterionForJob&& value) { SetSimpleCriterion(std::move(value)); return *this;}


    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline const TagCriterionForJob& GetTagCriterion() const{ return m_tagCriterion; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline bool TagCriterionHasBeenSet() const { return m_tagCriterionHasBeenSet; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline void SetTagCriterion(const TagCriterionForJob& value) { m_tagCriterionHasBeenSet = true; m_tagCriterion = value; }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline void SetTagCriterion(TagCriterionForJob&& value) { m_tagCriterionHasBeenSet = true; m_tagCriterion = std::move(value); }

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline CriteriaForJob& WithTagCriterion(const TagCriterionForJob& value) { SetTagCriterion(value); return *this;}

    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline CriteriaForJob& WithTagCriterion(TagCriterionForJob&& value) { SetTagCriterion(std::move(value)); return *this;}

  private:

    SimpleCriterionForJob m_simpleCriterion;
    bool m_simpleCriterionHasBeenSet = false;

    TagCriterionForJob m_tagCriterion;
    bool m_tagCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
