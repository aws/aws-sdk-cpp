/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/apptest/AppTest_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/apptest/model/TestSuiteSummary.h>
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
  class ListTestSuitesResult
  {
  public:
    AWS_APPTEST_API ListTestSuitesResult() = default;
    AWS_APPTEST_API ListTestSuitesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_APPTEST_API ListTestSuitesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The test suites returned with the response query.</p>
     */
    inline const Aws::Vector<TestSuiteSummary>& GetTestSuites() const { return m_testSuites; }
    template<typename TestSuitesT = Aws::Vector<TestSuiteSummary>>
    void SetTestSuites(TestSuitesT&& value) { m_testSuitesHasBeenSet = true; m_testSuites = std::forward<TestSuitesT>(value); }
    template<typename TestSuitesT = Aws::Vector<TestSuiteSummary>>
    ListTestSuitesResult& WithTestSuites(TestSuitesT&& value) { SetTestSuites(std::forward<TestSuitesT>(value)); return *this;}
    template<typename TestSuitesT = TestSuiteSummary>
    ListTestSuitesResult& AddTestSuites(TestSuitesT&& value) { m_testSuitesHasBeenSet = true; m_testSuites.emplace_back(std::forward<TestSuitesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The token from a previous request to retrieve the next page of test suites
     * results.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListTestSuitesResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListTestSuitesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<TestSuiteSummary> m_testSuites;
    bool m_testSuitesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace AppTest
} // namespace Aws
