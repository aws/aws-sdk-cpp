/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/forecast/model/Action.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/forecast/model/TimeSeriesCondition.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>A transformation function is a pair of operations that select and modify the
   * rows in a related time series. You select the rows that you want with a
   * condition operation and you modify the rows with a transformation operation. All
   * conditions are joined with an AND operation, meaning that all conditions must be
   * true for the transformation to be applied. Transformations are applied in the
   * order that they are listed.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/TimeSeriesTransformation">AWS
   * API Reference</a></p>
   */
  class TimeSeriesTransformation
  {
  public:
    AWS_FORECASTSERVICE_API TimeSeriesTransformation() = default;
    AWS_FORECASTSERVICE_API TimeSeriesTransformation(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API TimeSeriesTransformation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>An array of actions that define a time series and how it is transformed.
     * These transformations create a new time series that is used for the what-if
     * analysis.</p>
     */
    inline const Action& GetAction() const { return m_action; }
    inline bool ActionHasBeenSet() const { return m_actionHasBeenSet; }
    template<typename ActionT = Action>
    void SetAction(ActionT&& value) { m_actionHasBeenSet = true; m_action = std::forward<ActionT>(value); }
    template<typename ActionT = Action>
    TimeSeriesTransformation& WithAction(ActionT&& value) { SetAction(std::forward<ActionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of conditions that define which members of the related time series
     * are transformed.</p>
     */
    inline const Aws::Vector<TimeSeriesCondition>& GetTimeSeriesConditions() const { return m_timeSeriesConditions; }
    inline bool TimeSeriesConditionsHasBeenSet() const { return m_timeSeriesConditionsHasBeenSet; }
    template<typename TimeSeriesConditionsT = Aws::Vector<TimeSeriesCondition>>
    void SetTimeSeriesConditions(TimeSeriesConditionsT&& value) { m_timeSeriesConditionsHasBeenSet = true; m_timeSeriesConditions = std::forward<TimeSeriesConditionsT>(value); }
    template<typename TimeSeriesConditionsT = Aws::Vector<TimeSeriesCondition>>
    TimeSeriesTransformation& WithTimeSeriesConditions(TimeSeriesConditionsT&& value) { SetTimeSeriesConditions(std::forward<TimeSeriesConditionsT>(value)); return *this;}
    template<typename TimeSeriesConditionsT = TimeSeriesCondition>
    TimeSeriesTransformation& AddTimeSeriesConditions(TimeSeriesConditionsT&& value) { m_timeSeriesConditionsHasBeenSet = true; m_timeSeriesConditions.emplace_back(std::forward<TimeSeriesConditionsT>(value)); return *this; }
    ///@}
  private:

    Action m_action;
    bool m_actionHasBeenSet = false;

    Aws::Vector<TimeSeriesCondition> m_timeSeriesConditions;
    bool m_timeSeriesConditionsHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
