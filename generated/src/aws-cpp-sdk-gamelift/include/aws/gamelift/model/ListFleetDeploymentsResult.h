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
    AWS_GAMELIFT_API ListFleetDeploymentsResult();
    AWS_GAMELIFT_API ListFleetDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GAMELIFT_API ListFleetDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The requested deployment information.</p>
     */
    inline const Aws::Vector<FleetDeployment>& GetFleetDeployments() const{ return m_fleetDeployments; }
    inline void SetFleetDeployments(const Aws::Vector<FleetDeployment>& value) { m_fleetDeployments = value; }
    inline void SetFleetDeployments(Aws::Vector<FleetDeployment>&& value) { m_fleetDeployments = std::move(value); }
    inline ListFleetDeploymentsResult& WithFleetDeployments(const Aws::Vector<FleetDeployment>& value) { SetFleetDeployments(value); return *this;}
    inline ListFleetDeploymentsResult& WithFleetDeployments(Aws::Vector<FleetDeployment>&& value) { SetFleetDeployments(std::move(value)); return *this;}
    inline ListFleetDeploymentsResult& AddFleetDeployments(const FleetDeployment& value) { m_fleetDeployments.push_back(value); return *this; }
    inline ListFleetDeploymentsResult& AddFleetDeployments(FleetDeployment&& value) { m_fleetDeployments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A token that indicates where to resume retrieving results on the next call to
     * this operation. If no token is returned, these results represent the end of the
     * list.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListFleetDeploymentsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListFleetDeploymentsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListFleetDeploymentsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListFleetDeploymentsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListFleetDeploymentsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListFleetDeploymentsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::Vector<FleetDeployment> m_fleetDeployments;

    Aws::String m_nextToken;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace GameLift
} // namespace Aws
