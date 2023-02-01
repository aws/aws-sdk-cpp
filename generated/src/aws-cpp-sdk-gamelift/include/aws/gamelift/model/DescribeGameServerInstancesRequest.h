/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/GameLiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace GameLift
{
namespace Model
{

  /**
   */
  class DescribeGameServerInstancesRequest : public GameLiftRequest
  {
  public:
    AWS_GAMELIFT_API DescribeGameServerInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeGameServerInstances"; }

    AWS_GAMELIFT_API Aws::String SerializePayload() const override;

    AWS_GAMELIFT_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline const Aws::String& GetGameServerGroupName() const{ return m_gameServerGroupName; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline bool GameServerGroupNameHasBeenSet() const { return m_gameServerGroupNameHasBeenSet; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const Aws::String& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = value; }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(Aws::String&& value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName = std::move(value); }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline void SetGameServerGroupName(const char* value) { m_gameServerGroupNameHasBeenSet = true; m_gameServerGroupName.assign(value); }

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline DescribeGameServerInstancesRequest& WithGameServerGroupName(const Aws::String& value) { SetGameServerGroupName(value); return *this;}

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline DescribeGameServerInstancesRequest& WithGameServerGroupName(Aws::String&& value) { SetGameServerGroupName(std::move(value)); return *this;}

    /**
     * <p>A unique identifier for the game server group. Use either the name or ARN
     * value.</p>
     */
    inline DescribeGameServerInstancesRequest& WithGameServerGroupName(const char* value) { SetGameServerGroupName(value); return *this;}


    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline const Aws::Vector<Aws::String>& GetInstanceIds() const{ return m_instanceIds; }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline bool InstanceIdsHasBeenSet() const { return m_instanceIdsHasBeenSet; }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline void SetInstanceIds(const Aws::Vector<Aws::String>& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = value; }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline void SetInstanceIds(Aws::Vector<Aws::String>&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds = std::move(value); }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline DescribeGameServerInstancesRequest& WithInstanceIds(const Aws::Vector<Aws::String>& value) { SetInstanceIds(value); return *this;}

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline DescribeGameServerInstancesRequest& WithInstanceIds(Aws::Vector<Aws::String>&& value) { SetInstanceIds(std::move(value)); return *this;}

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline DescribeGameServerInstancesRequest& AddInstanceIds(const Aws::String& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline DescribeGameServerInstancesRequest& AddInstanceIds(Aws::String&& value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon EC2 instance IDs that you want to retrieve status on. Amazon EC2
     * instance IDs use a 17-character format, for example:
     * <code>i-1234567890abcdef0</code>. To retrieve all instances in the game server
     * group, leave this parameter empty. </p>
     */
    inline DescribeGameServerInstancesRequest& AddInstanceIds(const char* value) { m_instanceIdsHasBeenSet = true; m_instanceIds.push_back(value); return *this; }


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
    inline DescribeGameServerInstancesRequest& WithLimit(int value) { SetLimit(value); return *this;}


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
    inline DescribeGameServerInstancesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeGameServerInstancesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates the start of the next sequential page of results. Use
     * the token that is returned with a previous call to this operation. To start at
     * the beginning of the result set, do not specify a value.</p>
     */
    inline DescribeGameServerInstancesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_gameServerGroupName;
    bool m_gameServerGroupNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_instanceIds;
    bool m_instanceIdsHasBeenSet = false;

    int m_limit;
    bool m_limitHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
