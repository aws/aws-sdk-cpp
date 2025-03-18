/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseRunSummary.h>
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
namespace AppTest
{
namespace Model
{
  class ListTestRunTestCasesResult
  {
  public:
    AWS_APPTEST_API ListTestRunTestCasesResult() = default;
    AWS_APPTEST_API ListTestRunTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestRunTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test run of the test cases.</p>
     */
    inline const Aws::Vector<TestCaseRunSummary>& GetTestRunTestCases() const { return m_testRunTestCases; }
    template<typename TestRunTestCasesT = Aws::Vector<TestCaseRunSummary>>
    void SetTestRunTestCases(TestRunTestCasesT&& value) { m_testRunTestCasesHasBeenSet = true; m_testRunTestCases = std::forward<TestRunTestCasesT>(value); }
    template<typename TestRunTestCasesT = Aws::Vector<TestCaseRunSummary>>
    ListTestRunTestCasesResult& WithTestRunTestCases(TestRunTestCasesT&& value) { SetTestRunTestCases(std::forward<TestRunTestCasesT>(value)); return *this;}
    template<typename TestRunTestCasesT = TestCaseRunSummary>
    ListTestRunTestCasesResult& AddTestRunTestCases(TestRunTestCasesT&& value) { m_testRunTestCasesHasBeenSet = true; m_testRunTestCases.emplace_back(std::forward<TestRunTestCasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestRunTestCasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestRunTestCasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestCaseRunSummary> m_testRunTestCases;
    bool m_testRunTestCasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
