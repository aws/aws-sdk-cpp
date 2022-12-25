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
   * <p> A representation of a linked account. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/AccountAssociationsListElement">AWS
   * API Reference</a></p>
   */
  class AccountAssociationsListElement
  {
  public:
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement();
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API AccountAssociationsListElement& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The associating array of account IDs. </p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AccountAssociationsListElement& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AccountAssociationsListElement& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AccountAssociationsListElement& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline const Aws::String& GetBillingGroupArn() const{ return m_billingGroupArn; }

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline bool BillingGroupArnHasBeenSet() const { return m_billingGroupArnHasBeenSet; }

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline void SetBillingGroupArn(const Aws::String& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = value; }

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline void SetBillingGroupArn(Aws::String&& value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn = std::move(value); }

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline void SetBillingGroupArn(const char* value) { m_billingGroupArnHasBeenSet = true; m_billingGroupArn.assign(value); }

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline AccountAssociationsListElement& WithBillingGroupArn(const Aws::String& value) { SetBillingGroupArn(value); return *this;}

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline AccountAssociationsListElement& WithBillingGroupArn(Aws::String&& value) { SetBillingGroupArn(std::move(value)); return *this;}

    /**
     * <p> The Billing Group Arn that the linked account is associated to. </p>
     */
    inline AccountAssociationsListElement& WithBillingGroupArn(const char* value) { SetBillingGroupArn(value); return *this;}


    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline AccountAssociationsListElement& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline AccountAssociationsListElement& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account name. </p>
     */
    inline AccountAssociationsListElement& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline const Aws::String& GetAccountEmail() const{ return m_accountEmail; }

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline bool AccountEmailHasBeenSet() const { return m_accountEmailHasBeenSet; }

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline void SetAccountEmail(const Aws::String& value) { m_accountEmailHasBeenSet = true; m_accountEmail = value; }

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline void SetAccountEmail(Aws::String&& value) { m_accountEmailHasBeenSet = true; m_accountEmail = std::move(value); }

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline void SetAccountEmail(const char* value) { m_accountEmailHasBeenSet = true; m_accountEmail.assign(value); }

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline AccountAssociationsListElement& WithAccountEmail(const Aws::String& value) { SetAccountEmail(value); return *this;}

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline AccountAssociationsListElement& WithAccountEmail(Aws::String&& value) { SetAccountEmail(std::move(value)); return *this;}

    /**
     * <p> The Amazon Web Services account email. </p>
     */
    inline AccountAssociationsListElement& WithAccountEmail(const char* value) { SetAccountEmail(value); return *this;}

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
