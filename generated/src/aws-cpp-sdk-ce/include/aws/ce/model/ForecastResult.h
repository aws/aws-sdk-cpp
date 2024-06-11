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


    ///@{
    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline const DateInterval& GetTimePeriod() const{ return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    inline void SetTimePeriod(const DateInterval& value) { m_timePeriodHasBeenSet = true; m_timePeriod = value; }
    inline void SetTimePeriod(DateInterval&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::move(value); }
    inline ForecastResult& WithTimePeriod(const DateInterval& value) { SetTimePeriod(value); return *this;}
    inline ForecastResult& WithTimePeriod(DateInterval&& value) { SetTimePeriod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mean value of the forecast.</p>
     */
    inline const Aws::String& GetMeanValue() const{ return m_meanValue; }
    inline bool MeanValueHasBeenSet() const { return m_meanValueHasBeenSet; }
    inline void SetMeanValue(const Aws::String& value) { m_meanValueHasBeenSet = true; m_meanValue = value; }
    inline void SetMeanValue(Aws::String&& value) { m_meanValueHasBeenSet = true; m_meanValue = std::move(value); }
    inline void SetMeanValue(const char* value) { m_meanValueHasBeenSet = true; m_meanValue.assign(value); }
    inline ForecastResult& WithMeanValue(const Aws::String& value) { SetMeanValue(value); return *this;}
    inline ForecastResult& WithMeanValue(Aws::String&& value) { SetMeanValue(std::move(value)); return *this;}
    inline ForecastResult& WithMeanValue(const char* value) { SetMeanValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalLowerBound() const{ return m_predictionIntervalLowerBound; }
    inline bool PredictionIntervalLowerBoundHasBeenSet() const { return m_predictionIntervalLowerBoundHasBeenSet; }
    inline void SetPredictionIntervalLowerBound(const Aws::String& value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound = value; }
    inline void SetPredictionIntervalLowerBound(Aws::String&& value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound = std::move(value); }
    inline void SetPredictionIntervalLowerBound(const char* value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound.assign(value); }
    inline ForecastResult& WithPredictionIntervalLowerBound(const Aws::String& value) { SetPredictionIntervalLowerBound(value); return *this;}
    inline ForecastResult& WithPredictionIntervalLowerBound(Aws::String&& value) { SetPredictionIntervalLowerBound(std::move(value)); return *this;}
    inline ForecastResult& WithPredictionIntervalLowerBound(const char* value) { SetPredictionIntervalLowerBound(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalUpperBound() const{ return m_predictionIntervalUpperBound; }
    inline bool PredictionIntervalUpperBoundHasBeenSet() const { return m_predictionIntervalUpperBoundHasBeenSet; }
    inline void SetPredictionIntervalUpperBound(const Aws::String& value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound = value; }
    inline void SetPredictionIntervalUpperBound(Aws::String&& value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound = std::move(value); }
    inline void SetPredictionIntervalUpperBound(const char* value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound.assign(value); }
    inline ForecastResult& WithPredictionIntervalUpperBound(const Aws::String& value) { SetPredictionIntervalUpperBound(value); return *this;}
    inline ForecastResult& WithPredictionIntervalUpperBound(Aws::String&& value) { SetPredictionIntervalUpperBound(std::move(value)); return *this;}
    inline ForecastResult& WithPredictionIntervalUpperBound(const char* value) { SetPredictionIntervalUpperBound(value); return *this;}
    ///@}
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
