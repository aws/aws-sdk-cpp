﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/SlotStartTimeRangeRequest.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeScheduledInstances.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstancesRequest">AWS
   * API Reference</a></p>
   */
  class AWS_EC2_API DescribeScheduledInstancesRequest : public EC2Request
  {
  public:
    DescribeScheduledInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledInstances"; }

    Aws::String SerializePayload() const override;

  protected:
    void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

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
    inline DescribeScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p> <code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }


    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline DescribeScheduledInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScheduledInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScheduledInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScheduledInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledInstanceIds() const{ return m_scheduledInstanceIds; }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline bool ScheduledInstanceIdsHasBeenSet() const { return m_scheduledInstanceIdsHasBeenSet; }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline void SetScheduledInstanceIds(const Aws::Vector<Aws::String>& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds = value; }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline void SetScheduledInstanceIds(Aws::Vector<Aws::String>&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds = std::move(value); }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& WithScheduledInstanceIds(const Aws::Vector<Aws::String>& value) { SetScheduledInstanceIds(value); return *this;}

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& WithScheduledInstanceIds(Aws::Vector<Aws::String>&& value) { SetScheduledInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(const Aws::String& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(value); return *this; }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(Aws::String&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(const char* value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(value); return *this; }


    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const SlotStartTimeRangeRequest& GetSlotStartTimeRange() const{ return m_slotStartTimeRange; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline bool SlotStartTimeRangeHasBeenSet() const { return m_slotStartTimeRangeHasBeenSet; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetSlotStartTimeRange(const SlotStartTimeRangeRequest& value) { m_slotStartTimeRangeHasBeenSet = true; m_slotStartTimeRange = value; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetSlotStartTimeRange(SlotStartTimeRangeRequest&& value) { m_slotStartTimeRangeHasBeenSet = true; m_slotStartTimeRange = std::move(value); }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline DescribeScheduledInstancesRequest& WithSlotStartTimeRange(const SlotStartTimeRangeRequest& value) { SetSlotStartTimeRange(value); return *this;}

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline DescribeScheduledInstancesRequest& WithSlotStartTimeRange(SlotStartTimeRangeRequest&& value) { SetSlotStartTimeRange(std::move(value)); return *this;}

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_scheduledInstanceIds;
    bool m_scheduledInstanceIdsHasBeenSet;

    SlotStartTimeRangeRequest m_slotStartTimeRange;
    bool m_slotStartTimeRangeHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
