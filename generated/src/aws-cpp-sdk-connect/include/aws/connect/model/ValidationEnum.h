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
 * <p>Defines enumeration validation for attribute values. Allows specifying a list
 * of permitted values and whether custom values beyond the enumerated list are
 * allowed.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/connect-2017-08-08/ValidationEnum">AWS
 * API Reference</a></p>
 */
class ValidationEnum {
 public:
  AWS_CONNECT_API ValidationEnum() = default;
  AWS_CONNECT_API ValidationEnum(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API ValidationEnum& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_CONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Boolean that defaults to false. When true, only values specified in the enum
   * list are allowed. When false, custom values beyond the enumerated list are
   * permitted.</p>
   */
  inline bool GetStrict() const { return m_strict; }
  inline bool StrictHasBeenSet() const { return m_strictHasBeenSet; }
  inline void SetStrict(bool value) {
    m_strictHasBeenSet = true;
    m_strict = value;
  }
  inline ValidationEnum& WithStrict(bool value) {
    SetStrict(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of predefined values that are allowed for this attribute. These values
   * are always permitted regardless of the Strict setting.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  ValidationEnum& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  ValidationEnum& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_strict{false};

  Aws::Vector<Aws::String> m_values;
  bool m_strictHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
