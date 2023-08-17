/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetCapacity.h>
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
  class DescribeFleetCapacityResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetCapacityResult();
    AWS_GAMELIFT_API DescribeFleetCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline const Aws::Vector<FleetCapacity>& GetFleetCapacity() const{ return m_fleetCapacity; }

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline void SetFleetCapacity(const Aws::Vector<FleetCapacity>& value) { m_fleetCapacity = value; }

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline void SetFleetCapacity(Aws::Vector<FleetCapacity>&& value) { m_fleetCapacity = std::move(value); }

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline DescribeFleetCapacityResult& WithFleetCapacity(const Aws::Vector<FleetCapacity>& value) { SetFleetCapacity(value); return *this;}

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline DescribeFleetCapacityResult& WithFleetCapacity(Aws::Vector<FleetCapacity>&& value) { SetFleetCapacity(std::move(value)); return *this;}

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline DescribeFleetCapacityResult& AddFleetCapacity(const FleetCapacity& value) { m_fleetCapacity.push_back(value); return *this; }

    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline DescribeFleetCapacityResult& AddFleetCapacity(FleetCapacity&& value) { m_fleetCapacity.push_back(std::move(value)); return *this; }


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
    inline DescribeFleetCapacityResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetCapacityResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline DescribeFleetCapacityResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline DescribeFleetCapacityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline DescribeFleetCapacityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline DescribeFleetCapacityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::Vector<FleetCapacity> m_fleetCapacity;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
