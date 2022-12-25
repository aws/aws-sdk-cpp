/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/budgets/Budgets_EXPORTS.h>
#include <aws/budgets/model/AutoAdjustType.h>
#include <aws/budgets/model/HistoricalOptions.h>
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
namespace Budgets
{
namespace Model
{

  /**
   * <p>The parameters that determine the budget amount for an auto-adjusting
   * budget.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/budgets-2016-10-20/AutoAdjustData">AWS
   * API Reference</a></p>
   */
  class AutoAdjustData
  {
  public:
    AWS_BUDGETS_API AutoAdjustData();
    AWS_BUDGETS_API AutoAdjustData(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API AutoAdjustData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline const AutoAdjustType& GetAutoAdjustType() const{ return m_autoAdjustType; }

    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline bool AutoAdjustTypeHasBeenSet() const { return m_autoAdjustTypeHasBeenSet; }

    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline void SetAutoAdjustType(const AutoAdjustType& value) { m_autoAdjustTypeHasBeenSet = true; m_autoAdjustType = value; }

    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline void SetAutoAdjustType(AutoAdjustType&& value) { m_autoAdjustTypeHasBeenSet = true; m_autoAdjustType = std::move(value); }

    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline AutoAdjustData& WithAutoAdjustType(const AutoAdjustType& value) { SetAutoAdjustType(value); return *this;}

    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline AutoAdjustData& WithAutoAdjustType(AutoAdjustType&& value) { SetAutoAdjustType(std::move(value)); return *this;}


    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline const HistoricalOptions& GetHistoricalOptions() const{ return m_historicalOptions; }

    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline bool HistoricalOptionsHasBeenSet() const { return m_historicalOptionsHasBeenSet; }

    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline void SetHistoricalOptions(const HistoricalOptions& value) { m_historicalOptionsHasBeenSet = true; m_historicalOptions = value; }

    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline void SetHistoricalOptions(HistoricalOptions&& value) { m_historicalOptionsHasBeenSet = true; m_historicalOptions = std::move(value); }

    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline AutoAdjustData& WithHistoricalOptions(const HistoricalOptions& value) { SetHistoricalOptions(value); return *this;}

    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline AutoAdjustData& WithHistoricalOptions(HistoricalOptions&& value) { SetHistoricalOptions(std::move(value)); return *this;}


    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAutoAdjustTime() const{ return m_lastAutoAdjustTime; }

    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline bool LastAutoAdjustTimeHasBeenSet() const { return m_lastAutoAdjustTimeHasBeenSet; }

    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline void SetLastAutoAdjustTime(const Aws::Utils::DateTime& value) { m_lastAutoAdjustTimeHasBeenSet = true; m_lastAutoAdjustTime = value; }

    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline void SetLastAutoAdjustTime(Aws::Utils::DateTime&& value) { m_lastAutoAdjustTimeHasBeenSet = true; m_lastAutoAdjustTime = std::move(value); }

    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline AutoAdjustData& WithLastAutoAdjustTime(const Aws::Utils::DateTime& value) { SetLastAutoAdjustTime(value); return *this;}

    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline AutoAdjustData& WithLastAutoAdjustTime(Aws::Utils::DateTime&& value) { SetLastAutoAdjustTime(std::move(value)); return *this;}

  private:

    AutoAdjustType m_autoAdjustType;
    bool m_autoAdjustTypeHasBeenSet = false;

    HistoricalOptions m_historicalOptions;
    bool m_historicalOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAutoAdjustTime;
    bool m_lastAutoAdjustTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
