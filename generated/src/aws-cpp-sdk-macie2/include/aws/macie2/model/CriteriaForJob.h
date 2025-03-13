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
    AWS_MACIE2_API CriteriaForJob() = default;
    AWS_MACIE2_API CriteriaForJob(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API CriteriaForJob& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MACIE2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A property-based condition that defines a property, operator, and one or more
     * values for including or excluding buckets from the job.</p>
     */
    inline const SimpleCriterionForJob& GetSimpleCriterion() const { return m_simpleCriterion; }
    inline bool SimpleCriterionHasBeenSet() const { return m_simpleCriterionHasBeenSet; }
    template<typename SimpleCriterionT = SimpleCriterionForJob>
    void SetSimpleCriterion(SimpleCriterionT&& value) { m_simpleCriterionHasBeenSet = true; m_simpleCriterion = std::forward<SimpleCriterionT>(value); }
    template<typename SimpleCriterionT = SimpleCriterionForJob>
    CriteriaForJob& WithSimpleCriterion(SimpleCriterionT&& value) { SetSimpleCriterion(std::forward<SimpleCriterionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A tag-based condition that defines an operator and tag keys, tag values, or
     * tag key and value pairs for including or excluding buckets from the job.</p>
     */
    inline const TagCriterionForJob& GetTagCriterion() const { return m_tagCriterion; }
    inline bool TagCriterionHasBeenSet() const { return m_tagCriterionHasBeenSet; }
    template<typename TagCriterionT = TagCriterionForJob>
    void SetTagCriterion(TagCriterionT&& value) { m_tagCriterionHasBeenSet = true; m_tagCriterion = std::forward<TagCriterionT>(value); }
    template<typename TagCriterionT = TagCriterionForJob>
    CriteriaForJob& WithTagCriterion(TagCriterionT&& value) { SetTagCriterion(std::forward<TagCriterionT>(value)); return *this;}
    ///@}
  private:

    SimpleCriterionForJob m_simpleCriterion;
    bool m_simpleCriterionHasBeenSet = false;

    TagCriterionForJob m_tagCriterion;
    bool m_tagCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace Macie2
} // namespace Aws
