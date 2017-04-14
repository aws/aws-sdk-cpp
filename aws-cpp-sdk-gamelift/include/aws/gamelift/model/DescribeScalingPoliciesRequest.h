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
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeScalingPoliciesInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeScalingPoliciesRequest : public GameLiftRequest
  {
  public:
    DescribeScalingPoliciesRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>Unique identifier for a fleet to retrieve scaling policies for.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline const ScalingStatusType& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatusFilter(const ScalingStatusType& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatusFilter(ScalingStatusType&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(const ScalingStatusType& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> – The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * – A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> – A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> – A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> – The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> – The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> – An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(ScalingStatusType&& value) { SetStatusFilter(std::move(value)); return *this;}

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline DescribeScalingPoliciesRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this action. To specify the
     * start of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;
    ScalingStatusType m_statusFilter;
    bool m_statusFilterHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
