/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/appstream/AppStream_EXPORTS.h>
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
namespace AppStream {
namespace Model {

/**
 * <p>The collection of license usage records.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/appstream-2016-12-01/AdminAppLicenseUsageRecord">AWS
 * API Reference</a></p>
 */
class AdminAppLicenseUsageRecord {
 public:
  AWS_APPSTREAM_API AdminAppLicenseUsageRecord() = default;
  AWS_APPSTREAM_API AdminAppLicenseUsageRecord(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API AdminAppLicenseUsageRecord& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_APPSTREAM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The ARN of the user who used the license-included application.</p>
   */
  inline const Aws::String& GetUserArn() const { return m_userArn; }
  inline bool UserArnHasBeenSet() const { return m_userArnHasBeenSet; }
  template <typename UserArnT = Aws::String>
  void SetUserArn(UserArnT&& value) {
    m_userArnHasBeenSet = true;
    m_userArn = std::forward<UserArnT>(value);
  }
  template <typename UserArnT = Aws::String>
  AdminAppLicenseUsageRecord& WithUserArn(UserArnT&& value) {
    SetUserArn(std::forward<UserArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The billing period for the license usage record.</p>
   */
  inline const Aws::String& GetBillingPeriod() const { return m_billingPeriod; }
  inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
  template <typename BillingPeriodT = Aws::String>
  void SetBillingPeriod(BillingPeriodT&& value) {
    m_billingPeriodHasBeenSet = true;
    m_billingPeriod = std::forward<BillingPeriodT>(value);
  }
  template <typename BillingPeriodT = Aws::String>
  AdminAppLicenseUsageRecord& WithBillingPeriod(BillingPeriodT&& value) {
    SetBillingPeriod(std::forward<BillingPeriodT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The account ID of the owner of the license.</p>
   */
  inline const Aws::String& GetOwnerAWSAccountId() const { return m_ownerAWSAccountId; }
  inline bool OwnerAWSAccountIdHasBeenSet() const { return m_ownerAWSAccountIdHasBeenSet; }
  template <typename OwnerAWSAccountIdT = Aws::String>
  void SetOwnerAWSAccountId(OwnerAWSAccountIdT&& value) {
    m_ownerAWSAccountIdHasBeenSet = true;
    m_ownerAWSAccountId = std::forward<OwnerAWSAccountIdT>(value);
  }
  template <typename OwnerAWSAccountIdT = Aws::String>
  AdminAppLicenseUsageRecord& WithOwnerAWSAccountId(OwnerAWSAccountIdT&& value) {
    SetOwnerAWSAccountId(std::forward<OwnerAWSAccountIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the license was first used.</p>
   */
  inline const Aws::Utils::DateTime& GetSubscriptionFirstUsedDate() const { return m_subscriptionFirstUsedDate; }
  inline bool SubscriptionFirstUsedDateHasBeenSet() const { return m_subscriptionFirstUsedDateHasBeenSet; }
  template <typename SubscriptionFirstUsedDateT = Aws::Utils::DateTime>
  void SetSubscriptionFirstUsedDate(SubscriptionFirstUsedDateT&& value) {
    m_subscriptionFirstUsedDateHasBeenSet = true;
    m_subscriptionFirstUsedDate = std::forward<SubscriptionFirstUsedDateT>(value);
  }
  template <typename SubscriptionFirstUsedDateT = Aws::Utils::DateTime>
  AdminAppLicenseUsageRecord& WithSubscriptionFirstUsedDate(SubscriptionFirstUsedDateT&& value) {
    SetSubscriptionFirstUsedDate(std::forward<SubscriptionFirstUsedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the license was last used.</p>
   */
  inline const Aws::Utils::DateTime& GetSubscriptionLastUsedDate() const { return m_subscriptionLastUsedDate; }
  inline bool SubscriptionLastUsedDateHasBeenSet() const { return m_subscriptionLastUsedDateHasBeenSet; }
  template <typename SubscriptionLastUsedDateT = Aws::Utils::DateTime>
  void SetSubscriptionLastUsedDate(SubscriptionLastUsedDateT&& value) {
    m_subscriptionLastUsedDateHasBeenSet = true;
    m_subscriptionLastUsedDate = std::forward<SubscriptionLastUsedDateT>(value);
  }
  template <typename SubscriptionLastUsedDateT = Aws::Utils::DateTime>
  AdminAppLicenseUsageRecord& WithSubscriptionLastUsedDate(SubscriptionLastUsedDateT&& value) {
    SetSubscriptionLastUsedDate(std::forward<SubscriptionLastUsedDateT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of license (for example, Microsoft Office).</p>
   */
  inline const Aws::String& GetLicenseType() const { return m_licenseType; }
  inline bool LicenseTypeHasBeenSet() const { return m_licenseTypeHasBeenSet; }
  template <typename LicenseTypeT = Aws::String>
  void SetLicenseType(LicenseTypeT&& value) {
    m_licenseTypeHasBeenSet = true;
    m_licenseType = std::forward<LicenseTypeT>(value);
  }
  template <typename LicenseTypeT = Aws::String>
  AdminAppLicenseUsageRecord& WithLicenseType(LicenseTypeT&& value) {
    SetLicenseType(std::forward<LicenseTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the user who used the license-included application.</p>
   */
  inline const Aws::String& GetUserId() const { return m_userId; }
  inline bool UserIdHasBeenSet() const { return m_userIdHasBeenSet; }
  template <typename UserIdT = Aws::String>
  void SetUserId(UserIdT&& value) {
    m_userIdHasBeenSet = true;
    m_userId = std::forward<UserIdT>(value);
  }
  template <typename UserIdT = Aws::String>
  AdminAppLicenseUsageRecord& WithUserId(UserIdT&& value) {
    SetUserId(std::forward<UserIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_userArn;

  Aws::String m_billingPeriod;

  Aws::String m_ownerAWSAccountId;

  Aws::Utils::DateTime m_subscriptionFirstUsedDate{};

  Aws::Utils::DateTime m_subscriptionLastUsedDate{};

  Aws::String m_licenseType;

  Aws::String m_userId;
  bool m_userArnHasBeenSet = false;
  bool m_billingPeriodHasBeenSet = false;
  bool m_ownerAWSAccountIdHasBeenSet = false;
  bool m_subscriptionFirstUsedDateHasBeenSet = false;
  bool m_subscriptionLastUsedDateHasBeenSet = false;
  bool m_licenseTypeHasBeenSet = false;
  bool m_userIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace AppStream
}  // namespace Aws
