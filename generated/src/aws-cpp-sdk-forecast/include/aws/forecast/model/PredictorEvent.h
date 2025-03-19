/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace ForecastService
{
namespace Model
{

  /**
   * <p>Provides details about a predictor event, such as a retraining.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/PredictorEvent">AWS
   * API Reference</a></p>
   */
  class PredictorEvent
  {
  public:
    AWS_FORECASTSERVICE_API PredictorEvent() = default;
    AWS_FORECASTSERVICE_API PredictorEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline const Aws::String& GetDetail() const { return m_detail; }
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }
    template<typename DetailT = Aws::String>
    void SetDetail(DetailT&& value) { m_detailHasBeenSet = true; m_detail = std::forward<DetailT>(value); }
    template<typename DetailT = Aws::String>
    PredictorEvent& WithDetail(DetailT&& value) { SetDetail(std::forward<DetailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetDatetime() const { return m_datetime; }
    inline bool DatetimeHasBeenSet() const { return m_datetimeHasBeenSet; }
    template<typename DatetimeT = Aws::Utils::DateTime>
    void SetDatetime(DatetimeT&& value) { m_datetimeHasBeenSet = true; m_datetime = std::forward<DatetimeT>(value); }
    template<typename DatetimeT = Aws::Utils::DateTime>
    PredictorEvent& WithDatetime(DatetimeT&& value) { SetDatetime(std::forward<DatetimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;

    Aws::Utils::DateTime m_datetime{};
    bool m_datetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
