/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetCapacity.h>
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
  class DescribeFleetLocationCapacityResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult();
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist. Changes
     * in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline const FleetCapacity& GetFleetCapacity() const{ return m_fleetCapacity; }
    inline void SetFleetCapacity(const FleetCapacity& value) { m_fleetCapacity = value; }
    inline void SetFleetCapacity(FleetCapacity&& value) { m_fleetCapacity = std::move(value); }
    inline DescribeFleetLocationCapacityResult& WithFleetCapacity(const FleetCapacity& value) { SetFleetCapacity(value); return *this;}
    inline DescribeFleetLocationCapacityResult& WithFleetCapacity(FleetCapacity&& value) { SetFleetCapacity(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeFleetLocationCapacityResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeFleetLocationCapacityResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeFleetLocationCapacityResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    FleetCapacity m_fleetCapacity;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
