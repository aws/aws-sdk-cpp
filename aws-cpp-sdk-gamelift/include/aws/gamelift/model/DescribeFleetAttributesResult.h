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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetAttributes.h>

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
   * <p>Represents the returned data in response to a request action.</p>
   */
  class AWS_GAMELIFT_API DescribeFleetAttributesResult
  {
  public:
    DescribeFleetAttributesResult();
    DescribeFleetAttributesResult(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetAttributesResult& operator=(const AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline const Aws::Vector<FleetAttributes>& GetFleetAttributes() const{ return m_fleetAttributes; }

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline void SetFleetAttributes(const Aws::Vector<FleetAttributes>& value) { m_fleetAttributes = value; }

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline void SetFleetAttributes(Aws::Vector<FleetAttributes>&& value) { m_fleetAttributes = value; }

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline DescribeFleetAttributesResult& WithFleetAttributes(const Aws::Vector<FleetAttributes>& value) { SetFleetAttributes(value); return *this;}

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline DescribeFleetAttributesResult& WithFleetAttributes(Aws::Vector<FleetAttributes>&& value) { SetFleetAttributes(value); return *this;}

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline DescribeFleetAttributesResult& AddFleetAttributes(const FleetAttributes& value) { m_fleetAttributes.push_back(value); return *this; }

    /**
     * <p>Collection of objects containing attribute metadata for each requested fleet
     * ID.</p>
     */
    inline DescribeFleetAttributesResult& AddFleetAttributes(FleetAttributes&& value) { m_fleetAttributes.push_back(value); return *this; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = value; }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token indicating where to resume retrieving results on the next call to this
     * action. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:
    Aws::Vector<FleetAttributes> m_fleetAttributes;
    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
