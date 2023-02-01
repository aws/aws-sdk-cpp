/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptions_EXPORTS.h>
#include <aws/license-manager-user-subscriptions/LicenseManagerUserSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/license-manager-user-subscriptions/model/IdentityProvider.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-user-subscriptions/model/Filter.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerUserSubscriptions
{
namespace Model
{

  /**
   */
  class ListProductSubscriptionsRequest : public LicenseManagerUserSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API ListProductSubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListProductSubscriptions"; }

    AWS_LICENSEMANAGERUSERSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline ListProductSubscriptionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline ListProductSubscriptionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline ListProductSubscriptionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify.</p>
     */
    inline ListProductSubscriptionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline const IdentityProvider& GetIdentityProvider() const{ return m_identityProvider; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline bool IdentityProviderHasBeenSet() const { return m_identityProviderHasBeenSet; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(const IdentityProvider& value) { m_identityProviderHasBeenSet = true; m_identityProvider = value; }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline void SetIdentityProvider(IdentityProvider&& value) { m_identityProviderHasBeenSet = true; m_identityProvider = std::move(value); }

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline ListProductSubscriptionsRequest& WithIdentityProvider(const IdentityProvider& value) { SetIdentityProvider(value); return *this;}

    /**
     * <p>An object that specifies details for the identity provider.</p>
     */
    inline ListProductSubscriptionsRequest& WithIdentityProvider(IdentityProvider&& value) { SetIdentityProvider(std::move(value)); return *this;}


    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>Maximum number of results to return in a single call.</p>
     */
    inline ListProductSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>Token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListProductSubscriptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListProductSubscriptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListProductSubscriptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline const Aws::String& GetProduct() const{ return m_product; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline bool ProductHasBeenSet() const { return m_productHasBeenSet; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const Aws::String& value) { m_productHasBeenSet = true; m_product = value; }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(Aws::String&& value) { m_productHasBeenSet = true; m_product = std::move(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline void SetProduct(const char* value) { m_productHasBeenSet = true; m_product.assign(value); }

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ListProductSubscriptionsRequest& WithProduct(const Aws::String& value) { SetProduct(value); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ListProductSubscriptionsRequest& WithProduct(Aws::String&& value) { SetProduct(std::move(value)); return *this;}

    /**
     * <p>The name of the user-based subscription product.</p>
     */
    inline ListProductSubscriptionsRequest& WithProduct(const char* value) { SetProduct(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    IdentityProvider m_identityProvider;
    bool m_identityProviderHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_product;
    bool m_productHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerUserSubscriptions
} // namespace Aws
