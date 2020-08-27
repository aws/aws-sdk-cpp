/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   * <p>Represents the input for a request operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeInstancesInput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeInstancesRequest : public GameLiftRequest
  {
  public:
    DescribeInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeInstances"; }

    Aws::String SerializePayload() const override;

    Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline const Aws::String& GetFleetId() const{ return m_fleetId; }

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline bool FleetIdHasBeenSet() const { return m_fleetIdHasBeenSet; }

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const Aws::String& value) { m_fleetIdHasBeenSet = true; m_fleetId = value; }

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(Aws::String&& value) { m_fleetIdHasBeenSet = true; m_fleetId = std::move(value); }

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline void SetFleetId(const char* value) { m_fleetIdHasBeenSet = true; m_fleetId.assign(value); }

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeInstancesRequest& WithFleetId(const Aws::String& value) { SetFleetId(value); return *this;}

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeInstancesRequest& WithFleetId(Aws::String&& value) { SetFleetId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for a fleet to retrieve instance information for. You can
     * use either the fleet ID or ARN value.</p>
     */
    inline DescribeInstancesRequest& WithFleetId(const char* value) { SetFleetId(value); return *this;}


    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline const Aws::String& GetInstanceId() const{ return m_instanceId; }

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline bool InstanceIdHasBeenSet() const { return m_instanceIdHasBeenSet; }

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline void SetInstanceId(const Aws::String& value) { m_instanceIdHasBeenSet = true; m_instanceId = value; }

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline void SetInstanceId(Aws::String&& value) { m_instanceIdHasBeenSet = true; m_instanceId = std::move(value); }

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline void SetInstanceId(const char* value) { m_instanceIdHasBeenSet = true; m_instanceId.assign(value); }

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline DescribeInstancesRequest& WithInstanceId(const Aws::String& value) { SetInstanceId(value); return *this;}

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline DescribeInstancesRequest& WithInstanceId(Aws::String&& value) { SetInstanceId(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for an instance to retrieve. Specify an instance ID or
     * leave blank to retrieve all instances in the fleet.</p>
     */
    inline DescribeInstancesRequest& WithInstanceId(const char* value) { SetInstanceId(value); return *this;}


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
    inline DescribeInstancesRequest& WithLimit(int value) { SetLimit(value); return *this;}


    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_fleetId;
    bool m_fleetIdHasBeenSet;

    Aws::String m_instanceId;
    bool m_instanceIdHasBeenSet;

    int m_limit;
    bool m_limitHasBeenSet;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
