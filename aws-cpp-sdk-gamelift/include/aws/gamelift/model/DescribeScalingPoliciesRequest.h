/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
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
   */
  class DescribeScalingPoliciesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeScalingPoliciesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeScalingPolicies"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline const ScalingStatusType& GetStatusFilter() const{ return m_statusFilter; }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatusFilter(const ScalingStatusType& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline void SetStatusFilter(ScalingStatusType&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(const ScalingStatusType& value) { SetStatusFilter(value); return *this;}

    /**
     * <p>Scaling policy status to filter results on. A scaling policy is only in force
     * when in an <code>ACTIVE</code> status.</p> <ul> <li> <p> <b>ACTIVE</b> -- The
     * scaling policy is currently in force.</p> </li> <li> <p> <b>UPDATEREQUESTED</b>
     * -- A request to update the scaling policy has been received.</p> </li> <li> <p>
     * <b>UPDATING</b> -- A change is being made to the scaling policy.</p> </li> <li>
     * <p> <b>DELETEREQUESTED</b> -- A request to delete the scaling policy has been
     * received.</p> </li> <li> <p> <b>DELETING</b> -- The scaling policy is being
     * deleted.</p> </li> <li> <p> <b>DELETED</b> -- The scaling policy has been
     * deleted.</p> </li> <li> <p> <b>ERROR</b> -- An error occurred in creating the
     * policy. It should be removed and recreated.</p> </li> </ul>
     */
    inline DescribeScalingPoliciesRequest& WithStatusFilter(ScalingStatusType&& value) { SetStatusFilter(std::move(value)); return *this;}


    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline DescribeScalingPoliciesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeScalingPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline DescribeScalingPoliciesRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline DescribeScalingPoliciesRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}

    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline DescribeScalingPoliciesRequest& WithLocation(const char* value) { SetLocation(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet = false;

    ScalingStatusType m_statusFilter;
    bool m_statusFilterHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_location;
    bool m_locationHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
