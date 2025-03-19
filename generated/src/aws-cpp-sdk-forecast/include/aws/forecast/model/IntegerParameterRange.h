/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/ScalingType.h>
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
   * <p>Specifies an integer hyperparameter and it's range of tunable values. This
   * object is part of the <a>ParameterRanges</a> object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/IntegerParameterRange">AWS
   * API Reference</a></p>
   */
  class IntegerParameterRange
  {
  public:
    AWS_FORECASTSERVICE_API IntegerParameterRange() = default;
    AWS_FORECASTSERVICE_API IntegerParameterRange(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API IntegerParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    IntegerParameterRange& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum tunable value of the hyperparameter.</p>
     */
    inline int GetMaxValue() const { return m_maxValue; }
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }
    inline void SetMaxValue(int value) { m_maxValueHasBeenSet = true; m_maxValue = value; }
    inline IntegerParameterRange& WithMaxValue(int value) { SetMaxValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum tunable value of the hyperparameter.</p>
     */
    inline int GetMinValue() const { return m_minValue; }
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }
    inline void SetMinValue(int value) { m_minValueHasBeenSet = true; m_minValue = value; }
    inline IntegerParameterRange& WithMinValue(int value) { SetMinValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>Not supported for
     * <code>IntegerParameterRange</code>.</p> <p>Reverse logarithmic scaling works
     * only for ranges that are entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd>
     * </dl> <p>For information about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline ScalingType GetScalingType() const { return m_scalingType; }
    inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }
    inline void SetScalingType(ScalingType value) { m_scalingTypeHasBeenSet = true; m_scalingType = value; }
    inline IntegerParameterRange& WithScalingType(ScalingType value) { SetScalingType(value); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    int m_maxValue{0};
    bool m_maxValueHasBeenSet = false;

    int m_minValue{0};
    bool m_minValueHasBeenSet = false;

    ScalingType m_scalingType{ScalingType::NOT_SET};
    bool m_scalingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
