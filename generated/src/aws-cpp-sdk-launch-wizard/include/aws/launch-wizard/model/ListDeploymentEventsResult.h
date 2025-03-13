/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/launch-wizard/model/DeploymentEventDataSummary.h>
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
namespace LaunchWizard
{
namespace Model
{
  class ListDeploymentEventsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult() = default;
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListDeploymentEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Lists the deployment events.</p>
     */
    inline const Aws::Vector<DeploymentEventDataSummary>& GetDeploymentEvents() const { return m_deploymentEvents; }
    template<typename DeploymentEventsT = Aws::Vector<DeploymentEventDataSummary>>
    void SetDeploymentEvents(DeploymentEventsT&& value) { m_deploymentEventsHasBeenSet = true; m_deploymentEvents = std::forward<DeploymentEventsT>(value); }
    template<typename DeploymentEventsT = Aws::Vector<DeploymentEventDataSummary>>
    ListDeploymentEventsResult& WithDeploymentEvents(DeploymentEventsT&& value) { SetDeploymentEvents(std::forward<DeploymentEventsT>(value)); return *this;}
    template<typename DeploymentEventsT = DeploymentEventDataSummary>
    ListDeploymentEventsResult& AddDeploymentEvents(DeploymentEventsT&& value) { m_deploymentEventsHasBeenSet = true; m_deploymentEvents.emplace_back(std::forward<DeploymentEventsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentEventsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeploymentEventsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentEventDataSummary> m_deploymentEvents;
    bool m_deploymentEventsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
