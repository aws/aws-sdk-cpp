/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/codestar-notifications/CodeStarNotifications_EXPORTS.h>
#include <aws/codestar-notifications/CodeStarNotificationsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/codestar-notifications/model/ListEventTypesFilter.h>
#include <utility>

namespace Aws
{
namespace CodeStarNotifications
{
namespace Model
{

  /**
   */
  class ListEventTypesRequest : public CodeStarNotificationsRequest
  {
  public:
    AWS_CODESTARNOTIFICATIONS_API ListEventTypesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListEventTypes"; }

    AWS_CODESTARNOTIFICATIONS_API Aws::String SerializePayload() const override;


    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline const Aws::Vector<ListEventTypesFilter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline void SetFilters(const Aws::Vector<ListEventTypesFilter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline void SetFilters(Aws::Vector<ListEventTypesFilter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline ListEventTypesRequest& WithFilters(const Aws::Vector<ListEventTypesFilter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline ListEventTypesRequest& WithFilters(Aws::Vector<ListEventTypesFilter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline ListEventTypesRequest& AddFilters(const ListEventTypesFilter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters to use to return information by service or resource type.</p>
     */
    inline ListEventTypesRequest& AddFilters(ListEventTypesFilter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListEventTypesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListEventTypesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>An enumeration token that, when provided in a request, returns the next batch
     * of the results.</p>
     */
    inline ListEventTypesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default number is 50. The maximum number of results that can be returned is
     * 100.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default number is 50. The maximum number of results that can be returned is
     * 100.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default number is 50. The maximum number of results that can be returned is
     * 100.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>A non-negative integer used to limit the number of returned results. The
     * default number is 50. The maximum number of results that can be returned is
     * 100.</p>
     */
    inline ListEventTypesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

  private:

    Aws::Vector<ListEventTypesFilter> m_filters;
    bool m_filtersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;
  };

} // namespace Model
} // namespace CodeStarNotifications
} // namespace Aws
