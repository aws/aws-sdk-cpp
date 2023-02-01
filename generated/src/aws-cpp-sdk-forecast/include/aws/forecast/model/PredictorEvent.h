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
    AWS_FORECASTSERVICE_API PredictorEvent();
    AWS_FORECASTSERVICE_API PredictorEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API PredictorEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline const Aws::String& GetDetail() const{ return m_detail; }

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline bool DetailHasBeenSet() const { return m_detailHasBeenSet; }

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline void SetDetail(const Aws::String& value) { m_detailHasBeenSet = true; m_detail = value; }

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline void SetDetail(Aws::String&& value) { m_detailHasBeenSet = true; m_detail = std::move(value); }

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline void SetDetail(const char* value) { m_detailHasBeenSet = true; m_detail.assign(value); }

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline PredictorEvent& WithDetail(const Aws::String& value) { SetDetail(value); return *this;}

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline PredictorEvent& WithDetail(Aws::String&& value) { SetDetail(std::move(value)); return *this;}

    /**
     * <p>The type of event. For example, <code>Retrain</code>. A retraining event
     * denotes the timepoint when a predictor was retrained. Any monitor results from
     * before the <code>Datetime</code> are from the previous predictor. Any new
     * metrics are for the newly retrained predictor.</p>
     */
    inline PredictorEvent& WithDetail(const char* value) { SetDetail(value); return *this;}


    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline const Aws::Utils::DateTime& GetDatetime() const{ return m_datetime; }

    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline bool DatetimeHasBeenSet() const { return m_datetimeHasBeenSet; }

    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline void SetDatetime(const Aws::Utils::DateTime& value) { m_datetimeHasBeenSet = true; m_datetime = value; }

    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline void SetDatetime(Aws::Utils::DateTime&& value) { m_datetimeHasBeenSet = true; m_datetime = std::move(value); }

    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline PredictorEvent& WithDatetime(const Aws::Utils::DateTime& value) { SetDatetime(value); return *this;}

    /**
     * <p>The timestamp for when the event occurred.</p>
     */
    inline PredictorEvent& WithDatetime(Aws::Utils::DateTime&& value) { SetDatetime(std::move(value)); return *this;}

  private:

    Aws::String m_detail;
    bool m_detailHasBeenSet = false;

    Aws::Utils::DateTime m_datetime;
    bool m_datetimeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
