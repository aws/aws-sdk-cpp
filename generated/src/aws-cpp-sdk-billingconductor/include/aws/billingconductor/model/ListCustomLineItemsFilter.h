/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
   * <p>A filter that specifies the custom line items and billing groups to retrieve
   * FFLI information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListCustomLineItemsFilter">AWS
   * API Reference</a></p>
   */
  class ListCustomLineItemsFilter
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter() = default;
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>A list of custom line items to retrieve information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNames() const { return m_names; }
    inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
    template<typename NamesT = Aws::Vector<Aws::String>>
    void SetNames(NamesT&& value) { m_namesHasBeenSet = true; m_names = std::forward<NamesT>(value); }
    template<typename NamesT = Aws::Vector<Aws::String>>
    ListCustomLineItemsFilter& WithNames(NamesT&& value) { SetNames(std::forward<NamesT>(value)); return *this;}
    template<typename NamesT = Aws::String>
    ListCustomLineItemsFilter& AddNames(NamesT&& value) { m_namesHasBeenSet = true; m_names.emplace_back(std::forward<NamesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The billing group Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetBillingGroups() const { return m_billingGroups; }
    inline bool BillingGroupsHasBeenSet() const { return m_billingGroupsHasBeenSet; }
    template<typename BillingGroupsT = Aws::Vector<Aws::String>>
    void SetBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups = std::forward<BillingGroupsT>(value); }
    template<typename BillingGroupsT = Aws::Vector<Aws::String>>
    ListCustomLineItemsFilter& WithBillingGroups(BillingGroupsT&& value) { SetBillingGroups(std::forward<BillingGroupsT>(value)); return *this;}
    template<typename BillingGroupsT = Aws::String>
    ListCustomLineItemsFilter& AddBillingGroups(BillingGroupsT&& value) { m_billingGroupsHasBeenSet = true; m_billingGroups.emplace_back(std::forward<BillingGroupsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of custom line item ARNs to retrieve information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    ListCustomLineItemsFilter& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    ListCustomLineItemsFilter& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services accounts in which this custom line item will be
     * applied to.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    ListCustomLineItemsFilter& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    ListCustomLineItemsFilter& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_names;
    bool m_namesHasBeenSet = false;

    Aws::Vector<Aws::String> m_billingGroups;
    bool m_billingGroupsHasBeenSet = false;

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
