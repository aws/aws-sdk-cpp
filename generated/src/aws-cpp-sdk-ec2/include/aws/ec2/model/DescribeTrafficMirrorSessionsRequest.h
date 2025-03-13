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
  class DescribeTrafficMirrorSessionsRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorSessionsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficMirrorSessions"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ID of the Traffic Mirror session.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrafficMirrorSessionIds() const { return m_trafficMirrorSessionIds; }
    inline bool TrafficMirrorSessionIdsHasBeenSet() const { return m_trafficMirrorSessionIdsHasBeenSet; }
    template<typename TrafficMirrorSessionIdsT = Aws::Vector<Aws::String>>
    void SetTrafficMirrorSessionIds(TrafficMirrorSessionIdsT&& value) { m_trafficMirrorSessionIdsHasBeenSet = true; m_trafficMirrorSessionIds = std::forward<TrafficMirrorSessionIdsT>(value); }
    template<typename TrafficMirrorSessionIdsT = Aws::Vector<Aws::String>>
    DescribeTrafficMirrorSessionsRequest& WithTrafficMirrorSessionIds(TrafficMirrorSessionIdsT&& value) { SetTrafficMirrorSessionIds(std::forward<TrafficMirrorSessionIdsT>(value)); return *this;}
    template<typename TrafficMirrorSessionIdsT = Aws::String>
    DescribeTrafficMirrorSessionsRequest& AddTrafficMirrorSessionIds(TrafficMirrorSessionIdsT&& value) { m_trafficMirrorSessionIdsHasBeenSet = true; m_trafficMirrorSessionIds.emplace_back(std::forward<TrafficMirrorSessionIdsT>(value)); return *this; }
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
    inline DescribeTrafficMirrorSessionsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>One or more filters. The possible values are:</p> <ul> <li> <p>
     * <code>description</code>: The Traffic Mirror session description.</p> </li> <li>
     * <p> <code>network-interface-id</code>: The ID of the Traffic Mirror session
     * network interface.</p> </li> <li> <p> <code>owner-id</code>: The ID of the
     * account that owns the Traffic Mirror session.</p> </li> <li> <p>
     * <code>packet-length</code>: The assigned number of packets to mirror. </p> </li>
     * <li> <p> <code>session-number</code>: The assigned session number. </p> </li>
     * <li> <p> <code>traffic-mirror-filter-id</code>: The ID of the Traffic Mirror
     * filter.</p> </li> <li> <p> <code>traffic-mirror-session-id</code>: The ID of the
     * Traffic Mirror session.</p> </li> <li> <p>
     * <code>traffic-mirror-target-id</code>: The ID of the Traffic Mirror target.</p>
     * </li> <li> <p> <code>virtual-network-id</code>: The virtual network ID of the
     * Traffic Mirror session.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeTrafficMirrorSessionsRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeTrafficMirrorSessionsRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeTrafficMirrorSessionsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeTrafficMirrorSessionsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_trafficMirrorSessionIds;
    bool m_trafficMirrorSessionIdsHasBeenSet = false;

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
