/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class AssociateAccountsRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API AssociateAccountsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateAccounts"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline AssociateAccountsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline AssociateAccountsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the billing group that associates the
     * array of account IDs. </p>
     */
    inline AssociateAccountsRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> The associating array of account IDs. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AssociateAccountsRequest& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AssociateAccountsRequest& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AssociateAccountsRequest& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AssociateAccountsRequest& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The associating array of account IDs. </p>
     */
    inline AssociateAccountsRequest& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
