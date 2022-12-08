/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-incidents/SSMIncidents_EXPORTS.h>
#include <aws/ssm-incidents/SSMIncidentsRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm-incidents/model/Filter.h>
#include <utility>

namespace Aws
{
namespace SSMIncidents
{
namespace Model
{

  /**
   */
  class ListIncidentRecordsRequest : public SSMIncidentsRequest
  {
  public:
    AWS_SSMINCIDENTS_API ListIncidentRecordsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListIncidentRecords"; }

    AWS_SSMINCIDENTS_API Aws::String SerializePayload() const override;


    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline ListIncidentRecordsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline ListIncidentRecordsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline ListIncidentRecordsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>Filters the list of incident records through which you are searching. You can
     * filter on the following keys:</p> <ul> <li> <p> <code>creationTime</code> </p>
     * </li> <li> <p> <code>impact</code> </p> </li> <li> <p> <code>status</code> </p>
     * </li> <li> <p> <code>createdBy</code> </p> </li> </ul> <p>Note the following
     * when deciding how to use Filters:</p> <ul> <li> <p>If you don't specify a
     * Filter, the response includes all incident records.</p> </li> <li> <p>If you
     * specify more than one filter in a single request, the response returns incident
     * records that match all filters.</p> </li> <li> <p>If you specify a filter with
     * more than one value, the response returns incident records that match any of the
     * values provided.</p> </li> </ul>
     */
    inline ListIncidentRecordsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results per page.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results per page.</p>
     */
    inline ListIncidentRecordsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListIncidentRecordsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListIncidentRecordsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The pagination token to continue to the next page of results.</p>
     */
    inline ListIncidentRecordsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SSMIncidents
} // namespace Aws
