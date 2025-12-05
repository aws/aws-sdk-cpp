/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
#include <aws/billingconductor/model/BillingGroupType.h>
#include <aws/billingconductor/model/StringSearch.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace BillingConductor {
namespace Model {

/**
 * <p>The filter that specifies the billing groups and pricing plans to retrieve
 * billing group information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupsFilter">AWS
 * API Reference</a></p>
 */
class ListBillingGroupsFilter {
 public:
  AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter() = default;
  AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
   * information.</p>
   */
  inline const Aws::Vector<Aws::String>& GetArns() const { return m_arns; }
  inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }
  template <typename ArnsT = Aws::Vector<Aws::String>>
  void SetArns(ArnsT&& value) {
    m_arnsHasBeenSet = true;
    m_arns = std::forward<ArnsT>(value);
  }
  template <typename ArnsT = Aws::Vector<Aws::String>>
  ListBillingGroupsFilter& WithArns(ArnsT&& value) {
    SetArns(std::forward<ArnsT>(value));
    return *this;
  }
  template <typename ArnsT = Aws::String>
  ListBillingGroupsFilter& AddArns(ArnsT&& value) {
    m_arnsHasBeenSet = true;
    m_arns.emplace_back(std::forward<ArnsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
   */
  inline const Aws::String& GetPricingPlan() const { return m_pricingPlan; }
  inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }
  template <typename PricingPlanT = Aws::String>
  void SetPricingPlan(PricingPlanT&& value) {
    m_pricingPlanHasBeenSet = true;
    m_pricingPlan = std::forward<PricingPlanT>(value);
  }
  template <typename PricingPlanT = Aws::String>
  ListBillingGroupsFilter& WithPricingPlan(PricingPlanT&& value) {
    SetPricingPlan(std::forward<PricingPlanT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of billing groups to retrieve their current status for a specific
   * time range </p>
   */
  inline const Aws::Vector<BillingGroupStatus>& GetStatuses() const { return m_statuses; }
  inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
  template <typename StatusesT = Aws::Vector<BillingGroupStatus>>
  void SetStatuses(StatusesT&& value) {
    m_statusesHasBeenSet = true;
    m_statuses = std::forward<StatusesT>(value);
  }
  template <typename StatusesT = Aws::Vector<BillingGroupStatus>>
  ListBillingGroupsFilter& WithStatuses(StatusesT&& value) {
    SetStatuses(std::forward<StatusesT>(value));
    return *this;
  }
  inline ListBillingGroupsFilter& AddStatuses(BillingGroupStatus value) {
    m_statusesHasBeenSet = true;
    m_statuses.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Specifies if this billing group will automatically associate newly added
   * Amazon Web Services accounts that join your consolidated billing family.</p>
   */
  inline bool GetAutoAssociate() const { return m_autoAssociate; }
  inline bool AutoAssociateHasBeenSet() const { return m_autoAssociateHasBeenSet; }
  inline void SetAutoAssociate(bool value) {
    m_autoAssociateHasBeenSet = true;
    m_autoAssociate = value;
  }
  inline ListBillingGroupsFilter& WithAutoAssociate(bool value) {
    SetAutoAssociate(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of primary account IDs to filter the billing groups. </p>
   */
  inline const Aws::Vector<Aws::String>& GetPrimaryAccountIds() const { return m_primaryAccountIds; }
  inline bool PrimaryAccountIdsHasBeenSet() const { return m_primaryAccountIdsHasBeenSet; }
  template <typename PrimaryAccountIdsT = Aws::Vector<Aws::String>>
  void SetPrimaryAccountIds(PrimaryAccountIdsT&& value) {
    m_primaryAccountIdsHasBeenSet = true;
    m_primaryAccountIds = std::forward<PrimaryAccountIdsT>(value);
  }
  template <typename PrimaryAccountIdsT = Aws::Vector<Aws::String>>
  ListBillingGroupsFilter& WithPrimaryAccountIds(PrimaryAccountIdsT&& value) {
    SetPrimaryAccountIds(std::forward<PrimaryAccountIdsT>(value));
    return *this;
  }
  template <typename PrimaryAccountIdsT = Aws::String>
  ListBillingGroupsFilter& AddPrimaryAccountIds(PrimaryAccountIdsT&& value) {
    m_primaryAccountIdsHasBeenSet = true;
    m_primaryAccountIds.emplace_back(std::forward<PrimaryAccountIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Filter billing groups by their type. </p>
   */
  inline const Aws::Vector<BillingGroupType>& GetBillingGroupTypes() const { return m_billingGroupTypes; }
  inline bool BillingGroupTypesHasBeenSet() const { return m_billingGroupTypesHasBeenSet; }
  template <typename BillingGroupTypesT = Aws::Vector<BillingGroupType>>
  void SetBillingGroupTypes(BillingGroupTypesT&& value) {
    m_billingGroupTypesHasBeenSet = true;
    m_billingGroupTypes = std::forward<BillingGroupTypesT>(value);
  }
  template <typename BillingGroupTypesT = Aws::Vector<BillingGroupType>>
  ListBillingGroupsFilter& WithBillingGroupTypes(BillingGroupTypesT&& value) {
    SetBillingGroupTypes(std::forward<BillingGroupTypesT>(value));
    return *this;
  }
  inline ListBillingGroupsFilter& AddBillingGroupTypes(BillingGroupType value) {
    m_billingGroupTypesHasBeenSet = true;
    m_billingGroupTypes.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Filter billing groups by their names. </p>
   */
  inline const Aws::Vector<StringSearch>& GetNames() const { return m_names; }
  inline bool NamesHasBeenSet() const { return m_namesHasBeenSet; }
  template <typename NamesT = Aws::Vector<StringSearch>>
  void SetNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names = std::forward<NamesT>(value);
  }
  template <typename NamesT = Aws::Vector<StringSearch>>
  ListBillingGroupsFilter& WithNames(NamesT&& value) {
    SetNames(std::forward<NamesT>(value));
    return *this;
  }
  template <typename NamesT = StringSearch>
  ListBillingGroupsFilter& AddNames(NamesT&& value) {
    m_namesHasBeenSet = true;
    m_names.emplace_back(std::forward<NamesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> Filter billing groups by their responsibility transfer ARNs. </p>
   */
  inline const Aws::Vector<Aws::String>& GetResponsibilityTransferArns() const { return m_responsibilityTransferArns; }
  inline bool ResponsibilityTransferArnsHasBeenSet() const { return m_responsibilityTransferArnsHasBeenSet; }
  template <typename ResponsibilityTransferArnsT = Aws::Vector<Aws::String>>
  void SetResponsibilityTransferArns(ResponsibilityTransferArnsT&& value) {
    m_responsibilityTransferArnsHasBeenSet = true;
    m_responsibilityTransferArns = std::forward<ResponsibilityTransferArnsT>(value);
  }
  template <typename ResponsibilityTransferArnsT = Aws::Vector<Aws::String>>
  ListBillingGroupsFilter& WithResponsibilityTransferArns(ResponsibilityTransferArnsT&& value) {
    SetResponsibilityTransferArns(std::forward<ResponsibilityTransferArnsT>(value));
    return *this;
  }
  template <typename ResponsibilityTransferArnsT = Aws::String>
  ListBillingGroupsFilter& AddResponsibilityTransferArns(ResponsibilityTransferArnsT&& value) {
    m_responsibilityTransferArnsHasBeenSet = true;
    m_responsibilityTransferArns.emplace_back(std::forward<ResponsibilityTransferArnsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_arns;

  Aws::String m_pricingPlan;

  Aws::Vector<BillingGroupStatus> m_statuses;

  bool m_autoAssociate{false};

  Aws::Vector<Aws::String> m_primaryAccountIds;

  Aws::Vector<BillingGroupType> m_billingGroupTypes;

  Aws::Vector<StringSearch> m_names;

  Aws::Vector<Aws::String> m_responsibilityTransferArns;
  bool m_arnsHasBeenSet = false;
  bool m_pricingPlanHasBeenSet = false;
  bool m_statusesHasBeenSet = false;
  bool m_autoAssociateHasBeenSet = false;
  bool m_primaryAccountIdsHasBeenSet = false;
  bool m_billingGroupTypesHasBeenSet = false;
  bool m_namesHasBeenSet = false;
  bool m_responsibilityTransferArnsHasBeenSet = false;
};

}  // namespace Model
}  // namespace BillingConductor
}  // namespace Aws
