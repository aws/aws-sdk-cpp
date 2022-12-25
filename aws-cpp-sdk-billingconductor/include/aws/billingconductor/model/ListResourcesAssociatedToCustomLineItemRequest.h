/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListResourcesAssociatedToCustomLineItemFilter.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListResourcesAssociatedToCustomLineItemRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListResourcesAssociatedToCustomLineItemRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListResourcesAssociatedToCustomLineItem"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline const Aws::String& GetBillingPeriod() const{ return m_billingPeriod; }

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline bool BillingPeriodHasBeenSet() const { return m_billingPeriodHasBeenSet; }

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline void SetBillingPeriod(const Aws::String& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = value; }

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline void SetBillingPeriod(Aws::String&& value) { m_billingPeriodHasBeenSet = true; m_billingPeriod = std::move(value); }

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline void SetBillingPeriod(const char* value) { m_billingPeriodHasBeenSet = true; m_billingPeriod.assign(value); }

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithBillingPeriod(const Aws::String& value) { SetBillingPeriod(value); return *this;}

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithBillingPeriod(Aws::String&& value) { SetBillingPeriod(std::move(value)); return *this;}

    /**
     * <p> The billing period for which the resource associations will be listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithBillingPeriod(const char* value) { SetBillingPeriod(value); return *this;}


    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p> The ARN of the custom line item for which the resource associations will be
     * listed. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p> (Optional) The maximum number of resource associations to be retrieved. </p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p> (Optional) The maximum number of resource associations to be retrieved. </p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p> (Optional) The maximum number of resource associations to be retrieved. </p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p> (Optional) The maximum number of resource associations to be retrieved. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> (Optional) The pagination token that's returned by a previous request. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline const ListResourcesAssociatedToCustomLineItemFilter& GetFilters() const{ return m_filters; }

    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline void SetFilters(const ListResourcesAssociatedToCustomLineItemFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline void SetFilters(ListResourcesAssociatedToCustomLineItemFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithFilters(const ListResourcesAssociatedToCustomLineItemFilter& value) { SetFilters(value); return *this;}

    /**
     * <p> (Optional) A <code>ListResourcesAssociatedToCustomLineItemFilter</code> that
     * can specify the types of resources that should be retrieved. </p>
     */
    inline ListResourcesAssociatedToCustomLineItemRequest& WithFilters(ListResourcesAssociatedToCustomLineItemFilter&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Aws::String m_billingPeriod;
    bool m_billingPeriodHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListResourcesAssociatedToCustomLineItemFilter m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
