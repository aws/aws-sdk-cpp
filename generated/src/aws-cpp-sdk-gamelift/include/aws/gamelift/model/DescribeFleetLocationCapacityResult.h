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
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult() = default;
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetLocationCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Resource capacity information for the requested fleet location. Capacity
     * objects are returned only for fleets and locations that currently exist. Changes
     * in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline const FleetCapacity& GetFleetCapacity() const { return m_fleetCapacity; }
    template<typename FleetCapacityT = FleetCapacity>
    void SetFleetCapacity(FleetCapacityT&& value) { m_fleetCapacityHasBeenSet = true; m_fleetCapacity = std::forward<FleetCapacityT>(value); }
    template<typename FleetCapacityT = FleetCapacity>
    DescribeFleetLocationCapacityResult& WithFleetCapacity(FleetCapacityT&& value) { SetFleetCapacity(std::forward<FleetCapacityT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetLocationCapacityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FleetCapacity m_fleetCapacity;
    bool m_fleetCapacityHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
