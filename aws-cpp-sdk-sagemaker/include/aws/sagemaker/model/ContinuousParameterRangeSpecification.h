/*
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
   * <p>Defines the possible values for a continuous hyperparameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ContinuousParameterRangeSpecification">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API ContinuousParameterRangeSpecification
  {
  public:
    ContinuousParameterRangeSpecification();
    ContinuousParameterRangeSpecification(Aws::Utils::Json::JsonView jsonValue);
    ContinuousParameterRangeSpecification& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}

    /**
     * <p>The minimum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMinValue(const char* value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}

    /**
     * <p>The maximum floating-point value allowed.</p>
     */
    inline ContinuousParameterRangeSpecification& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}

  private:

    Aws::String m_minValue;
    bool m_minValueHasBeenSet;

    Aws::String m_maxValue;
    bool m_maxValueHasBeenSet;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
