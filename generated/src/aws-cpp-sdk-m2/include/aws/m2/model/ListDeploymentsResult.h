/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/m2/MainframeModernization_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/m2/model/DeploymentSummary.h>
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
namespace MainframeModernization
{
namespace Model
{
  class ListDeploymentsResult
  {
  public:
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult() = default;
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MAINFRAMEMODERNIZATION_API ListDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The list of deployments that is returned.</p>
     */
    inline const Aws::Vector<DeploymentSummary>& GetDeployments() const { return m_deployments; }
    template<typename DeploymentsT = Aws::Vector<DeploymentSummary>>
    void SetDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments = std::forward<DeploymentsT>(value); }
    template<typename DeploymentsT = Aws::Vector<DeploymentSummary>>
    ListDeploymentsResult& WithDeployments(DeploymentsT&& value) { SetDeployments(std::forward<DeploymentsT>(value)); return *this;}
    template<typename DeploymentsT = DeploymentSummary>
    ListDeploymentsResult& AddDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments.emplace_back(std::forward<DeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If there are more items to return, this contains a token that is passed to a
     * subsequent call to this operation to retrieve the next set of items.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<DeploymentSummary> m_deployments;
    bool m_deploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MainframeModernization
} // namespace Aws
