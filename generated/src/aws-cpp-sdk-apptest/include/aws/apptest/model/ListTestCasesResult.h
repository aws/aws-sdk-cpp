/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestCaseSummary.h>
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
  class ListTestCasesResult
  {
  public:
    AWS_APPTEST_API ListTestCasesResult() = default;
    AWS_APPTEST_API ListTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test cases in an application.</p>
     */
    inline const Aws::Vector<TestCaseSummary>& GetTestCases() const { return m_testCases; }
    template<typename TestCasesT = Aws::Vector<TestCaseSummary>>
    void SetTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases = std::forward<TestCasesT>(value); }
    template<typename TestCasesT = Aws::Vector<TestCaseSummary>>
    ListTestCasesResult& WithTestCases(TestCasesT&& value) { SetTestCases(std::forward<TestCasesT>(value)); return *this;}
    template<typename TestCasesT = TestCaseSummary>
    ListTestCasesResult& AddTestCases(TestCasesT&& value) { m_testCasesHasBeenSet = true; m_testCases.emplace_back(std::forward<TestCasesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The next token in test cases.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestCasesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestCasesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestCaseSummary> m_testCases;
    bool m_testCasesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
