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
    AWS_COSTEXPLORER_API ForecastResult() = default;
    AWS_COSTEXPLORER_API ForecastResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API ForecastResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_COSTEXPLORER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The period of time that the forecast covers.</p>
     */
    inline const DateInterval& GetTimePeriod() const { return m_timePeriod; }
    inline bool TimePeriodHasBeenSet() const { return m_timePeriodHasBeenSet; }
    template<typename TimePeriodT = DateInterval>
    void SetTimePeriod(TimePeriodT&& value) { m_timePeriodHasBeenSet = true; m_timePeriod = std::forward<TimePeriodT>(value); }
    template<typename TimePeriodT = DateInterval>
    ForecastResult& WithTimePeriod(TimePeriodT&& value) { SetTimePeriod(std::forward<TimePeriodT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The mean value of the forecast.</p>
     */
    inline const Aws::String& GetMeanValue() const { return m_meanValue; }
    inline bool MeanValueHasBeenSet() const { return m_meanValueHasBeenSet; }
    template<typename MeanValueT = Aws::String>
    void SetMeanValue(MeanValueT&& value) { m_meanValueHasBeenSet = true; m_meanValue = std::forward<MeanValueT>(value); }
    template<typename MeanValueT = Aws::String>
    ForecastResult& WithMeanValue(MeanValueT&& value) { SetMeanValue(std::forward<MeanValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lower limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalLowerBound() const { return m_predictionIntervalLowerBound; }
    inline bool PredictionIntervalLowerBoundHasBeenSet() const { return m_predictionIntervalLowerBoundHasBeenSet; }
    template<typename PredictionIntervalLowerBoundT = Aws::String>
    void SetPredictionIntervalLowerBound(PredictionIntervalLowerBoundT&& value) { m_predictionIntervalLowerBoundHasBeenSet = true; m_predictionIntervalLowerBound = std::forward<PredictionIntervalLowerBoundT>(value); }
    template<typename PredictionIntervalLowerBoundT = Aws::String>
    ForecastResult& WithPredictionIntervalLowerBound(PredictionIntervalLowerBoundT&& value) { SetPredictionIntervalLowerBound(std::forward<PredictionIntervalLowerBoundT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upper limit for the prediction interval. </p>
     */
    inline const Aws::String& GetPredictionIntervalUpperBound() const { return m_predictionIntervalUpperBound; }
    inline bool PredictionIntervalUpperBoundHasBeenSet() const { return m_predictionIntervalUpperBoundHasBeenSet; }
    template<typename PredictionIntervalUpperBoundT = Aws::String>
    void SetPredictionIntervalUpperBound(PredictionIntervalUpperBoundT&& value) { m_predictionIntervalUpperBoundHasBeenSet = true; m_predictionIntervalUpperBound = std::forward<PredictionIntervalUpperBoundT>(value); }
    template<typename PredictionIntervalUpperBoundT = Aws::String>
    ForecastResult& WithPredictionIntervalUpperBound(PredictionIntervalUpperBoundT&& value) { SetPredictionIntervalUpperBound(std::forward<PredictionIntervalUpperBoundT>(value)); return *this;}
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
