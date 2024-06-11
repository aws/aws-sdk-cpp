﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ec2/EC2_EXPORTS.h>
#include <aws/ec2/EC2Request.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/ec2/model/SlotDateTimeRangeRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ec2/model/ScheduledInstanceRecurrenceRequest.h>
#include <aws/ec2/model/Filter.h>
#include <utility>

namespace Aws
{
namespace EC2
{
namespace Model
{

  /**
   * <p>Contains the parameters for
   * DescribeScheduledInstanceAvailability.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ec2-2016-11-15/DescribeScheduledInstanceAvailabilityRequest">AWS
   * API Reference</a></p>
   */
  class DescribeScheduledInstanceAvailabilityRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeScheduledInstanceAvailabilityRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledInstanceAvailability"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the action, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const{ return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeScheduledInstanceAvailabilityRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>platform</code> - The platform
     * (<code>Linux/UNIX</code> or <code>Windows</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeScheduledInstanceAvailabilityRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeScheduledInstanceAvailabilityRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const SlotDateTimeRangeRequest& GetFirstSlotStartTimeRange() const{ return m_firstSlotStartTimeRange; }
    inline bool FirstSlotStartTimeRangeHasBeenSet() const { return m_firstSlotStartTimeRangeHasBeenSet; }
    inline void SetFirstSlotStartTimeRange(const SlotDateTimeRangeRequest& value) { m_firstSlotStartTimeRangeHasBeenSet = true; m_firstSlotStartTimeRange = value; }
    inline void SetFirstSlotStartTimeRange(SlotDateTimeRangeRequest&& value) { m_firstSlotStartTimeRangeHasBeenSet = true; m_firstSlotStartTimeRange = std::move(value); }
    inline DescribeScheduledInstanceAvailabilityRequest& WithFirstSlotStartTimeRange(const SlotDateTimeRangeRequest& value) { SetFirstSlotStartTimeRange(value); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& WithFirstSlotStartTimeRange(SlotDateTimeRangeRequest&& value) { SetFirstSlotStartTimeRange(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 300. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeScheduledInstanceAvailabilityRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum available duration, in hours. This value must be greater than
     * <code>MinSlotDurationInHours</code> and less than 1,720.</p>
     */
    inline int GetMaxSlotDurationInHours() const{ return m_maxSlotDurationInHours; }
    inline bool MaxSlotDurationInHoursHasBeenSet() const { return m_maxSlotDurationInHoursHasBeenSet; }
    inline void SetMaxSlotDurationInHours(int value) { m_maxSlotDurationInHoursHasBeenSet = true; m_maxSlotDurationInHours = value; }
    inline DescribeScheduledInstanceAvailabilityRequest& WithMaxSlotDurationInHours(int value) { SetMaxSlotDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The minimum available duration, in hours. The minimum required duration is
     * 1,200 hours per year. For example, the minimum daily schedule is 4 hours, the
     * minimum weekly schedule is 24 hours, and the minimum monthly schedule is 100
     * hours.</p>
     */
    inline int GetMinSlotDurationInHours() const{ return m_minSlotDurationInHours; }
    inline bool MinSlotDurationInHoursHasBeenSet() const { return m_minSlotDurationInHoursHasBeenSet; }
    inline void SetMinSlotDurationInHours(int value) { m_minSlotDurationInHoursHasBeenSet = true; m_minSlotDurationInHours = value; }
    inline DescribeScheduledInstanceAvailabilityRequest& WithMinSlotDurationInHours(int value) { SetMinSlotDurationInHours(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeScheduledInstanceAvailabilityRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The schedule recurrence.</p>
     */
    inline const ScheduledInstanceRecurrenceRequest& GetRecurrence() const{ return m_recurrence; }
    inline bool RecurrenceHasBeenSet() const { return m_recurrenceHasBeenSet; }
    inline void SetRecurrence(const ScheduledInstanceRecurrenceRequest& value) { m_recurrenceHasBeenSet = true; m_recurrence = value; }
    inline void SetRecurrence(ScheduledInstanceRecurrenceRequest&& value) { m_recurrenceHasBeenSet = true; m_recurrence = std::move(value); }
    inline DescribeScheduledInstanceAvailabilityRequest& WithRecurrence(const ScheduledInstanceRecurrenceRequest& value) { SetRecurrence(value); return *this;}
    inline DescribeScheduledInstanceAvailabilityRequest& WithRecurrence(ScheduledInstanceRecurrenceRequest&& value) { SetRecurrence(std::move(value)); return *this;}
    ///@}
  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    SlotDateTimeRangeRequest m_firstSlotStartTimeRange;
    bool m_firstSlotStartTimeRangeHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    int m_maxSlotDurationInHours;
    bool m_maxSlotDurationInHoursHasBeenSet = false;

    int m_minSlotDurationInHours;
    bool m_minSlotDurationInHoursHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    ScheduledInstanceRecurrenceRequest m_recurrence;
    bool m_recurrenceHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
