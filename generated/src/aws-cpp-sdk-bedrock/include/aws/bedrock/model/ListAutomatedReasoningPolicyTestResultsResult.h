/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestResult.h>
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
  class ListAutomatedReasoningPolicyTestResultsResult
  {
  public:
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestResultsResult() = default;
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestResultsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestResultsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of test results, each containing information about how the policy
     * performed on specific test scenarios.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyTestResult>& GetTestResults() const { return m_testResults; }
    template<typename TestResultsT = Aws::Vector<AutomatedReasoningPolicyTestResult>>
    void SetTestResults(TestResultsT&& value) { m_testResultsHasBeenSet = true; m_testResults = std::forward<TestResultsT>(value); }
    template<typename TestResultsT = Aws::Vector<AutomatedReasoningPolicyTestResult>>
    ListAutomatedReasoningPolicyTestResultsResult& WithTestResults(TestResultsT&& value) { SetTestResults(std::forward<TestResultsT>(value)); return *this;}
    template<typename TestResultsT = AutomatedReasoningPolicyTestResult>
    ListAutomatedReasoningPolicyTestResultsResult& AddTestResults(TestResultsT&& value) { m_testResultsHasBeenSet = true; m_testResults.emplace_back(std::forward<TestResultsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A pagination token to use in subsequent requests to retrieve additional test
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListAutomatedReasoningPolicyTestResultsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomatedReasoningPolicyTestResultsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyTestResult> m_testResults;
    bool m_testResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
