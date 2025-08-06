/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/bedrock/Bedrock_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/bedrock/model/AutomatedReasoningPolicyTestCase.h>
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
  class ListAutomatedReasoningPolicyTestCasesResult
  {
  public:
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestCasesResult() = default;
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_BEDROCK_API ListAutomatedReasoningPolicyTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of tests for the specified policy.</p>
     */
    inline const Aws::Vector<AutomatedReasoningPolicyTestCase>& GetTestCases() const { return m_testCases; }
    template<typename TestCasesT = Aws::Vector<AutomatedReasoningPolicyTestCase>>
    void SetTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases = std::forward<TestCasesT>(value); }
    template<typename TestCasesT = Aws::Vector<AutomatedReasoningPolicyTestCase>>
    ListAutomatedReasoningPolicyTestCasesResult& WithTestCases(TestCasesT&& value) { SetTestCases(std::forward<TestCasesT>(value)); return *this;}
    template<typename TestCasesT = AutomatedReasoningPolicyTestCase>
    ListAutomatedReasoningPolicyTestCasesResult& AddTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases.emplace_back(std::forward<TestCasesT>(value)); return *this; }
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
    ListAutomatedReasoningPolicyTestCasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListAutomatedReasoningPolicyTestCasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<AutomatedReasoningPolicyTestCase> m_testCases;
    bool m_testCasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Bedrock
} // namespace Aws
