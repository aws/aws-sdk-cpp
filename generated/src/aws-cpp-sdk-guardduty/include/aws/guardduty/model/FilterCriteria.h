/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/FilterCriterion.h>
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
   * <p>Represents the criteria to be used in the filter for describing scan
   * entries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/FilterCriteria">AWS
   * API Reference</a></p>
   */
  class FilterCriteria
  {
  public:
    AWS_GUARDDUTY_API FilterCriteria() = default;
    AWS_GUARDDUTY_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline const Aws::Vector<FilterCriterion>& GetFilterCriterion() const { return m_filterCriterion; }
    inline bool FilterCriterionHasBeenSet() const { return m_filterCriterionHasBeenSet; }
    template<typename FilterCriterionT = Aws::Vector<FilterCriterion>>
    void SetFilterCriterion(FilterCriterionT&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = std::forward<FilterCriterionT>(value); }
    template<typename FilterCriterionT = Aws::Vector<FilterCriterion>>
    FilterCriteria& WithFilterCriterion(FilterCriterionT&& value) { SetFilterCriterion(std::forward<FilterCriterionT>(value)); return *this;}
    template<typename FilterCriterionT = FilterCriterion>
    FilterCriteria& AddFilterCriterion(FilterCriterionT&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.emplace_back(std::forward<FilterCriterionT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<FilterCriterion> m_filterCriterion;
    bool m_filterCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
