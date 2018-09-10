﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
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
namespace SageMaker
{
namespace Model
{

  /**
   * <p>A list of continuous hyperparameters to tune.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContinuousParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ContinuousParameterRange
  {
  public:
    ContinuousParameterRange();
    ContinuousParameterRange(Aws::Utils::Json::JsonView jsonValue);
    ContinuousParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the continuous hyperparameter to tune.</p>
     */
    inline ContinuousParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline ContinuousParameterRange& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline ContinuousParameterRange& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}

    /**
     * <p>The minimum value for the hyperparameter. The tuning job uses floating-point
     * values between this value and <code>MaxValue</code>for tuning.</p>
     */
    inline ContinuousParameterRange& WithMinValue(const char* value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline ContinuousParameterRange& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline ContinuousParameterRange& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}

    /**
     * <p>The maximum value for the hyperparameter. The tuning job uses floating-point
     * values between <code>MinValue</code> value and this value for tuning.</p>
     */
    inline ContinuousParameterRange& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    Aws::String m_minValue;
    bool m_minValueHasBeenSet;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
