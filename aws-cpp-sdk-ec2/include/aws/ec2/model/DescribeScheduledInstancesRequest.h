﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/ec2/model/SlotStartTimeRangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/Filter.h>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for DescribeScheduledInstances.</p>
   */
  class AWS_EC2_API DescribeScheduledInstancesRequest : public EC2Request
  {
  public:
    DescribeScheduledInstancesRequest();
    Aws::String SerializePayload() const override;

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
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }

    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline DescribeScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledInstanceIds() const{ return m_scheduledInstanceIds; }

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline void SetScheduledInstanceIds(const Aws::Vector<Aws::String>& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds = value; }

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline void SetScheduledInstanceIds(Aws::Vector<Aws::String>&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds = value; }

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& WithScheduledInstanceIds(const Aws::Vector<Aws::String>& value) { SetScheduledInstanceIds(value); return *this;}

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& WithScheduledInstanceIds(Aws::Vector<Aws::String>&& value) { SetScheduledInstanceIds(value); return *this;}

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(const Aws::String& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(value); return *this; }

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(Aws::String&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(value); return *this; }

    /**
     * <p>One or more Scheduled Instance IDs.</p>
     */
    inline DescribeScheduledInstancesRequest& AddScheduledInstanceIds(const char* value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.push_back(value); return *this; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const SlotStartTimeRangeRequest& GetSlotStartTimeRange() const{ return m_slotStartTimeRange; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetSlotStartTimeRange(const SlotStartTimeRangeRequest& value) { m_slotStartTimeRangeHasBeenSet = true; m_slotStartTimeRange = value; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline void SetSlotStartTimeRange(SlotStartTimeRangeRequest&& value) { m_slotStartTimeRangeHasBeenSet = true; m_slotStartTimeRange = value; }

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline DescribeScheduledInstancesRequest& WithSlotStartTimeRange(const SlotStartTimeRangeRequest& value) { SetSlotStartTimeRange(value); return *this;}

    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline DescribeScheduledInstancesRequest& WithSlotStartTimeRange(SlotStartTimeRangeRequest&& value) { SetSlotStartTimeRange(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>The token for the next set of results.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

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
    inline DescribeScheduledInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeScheduledInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

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
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline DescribeScheduledInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(value); return *this;}

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>One or more filters.</p> <ul> <li> <p><code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li>
     * <p><code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p><code>network-platform</code> - The
     * network platform (<code>EC2-Classic</code> or <code>EC2-VPC</code>).</p> </li>
     * <li> <p><code>platform</code> - The platform (<code>Linux/UNIX</code> or
     * <code>Windows</code>).</p> </li> </ul>
     */
    inline DescribeScheduledInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

  private:
    bool m_dryRun;
    bool m_dryRunHasBeenSet;
    Aws::Vector<Aws::String> m_scheduledInstanceIds;
    bool m_scheduledInstanceIdsHasBeenSet;
    SlotStartTimeRangeRequest m_slotStartTimeRange;
    bool m_slotStartTimeRangeHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
    int m_maxResults;
    bool m_maxResultsHasBeenSet;
    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
