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
    AWS_GUARDDUTY_API CoverageFilterCriteria();
    AWS_GUARDDUTY_API CoverageFilterCriteria(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API CoverageFilterCriteria& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_GUARDDUTY_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline const Aws::Vector<CoverageFilterCriterion>& GetFilterCriterion() const{ return m_filterCriterion; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline bool FilterCriterionHasBeenSet() const { return m_filterCriterionHasBeenSet; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline void SetFilterCriterion(const Aws::Vector<CoverageFilterCriterion>& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = value; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline void SetFilterCriterion(Aws::Vector<CoverageFilterCriterion>&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion = std::move(value); }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline CoverageFilterCriteria& WithFilterCriterion(const Aws::Vector<CoverageFilterCriterion>& value) { SetFilterCriterion(value); return *this;}

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline CoverageFilterCriteria& WithFilterCriterion(Aws::Vector<CoverageFilterCriterion>&& value) { SetFilterCriterion(std::move(value)); return *this;}

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline CoverageFilterCriteria& AddFilterCriterion(const CoverageFilterCriterion& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.push_back(value); return *this; }

    /**
     * <p>Represents a condition that when matched will be added to the response of the
     * operation.</p>
     */
    inline CoverageFilterCriteria& AddFilterCriterion(CoverageFilterCriterion&& value) { m_filterCriterionHasBeenSet = true; m_filterCriterion.push_back(std::move(value)); return *this; }

  private:

    Aws::Vector<CoverageFilterCriterion> m_filterCriterion;
    bool m_filterCriterionHasBeenSet = false;
  };

} // namespace Model
} // namespace GuardDuty
} // namespace Aws
