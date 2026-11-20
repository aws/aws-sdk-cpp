/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apiportal/APIPortal_EXPORTS.h>
#include <aws/apiportal/model/RuleFilterKey.h>
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
namespace APIPortal {
namespace Model {

/**
 * <p>Values are compared to the attribute as literals: exact and case-sensitive,
 * no wildcards.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/apiportal-2026-04-30/RuleFilter">AWS
 * API Reference</a></p>
 */
class RuleFilter {
 public:
  AWS_APIPORTAL_API RuleFilter() = default;
  AWS_APIPORTAL_API RuleFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API RuleFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APIPORTAL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline RuleFilterKey GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  inline void SetKey(RuleFilterKey value) {
    m_keyHasBeenSet = true;
    m_key = value;
  }
  inline RuleFilter& WithKey(RuleFilterKey value) {
    SetKey(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The values to match. The filter matches when the attribute equals any of
   * them.</p>
   */
  inline const Aws::Vector<Aws::String>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<Aws::String>>
  RuleFilter& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = Aws::String>
  RuleFilter& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  RuleFilterKey m_key{RuleFilterKey::NOT_SET};

  Aws::Vector<Aws::String> m_values;
  bool m_keyHasBeenSet = false;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
