/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/billingconductor/BillingConductor_EXPORTS.h>
#include <aws/billingconductor/BillingConductorRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/billingconductor/model/ListCustomLineItemVersionsFilter.h>
#include <utility>

namespace Aws
{
namespace BillingConductor
{
namespace Model
{

  /**
   */
  class ListCustomLineItemVersionsRequest : public BillingConductorRequest
  {
  public:
    AWS_BILLINGCONDUCTOR_API ListCustomLineItemVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListCustomLineItemVersions"; }

    AWS_BILLINGCONDUCTOR_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the custom line item.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The maximum number of custom line item versions to retrieve.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of custom line item versions to retrieve.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of custom line item versions to retrieve.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of custom line item versions to retrieve.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token that's used on subsequent calls to retrieve custom line
     * item versions.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline const ListCustomLineItemVersionsFilter& GetFilters() const{ return m_filters; }

    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline void SetFilters(const ListCustomLineItemVersionsFilter& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline void SetFilters(ListCustomLineItemVersionsFilter&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithFilters(const ListCustomLineItemVersionsFilter& value) { SetFilters(value); return *this;}

    /**
     * <p>A <code>ListCustomLineItemVersionsFilter</code> that specifies the billing
     * period range in which the custom line item versions are applied.</p>
     */
    inline ListCustomLineItemVersionsRequest& WithFilters(ListCustomLineItemVersionsFilter&& value) { SetFilters(std::move(value)); return *this;}

  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ListCustomLineItemVersionsFilter m_filters;
    bool m_filtersHasBeenSet = false;
  };

} // namespace Model
} // namespace BillingConductor
} // namespace Aws
