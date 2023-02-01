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
    AWS_GUARDDUTY_API FilterCriteria();
    AWS_GUARDDUTY_API FilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API FilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline const Aws::Vector<FilterCriterion>& GetFilterCriterion() const{ return m_filterCriterion; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline bool FilterCriterionHasBeenSet() const { return m_filterCriterionHasBeenSet; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline void SetFilterCriterion(const Aws::Vector<FilterCriterion>& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = value; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline void SetFilterCriterion(Aws::Vector<FilterCriterion>&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = std::move(value); }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline FilterCriteria& WithFilterCriterion(const Aws::Vector<FilterCriterion>& value) { SetFilterCriterion(value); return *this;}

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline FilterCriteria& WithFilterCriterion(Aws::Vector<FilterCriterion>&& value) { SetFilterCriterion(std::move(value)); return *this;}

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline FilterCriteria& AddFilterCriterion(const FilterCriterion& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.push_back(value); return *this; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline FilterCriteria& AddFilterCriterion(FilterCriterion&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<FilterCriterion> m_filterCriterion;
    bool m_filterCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
