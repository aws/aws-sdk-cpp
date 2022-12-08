/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>

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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The forecast properties setup of a forecast in the line chart.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/TimeBasedForecastProperties">AWS
   * API Reference</a></p>
   */
  class TimeBasedForecastProperties
  {
  public:
    AWS_QUICKSIGHT_API TimeBasedForecastProperties();
    AWS_QUICKSIGHT_API TimeBasedForecastProperties(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API TimeBasedForecastProperties& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The periods forward setup of a forecast computation.</p>
     */
    inline int GetPeriodsForward() const{ return m_periodsForward; }

    /**
     * <p>The periods forward setup of a forecast computation.</p>
     */
    inline bool PeriodsForwardHasBeenSet() const { return m_periodsForwardHasBeenSet; }

    /**
     * <p>The periods forward setup of a forecast computation.</p>
     */
    inline void SetPeriodsForward(int value) { m_periodsForwardHasBeenSet = true; m_periodsForward = value; }

    /**
     * <p>The periods forward setup of a forecast computation.</p>
     */
    inline TimeBasedForecastProperties& WithPeriodsForward(int value) { SetPeriodsForward(value); return *this;}


    /**
     * <p>The periods backward setup of a forecast computation.</p>
     */
    inline int GetPeriodsBackward() const{ return m_periodsBackward; }

    /**
     * <p>The periods backward setup of a forecast computation.</p>
     */
    inline bool PeriodsBackwardHasBeenSet() const { return m_periodsBackwardHasBeenSet; }

    /**
     * <p>The periods backward setup of a forecast computation.</p>
     */
    inline void SetPeriodsBackward(int value) { m_periodsBackwardHasBeenSet = true; m_periodsBackward = value; }

    /**
     * <p>The periods backward setup of a forecast computation.</p>
     */
    inline TimeBasedForecastProperties& WithPeriodsBackward(int value) { SetPeriodsBackward(value); return *this;}


    /**
     * <p>The upper boundary setup of a forecast computation.</p>
     */
    inline double GetUpperBoundary() const{ return m_upperBoundary; }

    /**
     * <p>The upper boundary setup of a forecast computation.</p>
     */
    inline bool UpperBoundaryHasBeenSet() const { return m_upperBoundaryHasBeenSet; }

    /**
     * <p>The upper boundary setup of a forecast computation.</p>
     */
    inline void SetUpperBoundary(double value) { m_upperBoundaryHasBeenSet = true; m_upperBoundary = value; }

    /**
     * <p>The upper boundary setup of a forecast computation.</p>
     */
    inline TimeBasedForecastProperties& WithUpperBoundary(double value) { SetUpperBoundary(value); return *this;}


    /**
     * <p>The lower boundary setup of a forecast computation.</p>
     */
    inline double GetLowerBoundary() const{ return m_lowerBoundary; }

    /**
     * <p>The lower boundary setup of a forecast computation.</p>
     */
    inline bool LowerBoundaryHasBeenSet() const { return m_lowerBoundaryHasBeenSet; }

    /**
     * <p>The lower boundary setup of a forecast computation.</p>
     */
    inline void SetLowerBoundary(double value) { m_lowerBoundaryHasBeenSet = true; m_lowerBoundary = value; }

    /**
     * <p>The lower boundary setup of a forecast computation.</p>
     */
    inline TimeBasedForecastProperties& WithLowerBoundary(double value) { SetLowerBoundary(value); return *this;}


    /**
     * <p>The prediction interval setup of a forecast computation.</p>
     */
    inline int GetPredictionInterval() const{ return m_predictionInterval; }

    /**
     * <p>The prediction interval setup of a forecast computation.</p>
     */
    inline bool PredictionIntervalHasBeenSet() const { return m_predictionIntervalHasBeenSet; }

    /**
     * <p>The prediction interval setup of a forecast computation.</p>
     */
    inline void SetPredictionInterval(int value) { m_predictionIntervalHasBeenSet = true; m_predictionInterval = value; }

    /**
     * <p>The prediction interval setup of a forecast computation.</p>
     */
    inline TimeBasedForecastProperties& WithPredictionInterval(int value) { SetPredictionInterval(value); return *this;}


    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>NULL</code>: The input is set to
     * <code>NULL</code>.</p> </li> <li> <p> <code>NON_NULL</code>: The input is set to
     * a custom value.</p> </li> </ul>
     */
    inline int GetSeasonality() const{ return m_seasonality; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>NULL</code>: The input is set to
     * <code>NULL</code>.</p> </li> <li> <p> <code>NON_NULL</code>: The input is set to
     * a custom value.</p> </li> </ul>
     */
    inline bool SeasonalityHasBeenSet() const { return m_seasonalityHasBeenSet; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>NULL</code>: The input is set to
     * <code>NULL</code>.</p> </li> <li> <p> <code>NON_NULL</code>: The input is set to
     * a custom value.</p> </li> </ul>
     */
    inline void SetSeasonality(int value) { m_seasonalityHasBeenSet = true; m_seasonality = value; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>NULL</code>: The input is set to
     * <code>NULL</code>.</p> </li> <li> <p> <code>NON_NULL</code>: The input is set to
     * a custom value.</p> </li> </ul>
     */
    inline TimeBasedForecastProperties& WithSeasonality(int value) { SetSeasonality(value); return *this;}

  private:

    int m_periodsForward;
    bool m_periodsForwardHasBeenSet = false;

    int m_periodsBackward;
    bool m_periodsBackwardHasBeenSet = false;

    double m_upperBoundary;
    bool m_upperBoundaryHasBeenSet = false;

    double m_lowerBoundary;
    bool m_lowerBoundaryHasBeenSet = false;

    int m_predictionInterval;
    bool m_predictionIntervalHasBeenSet = false;

    int m_seasonality;
    bool m_seasonalityHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
