/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/launch-wizard/LaunchWizard_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/launch-wizard/model/WorkloadDeploymentPatternDataSummary.h>
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
  class ListWorkloadDeploymentPatternsResult
  {
  public:
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult() = default;
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_LAUNCHWIZARD_API ListWorkloadDeploymentPatternsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The token to include in another request to get the next page of items. This
     * value is <code>null</code> when there are no more items to return.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListWorkloadDeploymentPatternsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Describes the workload deployment patterns.</p>
     */
    inline const Aws::Vector<WorkloadDeploymentPatternDataSummary>& GetWorkloadDeploymentPatterns() const { return m_workloadDeploymentPatterns; }
    template<typename WorkloadDeploymentPatternsT = Aws::Vector<WorkloadDeploymentPatternDataSummary>>
    void SetWorkloadDeploymentPatterns(WorkloadDeploymentPatternsT&& value) { m_workloadDeploymentPatternsHasBeenSet = true; m_workloadDeploymentPatterns = std::forward<WorkloadDeploymentPatternsT>(value); }
    template<typename WorkloadDeploymentPatternsT = Aws::Vector<WorkloadDeploymentPatternDataSummary>>
    ListWorkloadDeploymentPatternsResult& WithWorkloadDeploymentPatterns(WorkloadDeploymentPatternsT&& value) { SetWorkloadDeploymentPatterns(std::forward<WorkloadDeploymentPatternsT>(value)); return *this;}
    template<typename WorkloadDeploymentPatternsT = WorkloadDeploymentPatternDataSummary>
    ListWorkloadDeploymentPatternsResult& AddWorkloadDeploymentPatterns(WorkloadDeploymentPatternsT&& value) { m_workloadDeploymentPatternsHasBeenSet = true; m_workloadDeploymentPatterns.emplace_back(std::forward<WorkloadDeploymentPatternsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListWorkloadDeploymentPatternsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkloadDeploymentPatternDataSummary> m_workloadDeploymentPatterns;
    bool m_workloadDeploymentPatternsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace LaunchWizard
} // namespace Aws
