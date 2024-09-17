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
    AWS_EC2_API DescribeTrafficMirrorFilterRulesRequest();

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
    inline const Aws::Vector<Aws::String>& GetTrafficMirrorFilterRuleIds() const{ return m_trafficMirrorFilterRuleIds; }
    inline bool TrafficMirrorFilterRuleIdsHasBeenSet() const { return m_trafficMirrorFilterRuleIdsHasBeenSet; }
    inline void SetTrafficMirrorFilterRuleIds(const Aws::Vector<Aws::String>& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds = value; }
    inline void SetTrafficMirrorFilterRuleIds(Aws::Vector<Aws::String>&& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds = std::move(value); }
    inline DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterRuleIds(const Aws::Vector<Aws::String>& value) { SetTrafficMirrorFilterRuleIds(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterRuleIds(Aws::Vector<Aws::String>&& value) { SetTrafficMirrorFilterRuleIds(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& AddTrafficMirrorFilterRuleIds(const Aws::String& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds.push_back(value); return *this; }
    inline DescribeTrafficMirrorFilterRulesRequest& AddTrafficMirrorFilterRuleIds(Aws::String&& value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds.push_back(std::move(value)); return *this; }
    inline DescribeTrafficMirrorFilterRulesRequest& AddTrafficMirrorFilterRuleIds(const char* value) { m_trafficMirrorFilterRuleIdsHasBeenSet = true; m_trafficMirrorFilterRuleIds.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>Traffic filter ID.</p>
     */
    inline const Aws::String& GetTrafficMirrorFilterId() const{ return m_trafficMirrorFilterId; }
    inline bool TrafficMirrorFilterIdHasBeenSet() const { return m_trafficMirrorFilterIdHasBeenSet; }
    inline void SetTrafficMirrorFilterId(const Aws::String& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = value; }
    inline void SetTrafficMirrorFilterId(Aws::String&& value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId = std::move(value); }
    inline void SetTrafficMirrorFilterId(const char* value) { m_trafficMirrorFilterIdHasBeenSet = true; m_trafficMirrorFilterId.assign(value); }
    inline DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterId(const Aws::String& value) { SetTrafficMirrorFilterId(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterId(Aws::String&& value) { SetTrafficMirrorFilterId(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithTrafficMirrorFilterId(const char* value) { SetTrafficMirrorFilterId(value); return *this;}
    ///@}

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
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeTrafficMirrorFilterRulesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeTrafficMirrorFilterRulesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return with a single call. To retrieve the
     * remaining results, make another call with the returned <code>nextToken</code>
     * value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline DescribeTrafficMirrorFilterRulesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The token for the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeTrafficMirrorFilterRulesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeTrafficMirrorFilterRulesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_trafficMirrorFilterRuleIds;
    bool m_trafficMirrorFilterRuleIdsHasBeenSet = false;

    Aws::String m_trafficMirrorFilterId;
    bool m_trafficMirrorFilterIdHasBeenSet = false;

    bool m_dryRun;
    bool m_dryRunHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
