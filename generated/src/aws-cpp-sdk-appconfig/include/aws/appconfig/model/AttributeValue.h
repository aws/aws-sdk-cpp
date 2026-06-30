/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appconfig/AppConfig_EXPORTS.h>
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
namespace AppConfig {
namespace Model {

/**
 * <p>A value for a feature flag attribute. Only one of the members can be
 * set.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appconfig-2019-10-09/AttributeValue">AWS
 * API Reference</a></p>
 */
class AttributeValue {
 public:
  AWS_APPCONFIG_API AttributeValue() = default;
  AWS_APPCONFIG_API AttributeValue(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API AttributeValue& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>A string value for the attribute.</p>
   */
  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  AttributeValue& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A numeric value for the attribute.</p>
   */
  inline double GetNumberValue() const { return m_numberValue; }
  inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
  inline void SetNumberValue(double value) {
    m_numberValueHasBeenSet = true;
    m_numberValue = value;
  }
  inline AttributeValue& WithNumberValue(double value) {
    SetNumberValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A Boolean value for the attribute.</p>
   */
  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline AttributeValue& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of string values for the attribute.</p>
   */
  inline const Aws::Vector<Aws::String>& GetStringArray() const { return m_stringArray; }
  inline bool StringArrayHasBeenSet() const { return m_stringArrayHasBeenSet; }
  template <typename StringArrayT = Aws::Vector<Aws::String>>
  void SetStringArray(StringArrayT&& value) {
    m_stringArrayHasBeenSet = true;
    m_stringArray = std::forward<StringArrayT>(value);
  }
  template <typename StringArrayT = Aws::Vector<Aws::String>>
  AttributeValue& WithStringArray(StringArrayT&& value) {
    SetStringArray(std::forward<StringArrayT>(value));
    return *this;
  }
  template <typename StringArrayT = Aws::String>
  AttributeValue& AddStringArray(StringArrayT&& value) {
    m_stringArrayHasBeenSet = true;
    m_stringArray.emplace_back(std::forward<StringArrayT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of numeric values for the attribute.</p>
   */
  inline const Aws::Vector<double>& GetNumberArray() const { return m_numberArray; }
  inline bool NumberArrayHasBeenSet() const { return m_numberArrayHasBeenSet; }
  template <typename NumberArrayT = Aws::Vector<double>>
  void SetNumberArray(NumberArrayT&& value) {
    m_numberArrayHasBeenSet = true;
    m_numberArray = std::forward<NumberArrayT>(value);
  }
  template <typename NumberArrayT = Aws::Vector<double>>
  AttributeValue& WithNumberArray(NumberArrayT&& value) {
    SetNumberArray(std::forward<NumberArrayT>(value));
    return *this;
  }
  inline AttributeValue& AddNumberArray(double value) {
    m_numberArrayHasBeenSet = true;
    m_numberArray.push_back(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  double m_numberValue{0.0};

  bool m_booleanValue{false};

  Aws::Vector<Aws::String> m_stringArray;

  Aws::Vector<double> m_numberArray;
  bool m_stringValueHasBeenSet = false;
  bool m_numberValueHasBeenSet = false;
  bool m_booleanValueHasBeenSet = false;
  bool m_stringArrayHasBeenSet = false;
  bool m_numberArrayHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
