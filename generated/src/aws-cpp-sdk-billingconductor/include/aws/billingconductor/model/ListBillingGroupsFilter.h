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
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter();
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_BILLINGCONDUCTOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline const Aws::Vector<Aws::String>& GetArns() const{ return m_arns; }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline bool ArnsHasBeenSet() const { return m_arnsHasBeenSet; }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline void SetArns(const Aws::Vector<Aws::String>& value) { m_arnsHasBeenSet = true; m_arns = value; }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline void SetArns(Aws::Vector<Aws::String>&& value) { m_arnsHasBeenSet = true; m_arns = std::move(value); }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline ListBillingGroupsFilter& WithArns(const Aws::Vector<Aws::String>& value) { SetArns(value); return *this;}

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline ListBillingGroupsFilter& WithArns(Aws::Vector<Aws::String>&& value) { SetArns(std::move(value)); return *this;}

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline ListBillingGroupsFilter& AddArns(const Aws::String& value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline ListBillingGroupsFilter& AddArns(Aws::String&& value) { m_arnsHasBeenSet = true; m_arns.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of billing group Amazon Resource Names (ARNs) to retrieve
     * information.</p>
     */
    inline ListBillingGroupsFilter& AddArns(const char* value) { m_arnsHasBeenSet = true; m_arns.push_back(value); return *this; }


    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline const Aws::String& GetPricingPlan() const{ return m_pricingPlan; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline bool PricingPlanHasBeenSet() const { return m_pricingPlanHasBeenSet; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline void SetPricingPlan(const Aws::String& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = value; }

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline void SetPricingPlan(Aws::String&& value) { m_pricingPlanHasBeenSet = true; m_pricingPlan = std::move(value); }

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline void SetPricingPlan(const char* value) { m_pricingPlanHasBeenSet = true; m_pricingPlan.assign(value); }

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline ListBillingGroupsFilter& WithPricingPlan(const Aws::String& value) { SetPricingPlan(value); return *this;}

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline ListBillingGroupsFilter& WithPricingPlan(Aws::String&& value) { SetPricingPlan(std::move(value)); return *this;}

    /**
     * <p>The pricing plan Amazon Resource Names (ARNs) to retrieve information.</p>
     */
    inline ListBillingGroupsFilter& WithPricingPlan(const char* value) { SetPricingPlan(value); return *this;}


    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline const Aws::Vector<BillingGroupStatus>& GetStatuses() const{ return m_statuses; }

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline bool StatusesHasBeenSet() const { return m_statusesHasBeenSet; }

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline void SetStatuses(const Aws::Vector<BillingGroupStatus>& value) { m_statusesHasBeenSet = true; m_statuses = value; }

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline void SetStatuses(Aws::Vector<BillingGroupStatus>&& value) { m_statusesHasBeenSet = true; m_statuses = std::move(value); }

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline ListBillingGroupsFilter& WithStatuses(const Aws::Vector<BillingGroupStatus>& value) { SetStatuses(value); return *this;}

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline ListBillingGroupsFilter& WithStatuses(Aws::Vector<BillingGroupStatus>&& value) { SetStatuses(std::move(value)); return *this;}

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline ListBillingGroupsFilter& AddStatuses(const BillingGroupStatus& value) { m_statusesHasBeenSet = true; m_statuses.push_back(value); return *this; }

    /**
     * <p> A list of billing groups to retrieve their current status for a specific
     * time range </p>
     */
    inline ListBillingGroupsFilter& AddStatuses(BillingGroupStatus&& value) { m_statusesHasBeenSet = true; m_statuses.push_back(std::move(value)); return *this; }


    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline bool GetAutoAssociate() const{ return m_autoAssociate; }

    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline bool AutoAssociateHasBeenSet() const { return m_autoAssociateHasBeenSet; }

    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline void SetAutoAssociate(bool value) { m_autoAssociateHasBeenSet = true; m_autoAssociate = value; }

    /**
     * <p>Specifies if this billing group will automatically associate newly added
     * Amazon Web Services accounts that join your consolidated billing family.</p>
     */
    inline ListBillingGroupsFilter& WithAutoAssociate(bool value) { SetAutoAssociate(value); return *this;}

  private:

    Aws::Vector<Aws::String> m_arns;
    bool m_arnsHasBeenSet = false;

    Aws::String m_pricingPlan;
    bool m_pricingPlanHasBeenSet = false;

    Aws::Vector<BillingGroupStatus> m_statuses;
    bool m_statusesHasBeenSet = false;

    bool m_autoAssociate;
    bool m_autoAssociateHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
