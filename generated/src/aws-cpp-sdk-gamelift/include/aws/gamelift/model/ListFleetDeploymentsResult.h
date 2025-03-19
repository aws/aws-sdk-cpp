/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/gamelift/GameLift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/gamelift/model/FleetDeployment.h>
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
  class ListFleetDeploymentsResult
  {
  public:
    AWS_GAMELIFT_API ListFleetDeploymentsResult() = default;
    AWS_GAMELIFT_API ListFleetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListFleetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested deployment information.</p>
     */
    inline const Aws::Vector<FleetDeployment>& GetFleetDeployments() const { return m_fleetDeployments; }
    template<typename FleetDeploymentsT = Aws::Vector<FleetDeployment>>
    void SetFleetDeployments(FleetDeploymentsT&& value) { m_fleetDeploymentsHasBeenSet = true; m_fleetDeployments = std::forward<FleetDeploymentsT>(value); }
    template<typename FleetDeploymentsT = Aws::Vector<FleetDeployment>>
    ListFleetDeploymentsResult& WithFleetDeployments(FleetDeploymentsT&& value) { SetFleetDeployments(std::forward<FleetDeploymentsT>(value)); return *this;}
    template<typename FleetDeploymentsT = FleetDeployment>
    ListFleetDeploymentsResult& AddFleetDeployments(FleetDeploymentsT&& value) { m_fleetDeploymentsHasBeenSet = true; m_fleetDeployments.emplace_back(std::forward<FleetDeploymentsT>(value)); return *this; }
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
    ListFleetDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListFleetDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<FleetDeployment> m_fleetDeployments;
    bool m_fleetDeploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
