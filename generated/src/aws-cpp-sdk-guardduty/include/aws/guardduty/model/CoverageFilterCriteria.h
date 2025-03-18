/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/guardduty/GuardDuty_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/guardduty/model/CoverageFilterCriterion.h>
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
   * <p>Represents the criteria used in the filter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/guardduty-2017-11-28/CoverageFilterCriteria">AWS
   * API Reference</a></p>
   */
  class CoverageFilterCriteria
  {
  public:
    AWS_GUARDDUTY_API CoverageFilterCriteria() = default;
    AWS_GUARDDUTY_API CoverageFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline const Aws::Vector<CoverageFilterCriterion>& GetFilterCriterion() const { return m_filterCriterion; }
    inline bool FilterCriterionHasBeenSet() const { return m_filterCriterionHasBeenSet; }
    template<typename FilterCriterionT = Aws::Vector<CoverageFilterCriterion>>
    void SetFilterCriterion(FilterCriterionT&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = std::forward<FilterCriterionT>(value); }
    template<typename FilterCriterionT = Aws::Vector<CoverageFilterCriterion>>
    CoverageFilterCriteria& WithFilterCriterion(FilterCriterionT&& value) { SetFilterCriterion(std::forward<FilterCriterionT>(value)); return *this;}
    template<typename FilterCriterionT = CoverageFilterCriterion>
    CoverageFilterCriteria& AddFilterCriterion(FilterCriterionT&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.emplace_back(std::forward<FilterCriterionT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<CoverageFilterCriterion> m_filterCriterion;
    bool m_filterCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
