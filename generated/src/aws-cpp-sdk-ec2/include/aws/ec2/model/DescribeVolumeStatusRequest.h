/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
  class DescribeVolumeStatusRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeVolumeStatusRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeVolumeStatus"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

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
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. This value
     * can be between 5 and 1,000; if the value is larger than 1,000, only 1,000
     * results are returned. If this parameter is not used, then all items are
     * returned. You cannot specify this parameter and the volume IDs parameter in the
     * same request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. This value
     * can be between 5 and 1,000; if the value is larger than 1,000, only 1,000
     * results are returned. If this parameter is not used, then all items are
     * returned. You cannot specify this parameter and the volume IDs parameter in the
     * same request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. This value
     * can be between 5 and 1,000; if the value is larger than 1,000, only 1,000
     * results are returned. If this parameter is not used, then all items are
     * returned. You cannot specify this parameter and the volume IDs parameter in the
     * same request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. This value
     * can be between 5 and 1,000; if the value is larger than 1,000, only 1,000
     * results are returned. If this parameter is not used, then all items are
     * returned. You cannot specify this parameter and the volume IDs parameter in the
     * same request. For more information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     */
    inline DescribeVolumeStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeVolumeStatusRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline DescribeVolumeStatusRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
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
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_volumeIds;
    bool m_volumeIdsHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
