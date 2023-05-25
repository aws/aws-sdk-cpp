/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListAccountAssociationsFilter.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListAccountAssociationsRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListAccountAssociationsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAccountAssociations"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline ListAccountAssociationsRequest& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline ListAccountAssociationsRequest& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The preferred billing period to get account associations. </p>
     */
    inline ListAccountAssociationsRequest& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline const ListAccountAssociationsFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline void SetFilters(const ListAccountAssociationsFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline void SetFilters(ListAccountAssociationsFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline ListAccountAssociationsRequest& WithFilters(const ListAccountAssociationsFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>The filter on the account ID of the linked account, or any of the
     * following:</p> <p> <code>MONITORED</code>: linked accounts that are associated
     * to billing groups.</p> <p> <code>UNMONITORED</code>: linked accounts that aren't
     * associated to billing groups.</p> <p> <code>Billing Group Arn</code>: linked
     * accounts that are associated to the provided billing group Arn. </p>
     */
    inline ListAccountAssociationsRequest& WithFilters(ListAccountAssociationsFilter&& value) { SetFilters(std::move(value)); return *this;}


    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline ListAccountAssociationsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline ListAccountAssociationsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> The pagination token that's used on subsequent calls to retrieve accounts.
     * </p>
     */
    inline ListAccountAssociationsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    ListAccountAssociationsFilter m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
