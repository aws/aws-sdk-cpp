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
  class DescribeTrafficMirrorFilterRulesRequest : public EC2Request
  {
  public:
    AWS_EC2_API DescribeTrafficMirrorFilterRulesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeTrafficMirrorFilterRules"; }

    AWS_EC2_API Aws::String SerializePayload() const override;

  protected:
    AWS_EC2_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>Traffic filter rule IDs.</p>
     */
    inline const Aws::Vector<Aws::String>& GetTrafficMirrorFilterRuleIds() const { return m_trafficMirrorFilterRuleIds; }
    inline bool TrafficMirrorFilterRuleIdsHasBeenSet() const { return m_trafficMirrorFilterRuleIdsHasBeenSet; }
    template<typename TrafficMirrorFilterRuleIdsT = Aws::Vector<Aws::String>>
    void SetTrafficMirrorFilterRuleIds(TrafficMirrorFilterRuleIdsT&& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds = std::forward<TrafficMirrorFilterRuleIdsT>(value); }
    template<typename TrafficMirrorFilterRuleIdsT = Aws::Vector<Aws::String>>
    DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterRuleIds(TrafficMirrorFilterRuleIdsT&& value) { SetTrafficMirrorFilterRuleIds(std::forward<TrafficMirrorFilterRuleIdsT>(value)); return *this;}
    template<typename TrafficMirrorFilterRuleIdsT = Aws::String>
    DescribeTrafficMirrorFilterRulesRequest& AddTrafficMirrorFilterRuleIds(TrafficMirrorFilterRuleIdsT&& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds.emplace_back(std::forward<TrafficMirrorFilterRuleIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Traffic filter ID.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const { return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    void SetTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::forward<TrafficMirrorFilterIdT>(value); }
    template<typename TrafficMirrorFilterIdT = Aws::String>
    DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterId(TrafficMirrorFilterIdT&& value) { SetTrafficMirrorFilterId(std::forward<TrafficMirrorFilterIdT>(value)); return *this;}
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
    inline DescribeTrafficMirrorFilterRulesRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Traffic mirror filters.</p> <ul> <li> <p>
     * <code>traffic-mirror-filter-rule-id</code>: The ID of the Traffic Mirror
     * rule.</p> </li> <li> <p> <code>traffic-mirror-filter-id</code>: The ID of the
     * filter that this rule is associated with.</p> </li> <li> <p>
     * <code>rule-number</code>: The number of the Traffic Mirror rule.</p> </li> <li>
     * <p> <code>rule-action</code>: The action taken on the filtered traffic. Possible
     * actions are <code>accept</code> and <code>reject</code>.</p> </li> <li> <p>
     * <code>traffic-direction</code>: The traffic direction. Possible directions are
     * <code>ingress</code> and <code>egress</code>.</p> </li> <li> <p>
     * <code>protocol</code>: The protocol, for example UDP, assigned to the Traffic
     * Mirror rule.</p> </li> <li> <p> <code>source-cidr-block</code>: The source CIDR
     * block assigned to the Traffic Mirror rule.</p> </li> <li> <p>
     * <code>destination-cidr-block</code>: The destination CIDR block assigned to the
     * Traffic Mirror rule.</p> </li> <li> <p> <code>description</code>: The
     * description of the Traffic Mirror rule.</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    template<typename FiltersT = Aws::Vector<Filter>>
    void SetFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters = std::forward<FiltersT>(value); }
    template<typename FiltersT = Aws::Vector<Filter>>
    DescribeTrafficMirrorFilterRulesRequest& WithFilters(FiltersT&& value) { SetFilters(std::forward<FiltersT>(value)); return *this;}
    template<typename FiltersT = Filter>
    DescribeTrafficMirrorFilterRulesRequest& AddFilters(FiltersT&& value) { m_filtersHasBeenSet = true; m_filters.emplace_back(std::forward<FiltersT>(value)); return *this; }
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
    inline DescribeTrafficMirrorFilterRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
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
    DescribeTrafficMirrorFilterRulesRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_trafficMirrorFilterRuleIds;
    bool m_trafficMirrorFilterRuleIdsHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

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
