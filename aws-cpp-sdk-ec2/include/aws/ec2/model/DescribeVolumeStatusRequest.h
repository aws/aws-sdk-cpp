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
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   */
  class AWS_EC2_API DescribeVolumeStatusRequest : public EC2Request
  {
  public:
    DescribeVolumeStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumeStatus"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline DescribeVolumeStatusRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline DescribeVolumeStatusRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline DescribeVolumeStatusRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>action.code</code> - The action code for
     * the event (for example, <code>enable-volume-io</code>).</p> </li> <li> <p>
     * <code>action.description</code> - A description of the action.</p> </li> <li>
     * <p> <code>action.event-id</code> - The event ID associated with the action.</p>
     * </li> <li> <p> <code>availability-zone</code> - The Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.description</code> - A description of
     * the event.</p> </li> <li> <p> <code>event.event-id</code> - The event ID.</p>
     * </li> <li> <p> <code>event.event-type</code> - The event type (for
     * <code>io-enabled</code>: <code>passed</code> | <code>failed</code>; for
     * <code>io-performance</code>: <code>io-performance:degraded</code> |
     * <code>io-performance:severely-degraded</code> |
     * <code>io-performance:stalled</code>).</p> </li> <li> <p>
     * <code>event.not-after</code> - The latest end time for the event.</p> </li> <li>
     * <p> <code>event.not-before</code> - The earliest start time for the event.</p>
     * </li> <li> <p> <code>volume-status.details-name</code> - The cause for
     * <code>volume-status.status</code> (<code>io-enabled</code> |
     * <code>io-performance</code>).</p> </li> <li> <p>
     * <code>volume-status.details-status</code> - The status of
     * <code>volume-status.details-name</code> (for <code>io-enabled</code>:
     * <code>passed</code> | <code>failed</code>; for <code>io-performance</code>:
     * <code>normal</code> | <code>degraded</code> | <code>severely-degraded</code> |
     * <code>stalled</code>).</p> </li> <li> <p> <code>volume-status.status</code> -
     * The status of the volume (<code>ok</code> | <code>impaired</code> |
     * <code>warning</code> | <code>insufficient-data</code>).</p> </li> </ul>
     */
    inline DescribeVolumeStatusRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeVolumeStatus</code> in paginated output. When this parameter is
     * used, the request only returns <code>MaxResults</code> results in a single page
     * along with a <code>NextToken</code> response element. The remaining results of
     * the initial request can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. If this parameter is not used, then <code>DescribeVolumeStatus</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeVolumeStatus</code> in paginated output. When this parameter is
     * used, the request only returns <code>MaxResults</code> results in a single page
     * along with a <code>NextToken</code> response element. The remaining results of
     * the initial request can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. If this parameter is not used, then <code>DescribeVolumeStatus</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeVolumeStatus</code> in paginated output. When this parameter is
     * used, the request only returns <code>MaxResults</code> results in a single page
     * along with a <code>NextToken</code> response element. The remaining results of
     * the initial request can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. If this parameter is not used, then <code>DescribeVolumeStatus</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of volume results returned by
     * <code>DescribeVolumeStatus</code> in paginated output. When this parameter is
     * used, the request only returns <code>MaxResults</code> results in a single page
     * along with a <code>NextToken</code> response element. The remaining results of
     * the initial request can be seen by sending another request with the returned
     * <code>NextToken</code> value. This value can be between 5 and 1000; if
     * <code>MaxResults</code> is given a value larger than 1000, only 1000 results are
     * returned. If this parameter is not used, then <code>DescribeVolumeStatus</code>
     * returns all results. You cannot specify this parameter and the volume IDs
     * parameter in the same request.</p>
     */
    inline DescribeVolumeStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline DescribeVolumeStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline DescribeVolumeStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>NextToken</code> value to include in a future
     * <code>DescribeVolumeStatus</code> request. When the results of the request
     * exceed <code>MaxResults</code>, this value can be used to retrieve the next page
     * of results. This value is <code>null</code> when there are no more results to
     * return.</p>
     */
    inline DescribeVolumeStatusRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline const Aws::Vector<Aws::String>& GetVolumeIds() const{ return m_volumeIds; }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline bool VolumeIdsHasBeenSet() const { return m_volumeIdsHasBeenSet; }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline void SetVolumeIds(const Aws::Vector<Aws::String>& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = value; }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline void SetVolumeIds(Aws::Vector<Aws::String>&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds = std::move(value); }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline DescribeVolumeStatusRequest& WithVolumeIds(const Aws::Vector<Aws::String>& value) { SetVolumeIds(value); return *this;}

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline DescribeVolumeStatusRequest& WithVolumeIds(Aws::Vector<Aws::String>&& value) { SetVolumeIds(std::move(value)); return *this;}

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline DescribeVolumeStatusRequest& AddVolumeIds(const Aws::String& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline DescribeVolumeStatusRequest& AddVolumeIds(Aws::String&& value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The IDs of the volumes.</p> <p>Default: Describes all your volumes.</p>
     */
    inline DescribeVolumeStatusRequest& AddVolumeIds(const char* value) { m_volumeIdsHasBeenSet = true; m_volumeIds.push_back(value); return *this; }


    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeVolumeStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

  private:

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet;

    bool m_dryRun;
    bool m_dryRunHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
