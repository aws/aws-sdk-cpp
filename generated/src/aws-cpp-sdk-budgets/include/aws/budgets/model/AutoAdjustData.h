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
    AWS_BUDGETS_API AutoAdjustData() = default;
    AWS_BUDGETS_API AutoAdjustData(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API AutoAdjustData& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BUDGETS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The string that defines whether your budget auto-adjusts based on historical
     * or forecasted data.</p>
     */
    inline AutoAdjustType GetAutoAdjustType() const { return m_autoAdjustType; }
    inline bool AutoAdjustTypeHasBeenSet() const { return m_autoAdjustTypeHasBeenSet; }
    inline void SetAutoAdjustType(AutoAdjustType value) { m_autoAdjustTypeHasBeenSet = true; m_autoAdjustType = value; }
    inline AutoAdjustData& WithAutoAdjustType(AutoAdjustType value) { SetAutoAdjustType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parameters that define or describe the historical data that your
     * auto-adjusting budget is based on.</p>
     */
    inline const HistoricalOptions& GetHistoricalOptions() const { return m_historicalOptions; }
    inline bool HistoricalOptionsHasBeenSet() const { return m_historicalOptionsHasBeenSet; }
    template<typename HistoricalOptionsT = HistoricalOptions>
    void SetHistoricalOptions(HistoricalOptionsT&& value) { m_historicalOptionsHasBeenSet = true; m_historicalOptions = std::forward<HistoricalOptionsT>(value); }
    template<typename HistoricalOptionsT = HistoricalOptions>
    AutoAdjustData& WithHistoricalOptions(HistoricalOptionsT&& value) { SetHistoricalOptions(std::forward<HistoricalOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last time that your budget was auto-adjusted.</p>
     */
    inline const Aws::Utils::DateTime& GetLastAutoAdjustTime() const { return m_lastAutoAdjustTime; }
    inline bool LastAutoAdjustTimeHasBeenSet() const { return m_lastAutoAdjustTimeHasBeenSet; }
    template<typename LastAutoAdjustTimeT = Aws::Utils::DateTime>
    void SetLastAutoAdjustTime(LastAutoAdjustTimeT&& value) { m_lastAutoAdjustTimeHasBeenSet = true; m_lastAutoAdjustTime = std::forward<LastAutoAdjustTimeT>(value); }
    template<typename LastAutoAdjustTimeT = Aws::Utils::DateTime>
    AutoAdjustData& WithLastAutoAdjustTime(LastAutoAdjustTimeT&& value) { SetLastAutoAdjustTime(std::forward<LastAutoAdjustTimeT>(value)); return *this;}
    ///@}
  private:

    AutoAdjustType m_autoAdjustType{AutoAdjustType::NOT_SET};
    bool m_autoAdjustTypeHasBeenSet = false;

    HistoricalOptions m_historicalOptions;
    bool m_historicalOptionsHasBeenSet = false;

    Aws::Utils::DateTime m_lastAutoAdjustTime{};
    bool m_lastAutoAdjustTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Budgets
} // namespace Aws
