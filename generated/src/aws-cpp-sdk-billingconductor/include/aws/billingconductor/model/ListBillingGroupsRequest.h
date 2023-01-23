/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListBillingGroupsFilter.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListBillingGroupsRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListBillingGroupsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListBillingGroups"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline ListBillingGroupsRequest& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline ListBillingGroupsRequest& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p>The preferred billing period to get billing groups. </p>
     */
    inline ListBillingGroupsRequest& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p>The maximum number of billing groups to retrieve. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of billing groups to retrieve. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of billing groups to retrieve. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of billing groups to retrieve. </p>
     */
    inline ListBillingGroupsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to get billing groups.
     * </p>
     */
    inline ListBillingGroupsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline const ListBillingGroupsFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline void SetFilters(const ListBillingGroupsFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline void SetFilters(ListBillingGroupsFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline ListBillingGroupsRequest& WithFilters(const ListBillingGroupsFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>ListBillingGroupsFilter</code> that specifies the billing group and
     * pricing plan to retrieve billing group information. </p>
     */
    inline ListBillingGroupsRequest& WithFilters(ListBillingGroupsFilter&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListBillingGroupsFilter m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
