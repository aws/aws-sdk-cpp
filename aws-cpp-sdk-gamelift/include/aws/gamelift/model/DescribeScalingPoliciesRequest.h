/*
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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/ScalingStatusType.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeScalingPoliciesRequest : public GameLiftRequest
  {
  public:
    DescribeScalingPoliciesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(Aws::String&& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet. Specify the fleet to retrieve scaling policies
     * for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Game session status to filter results on. A scaling policy is only in force
     * when in an Active state. <ul> <li>ACTIVE: The scaling policy is currently in
     * force.</li> <li>UPDATEREQUESTED: A request to update the scaling policy has been
     * received.</li> <li>UPDATING: A change is being made to the scaling policy.</li>
     * <li>DELETEREQUESTED: A request to delete the scaling policy has been
     * received.</li> <li>DELETING: The scaling policy is being deleted.</li>
     * <li>DELETED: The scaling policy has been deleted.</li> <li>ERROR: An error
     * occurred in creating the policy. It should be removed and recreated.</li>
     * </ul></p>
     */
    inline const ScalingStatusType& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Game session status to filter results on. A scaling policy is only in force
     * when in an Active state. <ul> <li>ACTIVE: The scaling policy is currently in
     * force.</li> <li>UPDATEREQUESTED: A request to update the scaling policy has been
     * received.</li> <li>UPDATING: A change is being made to the scaling policy.</li>
     * <li>DELETEREQUESTED: A request to delete the scaling policy has been
     * received.</li> <li>DELETING: The scaling policy is being deleted.</li>
     * <li>DELETED: The scaling policy has been deleted.</li> <li>ERROR: An error
     * occurred in creating the policy. It should be removed and recreated.</li>
     * </ul></p>
     */
    inline void SetStatusFilter(const ScalingStatusType& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. A scaling policy is only in force
     * when in an Active state. <ul> <li>ACTIVE: The scaling policy is currently in
     * force.</li> <li>UPDATEREQUESTED: A request to update the scaling policy has been
     * received.</li> <li>UPDATING: A change is being made to the scaling policy.</li>
     * <li>DELETEREQUESTED: A request to delete the scaling policy has been
     * received.</li> <li>DELETING: The scaling policy is being deleted.</li>
     * <li>DELETED: The scaling policy has been deleted.</li> <li>ERROR: An error
     * occurred in creating the policy. It should be removed and recreated.</li>
     * </ul></p>
     */
    inline void SetStatusFilter(ScalingStatusType&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Game session status to filter results on. A scaling policy is only in force
     * when in an Active state. <ul> <li>ACTIVE: The scaling policy is currently in
     * force.</li> <li>UPDATEREQUESTED: A request to update the scaling policy has been
     * received.</li> <li>UPDATING: A change is being made to the scaling policy.</li>
     * <li>DELETEREQUESTED: A request to delete the scaling policy has been
     * received.</li> <li>DELETING: The scaling policy is being deleted.</li>
     * <li>DELETED: The scaling policy has been deleted.</li> <li>ERROR: An error
     * occurred in creating the policy. It should be removed and recreated.</li>
     * </ul></p>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(const ScalingStatusType& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Game session status to filter results on. A scaling policy is only in force
     * when in an Active state. <ul> <li>ACTIVE: The scaling policy is currently in
     * force.</li> <li>UPDATEREQUESTED: A request to update the scaling policy has been
     * received.</li> <li>UPDATING: A change is being made to the scaling policy.</li>
     * <li>DELETEREQUESTED: A request to delete the scaling policy has been
     * received.</li> <li>DELETING: The scaling policy is being deleted.</li>
     * <li>DELETED: The scaling policy has been deleted.</li> <li>ERROR: An error
     * occurred in creating the policy. It should be removed and recreated.</li>
     * </ul></p>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(ScalingStatusType&& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline long GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(long value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. You can use this parameter with
     * <i>NextToken</i> to get results as a set of sequential pages.</p>
     */
    inline DescribeScalingPoliciesRequest& WithLimit(long value) { SetLimit(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    ScalingStatusType m_statusFilter;
    bool m_statusFilterHasBeenSet;
    long m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
