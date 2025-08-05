/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicySummary.h>
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
  class ListAutomatedReasoningPoliciesResult
  {
  public:
    AWS_BEDROCK_API ListAutomatedReasoningPoliciesResult() = default;
    AWS_BEDROCK_API ListAutomatedReasoningPoliciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListAutomatedReasoningPoliciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of Automated Reasoning policy summaries.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicySummary>& GetAutomatedReasoningPolicySummaries() const { return m_automatedReasoningPolicySummaries; }
    template<typename AutomatedReasoningPolicySummariesT = Aws::Vector<AutomatedReasoningPolicySummary>>
    void SetAutomatedReasoningPolicySummaries(AutomatedReasoningPolicySummariesT&& value) { m_automatedReasoningPolicySummariesHasBeenSet = true; m_automatedReasoningPolicySummaries = std::forward<AutomatedReasoningPolicySummariesT>(value); }
    template<typename AutomatedReasoningPolicySummariesT = Aws::Vector<AutomatedReasoningPolicySummary>>
    ListAutomatedReasoningPoliciesResult& WithAutomatedReasoningPolicySummaries(AutomatedReasoningPolicySummariesT&& value) { SetAutomatedReasoningPolicySummaries(std::forward<AutomatedReasoningPolicySummariesT>(value)); return *this;}
    template<typename AutomatedReasoningPolicySummariesT = AutomatedReasoningPolicySummary>
    ListAutomatedReasoningPoliciesResult& AddAutomatedReasoningPolicySummaries(AutomatedReasoningPolicySummariesT&& value) { m_automatedReasoningPolicySummariesHasBeenSet = true; m_automatedReasoningPolicySummaries.emplace_back(std::forward<AutomatedReasoningPolicySummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The pagination token to use in a subsequent request to retrieve the next page
     * of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutomatedReasoningPoliciesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomatedReasoningPoliciesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicySummary> m_automatedReasoningPolicySummaries;
    bool m_automatedReasoningPolicySummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
