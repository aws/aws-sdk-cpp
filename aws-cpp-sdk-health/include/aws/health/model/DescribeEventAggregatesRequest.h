/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/health/Health_EXPORTS.h>
#include <aws/health/HealthRequest.h>
#include <aws/health/model/EventFilter.h>
#include <aws/health/model/EventAggregateField.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Health
{
namespace Model
{

  /**
   */
  class AWS_HEALTH_API DescribeEventAggregatesRequest : public HealthRequest
  {
  public:
    DescribeEventAggregatesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeEventAggregates"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline const EventFilter& GetFilter() const{ return m_filter; }

    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline bool FilterHasBeenSet() const { return m_filterHasBeenSet; }

    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline void SetFilter(const EventFilter& value) { m_filterHasBeenSet = true; m_filter = value; }

    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline void SetFilter(EventFilter&& value) { m_filterHasBeenSet = true; m_filter = std::move(value); }

    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline DescribeEventAggregatesRequest& WithFilter(const EventFilter& value) { SetFilter(value); return *this;}

    /**
     * <p>Values to narrow the results returned.</p>
     */
    inline DescribeEventAggregatesRequest& WithFilter(EventFilter&& value) { SetFilter(std::move(value)); return *this;}


    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline const EventAggregateField& GetAggregateField() const{ return m_aggregateField; }

    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline bool AggregateFieldHasBeenSet() const { return m_aggregateFieldHasBeenSet; }

    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline void SetAggregateField(const EventAggregateField& value) { m_aggregateFieldHasBeenSet = true; m_aggregateField = value; }

    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline void SetAggregateField(EventAggregateField&& value) { m_aggregateFieldHasBeenSet = true; m_aggregateField = std::move(value); }

    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline DescribeEventAggregatesRequest& WithAggregateField(const EventAggregateField& value) { SetAggregateField(value); return *this;}

    /**
     * <p>The only currently supported value is <code>eventTypeCategory</code>.</p>
     */
    inline DescribeEventAggregatesRequest& WithAggregateField(EventAggregateField&& value) { SetAggregateField(std::move(value)); return *this;}


    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return in one batch, between 10 and 100,
     * inclusive.</p>
     */
    inline DescribeEventAggregatesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the results of a search are large, only a portion of the results are
     * returned, and a <code>nextToken</code> pagination token is returned in the
     * response. To retrieve the next batch of results, reissue the search request and
     * include the returned token. When all results have been returned, the response
     * does not contain a pagination token value.</p>
     */
    inline DescribeEventAggregatesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    EventFilter m_filter;
    bool m_filterHasBeenSet;

    EventAggregateField m_aggregateField;
    bool m_aggregateFieldHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace Health
} // namespace Aws
