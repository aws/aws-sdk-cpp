/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/forecast/ForecastService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/forecast/model/FilterConditionString.h>
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
   * <p>Describes a filter for choosing a subset of objects. Each filter consists of
   * a condition and a match statement. The condition is either <code>IS</code> or
   * <code>IS_NOT</code>, which specifies whether to include or exclude the objects
   * that match the statement, respectively. The match statement consists of a key
   * and a value.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/forecast-2018-06-26/Filter">AWS API
   * Reference</a></p>
   */
  class Filter
  {
  public:
    AWS_FORECASTSERVICE_API Filter();
    AWS_FORECASTSERVICE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline Filter& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline Filter& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline Filter& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The value to match.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value to match.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value to match.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value to match.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value to match.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value to match.</p>
     */
    inline Filter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value to match.</p>
     */
    inline Filter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value to match.</p>
     */
    inline Filter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline const FilterConditionString& GetCondition() const{ return m_condition; }

    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }

    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline void SetCondition(const FilterConditionString& value) { m_conditionHasBeenSet = true; m_condition = value; }

    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline void SetCondition(FilterConditionString&& value) { m_conditionHasBeenSet = true; m_condition = std::move(value); }

    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline Filter& WithCondition(const FilterConditionString& value) { SetCondition(value); return *this;}

    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline Filter& WithCondition(FilterConditionString&& value) { SetCondition(std::move(value)); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FilterConditionString m_condition;
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
