/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ce/CostExplorer_EXPORTS.h>
#include <aws/ce/model/DateInterval.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace CostExplorer
{
namespace Model
{

  /**
   * <p>The forecast that's created for your query.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ce-2017-10-25/ForecastResult">AWS
   * API Reference</a></p>
   */
  class ForecastResult
  {
  public:
    AWS_COSTEXPLORER_API ForecastResult();
    AWS_COSTEXPLORER_API ForecastResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ForecastResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }

    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }

    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }

    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }

    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline ForecastResult& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}

    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline ForecastResult& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}


    /**
     * <p>The mean value of the forecast.</p>
     */
    inline const Aws::String& GetMeanValue() const{ return m_meanValue; }

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline bool MeanValueHasBeenSet() const { return m_meanValueHasBeenSet; }

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline void SetMeanValue(const Aws::String& value) { m_meanValueHasBeenSet = true; m_meanValue = value; }

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline void SetMeanValue(Aws::String&& value) { m_meanValueHasBeenSet = true; m_meanValue = std::move(value); }

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline void SetMeanValue(const char* value) { m_meanValueHasBeenSet = true; m_meanValue.assign(value); }

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline ForecastResult& WithMeanValue(const Aws::String& value) { SetMeanValue(value); return *this;}

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline ForecastResult& WithMeanValue(Aws::String&& value) { SetMeanValue(std::move(value)); return *this;}

    /**
     * <p>The mean value of the forecast.</p>
     */
    inline ForecastResult& WithMeanValue(const char* value) { SetMeanValue(value); return *this;}


    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalLowerBound() const{ return m_predictionIntervalLowerBound; }

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline bool PredictionIntervalLowerBoundHasBeenSet() const { return m_predictionIntervalLowerBoundHasBeenSet; }

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalLowerBound(const Aws::String& value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound = value; }

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalLowerBound(Aws::String&& value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound = std::move(value); }

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalLowerBound(const char* value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound.assign(value); }

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalLowerBound(const Aws::String& value) { SetPredictionIntervalLowerBound(value); return *this;}

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalLowerBound(Aws::String&& value) { SetPredictionIntervalLowerBound(std::move(value)); return *this;}

    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalLowerBound(const char* value) { SetPredictionIntervalLowerBound(value); return *this;}


    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalUpperBound() const{ return m_predictionIntervalUpperBound; }

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline bool PredictionIntervalUpperBoundHasBeenSet() const { return m_predictionIntervalUpperBoundHasBeenSet; }

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalUpperBound(const Aws::String& value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound = value; }

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalUpperBound(Aws::String&& value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound = std::move(value); }

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline void SetPredictionIntervalUpperBound(const char* value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound.assign(value); }

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalUpperBound(const Aws::String& value) { SetPredictionIntervalUpperBound(value); return *this;}

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalUpperBound(Aws::String&& value) { SetPredictionIntervalUpperBound(std::move(value)); return *this;}

    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline ForecastResult& WithPredictionIntervalUpperBound(const char* value) { SetPredictionIntervalUpperBound(value); return *this;}

  private:

    DateInterval m_timePeriod;
    bool m_timePeriodHasBeenSet = false;

    Aws::String m_meanValue;
    bool m_meanValueHasBeenSet = false;

    Aws::String m_predictionIntervalLowerBound;
    bool m_predictionIntervalLowerBoundHasBeenSet = false;

    Aws::String m_predictionIntervalUpperBound;
    bool m_predictionIntervalUpperBoundHasBeenSet = false;
  };

} // namespace Model
} // namespace CostExplorer
} // namespace Aws
