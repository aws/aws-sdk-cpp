﻿/**
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
   * <p>Specifies a continuous hyperparameter and it's range of tunable values. This
   * object is part of the <a>ParameterRanges</a> object.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/ContinuousParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_FORECASTSERVICE_API ContinuousParameterRange
  {
  public:
    ContinuousParameterRange();
    ContinuousParameterRange(Aws::Utils::Json::JsonView jsonValue);
    ContinuousParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The maximum tunable value of the hyperparameter.</p>
     */
    inline double GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum tunable value of the hyperparameter.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum tunable value of the hyperparameter.</p>
     */
    inline void SetMaxValue(double value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum tunable value of the hyperparameter.</p>
     */
    inline ContinuousParameterRange& WithMaxValue(double value) { SetMaxValue(value); return *this;}


    /**
     * <p>The minimum tunable value of the hyperparameter.</p>
     */
    inline double GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum tunable value of the hyperparameter.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum tunable value of the hyperparameter.</p>
     */
    inline void SetMinValue(double value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum tunable value of the hyperparameter.</p>
     */
    inline ContinuousParameterRange& WithMinValue(double value) { SetMinValue(value); return *this;}


    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline const ScalingType& GetScalingType() const{ return m_scalingType; }

    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline bool ScalingTypeHasBeenSet() const { return m_scalingTypeHasBeenSet; }

    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline void SetScalingType(const ScalingType& value) { m_scalingTypeHasBeenSet = true; m_scalingType = value; }

    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline void SetScalingType(ScalingType&& value) { m_scalingTypeHasBeenSet = true; m_scalingType = std::move(value); }

    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline ContinuousParameterRange& WithScalingType(const ScalingType& value) { SetScalingType(value); return *this;}

    /**
     * <p>The scale that hyperparameter tuning uses to search the hyperparameter range.
     * Valid values:</p> <dl> <dt>Auto</dt> <dd> <p>Amazon Forecast hyperparameter
     * tuning chooses the best scale for the hyperparameter.</p> </dd> <dt>Linear</dt>
     * <dd> <p>Hyperparameter tuning searches the values in the hyperparameter range by
     * using a linear scale.</p> </dd> <dt>Logarithmic</dt> <dd> <p>Hyperparameter
     * tuning searches the values in the hyperparameter range by using a logarithmic
     * scale.</p> <p>Logarithmic scaling works only for ranges that have values greater
     * than 0.</p> </dd> <dt>ReverseLogarithmic</dt> <dd> <p>hyperparameter tuning
     * searches the values in the hyperparameter range by using a reverse logarithmic
     * scale.</p> <p>Reverse logarithmic scaling works only for ranges that are
     * entirely within the range 0 &lt;= x &lt; 1.0.</p> </dd> </dl> <p>For information
     * about choosing a hyperparameter scale, see <a
     * href="http://docs.aws.amazon.com/sagemaker/latest/dg/automatic-model-tuning-define-ranges.html#scaling-type">Hyperparameter
     * Scaling</a>. One of the following values:</p>
     */
    inline ContinuousParameterRange& WithScalingType(ScalingType&& value) { SetScalingType(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_maxValue;
    bool m_maxValueHasBeenSet;

    double m_minValue;
    bool m_minValueHasBeenSet;

    ScalingType m_scalingType;
    bool m_scalingTypeHasBeenSet;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
