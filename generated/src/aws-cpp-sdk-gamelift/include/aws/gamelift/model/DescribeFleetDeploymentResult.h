/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/gamelift/model/FleetDeployment.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/LocationalDeployment.h>
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
  class DescribeFleetDeploymentResult
  {
  public:
    AWS_GAMELIFT_API DescribeFleetDeploymentResult() = default;
    AWS_GAMELIFT_API DescribeFleetDeploymentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API DescribeFleetDeploymentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested deployment information.</p>
     */
    inline const FleetDeployment& GetFleetDeployment() const { return m_fleetDeployment; }
    template<typename FleetDeploymentT = FleetDeployment>
    void SetFleetDeployment(FleetDeploymentT&& value) { m_fleetDeploymentHasBeenSet = true; m_fleetDeployment = std::forward<FleetDeploymentT>(value); }
    template<typename FleetDeploymentT = FleetDeployment>
    DescribeFleetDeploymentResult& WithFleetDeployment(FleetDeploymentT&& value) { SetFleetDeployment(std::forward<FleetDeploymentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the deployment is for a multi-location fleet, the requests returns the
     * deployment status in each fleet location.</p>
     */
    inline const Aws::Map<Aws::String, LocationalDeployment>& GetLocationalDeployments() const { return m_locationalDeployments; }
    template<typename LocationalDeploymentsT = Aws::Map<Aws::String, LocationalDeployment>>
    void SetLocationalDeployments(LocationalDeploymentsT&& value) { m_locationalDeploymentsHasBeenSet = true; m_locationalDeployments = std::forward<LocationalDeploymentsT>(value); }
    template<typename LocationalDeploymentsT = Aws::Map<Aws::String, LocationalDeployment>>
    DescribeFleetDeploymentResult& WithLocationalDeployments(LocationalDeploymentsT&& value) { SetLocationalDeployments(std::forward<LocationalDeploymentsT>(value)); return *this;}
    template<typename LocationalDeploymentsKeyT = Aws::String, typename LocationalDeploymentsValueT = LocationalDeployment>
    DescribeFleetDeploymentResult& AddLocationalDeployments(LocationalDeploymentsKeyT&& key, LocationalDeploymentsValueT&& value) {
      m_locationalDeploymentsHasBeenSet = true; m_locationalDeployments.emplace(std::forward<LocationalDeploymentsKeyT>(key), std::forward<LocationalDeploymentsValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeFleetDeploymentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    FleetDeployment m_fleetDeployment;
    bool m_fleetDeploymentHasBeenSet = false;

    Aws::Map<Aws::String, LocationalDeployment> m_locationalDeployments;
    bool m_locationalDeploymentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
