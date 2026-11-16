/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connectscheduling/ConnectScheduling_EXPORTS.h>
#include <aws/connectscheduling/model/DurationUnit.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ConnectScheduling {
namespace Model {

/**
 * <p>A length of time, expressed as a value and the unit it is counted
 * in.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connectscheduling-2026-07-16/Duration">AWS
 * API Reference</a></p>
 */
class Duration {
 public:
  AWS_CONNECTSCHEDULING_API Duration() = default;
  AWS_CONNECTSCHEDULING_API Duration(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API Duration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECTSCHEDULING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The number of units of time. You can use a negative value to report an
   * overdrawn balance. The value must be within 876,000 hours (100 years) of zero:
   * at most 52,560,000 <code>MINUTES</code>, 876,000 <code>HOURS</code>, or 36,500
   * <code>DAYS</code>.</p>
   */
  inline int GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(int value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline Duration& WithValue(int value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The unit the value is counted in.</p>
   */
  inline DurationUnit GetUnit() const { return m_unit; }
  inline bool UnitHasBeenSet() const { return m_unitHasBeenSet; }
  inline void SetUnit(DurationUnit value) {
    m_unitHasBeenSet = true;
    m_unit = value;
  }
  inline Duration& WithUnit(DurationUnit value) {
    SetUnit(value);
    return *this;
  }
  ///@}
 private:
  int m_value{0};

  DurationUnit m_unit{DurationUnit::NOT_SET};
  bool m_valueHasBeenSet = false;
  bool m_unitHasBeenSet = false;
};

}  // namespace Model
}  // namespace ConnectScheduling
}  // namespace Aws
