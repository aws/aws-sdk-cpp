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
    AWS_GAMELIFT_API DescribeFleetCapacityResult() = default;
    AWS_GAMELIFT_API DescribeFleetCapacityResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetCapacityResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects that contains capacity information for each requested
     * fleet ID. Capacity objects are returned only for fleets that currently exist.
     * Changes in desired instance value can take up to 1 minute to be reflected.</p>
     */
    inline const Aws::Vector<FleetCapacity>& GetFleetCapacity() const { return m_fleetCapacity; }
    template<typename FleetCapacityT = Aws::Vector<FleetCapacity>>
    void SetFleetCapacity(FleetCapacityT&& value) { m_fleetCapacityHasBeenSet = true; m_fleetCapacity = std::forward<FleetCapacityT>(value); }
    template<typename FleetCapacityT = Aws::Vector<FleetCapacity>>
    DescribeFleetCapacityResult& WithFleetCapacity(FleetCapacityT&& value) { SetFleetCapacity(std::forward<FleetCapacityT>(value)); return *this;}
    template<typename FleetCapacityT = FleetCapacity>
    DescribeFleetCapacityResult& AddFleetCapacity(FleetCapacityT&& value) { m_fleetCapacityHasBeenSet = true; m_fleetCapacity.emplace_back(std::forward<FleetCapacityT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    DescribeFleetCapacityResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetCapacityResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetCapacity> m_fleetCapacity;
    bool m_fleetCapacityHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
