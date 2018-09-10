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
   * <p>For a hyperparameter of the integer type, specifies the range that a
   * hyperparameter tuning job searches.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/IntegerParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_SAGEMAKER_API IntegerParameterRange
  {
  public:
    IntegerParameterRange();
    IntegerParameterRange(Aws::Utils::Json::JsonView jsonValue);
    IntegerParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline void SetMinValue(const Aws::String& value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline void SetMinValue(Aws::String&& value) { m_minValueHasBeenSet = true; m_minValue = std::move(value); }

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline void SetMinValue(const char* value) { m_minValueHasBeenSet = true; m_minValue.assign(value); }

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMinValue(const Aws::String& value) { SetMinValue(value); return *this;}

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMinValue(Aws::String&& value) { SetMinValue(std::move(value)); return *this;}

    /**
     * <p>The minimum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMinValue(const char* value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline const Aws::String& GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline void SetMaxValue(const Aws::String& value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline void SetMaxValue(Aws::String&& value) { m_maxValueHasBeenSet = true; m_maxValue = std::move(value); }

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline void SetMaxValue(const char* value) { m_maxValueHasBeenSet = true; m_maxValue.assign(value); }

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMaxValue(const Aws::String& value) { SetMaxValue(value); return *this;}

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMaxValue(Aws::String&& value) { SetMaxValue(std::move(value)); return *this;}

    /**
     * <p>The maximum value of the hyperparameter to search.</p>
     */
    inline IntegerParameterRange& WithMaxValue(const char* value) { SetMaxValue(value); return *this;}

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
