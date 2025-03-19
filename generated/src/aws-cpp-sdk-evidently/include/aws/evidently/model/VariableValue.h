/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/evidently/CloudWatchEvidently_EXPORTS.h>
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
namespace CloudWatchEvidently
{
namespace Model
{

  /**
   * <p>The value assigned to a feature variation. This structure must contain
   * exactly one field. It can be <code>boolValue</code>, <code>doubleValue</code>,
   * <code>longValue</code>, or <code>stringValue</code>.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/evidently-2021-02-01/VariableValue">AWS
   * API Reference</a></p>
   */
  class VariableValue
  {
  public:
    AWS_CLOUDWATCHEVIDENTLY_API VariableValue() = default;
    AWS_CLOUDWATCHEVIDENTLY_API VariableValue(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API VariableValue& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_CLOUDWATCHEVIDENTLY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>If this feature uses the Boolean variation type, this field contains the
     * Boolean value of this variation.</p>
     */
    inline bool GetBoolValue() const { return m_boolValue; }
    inline bool BoolValueHasBeenSet() const { return m_boolValueHasBeenSet; }
    inline void SetBoolValue(bool value) { m_boolValueHasBeenSet = true; m_boolValue = value; }
    inline VariableValue& WithBoolValue(bool value) { SetBoolValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this feature uses the double integer variation type, this field contains
     * the double integer value of this variation.</p>
     */
    inline double GetDoubleValue() const { return m_doubleValue; }
    inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
    inline void SetDoubleValue(double value) { m_doubleValueHasBeenSet = true; m_doubleValue = value; }
    inline VariableValue& WithDoubleValue(double value) { SetDoubleValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this feature uses the long variation type, this field contains the long
     * value of this variation.</p>
     */
    inline long long GetLongValue() const { return m_longValue; }
    inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
    inline void SetLongValue(long long value) { m_longValueHasBeenSet = true; m_longValue = value; }
    inline VariableValue& WithLongValue(long long value) { SetLongValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If this feature uses the string variation type, this field contains the
     * string value of this variation.</p>
     */
    inline const Aws::String& GetStringValue() const { return m_stringValue; }
    inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
    template<typename StringValueT = Aws::String>
    void SetStringValue(StringValueT&& value) { m_stringValueHasBeenSet = true; m_stringValue = std::forward<StringValueT>(value); }
    template<typename StringValueT = Aws::String>
    VariableValue& WithStringValue(StringValueT&& value) { SetStringValue(std::forward<StringValueT>(value)); return *this;}
    ///@}
  private:

    bool m_boolValue{false};
    bool m_boolValueHasBeenSet = false;

    double m_doubleValue{0.0};
    bool m_doubleValueHasBeenSet = false;

    long long m_longValue{0};
    bool m_longValueHasBeenSet = false;

    Aws::String m_stringValue;
    bool m_stringValueHasBeenSet = false;
  };

} // namespace Model
} // namespace CloudWatchEvidently
} // namespace Aws
