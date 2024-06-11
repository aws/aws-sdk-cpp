﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListPricingRulesFilter.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListPricingRulesRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListPricingRulesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListPricingRules"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p> The preferred billing period to get the pricing plan. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }
    inline ListPricingRulesRequest& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}
    inline ListPricingRulesRequest& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}
    inline ListPricingRulesRequest& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> A <code>DescribePricingRuleFilter</code> that specifies the Amazon Resource
     * Name (ARNs) of pricing rules to retrieve pricing rules information. </p>
     */
    inline const ListPricingRulesFilter& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const ListPricingRulesFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(ListPricingRulesFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline ListPricingRulesRequest& WithFilters(const ListPricingRulesFilter& value) { SetFilters(value); return *this;}
    inline ListPricingRulesRequest& WithFilters(ListPricingRulesFilter&& value) { SetFilters(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The maximum number of pricing rules to retrieve. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListPricingRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The pagination token that's used on subsequent call to get pricing rules.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline ListPricingRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListPricingRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListPricingRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    ListPricingRulesFilter m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
