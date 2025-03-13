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
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> <code>MONITORED</code>: linked accounts that are associated to billing
     * groups.</p> <p> <code>UNMONITORED</code>: linked accounts that are not
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided Billing Group Arn.</p>
     */
    inline const Aws::String& GetAssociation() const { return m_association; }
    inline bool AssociationHasBeenSet() const { return m_associationHasBeenSet; }
    template<typename AssociationT = Aws::String>
    void SetAssociation(AssociationT&& value) { m_associationHasBeenSet = true; m_association = std::forward<AssociationT>(value); }
    template<typename AssociationT = Aws::String>
    ListAccountAssociationsFilter& WithAssociation(AssociationT&& value) { SetAssociation(std::forward<AssociationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID to filter on.</p>
     */
    inline const Aws::String& GetAccountId() const { return m_accountId; }
    inline bool AccountIdHasBeenSet() const { return m_accountIdHasBeenSet; }
    template<typename AccountIdT = Aws::String>
    void SetAccountId(AccountIdT&& value) { m_accountIdHasBeenSet = true; m_accountId = std::forward<AccountIdT>(value); }
    template<typename AccountIdT = Aws::String>
    ListAccountAssociationsFilter& WithAccountId(AccountIdT&& value) { SetAccountId(std::forward<AccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The list of Amazon Web Services IDs to retrieve their associated billing
     * group for a given time range. </p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    ListAccountAssociationsFilter& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    ListAccountAssociationsFilter& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}
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
