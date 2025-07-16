/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/bedrock/model/CustomModelDeploymentSummary.h>
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
namespace Bedrock
{
namespace Model
{
  class ListCustomModelDeploymentsResult
  {
  public:
    AWS_BEDROCK_API ListCustomModelDeploymentsResult() = default;
    AWS_BEDROCK_API ListCustomModelDeploymentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListCustomModelDeploymentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token for the next set of results. This value is null when there are no
     * more results to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListCustomModelDeploymentsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of custom model deployment summaries.</p>
     */
    inline const Aws::Vector<CustomModelDeploymentSummary>& GetModelDeploymentSummaries() const { return m_modelDeploymentSummaries; }
    template<typename ModelDeploymentSummariesT = Aws::Vector<CustomModelDeploymentSummary>>
    void SetModelDeploymentSummaries(ModelDeploymentSummariesT&& value) { m_modelDeploymentSummariesHasBeenSet = true; m_modelDeploymentSummaries = std::forward<ModelDeploymentSummariesT>(value); }
    template<typename ModelDeploymentSummariesT = Aws::Vector<CustomModelDeploymentSummary>>
    ListCustomModelDeploymentsResult& WithModelDeploymentSummaries(ModelDeploymentSummariesT&& value) { SetModelDeploymentSummaries(std::forward<ModelDeploymentSummariesT>(value)); return *this;}
    template<typename ModelDeploymentSummariesT = CustomModelDeploymentSummary>
    ListCustomModelDeploymentsResult& AddModelDeploymentSummaries(ModelDeploymentSummariesT&& value) { m_modelDeploymentSummariesHasBeenSet = true; m_modelDeploymentSummaries.emplace_back(std::forward<ModelDeploymentSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListCustomModelDeploymentsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<CustomModelDeploymentSummary> m_modelDeploymentSummaries;
    bool m_modelDeploymentSummariesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
