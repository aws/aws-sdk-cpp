/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/greengrass/Greengrass_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/greengrass/model/BulkDeploymentResult.h>
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
namespace Greengrass
{
namespace Model
{
  class ListBulkDeploymentDetailedReportsResult
  {
  public:
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult() = default;
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_GREENGRASS_API ListBulkDeploymentDetailedReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * A list of the individual group deployments in the bulk deployment operation.
     */
    inline const Aws::Vector<BulkDeploymentResult>& GetDeployments() const { return m_deployments; }
    template<typename DeploymentsT = Aws::Vector<BulkDeploymentResult>>
    void SetDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments = std::forward<DeploymentsT>(value); }
    template<typename DeploymentsT = Aws::Vector<BulkDeploymentResult>>
    ListBulkDeploymentDetailedReportsResult& WithDeployments(DeploymentsT&& value) { SetDeployments(std::forward<DeploymentsT>(value)); return *this;}
    template<typename DeploymentsT = BulkDeploymentResult>
    ListBulkDeploymentDetailedReportsResult& AddDeployments(DeploymentsT&& value) { m_deploymentsHasBeenSet = true; m_deployments.emplace_back(std::forward<DeploymentsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * The token for the next set of results, or ''null'' if there are no additional
     * results.
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListBulkDeploymentDetailedReportsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListBulkDeploymentDetailedReportsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<BulkDeploymentResult> m_deployments;
    bool m_deploymentsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Greengrass
} // namespace Aws
