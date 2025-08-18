/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bcm-dashboards/BCMDashboards_EXPORTS.h>
#include <aws/bcm-dashboards/model/DateTimeValue.h>
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
namespace BCMDashboards
{
namespace Model
{

  /**
   * <p>Defines a time period with explicit start and end times for data
   * queries.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/bcm-dashboards-2025-08-18/DateTimeRange">AWS
   * API Reference</a></p>
   */
  class DateTimeRange
  {
  public:
    AWS_BCMDASHBOARDS_API DateTimeRange() = default;
    AWS_BCMDASHBOARDS_API DateTimeRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API DateTimeRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BCMDASHBOARDS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The start time of the date range for querying data.</p>
     */
    inline const DateTimeValue& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = DateTimeValue>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = DateTimeValue>
    DateTimeRange& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The end time of the date range for querying data.</p>
     */
    inline const DateTimeValue& GetEndTime() const { return m_endTime; }
    inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
    template<typename EndTimeT = DateTimeValue>
    void SetEndTime(EndTimeT&& value) { m_endTimeHasBeenSet = true; m_endTime = std::forward<EndTimeT>(value); }
    template<typename EndTimeT = DateTimeValue>
    DateTimeRange& WithEndTime(EndTimeT&& value) { SetEndTime(std::forward<EndTimeT>(value)); return *this;}
    ///@}
  private:

    DateTimeValue m_startTime;
    bool m_startTimeHasBeenSet = false;

    DateTimeValue m_endTime;
    bool m_endTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace BCMDashboards
} // namespace Aws
