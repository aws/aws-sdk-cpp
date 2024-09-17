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


    ///@{
    /**
     * <p>A unique identifier for the fleet for which to retrieve scaling policies. You
     * can use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }
    inline DescribeScalingPoliciesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}
    inline DescribeScalingPoliciesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}
    inline DescribeScalingPoliciesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}
    ///@}

    ///@{
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
    inline bool StatusFilterHasBeenSet() const { return m_statusFilterHasBeenSet; }
    inline void SetStatusFilter(const ScalingStatusType& value) { m_statusFilterHasBeenSet = true; m_statusFilter = value; }
    inline void SetStatusFilter(ScalingStatusType&& value) { m_statusFilterHasBeenSet = true; m_statusFilter = std::move(value); }
    inline DescribeScalingPoliciesRequest& WithStatusFilter(const ScalingStatusType& value) { SetStatusFilter(value); return *this;}
    inline DescribeScalingPoliciesRequest& WithStatusFilter(ScalingStatusType&& value) { SetStatusFilter(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages.</p>
     */
    inline int GetLimit() const{ return m_limit; }
    inline bool LimitHasBeenSet() const { return m_limitHasBeenSet; }
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }
    inline DescribeScalingPoliciesRequest& WithLimit(int value) { SetLimit(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }
    inline DescribeScalingPoliciesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline DescribeScalingPoliciesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline DescribeScalingPoliciesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The fleet location. If you don't specify this value, the response contains
     * the scaling policies of every location in the fleet. </p>
     */
    inline const Aws::String& GetLocation() const{ return m_location; }
    inline bool LocationHasBeenSet() const { return m_locationHasBeenSet; }
    inline void SetLocation(const Aws::String& value) { m_locationHasBeenSet = true; m_location = value; }
    inline void SetLocation(Aws::String&& value) { m_locationHasBeenSet = true; m_location = std::move(value); }
    inline void SetLocation(const char* value) { m_locationHasBeenSet = true; m_location.assign(value); }
    inline DescribeScalingPoliciesRequest& WithLocation(const Aws::String& value) { SetLocation(value); return *this;}
    inline DescribeScalingPoliciesRequest& WithLocation(Aws::String&& value) { SetLocation(std::move(value)); return *this;}
    inline DescribeScalingPoliciesRequest& WithLocation(const char* value) { SetLocation(value); return *this;}
    ///@}
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
