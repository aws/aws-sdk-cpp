/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/guardduty/model/CriterionKey.h>
#include <aws/guardduty/model/FilterCondition.h>
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
   * operation. Irrespective of using any filter criteria, an administrator account
   * can view the scan entries for all of its member accounts. However, each member
   * account can view the scan entries only for their own account.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FilterCriterion">AWS
   * API Reference</a></p>
   */
  class FilterCriterion
  {
  public:
    AWS_GUARDDUTY_API FilterCriterion();
    AWS_GUARDDUTY_API FilterCriterion(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FilterCriterion& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline const CriterionKey& GetCriterionKey() const{ return m_criterionKey; }

    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline bool CriterionKeyHasBeenSet() const { return m_criterionKeyHasBeenSet; }

    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline void SetCriterionKey(const CriterionKey& value) { m_criterionKeyHasBeenSet = true; m_criterionKey = value; }

    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline void SetCriterionKey(CriterionKey&& value) { m_criterionKeyHasBeenSet = true; m_criterionKey = std::move(value); }

    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline FilterCriterion& WithCriterionKey(const CriterionKey& value) { SetCriterionKey(value); return *this;}

    /**
     * <p>An enum value representing possible scan properties to match with given scan
     * entries.</p>
     */
    inline FilterCriterion& WithCriterionKey(CriterionKey&& value) { SetCriterionKey(std::move(value)); return *this;}


    /**
     * <p>Contains information about the condition.</p>
     */
    inline const FilterCondition& GetFilterCondition() const{ return m_filterCondition; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline bool FilterConditionHasBeenSet() const { return m_filterConditionHasBeenSet; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline void SetFilterCondition(const FilterCondition& value) { m_filterConditionHasBeenSet = true; m_filterCondition = value; }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline void SetFilterCondition(FilterCondition&& value) { m_filterConditionHasBeenSet = true; m_filterCondition = std::move(value); }

    /**
     * <p>Contains information about the condition.</p>
     */
    inline FilterCriterion& WithFilterCondition(const FilterCondition& value) { SetFilterCondition(value); return *this;}

    /**
     * <p>Contains information about the condition.</p>
     */
    inline FilterCriterion& WithFilterCondition(FilterCondition&& value) { SetFilterCondition(std::move(value)); return *this;}

  private:

    CriterionKey m_criterionKey;
    bool m_criterionKeyHasBeenSet = false;

    FilterCondition m_filterCondition;
    bool m_filterConditionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
