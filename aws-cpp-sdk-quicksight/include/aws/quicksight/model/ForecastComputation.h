/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
#include <aws/quicksight/model/ForecastComputationSeasonality.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>The forecast computation configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ForecastComputation">AWS
   * API Reference</a></p>
   */
  class ForecastComputation
  {
  public:
    AWS_QUICKSIGHT_API ForecastComputation();
    AWS_QUICKSIGHT_API ForecastComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API ForecastComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID for a computation.</p>
     */
    inline const Aws::String& GetComputationId() const{ return m_computationId; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline bool ComputationIdHasBeenSet() const { return m_computationIdHasBeenSet; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const Aws::String& value) { m_computationIdHasBeenSet = true; m_computationId = value; }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(Aws::String&& value) { m_computationIdHasBeenSet = true; m_computationId = std::move(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline void SetComputationId(const char* value) { m_computationIdHasBeenSet = true; m_computationId.assign(value); }

    /**
     * <p>The ID for a computation.</p>
     */
    inline ForecastComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline ForecastComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline ForecastComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}


    /**
     * <p>The name of a computation.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of a computation.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of a computation.</p>
     */
    inline ForecastComputation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline ForecastComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline ForecastComputation& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline const DimensionField& GetTime() const{ return m_time; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline bool TimeHasBeenSet() const { return m_timeHasBeenSet; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(const DimensionField& value) { m_timeHasBeenSet = true; m_time = value; }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline void SetTime(DimensionField&& value) { m_timeHasBeenSet = true; m_time = std::move(value); }

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline ForecastComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline ForecastComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline const MeasureField& GetValue() const{ return m_value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(const MeasureField& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline void SetValue(MeasureField&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline ForecastComputation& WithValue(const MeasureField& value) { SetValue(value); return *this;}

    /**
     * <p>The value field that is used in a computation.</p>
     */
    inline ForecastComputation& WithValue(MeasureField&& value) { SetValue(std::move(value)); return *this;}


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
    inline ForecastComputation& WithPeriodsForward(int value) { SetPeriodsForward(value); return *this;}


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
    inline ForecastComputation& WithPeriodsBackward(int value) { SetPeriodsBackward(value); return *this;}


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
    inline ForecastComputation& WithUpperBoundary(double value) { SetUpperBoundary(value); return *this;}


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
    inline ForecastComputation& WithLowerBoundary(double value) { SetLowerBoundary(value); return *this;}


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
    inline ForecastComputation& WithPredictionInterval(int value) { SetPredictionInterval(value); return *this;}


    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline const ForecastComputationSeasonality& GetSeasonality() const{ return m_seasonality; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline bool SeasonalityHasBeenSet() const { return m_seasonalityHasBeenSet; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline void SetSeasonality(const ForecastComputationSeasonality& value) { m_seasonalityHasBeenSet = true; m_seasonality = value; }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline void SetSeasonality(ForecastComputationSeasonality&& value) { m_seasonalityHasBeenSet = true; m_seasonality = std::move(value); }

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline ForecastComputation& WithSeasonality(const ForecastComputationSeasonality& value) { SetSeasonality(value); return *this;}

    /**
     * <p>The seasonality setup of a forecast computation. Choose one of the following
     * options:</p> <ul> <li> <p> <code>AUTOMATIC</code> </p> </li> <li> <p>
     * <code>CUSTOM</code>: Checks the custom seasonality value.</p> </li> </ul>
     */
    inline ForecastComputation& WithSeasonality(ForecastComputationSeasonality&& value) { SetSeasonality(std::move(value)); return *this;}


    /**
     * <p>The custom seasonality value setup of a forecast computation.</p>
     */
    inline int GetCustomSeasonalityValue() const{ return m_customSeasonalityValue; }

    /**
     * <p>The custom seasonality value setup of a forecast computation.</p>
     */
    inline bool CustomSeasonalityValueHasBeenSet() const { return m_customSeasonalityValueHasBeenSet; }

    /**
     * <p>The custom seasonality value setup of a forecast computation.</p>
     */
    inline void SetCustomSeasonalityValue(int value) { m_customSeasonalityValueHasBeenSet = true; m_customSeasonalityValue = value; }

    /**
     * <p>The custom seasonality value setup of a forecast computation.</p>
     */
    inline ForecastComputation& WithCustomSeasonalityValue(int value) { SetCustomSeasonalityValue(value); return *this;}

  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    MeasureField m_value;
    bool m_valueHasBeenSet = false;

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

    ForecastComputationSeasonality m_seasonality;
    bool m_seasonalityHasBeenSet = false;

    int m_customSeasonalityValue;
    bool m_customSeasonalityValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
