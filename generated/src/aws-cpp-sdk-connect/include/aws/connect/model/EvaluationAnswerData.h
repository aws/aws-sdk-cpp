/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {

/**
 * <p>Information about answer data for a contact evaluation. Answer data must be
 * either string, numeric, or not applicable.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationAnswerData">AWS
 * API Reference</a></p>
 */
class EvaluationAnswerData {
 public:
  AWS_CONNECT_API EvaluationAnswerData() = default;
  AWS_CONNECT_API EvaluationAnswerData(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationAnswerData& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The string value for an answer in a contact evaluation.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  EvaluationAnswerData& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The numeric value for an answer in a contact evaluation.</p>
   */
  inline double GetNumericValue() const { return m_numericValue; }
  inline bool NumericValueHasBeenSet() const { return m_numericValueHasBeenSet; }
  inline void SetNumericValue(double value) {
    m_numericValueHasBeenSet = true;
    m_numericValue = value;
  }
  inline EvaluationAnswerData& WithNumericValue(double value) {
    SetNumericValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>String values provided as answers to evaluation questions.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringValues() const { return m_stringValues; }
  inline bool StringValuesHasBeenSet() const { return m_stringValuesHasBeenSet; }
  template <typename StringValuesT = Aws::Vector<Aws::String>>
  void SetStringValues(StringValuesT&& value) {
    m_stringValuesHasBeenSet = true;
    m_stringValues = std::forward<StringValuesT>(value);
  }
  template <typename StringValuesT = Aws::Vector<Aws::String>>
  EvaluationAnswerData& WithStringValues(StringValuesT&& value) {
    SetStringValues(std::forward<StringValuesT>(value));
    return *this;
  }
  template <typename StringValuesT = Aws::String>
  EvaluationAnswerData& AddStringValues(StringValuesT&& value) {
    m_stringValuesHasBeenSet = true;
    m_stringValues.emplace_back(std::forward<StringValuesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Date and time value provided as an answer to an evaluation question.</p>
   */
  inline const Aws::String& GetDateTimeValue() const { return m_dateTimeValue; }
  inline bool DateTimeValueHasBeenSet() const { return m_dateTimeValueHasBeenSet; }
  template <typename DateTimeValueT = Aws::String>
  void SetDateTimeValue(DateTimeValueT&& value) {
    m_dateTimeValueHasBeenSet = true;
    m_dateTimeValue = std::forward<DateTimeValueT>(value);
  }
  template <typename DateTimeValueT = Aws::String>
  EvaluationAnswerData& WithDateTimeValue(DateTimeValueT&& value) {
    SetDateTimeValue(std::forward<DateTimeValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The flag to mark the question as not applicable.</p>
   */
  inline bool GetNotApplicable() const { return m_notApplicable; }
  inline bool NotApplicableHasBeenSet() const { return m_notApplicableHasBeenSet; }
  inline void SetNotApplicable(bool value) {
    m_notApplicableHasBeenSet = true;
    m_notApplicable = value;
  }
  inline EvaluationAnswerData& WithNotApplicable(bool value) {
    SetNotApplicable(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  double m_numericValue{0.0};

  Aws::Vector<Aws::String> m_stringValues;

  Aws::String m_dateTimeValue;

  bool m_notApplicable{false};
  bool m_stringValueHasBeenSet = false;
  bool m_numericValueHasBeenSet = false;
  bool m_stringValuesHasBeenSet = false;
  bool m_dateTimeValueHasBeenSet = false;
  bool m_notApplicableHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
