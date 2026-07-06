/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/PreferenceValue.h>
#include <aws/core/utils/memory/stl/AWSString.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace Billing {
namespace Model {

/**
 * <p>A single key/value entry used to update a billing preference.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingPreferenceForKey">AWS
 * API Reference</a></p>
 */
class BillingPreferenceForKey {
 public:
  AWS_BILLING_API BillingPreferenceForKey() = default;
  AWS_BILLING_API BillingPreferenceForKey(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingPreferenceForKey& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The preference key. Format depends on the feature being updated.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  BillingPreferenceForKey& WithKey(KeyT&& value) {
    SetKey(std::forward<KeyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preference value. Valid values: <code>ENABLED</code> or
   * <code>DISABLED</code>.</p>
   */
  inline PreferenceValue GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  inline void SetValue(PreferenceValue value) {
    m_valueHasBeenSet = true;
    m_value = value;
  }
  inline BillingPreferenceForKey& WithValue(PreferenceValue value) {
    SetValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_key;

  PreferenceValue m_value{PreferenceValue::NOT_SET};
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
