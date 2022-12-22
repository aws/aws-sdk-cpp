/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>Provides the forecast to meet the target for a particular date
   * range.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/WhatIfRangeScenario">AWS
   * API Reference</a></p>
   */
  class WhatIfRangeScenario
  {
  public:
    AWS_QUICKSIGHT_API WhatIfRangeScenario();
    AWS_QUICKSIGHT_API WhatIfRangeScenario(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API WhatIfRangeScenario& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline const Aws::Utils::DateTime& GetStartDate() const{ return m_startDate; }

    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline bool StartDateHasBeenSet() const { return m_startDateHasBeenSet; }

    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline void SetStartDate(const Aws::Utils::DateTime& value) { m_startDateHasBeenSet = true; m_startDate = value; }

    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline void SetStartDate(Aws::Utils::DateTime&& value) { m_startDateHasBeenSet = true; m_startDate = std::move(value); }

    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline WhatIfRangeScenario& WithStartDate(const Aws::Utils::DateTime& value) { SetStartDate(value); return *this;}

    /**
     * <p>The start date in the date range that you need the forecast results for.</p>
     */
    inline WhatIfRangeScenario& WithStartDate(Aws::Utils::DateTime&& value) { SetStartDate(std::move(value)); return *this;}


    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline const Aws::Utils::DateTime& GetEndDate() const{ return m_endDate; }

    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline bool EndDateHasBeenSet() const { return m_endDateHasBeenSet; }

    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline void SetEndDate(const Aws::Utils::DateTime& value) { m_endDateHasBeenSet = true; m_endDate = value; }

    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline void SetEndDate(Aws::Utils::DateTime&& value) { m_endDateHasBeenSet = true; m_endDate = std::move(value); }

    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline WhatIfRangeScenario& WithEndDate(const Aws::Utils::DateTime& value) { SetEndDate(value); return *this;}

    /**
     * <p>The end date in the date range that you need the forecast results for.</p>
     */
    inline WhatIfRangeScenario& WithEndDate(Aws::Utils::DateTime&& value) { SetEndDate(std::move(value)); return *this;}


    /**
     * <p>The target value that you want to meet for the provided date range.</p>
     */
    inline double GetValue() const{ return m_value; }

    /**
     * <p>The target value that you want to meet for the provided date range.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The target value that you want to meet for the provided date range.</p>
     */
    inline void SetValue(double value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The target value that you want to meet for the provided date range.</p>
     */
    inline WhatIfRangeScenario& WithValue(double value) { SetValue(value); return *this;}

  private:

    Aws::Utils::DateTime m_startDate;
    bool m_startDateHasBeenSet = false;

    Aws::Utils::DateTime m_endDate;
    bool m_endDateHasBeenSet = false;

    double m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
