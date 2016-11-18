﻿/*
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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeFleetCapacityRequest : public GameLiftRequest
  {
  public:
    DescribeFleetCapacityRequest();
    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = value; }

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds = value; }

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline DescribeFleetCapacityRequest& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline DescribeFleetCapacityRequest& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(value); return *this;}

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline DescribeFleetCapacityRequest& AddFleetIds(const Aws::String& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline DescribeFleetCapacityRequest& AddFleetIds(Aws::String&& value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>Unique identifier for the fleet(s) you want to retrieve capacity information
     * for. To request capacity information for all fleets, leave this parameter
     * empty.</p>
     */
    inline DescribeFleetCapacityRequest& AddFleetIds(const char* value) { m_fleetIdsHasBeenSet = true; m_fleetIds.push_back(value); return *this; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is ignored when the request specifies one or a list of fleet IDs.</p>
     */
    inline int GetLimit() const{ return m_limit; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is ignored when the request specifies one or a list of fleet IDs.</p>
     */
    inline void SetLimit(int value) { m_limitHasBeenSet = true; m_limit = value; }

    /**
     * <p>Maximum number of results to return. Use this parameter with
     * <code>NextToken</code> to get results as a set of sequential pages. This
     * parameter is ignored when the request specifies one or a list of fleet IDs.</p>
     */
    inline DescribeFleetCapacityRequest& WithLimit(int value) { SetLimit(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline DescribeFleetCapacityRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline DescribeFleetCapacityRequest& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating the start of the next sequential page of results. Use the
     * token that is returned with a previous call to this action. To specify the start
     * of the result set, do not specify a value. This parameter is ignored when the
     * request specifies one or a list of fleet IDs.</p>
     */
    inline DescribeFleetCapacityRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_fleetIds;
    bool m_fleetIdsHasBeenSet;
    int m_limit;
    bool m_limitHasBeenSet;
    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
