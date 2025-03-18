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
  class DescribeTrafficMirrorTargetsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorTargetsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficMirrorTargets"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror targets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrafficMirrorTargetIds() const { return m_trafficMirrorTargetIds; }
    inline bool TrafficMirrorTargetIdsHasBeenSet() const { return m_trafficMirrorTargetIdsHasBeenSet; }
    template<typename TrafficMirrorTargetIdsT = Aws::Vector<Aws::String>>
    void SetTrafficMirrorTargetIds(TrafficMirrorTargetIdsT&& value) { m_trafficMirrorTargetIdsHasBeenSet = true; m_trafficMirrorTargetIds = std::forward<TrafficMirrorTargetIdsT>(value); }
    template<typename TrafficMirrorTargetIdsT = Aws::Vector<Aws::String>>
    DescribeTrafficMirrorTargetsRequest& WithTrafficMirrorTargetIds(TrafficMirrorTargetIdsT&& value) { SetTrafficMirrorTargetIds(std::forward<TrafficMirrorTargetIdsT>(value)); return *this;}
    template<typename TrafficMirrorTargetIdsT = Aws::String>
    DescribeTrafficMirrorTargetsRequest& AddTrafficMirrorTargetIds(TrafficMirrorTargetIdsT&& value) { m_trafficMirrorTargetIdsHasBeenSet = true; m_trafficMirrorTargetIds.emplace_back(std::forward<TrafficMirrorTargetIdsT>(value)); return *this; }
    ///@}

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
    inline DescribeTrafficMirrorTargetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror target description.</p> </li> <li>
     * <p> <code>network-interface-id</code>: The ID of the Traffic Mirror session
     * network interface.</p> </li> <li> <p> <code>network-load-balancer-arn</code>:
     * The Amazon Resource Name (ARN) of the Network Load Balancer that is associated
     * with the session.</p> </li> <li> <p> <code>owner-id</code>: The ID of the
     * account that owns the Traffic Mirror session.</p> </li> <li> <p>
     * <code>traffic-mirror-target-id</code>: The ID of the Traffic Mirror target.</p>
     * </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeTrafficMirrorTargetsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeTrafficMirrorTargetsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeTrafficMirrorTargetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeTrafficMirrorTargetsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_trafficMirrorTargetIds;
    bool m_trafficMirrorTargetIdsHasBeenSet = false;

    bool m_dryRun{false};
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
