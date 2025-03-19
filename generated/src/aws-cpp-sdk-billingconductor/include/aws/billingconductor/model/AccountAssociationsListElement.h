/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace BillingConductor
{
namespace Model
{

  /**
   * <p>A representation of a linked account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AccountAssociationsListElement">AWS
   * API Reference</a></p>
   */
  class AccountAssociationsListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement() = default;
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The associating array of account IDs.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    AccountAssociationsListElement& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Billing Group Arn that the linked account is associated to.</p>
     */
    inline const Aws::String& GetBillingGroupArn() const { return m_billingGroupArn; }
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }
    template<typename BillingGroupArnT = Aws::String>
    void SetBillingGroupArn(BillingGroupArnT&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::forward<BillingGroupArnT>(value); }
    template<typename BillingGroupArnT = Aws::String>
    AccountAssociationsListElement& WithBillingGroupArn(BillingGroupArnT&& value) { SetBillingGroupArn(std::forward<BillingGroupArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account name.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    AccountAssociationsListElement& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account email.</p>
     */
    inline const Aws::String& GetAccountEmail() const { return m_accountEmail; }
    inline bool AccountEmailHasBeenSet() const { return m_accountEmailHasBeenSet; }
    template<typename AccountEmailT = Aws::String>
    void SetAccountEmail(AccountEmailT&& value) { m_accountEmailHasBeenSet = true; m_accountEmail = std::forward<AccountEmailT>(value); }
    template<typename AccountEmailT = Aws::String>
    AccountAssociationsListElement& WithAccountEmail(AccountEmailT&& value) { SetAccountEmail(std::forward<AccountEmailT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::String m_billingGroupArn;
    bool m_billingGroupArnHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_accountEmail;
    bool m_accountEmailHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
