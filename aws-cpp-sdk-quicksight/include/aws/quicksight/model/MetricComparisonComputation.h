/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/DimensionField.h>
#include <aws/quicksight/model/MeasureField.h>
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
   * <p>The metric comparison computation configuration.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/MetricComparisonComputation">AWS
   * API Reference</a></p>
   */
  class MetricComparisonComputation
  {
  public:
    AWS_QUICKSIGHT_API MetricComparisonComputation();
    AWS_QUICKSIGHT_API MetricComparisonComputation(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API MetricComparisonComputation& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline MetricComparisonComputation& WithComputationId(const Aws::String& value) { SetComputationId(value); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline MetricComparisonComputation& WithComputationId(Aws::String&& value) { SetComputationId(std::move(value)); return *this;}

    /**
     * <p>The ID for a computation.</p>
     */
    inline MetricComparisonComputation& WithComputationId(const char* value) { SetComputationId(value); return *this;}


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
    inline MetricComparisonComputation& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline MetricComparisonComputation& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of a computation.</p>
     */
    inline MetricComparisonComputation& WithName(const char* value) { SetName(value); return *this;}


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
    inline MetricComparisonComputation& WithTime(const DimensionField& value) { SetTime(value); return *this;}

    /**
     * <p>The time field that is used in a computation.</p>
     */
    inline MetricComparisonComputation& WithTime(DimensionField&& value) { SetTime(std::move(value)); return *this;}


    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline const MeasureField& GetFromValue() const{ return m_fromValue; }

    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline bool FromValueHasBeenSet() const { return m_fromValueHasBeenSet; }

    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline void SetFromValue(const MeasureField& value) { m_fromValueHasBeenSet = true; m_fromValue = value; }

    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline void SetFromValue(MeasureField&& value) { m_fromValueHasBeenSet = true; m_fromValue = std::move(value); }

    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline MetricComparisonComputation& WithFromValue(const MeasureField& value) { SetFromValue(value); return *this;}

    /**
     * <p>The field that is used in a metric comparison from value setup.</p>
     */
    inline MetricComparisonComputation& WithFromValue(MeasureField&& value) { SetFromValue(std::move(value)); return *this;}


    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline const MeasureField& GetTargetValue() const{ return m_targetValue; }

    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline bool TargetValueHasBeenSet() const { return m_targetValueHasBeenSet; }

    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline void SetTargetValue(const MeasureField& value) { m_targetValueHasBeenSet = true; m_targetValue = value; }

    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline void SetTargetValue(MeasureField&& value) { m_targetValueHasBeenSet = true; m_targetValue = std::move(value); }

    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline MetricComparisonComputation& WithTargetValue(const MeasureField& value) { SetTargetValue(value); return *this;}

    /**
     * <p>The field that is used in a metric comparison to value setup.</p>
     */
    inline MetricComparisonComputation& WithTargetValue(MeasureField&& value) { SetTargetValue(std::move(value)); return *this;}

  private:

    Aws::String m_computationId;
    bool m_computationIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DimensionField m_time;
    bool m_timeHasBeenSet = false;

    MeasureField m_fromValue;
    bool m_fromValueHasBeenSet = false;

    MeasureField m_targetValue;
    bool m_targetValueHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
