﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/GameServerInstance.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace GameLift
{
namespace Model
{
  class AWS_GAMELIFT_API DescribeGameServerInstancesResult
  {
  public:
    DescribeGameServerInstancesResult();
    DescribeGameServerInstancesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeGameServerInstancesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline const Aws::Vector<GameServerInstance>& GetGameServerInstances() const{ return m_gameServerInstances; }

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline void SetGameServerInstances(const Aws::Vector<GameServerInstance>& value) { m_gameServerInstances = value; }

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline void SetGameServerInstances(Aws::Vector<GameServerInstance>&& value) { m_gameServerInstances = std::move(value); }

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline DescribeGameServerInstancesResult& WithGameServerInstances(const Aws::Vector<GameServerInstance>& value) { SetGameServerInstances(value); return *this;}

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline DescribeGameServerInstancesResult& WithGameServerInstances(Aws::Vector<GameServerInstance>&& value) { SetGameServerInstances(std::move(value)); return *this;}

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline DescribeGameServerInstancesResult& AddGameServerInstances(const GameServerInstance& value) { m_gameServerInstances.push_back(value); return *this; }

    /**
     * <p> The collection of requested game server instances. </p>
     */
    inline DescribeGameServerInstancesResult& AddGameServerInstances(GameServerInstance&& value) { m_gameServerInstances.push_back(std::move(value)); return *this; }


    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline DescribeGameServerInstancesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline DescribeGameServerInstancesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p> A token that indicates where to resume retrieving results on the next call
     * to this operation. If no token is returned, these results represent the end of
     * the list. </p>
     */
    inline DescribeGameServerInstancesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<GameServerInstance> m_gameServerInstances;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
