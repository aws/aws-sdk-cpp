/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/EvaluationFormItemEnablementSourceValueType.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
 * <p>An enablement expression source value. Provide only the value member that
 * matches the specified <code>Type</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/EvaluationFormItemEnablementSourceValue">AWS
 * API Reference</a></p>
 */
class EvaluationFormItemEnablementSourceValue {
 public:
  AWS_CONNECT_API EvaluationFormItemEnablementSourceValue() = default;
  AWS_CONNECT_API EvaluationFormItemEnablementSourceValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API EvaluationFormItemEnablementSourceValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A type of source item value. Valid values: <code>OPTION_REF_ID</code> |
   * <code>STRING_VALUE</code> | <code>NUMERIC_VALUE</code> |
   * <code>BOOLEAN_VALUE</code> | <code>DATETIME_VALUE</code>.</p>
   */
  inline EvaluationFormItemEnablementSourceValueType GetType() const { return m_type; }
  inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
  inline void SetType(EvaluationFormItemEnablementSourceValueType value) {
    m_typeHasBeenSet = true;
    m_type = value;
  }
  inline EvaluationFormItemEnablementSourceValue& WithType(EvaluationFormItemEnablementSourceValueType value) {
    SetType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A referenceId of the source value. Use when <code>Type</code> is
   * <code>OPTION_REF_ID</code>.</p>
   */
  inline const Aws::String& GetRefId() const { return m_refId; }
  inline bool RefIdHasBeenSet() const { return m_refIdHasBeenSet; }
  template <typename RefIdT = Aws::String>
  void SetRefId(RefIdT&& value) {
    m_refIdHasBeenSet = true;
    m_refId = std::forward<RefIdT>(value);
  }
  template <typename RefIdT = Aws::String>
  EvaluationFormItemEnablementSourceValue& WithRefId(RefIdT&& value) {
    SetRefId(std::forward<RefIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A string value to compare against the source. Use when <code>Type</code> is
   * <code>STRING_VALUE</code>.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  EvaluationFormItemEnablementSourceValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric value to compare against the source. Use when <code>Type</code> is
   * <code>NUMERIC_VALUE</code>.</p>
   */
  inline double GetNumericValue() const { return m_numericValue; }
  inline bool NumericValueHasBeenSet() const { return m_numericValueHasBeenSet; }
  inline void SetNumericValue(double value) {
    m_numericValueHasBeenSet = true;
    m_numericValue = value;
  }
  inline EvaluationFormItemEnablementSourceValue& WithNumericValue(double value) {
    SetNumericValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value to compare against the source. Use when <code>Type</code> is
   * <code>BOOLEAN_VALUE</code>.</p>
   */
  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline EvaluationFormItemEnablementSourceValue& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A date and time value to compare against the source. Use when
   * <code>Type</code> is <code>DATETIME_VALUE</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetDateTimeValue() const { return m_dateTimeValue; }
  inline bool DateTimeValueHasBeenSet() const { return m_dateTimeValueHasBeenSet; }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  void SetDateTimeValue(DateTimeValueT&& value) {
    m_dateTimeValueHasBeenSet = true;
    m_dateTimeValue = std::forward<DateTimeValueT>(value);
  }
  template <typename DateTimeValueT = Aws::Utils::DateTime>
  EvaluationFormItemEnablementSourceValue& WithDateTimeValue(DateTimeValueT&& value) {
    SetDateTimeValue(std::forward<DateTimeValueT>(value));
    return *this;
  }
  ///@}
 private:
  EvaluationFormItemEnablementSourceValueType m_type{EvaluationFormItemEnablementSourceValueType::NOT_SET};

  Aws::String m_refId;

  Aws::String m_stringValue;

  double m_numericValue{0.0};

  bool m_booleanValue{false};

  Aws::Utils::DateTime m_dateTimeValue{};
  bool m_typeHasBeenSet = false;
  bool m_refIdHasBeenSet = false;
  bool m_stringValueHasBeenSet = false;
  bool m_numericValueHasBeenSet = false;
  bool m_booleanValueHasBeenSet = false;
  bool m_dateTimeValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
