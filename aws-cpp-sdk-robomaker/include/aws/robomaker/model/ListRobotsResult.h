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
#include <aws/robomaker/RoboMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/robomaker/model/Robot.h>
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
namespace RoboMaker
{
namespace Model
{
  class AWS_ROBOMAKER_API ListRobotsResult
  {
  public:
    ListRobotsResult();
    ListRobotsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListRobotsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline const Aws::Vector<Robot>& GetRobots() const{ return m_robots; }

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline void SetRobots(const Aws::Vector<Robot>& value) { m_robots = value; }

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline void SetRobots(Aws::Vector<Robot>&& value) { m_robots = std::move(value); }

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline ListRobotsResult& WithRobots(const Aws::Vector<Robot>& value) { SetRobots(value); return *this;}

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline ListRobotsResult& WithRobots(Aws::Vector<Robot>&& value) { SetRobots(std::move(value)); return *this;}

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline ListRobotsResult& AddRobots(const Robot& value) { m_robots.push_back(value); return *this; }

    /**
     * <p>A list of robots that meet the criteria of the request.</p>
     */
    inline ListRobotsResult& AddRobots(Robot&& value) { m_robots.push_back(std::move(value)); return *this; }


    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline ListRobotsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline ListRobotsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListRobots</code> request. When the results of a <code>ListRobot</code>
     * request exceed <code>maxResults</code>, this value can be used to retrieve the
     * next page of results. This value is <code>null</code> when there are no more
     * results to return. </p>
     */
    inline ListRobotsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<Robot> m_robots;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace RoboMaker
} // namespace Aws
