/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CoverageFilterCriterionKey.h>
#include <aws/guardduty/model/CoverageFilterCondition.h>
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
namespace GuardDuty
{
namespace Model
{

  /**
   * <p>Represents a condition that when matched will be added to the response of the
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageFilterCriterion">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCriterion
  {
  public:
    AWS_GUARDDUTY_API CoverageFilterCriterion() = default;
    AWS_GUARDDUTY_API CoverageFilterCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An enum value representing possible filter fields.</p>  <p>Replace the
     * enum value <code>CLUSTER_NAME</code> with <code>EKS_CLUSTER_NAME</code>.
     * <code>CLUSTER_NAME</code> has been deprecated.</p> 
     */
    inline CoverageFilterCriterionKey GetCriterionKey() const { return m_criterionKey; }
    inline bool CriterionKeyHasBeenSet() const { return m_criterionKeyHasBeenSet; }
    inline void SetCriterionKey(CoverageFilterCriterionKey value) { m_criterionKeyHasBeenSet = true; m_criterionKey = value; }
    inline CoverageFilterCriterion& WithCriterionKey(CoverageFilterCriterionKey value) { SetCriterionKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains information about the condition.</p>
     */
    inline const CoverageFilterCondition& GetFilterCondition() const { return m_filterCondition; }
    inline bool FilterConditionHasBeenSet() const { return m_filterConditionHasBeenSet; }
    template<typename FilterConditionT = CoverageFilterCondition>
    void SetFilterCondition(FilterConditionT&& value) { m_filterConditionHasBeenSet = true; m_filterCondition = std::forward<FilterConditionT>(value); }
    template<typename FilterConditionT = CoverageFilterCondition>
    CoverageFilterCriterion& WithFilterCondition(FilterConditionT&& value) { SetFilterCondition(std::forward<FilterConditionT>(value)); return *this;}
    ///@}
  private:

    CoverageFilterCriterionKey m_criterionKey{CoverageFilterCriterionKey::NOT_SET};
    bool m_criterionKeyHasBeenSet = false;

    CoverageFilterCondition m_filterCondition;
    bool m_filterConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
