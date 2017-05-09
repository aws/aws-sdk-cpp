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
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  /**
   * <p>Represents the returned data in response to a request action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/ListFleetsOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API ListFleetsResult
  {
  public:
    ListFleetsResult();
    ListFleetsResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    ListFleetsResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFleetIds() const{ return m_fleetIds; }

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline void SetFleetIds(const Aws::Vector<Aws::String>& value) { m_fleetIds = value; }

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline void SetFleetIds(Aws::Vector<Aws::String>&& value) { m_fleetIds = std::move(value); }

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline ListFleetsResult& WithFleetIds(const Aws::Vector<Aws::String>& value) { SetFleetIds(value); return *this;}

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline ListFleetsResult& WithFleetIds(Aws::Vector<Aws::String>&& value) { SetFleetIds(std::move(value)); return *this;}

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline ListFleetsResult& AddFleetIds(const Aws::String& value) { m_fleetIds.push_back(value); return *this; }

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline ListFleetsResult& AddFleetIds(Aws::String&& value) { m_fleetIds.push_back(std::move(value)); return *this; }

    /**
     * <p>Set of fleet IDs matching the list request. You can retrieve additional
     * information about all returned fleets by passing this result set to a call to
     * <a>DescribeFleetAttributes</a>, <a>DescribeFleetCapacity</a>, or
     * <a>DescribeFleetUtilization</a>.</p>
     */
    inline ListFleetsResult& AddFleetIds(const char* value) { m_fleetIds.push_back(value); return *this; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListFleetsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListFleetsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token that indicates where to resume retrieving results on the next call to
     * this action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline ListFleetsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<Aws::String> m_fleetIds;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
