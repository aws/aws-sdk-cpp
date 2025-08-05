/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyBuildWorkflowSummary.h>
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
  class ListAutomatedReasoningPolicyBuildWorkflowsResult
  {
  public:
    AWS_BEDROCK_API ListAutomatedReasoningPolicyBuildWorkflowsResult() = default;
    AWS_BEDROCK_API ListAutomatedReasoningPolicyBuildWorkflowsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListAutomatedReasoningPolicyBuildWorkflowsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of build workflow summaries, each containing key information about a
     * build workflow including its status and timestamps.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyBuildWorkflowSummary>& GetAutomatedReasoningPolicyBuildWorkflowSummaries() const { return m_automatedReasoningPolicyBuildWorkflowSummaries; }
    template<typename AutomatedReasoningPolicyBuildWorkflowSummariesT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowSummary>>
    void SetAutomatedReasoningPolicyBuildWorkflowSummaries(AutomatedReasoningPolicyBuildWorkflowSummariesT&& value) { m_automatedReasoningPolicyBuildWorkflowSummariesHasBeenSet = true; m_automatedReasoningPolicyBuildWorkflowSummaries = std::forward<AutomatedReasoningPolicyBuildWorkflowSummariesT>(value); }
    template<typename AutomatedReasoningPolicyBuildWorkflowSummariesT = Aws::Vector<AutomatedReasoningPolicyBuildWorkflowSummary>>
    ListAutomatedReasoningPolicyBuildWorkflowsResult& WithAutomatedReasoningPolicyBuildWorkflowSummaries(AutomatedReasoningPolicyBuildWorkflowSummariesT&& value) { SetAutomatedReasoningPolicyBuildWorkflowSummaries(std::forward<AutomatedReasoningPolicyBuildWorkflowSummariesT>(value)); return *this;}
    template<typename AutomatedReasoningPolicyBuildWorkflowSummariesT = AutomatedReasoningPolicyBuildWorkflowSummary>
    ListAutomatedReasoningPolicyBuildWorkflowsResult& AddAutomatedReasoningPolicyBuildWorkflowSummaries(AutomatedReasoningPolicyBuildWorkflowSummariesT&& value) { m_automatedReasoningPolicyBuildWorkflowSummariesHasBeenSet = true; m_automatedReasoningPolicyBuildWorkflowSummaries.emplace_back(std::forward<AutomatedReasoningPolicyBuildWorkflowSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to use in subsequent requests to retrieve additional build
     * workflows.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutomatedReasoningPolicyBuildWorkflowsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomatedReasoningPolicyBuildWorkflowsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyBuildWorkflowSummary> m_automatedReasoningPolicyBuildWorkflowSummaries;
    bool m_automatedReasoningPolicyBuildWorkflowSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
