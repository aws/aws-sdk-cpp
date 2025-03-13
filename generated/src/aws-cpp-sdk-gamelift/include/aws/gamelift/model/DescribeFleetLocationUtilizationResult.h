/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetUtilization.h>
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
  class DescribeFleetLocationUtilizationResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult() = default;
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetLocationUtilizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Utilization information for the requested fleet location. Utilization objects
     * are returned only for fleets and locations that currently exist.</p>
     */
    inline const FleetUtilization& GetFleetUtilization() const { return m_fleetUtilization; }
    template<typename FleetUtilizationT = FleetUtilization>
    void SetFleetUtilization(FleetUtilizationT&& value) { m_fleetUtilizationHasBeenSet = true; m_fleetUtilization = std::forward<FleetUtilizationT>(value); }
    template<typename FleetUtilizationT = FleetUtilization>
    DescribeFleetLocationUtilizationResult& WithFleetUtilization(FleetUtilizationT&& value) { SetFleetUtilization(std::forward<FleetUtilizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetLocationUtilizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FleetUtilization m_fleetUtilization;
    bool m_fleetUtilizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
