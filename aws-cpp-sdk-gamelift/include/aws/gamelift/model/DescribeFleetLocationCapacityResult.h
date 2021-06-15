/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
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
  /**
   * <p>Represents the returned data in response to a request
   * operation.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/gamelift-2015-10-01/DescribeFleetLocationCapacityOutput">AWS
   * API Reference</a></p>
   */
  class AWS_GAMELIFT_API DescribeFleetLocationCapacityResult
  {
  public:
    DescribeFleetLocationCapacityResult();
    DescribeFleetLocationCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    DescribeFleetLocationCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist.</p>
     */
    inline const FleetCapacity& GetFleetCapacity() const{ return m_fleetCapacity; }

    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist.</p>
     */
    inline void SetFleetCapacity(const FleetCapacity& value) { m_fleetCapacity = value; }

    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist.</p>
     */
    inline void SetFleetCapacity(FleetCapacity&& value) { m_fleetCapacity = std::move(value); }

    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist.</p>
     */
    inline DescribeFleetLocationCapacityResult& WithFleetCapacity(const FleetCapacity& value) { SetFleetCapacity(value); return *this;}

    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist.</p>
     */
    inline DescribeFleetLocationCapacityResult& WithFleetCapacity(FleetCapacity&& value) { SetFleetCapacity(std::move(value)); return *this;}

  private:

    FleetCapacity m_fleetCapacity;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
