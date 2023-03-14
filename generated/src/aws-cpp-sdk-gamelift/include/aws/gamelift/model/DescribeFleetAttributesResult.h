/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetAttributes.h>
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
  class DescribeFleetAttributesResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetAttributesResult();
    AWS_GAMELIFT_API DescribeFleetAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline const Aws::Vector<FleetAttributes>& GetFleetAttributes() const{ return m_fleetAttributes; }

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline void SetFleetAttributes(const Aws::Vector<FleetAttributes>& value) { m_fleetAttributes = value; }

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline void SetFleetAttributes(Aws::Vector<FleetAttributes>&& value) { m_fleetAttributes = std::move(value); }

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline DescribeFleetAttributesResult& WithFleetAttributes(const Aws::Vector<FleetAttributes>& value) { SetFleetAttributes(value); return *this;}

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline DescribeFleetAttributesResult& WithFleetAttributes(Aws::Vector<FleetAttributes>&& value) { SetFleetAttributes(std::move(value)); return *this;}

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline DescribeFleetAttributesResult& AddFleetAttributes(const FleetAttributes& value) { m_fleetAttributes.push_back(value); return *this; }

    /**
     * <p>A collection of objects containing attribute metadata for each requested
     * fleet ID. Attribute objects are returned only for fleets that currently
     * exist.</p>
     */
    inline DescribeFleetAttributesResult& AddFleetAttributes(FleetAttributes&& value) { m_fleetAttributes.push_back(std::move(value)); return *this; }


    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetAttributesResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFleetAttributesResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFleetAttributesResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFleetAttributesResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FleetAttributes> m_fleetAttributes;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
