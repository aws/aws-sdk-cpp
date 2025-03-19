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
    AWS_FORECASTSERVICE_API Filter() = default;
    AWS_FORECASTSERVICE_API Filter(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Filter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_FORECASTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the parameter to filter on.</p>
     */
    inline const Aws::String& GetKey() const { return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    template<typename KeyT = Aws::String>
    void SetKey(KeyT&& value) { m_keyHasBeenSet = true; m_key = std::forward<KeyT>(value); }
    template<typename KeyT = Aws::String>
    Filter& WithKey(KeyT&& value) { SetKey(std::forward<KeyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value to match.</p>
     */
    inline const Aws::String& GetValue() const { return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    template<typename ValueT = Aws::String>
    void SetValue(ValueT&& value) { m_valueHasBeenSet = true; m_value = std::forward<ValueT>(value); }
    template<typename ValueT = Aws::String>
    Filter& WithValue(ValueT&& value) { SetValue(std::forward<ValueT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The condition to apply. To include the objects that match the statement,
     * specify <code>IS</code>. To exclude matching objects, specify
     * <code>IS_NOT</code>.</p>
     */
    inline FilterConditionString GetCondition() const { return m_condition; }
    inline bool ConditionHasBeenSet() const { return m_conditionHasBeenSet; }
    inline void SetCondition(FilterConditionString value) { m_conditionHasBeenSet = true; m_condition = value; }
    inline Filter& WithCondition(FilterConditionString value) { SetCondition(value); return *this;}
    ///@}
  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    FilterConditionString m_condition{FilterConditionString::NOT_SET};
    bool m_conditionHasBeenSet = false;
  };

} // namespace Model
} // namespace ForecastService
} // namespace Aws
