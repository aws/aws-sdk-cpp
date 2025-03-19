/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ecs/ECS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ecs/model/ServiceDeploymentBrief.h>
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
namespace ECS
{
namespace Model
{
  class ListServiceDeploymentsResult
  {
  public:
    AWS_ECS_API ListServiceDeploymentsResult() = default;
    AWS_ECS_API ListServiceDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_ECS_API ListServiceDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>An overview of the service deployment, including the following
     * properties:</p> <ul> <li> <p>The ARN of the service deployment.</p> </li> <li>
     * <p>The ARN of the service being deployed.</p> </li> <li> <p>The ARN of the
     * cluster that hosts the service in the service deployment.</p> </li> <li> <p>The
     * time that the service deployment started.</p> </li> <li> <p>The time that the
     * service deployment completed.</p> </li> <li> <p>The service deployment
     * status.</p> </li> <li> <p>Information about why the service deployment is in the
     * current state.</p> </li> <li> <p>The ARN of the service revision that is being
     * deployed.</p> </li> </ul>
     */
    inline const Aws::Vector<ServiceDeploymentBrief>& GetServiceDeployments() const { return m_serviceDeployments; }
    template<typename ServiceDeploymentsT = Aws::Vector<ServiceDeploymentBrief>>
    void SetServiceDeployments(ServiceDeploymentsT&& value) { m_serviceDeploymentsHasBeenSet = true; m_serviceDeployments = std::forward<ServiceDeploymentsT>(value); }
    template<typename ServiceDeploymentsT = Aws::Vector<ServiceDeploymentBrief>>
    ListServiceDeploymentsResult& WithServiceDeployments(ServiceDeploymentsT&& value) { SetServiceDeployments(std::forward<ServiceDeploymentsT>(value)); return *this;}
    template<typename ServiceDeploymentsT = ServiceDeploymentBrief>
    ListServiceDeploymentsResult& AddServiceDeployments(ServiceDeploymentsT&& value) { m_serviceDeploymentsHasBeenSet = true; m_serviceDeployments.emplace_back(std::forward<ServiceDeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The <code>nextToken</code> value to include in a future
     * <code>ListServiceDeployments</code> request. When the results of a
     * <code>ListServiceDeployments</code> request exceed <code>maxResults</code>, this
     * value can be used to retrieve the next page of results. This value is null when
     * there are no more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListServiceDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListServiceDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<ServiceDeploymentBrief> m_serviceDeployments;
    bool m_serviceDeploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace ECS
} // namespace Aws
