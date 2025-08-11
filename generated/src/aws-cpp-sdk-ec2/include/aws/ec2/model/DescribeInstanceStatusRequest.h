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
  class DescribeInstanceStatusRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeInstanceStatusRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstanceStatus"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The instance IDs.</p> <p>Default: Describes all your instances.</p>
     * <p>Constraints: Maximum 100 explicitly specified instance IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const { return m_instanceIds; }
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    void SetInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::forward<InstanceIdsT>(value); }
    template<typename InstanceIdsT = Aws::Vector<Aws::String>>
    DescribeInstanceStatusRequest& WithInstanceIds(InstanceIdsT&& value) { SetInstanceIds(std::forward<InstanceIdsT>(value)); return *this;}
    template<typename InstanceIdsT = Aws::String>
    DescribeInstanceStatusRequest& AddInstanceIds(InstanceIdsT&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.emplace_back(std::forward<InstanceIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of items to return for this request. To get the next page
     * of items, make another request with the token returned in the output. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/AWSEC2/latest/APIReference/Query-Requests.html#api-pagination">Pagination</a>.</p>
     * <p>You cannot specify this parameter and the instance IDs parameter in the same
     * request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeInstanceStatusRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token returned from a previous paginated request. Pagination continues
     * from the end of the items returned by the previous request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeInstanceStatusRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Checks whether you have the required permissions for the operation, without
     * actually making the request, and provides an error response. If you have the
     * required permissions, the error response is <code>DryRunOperation</code>.
     * Otherwise, it is <code>UnauthorizedOperation</code>.</p>
     */
    inline bool GetDryRun() const { return m_dryRun; }
    inline bool DryRunHasBeenSet() const { return m_dryRunHasBeenSet; }
    inline void SetDryRun(bool value) { m_dryRunHasBeenSet = true; m_dryRun = value; }
    inline DescribeInstanceStatusRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The filters.</p> <ul> <li> <p> <code>availability-zone</code> - The
     * Availability Zone of the instance.</p> </li> <li> <p>
     * <code>availability-zone-id</code> - The ID of the Availability Zone of the
     * instance.</p> </li> <li> <p> <code>event.code</code> - The code for the
     * scheduled event (<code>instance-reboot</code> | <code>system-reboot</code> |
     * <code>system-maintenance</code> | <code>instance-retirement</code> |
     * <code>instance-stop</code>).</p> </li> <li> <p> <code>event.description</code> -
     * A description of the event.</p> </li> <li> <p>
     * <code>event.instance-event-id</code> - The ID of the event whose date and time
     * you are modifying.</p> </li> <li> <p> <code>event.not-after</code> - The latest
     * end time for the scheduled event (for example,
     * <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before</code> - The earliest start time for the scheduled event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>event.not-before-deadline</code> - The deadline for starting the event
     * (for example, <code>2014-09-15T17:15:20.000Z</code>).</p> </li> <li> <p>
     * <code>instance-state-code</code> - The code for the instance state, as a 16-bit
     * unsigned integer. The high byte is used for internal purposes and should be
     * ignored. The low byte is set based on the state represented. The valid values
     * are 0 (pending), 16 (running), 32 (shutting-down), 48 (terminated), 64
     * (stopping), and 80 (stopped).</p> </li> <li> <p>
     * <code>instance-state-name</code> - The state of the instance
     * (<code>pending</code> | <code>running</code> | <code>shutting-down</code> |
     * <code>terminated</code> | <code>stopping</code> | <code>stopped</code>).</p>
     * </li> <li> <p> <code>instance-status.reachability</code> - Filters on instance
     * status where the name is <code>reachability</code> (<code>passed</code> |
     * <code>failed</code> | <code>initializing</code> |
     * <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>instance-status.status</code> - The status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>operator.managed</code> - A Boolean that indicates whether this is a
     * managed instance.</p> </li> <li> <p> <code>operator.principal</code> - The
     * principal that manages the instance. Only valid for managed instances, where
     * <code>managed</code> is <code>true</code>.</p> </li> <li> <p>
     * <code>system-status.reachability</code> - Filters on system status where the
     * name is <code>reachability</code> (<code>passed</code> | <code>failed</code> |
     * <code>initializing</code> | <code>insufficient-data</code>).</p> </li> <li> <p>
     * <code>system-status.status</code> - The system status of the instance
     * (<code>ok</code> | <code>impaired</code> | <code>initializing</code> |
     * <code>insufficient-data</code> | <code>not-applicable</code>).</p> </li> <li>
     * <p> <code>attached-ebs-status.status</code> - The status of the attached EBS
     * volume for the instance (<code>ok</code> | <code>impaired</code> |
     * <code>initializing</code> | <code>insufficient-data</code> |
     * <code>not-applicable</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeInstanceStatusRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeInstanceStatusRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>When <code>true</code>, includes the health status for all instances. When
     * <code>false</code>, includes the health status for running instances only.</p>
     * <p>Default: <code>false</code> </p>
     */
    inline bool GetIncludeAllInstances() const { return m_includeAllInstances; }
    inline bool IncludeAllInstancesHasBeenSet() const { return m_includeAllInstancesHasBeenSet; }
    inline void SetIncludeAllInstances(bool value) { m_includeAllInstancesHasBeenSet = true; m_includeAllInstances = value; }
    inline DescribeInstanceStatusRequest& WithIncludeAllInstances(bool value) { SetIncludeAllInstances(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    bool m_includeAllInstances{false};
    bool m_includeAllInstancesHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
