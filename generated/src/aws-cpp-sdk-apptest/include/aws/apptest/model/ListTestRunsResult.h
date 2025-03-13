/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestRunSummary.h>
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
  class ListTestRunsResult
  {
  public:
    AWS_APPTEST_API ListTestRunsResult() = default;
    AWS_APPTEST_API ListTestRunsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestRunsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test runs of the response query.</p>
     */
    inline const Aws::Vector<TestRunSummary>& GetTestRuns() const { return m_testRuns; }
    template<typename TestRunsT = Aws::Vector<TestRunSummary>>
    void SetTestRuns(TestRunsT&& value) { m_testRunsHasBeenSet = true; m_testRuns = std::forward<TestRunsT>(value); }
    template<typename TestRunsT = Aws::Vector<TestRunSummary>>
    ListTestRunsResult& WithTestRuns(TestRunsT&& value) { SetTestRuns(std::forward<TestRunsT>(value)); return *this;}
    template<typename TestRunsT = TestRunSummary>
    ListTestRunsResult& AddTestRuns(TestRunsT&& value) { m_testRunsHasBeenSet = true; m_testRuns.emplace_back(std::forward<TestRunsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from the previous request to retrieve the next page of results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestRunsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestRunsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestRunSummary> m_testRuns;
    bool m_testRunsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
