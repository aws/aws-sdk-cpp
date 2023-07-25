/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>The filter on the account ID of the linked account, or any of the
   * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
   * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are
   * not associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
   * accounts that are associated to the provided Billing Group Arn.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListAccountAssociationsFilter">AWS
   * API Reference</a></p>
   */
  class ListAccountAssociationsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter();
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline const Aws::String& GetAssociation() const{ return m_association; }

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline void SetAssociation(const Aws::String& value) { m_associationHasBeenSet = true; m_association = value; }

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline void SetAssociation(Aws::String&& value) { m_associationHasBeenSet = true; m_association = std::move(value); }

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline void SetAssociation(const char* value) { m_associationHasBeenSet = true; m_association.assign(value); }

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline ListAccountAssociationsFilter& WithAssociation(const Aws::String& value) { SetAssociation(value); return *this;}

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline ListAccountAssociationsFilter& WithAssociation(Aws::String&& value) { SetAssociation(std::move(value)); return *this;}

    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline ListAccountAssociationsFilter& WithAssociation(const char* value) { SetAssociation(value); return *this;}


    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline const Aws::String& GetAccountId() const{ return m_accountId; }

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline void SetAccountId(const Aws::String& value) { m_accountIdHasBeenSet = true; m_accountId = value; }

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline void SetAccountId(Aws::String&& value) { m_accountIdHasBeenSet = true; m_accountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline void SetAccountId(const char* value) { m_accountIdHasBeenSet = true; m_accountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline ListAccountAssociationsFilter& WithAccountId(const Aws::String& value) { SetAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline ListAccountAssociationsFilter& WithAccountId(Aws::String&& value) { SetAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline ListAccountAssociationsFilter& WithAccountId(const char* value) { SetAccountId(value); return *this;}


    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const{ return m_accountIds; }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline void SetAccountIds(const Aws::Vector<Aws::String>& value) { m_accountIdsHasBeenSet = true; m_accountIds = value; }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline void SetAccountIds(Aws::Vector<Aws::String>&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::move(value); }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline ListAccountAssociationsFilter& WithAccountIds(const Aws::Vector<Aws::String>& value) { SetAccountIds(value); return *this;}

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline ListAccountAssociationsFilter& WithAccountIds(Aws::Vector<Aws::String>&& value) { SetAccountIds(std::move(value)); return *this;}

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline ListAccountAssociationsFilter& AddAccountIds(const Aws::String& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline ListAccountAssociationsFilter& AddAccountIds(Aws::String&& value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(std::move(value)); return *this; }

    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline ListAccountAssociationsFilter& AddAccountIds(const char* value) { m_accountIdsHasBeenSet = true; m_accountIds.push_back(value); return *this; }

  private:

    Aws::String m_association;
    bool m_associationHasBeenSet = false;

    Aws::String m_accountId;
    bool m_accountIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
