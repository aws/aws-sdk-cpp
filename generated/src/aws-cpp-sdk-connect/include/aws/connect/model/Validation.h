/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ValidationEnum.h>

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
 * <p>Defines validation rules for data table attribute values. Based on JSON
 * Schema Draft 2020-12 with additional Connect-specific validations. Validation
 * rules ensure data integrity and consistency across the data table.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/Validation">AWS
 * API Reference</a></p>
 */
class Validation {
 public:
  AWS_CONNECT_API Validation() = default;
  AWS_CONNECT_API Validation(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Validation& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The minimum number of characters a text value can contain. Applies to TEXT
   * value type and values within a TEXT_LIST. Must be less than or equal to
   * MaxLength.</p>
   */
  inline int GetMinLength() const { return m_minLength; }
  inline bool MinLengthHasBeenSet() const { return m_minLengthHasBeenSet; }
  inline void SetMinLength(int value) {
    m_minLengthHasBeenSet = true;
    m_minLength = value;
  }
  inline Validation& WithMinLength(int value) {
    SetMinLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of characters a text value can contain. Applies to TEXT
   * value type and values within a TEXT_LIST. Must be greater than or equal to
   * MinLength.</p>
   */
  inline int GetMaxLength() const { return m_maxLength; }
  inline bool MaxLengthHasBeenSet() const { return m_maxLengthHasBeenSet; }
  inline void SetMaxLength(int value) {
    m_maxLengthHasBeenSet = true;
    m_maxLength = value;
  }
  inline Validation& WithMaxLength(int value) {
    SetMaxLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The minimum number of values in a list. Must be an integer greater than or
   * equal to 0 and less than or equal to MaxValues. Applies to all list types.</p>
   */
  inline int GetMinValues() const { return m_minValues; }
  inline bool MinValuesHasBeenSet() const { return m_minValuesHasBeenSet; }
  inline void SetMinValues(int value) {
    m_minValuesHasBeenSet = true;
    m_minValues = value;
  }
  inline Validation& WithMinValues(int value) {
    SetMinValues(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of values in a list. Must be an integer greater than or
   * equal to 0 and greater than or equal to MinValues. Applies to all list
   * types.</p>
   */
  inline int GetMaxValues() const { return m_maxValues; }
  inline bool MaxValuesHasBeenSet() const { return m_maxValuesHasBeenSet; }
  inline void SetMaxValues(int value) {
    m_maxValuesHasBeenSet = true;
    m_maxValues = value;
  }
  inline Validation& WithMaxValues(int value) {
    SetMaxValues(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Boolean that defaults to false. Applies to text lists and text primary
   * attributes. When true, enforces case-insensitive uniqueness for primary
   * attributes and allows case-insensitive lookups.</p>
   */
  inline bool GetIgnoreCase() const { return m_ignoreCase; }
  inline bool IgnoreCaseHasBeenSet() const { return m_ignoreCaseHasBeenSet; }
  inline void SetIgnoreCase(bool value) {
    m_ignoreCaseHasBeenSet = true;
    m_ignoreCase = value;
  }
  inline Validation& WithIgnoreCase(bool value) {
    SetIgnoreCase(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The smallest inclusive numeric value for NUMBER value type. Cannot be
   * provided when ExclusiveMinimum is also provided. Must be less than or equal to
   * Maximum and less than ExclusiveMaximum. Applies to NUMBER and values within
   * NUMBER_LIST.</p>
   */
  inline double GetMinimum() const { return m_minimum; }
  inline bool MinimumHasBeenSet() const { return m_minimumHasBeenSet; }
  inline void SetMinimum(double value) {
    m_minimumHasBeenSet = true;
    m_minimum = value;
  }
  inline Validation& WithMinimum(double value) {
    SetMinimum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The largest inclusive numeric value for NUMBER value type. Can be provided
   * alongside ExclusiveMaximum where both operate independently. Must be greater
   * than or equal to Minimum and greater than ExclusiveMinimum. Applies to NUMBER
   * and values within NUMBER_LIST.</p>
   */
  inline double GetMaximum() const { return m_maximum; }
  inline bool MaximumHasBeenSet() const { return m_maximumHasBeenSet; }
  inline void SetMaximum(double value) {
    m_maximumHasBeenSet = true;
    m_maximum = value;
  }
  inline Validation& WithMaximum(double value) {
    SetMaximum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The smallest exclusive numeric value for NUMBER value type. Can be provided
   * alongside Minimum where both operate independently. Must be less than
   * ExclusiveMaximum and Maximum. Applies to NUMBER and values within
   * NUMBER_LIST.</p>
   */
  inline double GetExclusiveMinimum() const { return m_exclusiveMinimum; }
  inline bool ExclusiveMinimumHasBeenSet() const { return m_exclusiveMinimumHasBeenSet; }
  inline void SetExclusiveMinimum(double value) {
    m_exclusiveMinimumHasBeenSet = true;
    m_exclusiveMinimum = value;
  }
  inline Validation& WithExclusiveMinimum(double value) {
    SetExclusiveMinimum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The largest exclusive numeric value for NUMBER value type. Can be provided
   * alongside Maximum where both operate independently. Must be greater than
   * ExclusiveMinimum and Minimum. Applies to NUMBER and values within
   * NUMBER_LIST.</p>
   */
  inline double GetExclusiveMaximum() const { return m_exclusiveMaximum; }
  inline bool ExclusiveMaximumHasBeenSet() const { return m_exclusiveMaximumHasBeenSet; }
  inline void SetExclusiveMaximum(double value) {
    m_exclusiveMaximumHasBeenSet = true;
    m_exclusiveMaximum = value;
  }
  inline Validation& WithExclusiveMaximum(double value) {
    SetExclusiveMaximum(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies that numeric values must be multiples of this number. Must be
   * greater than 0. The result of dividing a value by this multiple must result in
   * an integer. Applies to NUMBER and values within NUMBER_LIST.</p>
   */
  inline double GetMultipleOf() const { return m_multipleOf; }
  inline bool MultipleOfHasBeenSet() const { return m_multipleOfHasBeenSet; }
  inline void SetMultipleOf(double value) {
    m_multipleOfHasBeenSet = true;
    m_multipleOf = value;
  }
  inline Validation& WithMultipleOf(double value) {
    SetMultipleOf(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Defines enumeration constraints for attribute values. Can specify a list of
   * allowed values and whether custom values are permitted beyond the enumerated
   * list.</p>
   */
  inline const ValidationEnum& GetEnum() const { return m_enum; }
  inline bool EnumHasBeenSet() const { return m_enumHasBeenSet; }
  template <typename EnumT = ValidationEnum>
  void SetEnum(EnumT&& value) {
    m_enumHasBeenSet = true;
    m_enum = std::forward<EnumT>(value);
  }
  template <typename EnumT = ValidationEnum>
  Validation& WithEnum(EnumT&& value) {
    SetEnum(std::forward<EnumT>(value));
    return *this;
  }
  ///@}
 private:
  int m_minLength{0};

  int m_maxLength{0};

  int m_minValues{0};

  int m_maxValues{0};

  bool m_ignoreCase{false};

  double m_minimum{0.0};

  double m_maximum{0.0};

  double m_exclusiveMinimum{0.0};

  double m_exclusiveMaximum{0.0};

  double m_multipleOf{0.0};

  ValidationEnum m_enum;
  bool m_minLengthHasBeenSet = false;
  bool m_maxLengthHasBeenSet = false;
  bool m_minValuesHasBeenSet = false;
  bool m_maxValuesHasBeenSet = false;
  bool m_ignoreCaseHasBeenSet = false;
  bool m_minimumHasBeenSet = false;
  bool m_maximumHasBeenSet = false;
  bool m_exclusiveMinimumHasBeenSet = false;
  bool m_exclusiveMaximumHasBeenSet = false;
  bool m_multipleOfHasBeenSet = false;
  bool m_enumHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
