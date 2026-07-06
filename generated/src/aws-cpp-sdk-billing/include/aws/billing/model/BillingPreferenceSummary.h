/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingFeature.h>
#include <aws/billing/model/BillingPeriod.h>
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
 * <p>A single billing preference entry returned by
 * <code>GetBillingPreferences</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billing-2023-09-07/BillingPreferenceSummary">AWS
 * API Reference</a></p>
 */
class BillingPreferenceSummary {
 public:
  AWS_BILLING_API BillingPreferenceSummary() = default;
  AWS_BILLING_API BillingPreferenceSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API BillingPreferenceSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLING_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The feature this preference belongs to.</p>
   */
  inline BillingFeature GetFeature() const { return m_feature; }
  inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
  inline void SetFeature(BillingFeature value) {
    m_featureHasBeenSet = true;
    m_feature = value;
  }
  inline BillingPreferenceSummary& WithFeature(BillingFeature value) {
    SetFeature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The preference key. Format depends on the feature.</p>
   */
  inline const Aws::String& GetKey() const { return m_key; }
  inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
  template <typename KeyT = Aws::String>
  void SetKey(KeyT&& value) {
    m_keyHasBeenSet = true;
    m_key = std::forward<KeyT>(value);
  }
  template <typename KeyT = Aws::String>
  BillingPreferenceSummary& WithKey(KeyT&& value) {
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
  inline BillingPreferenceSummary& WithValue(PreferenceValue value) {
    SetValue(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The display name of the account. Populated together with
   * <code>accountId</code>; <code>null</code> otherwise.</p>
   */
  inline const Aws::String& GetAccountName() const { return m_accountName; }
  inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
  template <typename AccountNameT = Aws::String>
  void SetAccountName(AccountNameT&& value) {
    m_accountNameHasBeenSet = true;
    m_accountName = std::forward<AccountNameT>(value);
  }
  template <typename AccountNameT = Aws::String>
  BillingPreferenceSummary& WithAccountName(AccountNameT&& value) {
    SetAccountName(std::forward<AccountNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The associated Amazon Web Services account ID. Populated for account-list
   * keys; <code>null</code> otherwise.</p>
   */
  inline const Aws::String& GetAccountId() const { return m_accountId; }
  inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
  template <typename AccountIdT = Aws::String>
  void SetAccountId(AccountIdT&& value) {
    m_accountIdHasBeenSet = true;
    m_accountId = std::forward<AccountIdT>(value);
  }
  template <typename AccountIdT = Aws::String>
  BillingPreferenceSummary& WithAccountId(AccountIdT&& value) {
    SetAccountId(std::forward<AccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period associated with the preference change. Populated only for
   * the history features <code>RI_SHARING_HISTORY</code> and
   * <code>CREDIT_SHARING_HISTORY</code>.</p>
   */
  inline const BillingPeriod& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = BillingPeriod>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = BillingPeriod>
  BillingPreferenceSummary& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}
 private:
  BillingFeature m_feature{BillingFeature::NOT_SET};

  Aws::String m_key;

  PreferenceValue m_value{PreferenceValue::NOT_SET};

  Aws::String m_accountName;

  Aws::String m_accountId;

  BillingPeriod m_billingPeriod;
  bool m_featureHasBeenSet = false;
  bool m_keyHasBeenSet = false;
  bool m_valueHasBeenSet = false;
  bool m_accountNameHasBeenSet = false;
  bool m_accountIdHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
