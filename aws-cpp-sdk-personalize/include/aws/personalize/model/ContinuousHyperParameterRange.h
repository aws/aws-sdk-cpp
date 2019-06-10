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
#include <aws/personalize/Personalize_EXPORTS.h>
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
namespace Personalize
{
namespace Model
{

  /**
   * <p>Provides the name and range of a continuous hyperparameter.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/ContinuousHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API ContinuousHyperParameterRange
  {
  public:
    ContinuousHyperParameterRange();
    ContinuousHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    ContinuousHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline double GetMinValue() const{ return m_minValue; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline bool MinValueHasBeenSet() const { return m_minValueHasBeenSet; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline void SetMinValue(double value) { m_minValueHasBeenSet = true; m_minValue = value; }

    /**
     * <p>The minimum allowable value for the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithMinValue(double value) { SetMinValue(value); return *this;}


    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline double GetMaxValue() const{ return m_maxValue; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline bool MaxValueHasBeenSet() const { return m_maxValueHasBeenSet; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline void SetMaxValue(double value) { m_maxValueHasBeenSet = true; m_maxValue = value; }

    /**
     * <p>The maximum allowable value for the hyperparameter.</p>
     */
    inline ContinuousHyperParameterRange& WithMaxValue(double value) { SetMaxValue(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_minValue;
    bool m_minValueHasBeenSet;

    double m_maxValue;
    bool m_maxValueHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
