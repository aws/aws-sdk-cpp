/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptions_EXPORTS.h>
#include <aws/license-manager-linux-subscriptions/LicenseManagerLinuxSubscriptionsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/license-manager-linux-subscriptions/model/Filter.h>
#include <utility>

namespace Aws
{
namespace LicenseManagerLinuxSubscriptions
{
namespace Model
{

  /**
   * <p>NextToken length limit is half of ddb accepted limit. Increase this limit if
   * parameters in request increases.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/license-manager-linux-subscriptions-2018-05-10/ListLinuxSubscriptionsRequest">AWS
   * API Reference</a></p>
   */
  class ListLinuxSubscriptionsRequest : public LicenseManagerLinuxSubscriptionsRequest
  {
  public:
    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API ListLinuxSubscriptionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLinuxSubscriptions"; }

    AWS_LICENSEMANAGERLINUXSUBSCRIPTIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline ListLinuxSubscriptionsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline ListLinuxSubscriptionsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline ListLinuxSubscriptionsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>An array of structures that you can use to filter the results to those that
     * match one or more sets of key-value pairs that you specify. For example, you can
     * filter by the name of <code>Subscription</code> with an optional operator to see
     * subscriptions that match, partially match, or don't match a certain
     * subscription's name.</p> <p>The valid names for this filter are:</p> <ul> <li>
     * <p> <code>Subscription</code> </p> </li> </ul> <p>The valid Operators for this
     * filter are:</p> <ul> <li> <p> <code>contains</code> </p> </li> <li> <p>
     * <code>equals</code> </p> </li> <li> <p> <code>Notequal</code> </p> </li> </ul>
     */
    inline ListLinuxSubscriptionsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


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
    inline ListLinuxSubscriptionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline ListLinuxSubscriptionsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLinuxSubscriptionsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token for the next set of results.</p>
     */
    inline ListLinuxSubscriptionsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace LicenseManagerLinuxSubscriptions
} // namespace Aws
