/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetUtilization.h>
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
  class DescribeFleetUtilizationResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetUtilizationResult() = default;
    AWS_GAMELIFT_API DescribeFleetUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A collection of objects containing utilization information for each requested
     * fleet ID. Utilization objects are returned only for fleets that currently
     * exist.</p>
     */
    inline const Aws::Vector<FleetUtilization>& GetFleetUtilization() const { return m_fleetUtilization; }
    template<typename FleetUtilizationT = Aws::Vector<FleetUtilization>>
    void SetFleetUtilization(FleetUtilizationT&& value) { m_fleetUtilizationHasBeenSet = true; m_fleetUtilization = std::forward<FleetUtilizationT>(value); }
    template<typename FleetUtilizationT = Aws::Vector<FleetUtilization>>
    DescribeFleetUtilizationResult& WithFleetUtilization(FleetUtilizationT&& value) { SetFleetUtilization(std::forward<FleetUtilizationT>(value)); return *this;}
    template<typename FleetUtilizationT = FleetUtilization>
    DescribeFleetUtilizationResult& AddFleetUtilization(FleetUtilizationT&& value) { m_fleetUtilizationHasBeenSet = true; m_fleetUtilization.emplace_back(std::forward<FleetUtilizationT>(value)); return *this; }
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
    DescribeFleetUtilizationResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetUtilizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetUtilization> m_fleetUtilization;
    bool m_fleetUtilizationHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
