/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/BillingGroupStatus.h>
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
   * <p>The filter that specifies the billing groups and pricing plans to retrieve
   * billing group information.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/billingconductor-2021-07-30/ListBillingGroupsFilter">AWS
   * API Reference</a></p>
   */
  class ListBillingGroupsFilter
  {
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
    template<typename ArnsT = Aws::Vector<Aws::String>>
    void SetArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns = std::forward<ArnsT>(value); }
    template<typename ArnsT = Aws::Vector<Aws::String>>
    ListBillingGroupsFilter& WithArns(ArnsT&& value) { SetArns(std::forward<ArnsT>(value)); return *this;}
    template<typename ArnsT = Aws::String>
    ListBillingGroupsFilter& AddArns(ArnsT&& value) { m_arnsHasBeenSet = true; m_arns.emplace_back(std::forward<ArnsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline const Aws::String& GetPricingPlan() const { return m_pricingPlan; }
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }
    template<typename PricingPlanT = Aws::String>
    void SetPricingPlan(PricingPlanT&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::forward<PricingPlanT>(value); }
    template<typename PricingPlanT = Aws::String>
    ListBillingGroupsFilter& WithPricingPlan(PricingPlanT&& value) { SetPricingPlan(std::forward<PricingPlanT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline const Aws::Vector<BillingGroupStatus>& GetStatuses() const { return m_statuses; }
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }
    template<typename StatusesT = Aws::Vector<BillingGroupStatus>>
    void SetStatuses(StatusesT&& value) { m_statusesHasBeenSet = true; m_statuses = std::forward<StatusesT>(value); }
    template<typename StatusesT = Aws::Vector<BillingGroupStatus>>
    ListBillingGroupsFilter& WithStatuses(StatusesT&& value) { SetStatuses(std::forward<StatusesT>(value)); return *this;}
    inline ListBillingGroupsFilter& AddStatuses(BillingGroupStatus value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline bool GetAutoAssociate() const { return m_autoAssociate; }
    inline bool AutoAssociateHasBeenSet() const { return m_autoAssociateHasBeenSet; }
    inline void SetAutoAssociate(bool value) { m_autoAssociateHasBeenSet = true; m_autoAssociate = value; }
    inline ListBillingGroupsFilter& WithAutoAssociate(bool value) { SetAutoAssociate(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    Aws::String m_pricingPlan;
    bool m_pricingPlanHasBeenSet = false;

    Aws::Vector<BillingGroupStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    bool m_autoAssociate{false};
    bool m_autoAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
