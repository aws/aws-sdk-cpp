﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   * <p>Provides the name and default range of a continuous hyperparameter and
   * whether the hyperparameter is tunable. A tunable hyperparameter can have its
   * value determined during hyperparameter optimization (HPO).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/personalize-2018-05-22/DefaultContinuousHyperParameterRange">AWS
   * API Reference</a></p>
   */
  class AWS_PERSONALIZE_API DefaultContinuousHyperParameterRange
  {
  public:
    DefaultContinuousHyperParameterRange();
    DefaultContinuousHyperParameterRange(Aws::Utils::Json::JsonView jsonValue);
    DefaultContinuousHyperParameterRange& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline DefaultContinuousHyperParameterRange& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline DefaultContinuousHyperParameterRange& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the hyperparameter.</p>
     */
    inline DefaultContinuousHyperParameterRange& WithName(const char* value) { SetName(value); return *this;}


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
    inline DefaultContinuousHyperParameterRange& WithMinValue(double value) { SetMinValue(value); return *this;}


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
    inline DefaultContinuousHyperParameterRange& WithMaxValue(double value) { SetMaxValue(value); return *this;}


    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool GetIsTunable() const{ return m_isTunable; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline bool IsTunableHasBeenSet() const { return m_isTunableHasBeenSet; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline void SetIsTunable(bool value) { m_isTunableHasBeenSet = true; m_isTunable = value; }

    /**
     * <p>Whether the hyperparameter is tunable.</p>
     */
    inline DefaultContinuousHyperParameterRange& WithIsTunable(bool value) { SetIsTunable(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet;

    double m_minValue;
    bool m_minValueHasBeenSet;

    double m_maxValue;
    bool m_maxValueHasBeenSet;

    bool m_isTunable;
    bool m_isTunableHasBeenSet;
  };

} // namespace Model
} // namespace Personalize
} // namespace Aws
