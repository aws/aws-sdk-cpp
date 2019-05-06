/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class AWS_EC2_API DescribeFleetsRequest : public EC2Request
  {
  public:
    DescribeFleetsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeFleets"; }

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
    inline DescribeFleetsRequest& WithDryRun(bool value) { SetDryRun(value); return *this;}


    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of results to return in a single call. Specify a value
     * between 1 and 1000. The default value is 1000. To retrieve the remaining
     * results, make another call with the returned <code>NextToken</code> value.</p>
     */
    inline DescribeFleetsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


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
    inline DescribeFleetsRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetsRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The token for the next set of results.</p>
     */
    inline DescribeFleetsRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline bool FleetIdsHasBeenSet() const { return m_fleetIdsHasBeenSet; }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = value; }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = std::move(value); }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline DescribeFleetsRequest& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline DescribeFleetsRequest& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(std::move(value)); return *this;}

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline DescribeFleetsRequest& AddFleetIds(const Aws::String& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline DescribeFleetsRequest& AddFleetIds(Aws::String&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The ID of the EC2 Fleets.</p>
     */
    inline DescribeFleetsRequest& AddFleetIds(const char* value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }


    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline DescribeFleetsRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline DescribeFleetsRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline DescribeFleetsRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }

    /**
     * <p>The filters.</p> <ul> <li> <p> <code>activity-status</code> - The progress of
     * the EC2 Fleet ( <code>error</code> | <code>pending-fulfillment</code> |
     * <code>pending-termination</code> | <code>fulfilled</code>).</p> </li> <li> <p>
     * <code>excess-capacity-termination-policy</code> - Indicates whether to terminate
     * running instances if the target capacity is decreased below the current EC2
     * Fleet size (<code>true</code> | <code>false</code>).</p> </li> <li> <p>
     * <code>fleet-state</code> - The state of the EC2 Fleet (<code>submitted</code> |
     * <code>active</code> | <code>deleted</code> | <code>failed</code> |
     * <code>deleted-running</code> | <code>deleted-terminating</code> |
     * <code>modifying</code>).</p> </li> <li> <p>
     * <code>replace-unhealthy-instances</code> - Indicates whether EC2 Fleet should
     * replace unhealthy instances (<code>true</code> | <code>false</code>).</p> </li>
     * <li> <p> <code>type</code> - The type of request (<code>instant</code> |
     * <code>request</code> | <code>maintain</code>).</p> </li> </ul>
     */
    inline DescribeFleetsRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }

  private:

    bool m_dryRun;
    bool m_dryRunHasBeenSet;

    int m_maxResults;
    bool m_maxResultsHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;

    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet;
  };

} // namespace Model
} // namespace EC2
} // namespace Aws
