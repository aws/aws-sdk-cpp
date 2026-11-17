/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billing/BillingRequest.h>
#include <aws/billing/Billing_EXPORTS.h>
#include <aws/billing/model/BillingFeature.h>
#include <aws/billing/model/BillingPreferenceForKey.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Billing {
namespace Model {

/**
 */
class UpdateBillingPreferencesRequest : public BillingRequest {
 public:
  AWS_BILLING_API UpdateBillingPreferencesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateBillingPreferences"; }

  AWS_BILLING_API Aws::String SerializePayload() const override;

  AWS_BILLING_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The feature to update. Valid values: <code>BILLING_ALERTS</code>,
   * <code>RI_SHARING</code>, <code>CREDIT_SHARING</code>,
   * <code>CREDIT_LEVEL_SHARING</code>, <code>CREDIT_PREFERENCE_OPTIONS</code>,
   * <code>BENEFIT_LEVEL_SHARING</code>. The history features
   * (<code>RI_SHARING_HISTORY</code> and <code>CREDIT_SHARING_HISTORY</code>) are
   * read-only and cannot be updated.</p>
   */
  inline BillingFeature GetFeature() const { return m_feature; }
  inline bool FeatureHasBeenSet() const { return m_featureHasBeenSet; }
  inline void SetFeature(BillingFeature value) {
    m_featureHasBeenSet = true;
    m_feature = value;
  }
  inline UpdateBillingPreferencesRequest& WithFeature(BillingFeature value) {
    SetFeature(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Key/value pairs to apply. All keys in a single request must be valid for the
   * specified <code>feature</code> and must not be duplicated. For
   * <code>CREDIT_PREFERENCE_OPTIONS</code>, all keys must reference the same
   * <code>creditId</code>.</p> <p>For <code>BENEFIT_LEVEL_SHARING</code>, all keys
   * must reference the same Reserved Instance or Savings Plan. To share it with the
   * accounts in one Cost Category rule, send these three keys with the value
   * <code>ENABLED</code>:</p> <ul> <li> <p>
   * <code>benefit/{ri|sp}/{benefitId}/sharing/costCategoryArn/{costCategoryArn}</code>
   * </p> </li> <li> <p>
   * <code>benefit/{ri|sp}/{benefitId}/sharing/ruleName/{ruleName}</code> </p> </li>
   * <li> <p>
   * <code>benefit/{ri|sp}/{benefitId}/sharing/mode/{prioritized|restricted}</code>
   * </p> </li> </ul> <p>With <code>prioritized</code>, any benefit that the rule's
   * accounts don't use goes to the rest of your consolidated billing family,
   * following your family sharing settings. With <code>restricted</code>, only the
   * owner and the rule's accounts receive it. The Cost Category must belong to your
   * account. To stop sharing, send the same three keys with the value
   * <code>DISABLED</code>.</p> <p>For <code>RI_SHARING</code> and
   * <code>CREDIT_SHARING</code>, you can share benefits by account group. Each rule
   * in a Cost Category is one group. Send exactly one of these group keys with the
   * value <code>ENABLED</code>:</p> <ul> <li> <p> <code>open-sharing</code> - Share
   * across the whole consolidated billing family, with no groups.</p> </li> <li> <p>
   * <code>costcategory-prioritized/{costCategoryArn}</code> - Share within each
   * group first, then with the rest of the family.</p> </li> <li> <p>
   * <code>costcategory-restricted/{costCategoryArn}</code> - An account in a group
   * shares only with accounts in the same group.</p> </li> </ul> <p>For
   * <code>RI_SHARING</code>, the <code>costcategory-</code> keys use a Cost Category
   * that supports the <code>billing:rispgroupsharing</code> resource type. To use a
   * Cost Category that supports the <code>billing:benefitgroupsharing</code>
   * resource type, use the <code>benefitgroup-prioritized/</code> or
   * <code>benefitgroup-restricted/</code> prefix instead. For
   * <code>CREDIT_SHARING</code>, the Cost Category must support the
   * <code>billing:benefitgroupsharing</code> resource type. The Cost Category must
   * belong to your account. <code>GetBillingPreferences</code> returns the group key
   * that is in effect.</p>
   */
  inline const Aws::Vector<BillingPreferenceForKey>& GetBillingPreferencesPerKey() const { return m_billingPreferencesPerKey; }
  inline bool BillingPreferencesPerKeyHasBeenSet() const { return m_billingPreferencesPerKeyHasBeenSet; }
  template <typename BillingPreferencesPerKeyT = Aws::Vector<BillingPreferenceForKey>>
  void SetBillingPreferencesPerKey(BillingPreferencesPerKeyT&& value) {
    m_billingPreferencesPerKeyHasBeenSet = true;
    m_billingPreferencesPerKey = std::forward<BillingPreferencesPerKeyT>(value);
  }
  template <typename BillingPreferencesPerKeyT = Aws::Vector<BillingPreferenceForKey>>
  UpdateBillingPreferencesRequest& WithBillingPreferencesPerKey(BillingPreferencesPerKeyT&& value) {
    SetBillingPreferencesPerKey(std::forward<BillingPreferencesPerKeyT>(value));
    return *this;
  }
  template <typename BillingPreferencesPerKeyT = BillingPreferenceForKey>
  UpdateBillingPreferencesRequest& AddBillingPreferencesPerKey(BillingPreferencesPerKeyT&& value) {
    m_billingPreferencesPerKeyHasBeenSet = true;
    m_billingPreferencesPerKey.emplace_back(std::forward<BillingPreferencesPerKeyT>(value));
    return *this;
  }
  ///@}
 private:
  BillingFeature m_feature{BillingFeature::NOT_SET};

  Aws::Vector<BillingPreferenceForKey> m_billingPreferencesPerKey;
  bool m_featureHasBeenSet = false;
  bool m_billingPreferencesPerKeyHasBeenSet = false;
};

}  // namespace Model
}  // namespace Billing
}  // namespace Aws
