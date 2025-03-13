/**
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
  class DescribeScheduledInstancesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeScheduledInstancesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScheduledInstances"; }

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
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeScheduledInstancesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone (for example, <code>us-west-2a</code>).</p> </li> <li> <p>
     * <code>instance-type</code> - The instance type (for example,
     * <code>c4.large</code>).</p> </li> <li> <p> <code>platform</code> - The platform
     * (<code>Linux/UNIX</code> or <code>Windows</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeScheduledInstancesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeScheduledInstancesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return in a single call. This value can be
     * between 5 and 300. The default value is 100. To retrieve the remaining results,
     * make another call with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeScheduledInstancesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next set of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeScheduledInstancesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Scheduled Instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScheduledInstanceIds() const { return m_scheduledInstanceIds; }
    inline bool ScheduledInstanceIdsHasBeenSet() const { return m_scheduledInstanceIdsHasBeenSet; }
    template<typename ScheduledInstanceIdsT = Aws::Vector<Aws::String>>
    void SetScheduledInstanceIds(ScheduledInstanceIdsT&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds = std::forward<ScheduledInstanceIdsT>(value); }
    template<typename ScheduledInstanceIdsT = Aws::Vector<Aws::String>>
    DescribeScheduledInstancesRequest& WithScheduledInstanceIds(ScheduledInstanceIdsT&& value) { SetScheduledInstanceIds(std::forward<ScheduledInstanceIdsT>(value)); return *this;}
    template<typename ScheduledInstanceIdsT = Aws::String>
    DescribeScheduledInstancesRequest& AddScheduledInstanceIds(ScheduledInstanceIdsT&& value) { m_scheduledInstanceIdsHasBeenSet = true; m_scheduledInstanceIds.emplace_back(std::forward<ScheduledInstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The time period for the first schedule to start.</p>
     */
    inline const SlotStartTimeRangeRequest& GetSlotStartTimeRange() const { return m_slotStartTimeRange; }
    inline bool SlotStartTimeRangeHasBeenSet() const { return m_slotStartTimeRangeHasBeenSet; }
    template<typename SlotStartTimeRangeT = SlotStartTimeRangeRequest>
    void SetSlotStartTimeRange(SlotStartTimeRangeT&& value) { m_slotStartTimeRangeHasBeenSet = true; m_slotStartTimeRange = std::forward<SlotStartTimeRangeT>(value); }
    template<typename SlotStartTimeRangeT = SlotStartTimeRangeRequest>
    DescribeScheduledInstancesRequest& WithSlotStartTimeRange(SlotStartTimeRangeT&& value) { SetSlotStartTimeRange(std::forward<SlotStartTimeRangeT>(value)); return *this;}
    ///@}
  private:

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<Aws::String> m_scheduledInstanceIds;
    bool m_scheduledInstanceIdsHasBeenSet = false;

    SlotStartTimeRangeRequest m_slotStartTimeRange;
    bool m_slotStartTimeRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
