/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/iot/IoT_EXPORTS.h>
#include <aws/iot/model/CommandParameterValueNumberRange.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace IoT {
namespace Model {

/**
 * <p>The comparison operand used to compare the defined value against the value
 * supplied in request.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/iot-2015-05-28/CommandParameterValueComparisonOperand">AWS
 * API Reference</a></p>
 */
class CommandParameterValueComparisonOperand {
 public:
  AWS_IOT_API CommandParameterValueComparisonOperand() = default;
  AWS_IOT_API CommandParameterValueComparisonOperand(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API CommandParameterValueComparisonOperand& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_IOT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>An operand of number value type, defined as a string.</p>
   */
  inline const Aws::String& GetNumber() const { return m_number; }
  inline bool NumberHasBeenSet() const { return m_numberHasBeenSet; }
  template <typename NumberT = Aws::String>
  void SetNumber(NumberT&& value) {
    m_numberHasBeenSet = true;
    m_number = std::forward<NumberT>(value);
  }
  template <typename NumberT = Aws::String>
  CommandParameterValueComparisonOperand& WithNumber(NumberT&& value) {
    SetNumber(std::forward<NumberT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A List of operands of numerical value type, defined as strings.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNumbers() const { return m_numbers; }
  inline bool NumbersHasBeenSet() const { return m_numbersHasBeenSet; }
  template <typename NumbersT = Aws::Vector<Aws::String>>
  void SetNumbers(NumbersT&& value) {
    m_numbersHasBeenSet = true;
    m_numbers = std::forward<NumbersT>(value);
  }
  template <typename NumbersT = Aws::Vector<Aws::String>>
  CommandParameterValueComparisonOperand& WithNumbers(NumbersT&& value) {
    SetNumbers(std::forward<NumbersT>(value));
    return *this;
  }
  template <typename NumbersT = Aws::String>
  CommandParameterValueComparisonOperand& AddNumbers(NumbersT&& value) {
    m_numbersHasBeenSet = true;
    m_numbers.emplace_back(std::forward<NumbersT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An operand of string value type.</p>
   */
  inline const Aws::String& GetString() const { return m_string; }
  inline bool StringHasBeenSet() const { return m_stringHasBeenSet; }
  template <typename StringT = Aws::String>
  void SetString(StringT&& value) {
    m_stringHasBeenSet = true;
    m_string = std::forward<StringT>(value);
  }
  template <typename StringT = Aws::String>
  CommandParameterValueComparisonOperand& WithString(StringT&& value) {
    SetString(std::forward<StringT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A List of operands of string value type.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStrings() const { return m_strings; }
  inline bool StringsHasBeenSet() const { return m_stringsHasBeenSet; }
  template <typename StringsT = Aws::Vector<Aws::String>>
  void SetStrings(StringsT&& value) {
    m_stringsHasBeenSet = true;
    m_strings = std::forward<StringsT>(value);
  }
  template <typename StringsT = Aws::Vector<Aws::String>>
  CommandParameterValueComparisonOperand& WithStrings(StringsT&& value) {
    SetStrings(std::forward<StringsT>(value));
    return *this;
  }
  template <typename StringsT = Aws::String>
  CommandParameterValueComparisonOperand& AddStrings(StringsT&& value) {
    m_stringsHasBeenSet = true;
    m_strings.emplace_back(std::forward<StringsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An operand of numerical range value type.</p>
   */
  inline const CommandParameterValueNumberRange& GetNumberRange() const { return m_numberRange; }
  inline bool NumberRangeHasBeenSet() const { return m_numberRangeHasBeenSet; }
  template <typename NumberRangeT = CommandParameterValueNumberRange>
  void SetNumberRange(NumberRangeT&& value) {
    m_numberRangeHasBeenSet = true;
    m_numberRange = std::forward<NumberRangeT>(value);
  }
  template <typename NumberRangeT = CommandParameterValueNumberRange>
  CommandParameterValueComparisonOperand& WithNumberRange(NumberRangeT&& value) {
    SetNumberRange(std::forward<NumberRangeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_number;

  Aws::Vector<Aws::String> m_numbers;

  Aws::String m_string;

  Aws::Vector<Aws::String> m_strings;

  CommandParameterValueNumberRange m_numberRange;
  bool m_numberHasBeenSet = false;
  bool m_numbersHasBeenSet = false;
  bool m_stringHasBeenSet = false;
  bool m_stringsHasBeenSet = false;
  bool m_numberRangeHasBeenSet = false;
};

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
