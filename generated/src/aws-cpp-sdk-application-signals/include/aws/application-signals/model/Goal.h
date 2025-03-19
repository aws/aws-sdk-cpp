/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/application-signals/ApplicationSignals_EXPORTS.h>
#include <aws/application-signals/model/Interval.h>
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
namespace ApplicationSignals
{
namespace Model
{

  /**
   * <p>This structure contains the attributes that determine the goal of an SLO.
   * This includes the time period for evaluation and the attainment
   * threshold.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/application-signals-2024-04-15/Goal">AWS
   * API Reference</a></p>
   */
  class Goal
  {
  public:
    AWS_APPLICATIONSIGNALS_API Goal() = default;
    AWS_APPLICATIONSIGNALS_API Goal(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Goal& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPLICATIONSIGNALS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The time period used to evaluate the SLO. It can be either a calendar
     * interval or rolling interval.</p> <p>If you omit this parameter, a rolling
     * interval of 7 days is used.</p>
     */
    inline const Interval& GetInterval() const { return m_interval; }
    inline bool IntervalHasBeenSet() const { return m_intervalHasBeenSet; }
    template<typename IntervalT = Interval>
    void SetInterval(IntervalT&& value) { m_intervalHasBeenSet = true; m_interval = std::forward<IntervalT>(value); }
    template<typename IntervalT = Interval>
    Goal& WithInterval(IntervalT&& value) { SetInterval(std::forward<IntervalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The threshold that determines if the goal is being met.</p> <p>If this is a
     * period-based SLO, the attainment goal is the percentage of good periods that
     * meet the threshold requirements to the total periods within the interval. For
     * example, an attainment goal of 99.9% means that within your interval, you are
     * targeting 99.9% of the periods to be in healthy state.</p> <p>If this is a
     * request-based SLO, the attainment goal is the percentage of requests that must
     * be successful to meet the attainment goal.</p> <p>If you omit this parameter, 99
     * is used to represent 99% as the attainment goal.</p>
     */
    inline double GetAttainmentGoal() const { return m_attainmentGoal; }
    inline bool AttainmentGoalHasBeenSet() const { return m_attainmentGoalHasBeenSet; }
    inline void SetAttainmentGoal(double value) { m_attainmentGoalHasBeenSet = true; m_attainmentGoal = value; }
    inline Goal& WithAttainmentGoal(double value) { SetAttainmentGoal(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The percentage of remaining budget over total budget that you want to get
     * warnings for. If you omit this parameter, the default of 50.0 is used. </p>
     */
    inline double GetWarningThreshold() const { return m_warningThreshold; }
    inline bool WarningThresholdHasBeenSet() const { return m_warningThresholdHasBeenSet; }
    inline void SetWarningThreshold(double value) { m_warningThresholdHasBeenSet = true; m_warningThreshold = value; }
    inline Goal& WithWarningThreshold(double value) { SetWarningThreshold(value); return *this;}
    ///@}
  private:

    Interval m_interval;
    bool m_intervalHasBeenSet = false;

    double m_attainmentGoal{0.0};
    bool m_attainmentGoalHasBeenSet = false;

    double m_warningThreshold{0.0};
    bool m_warningThresholdHasBeenSet = false;
  };

} // namespace Model
} // namespace ApplicationSignals
} // namespace Aws
