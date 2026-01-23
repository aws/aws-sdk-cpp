/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCase.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Connect {
namespace Model {
class SearchTestCasesResult {
 public:
  AWS_CONNECT_API SearchTestCasesResult() = default;
  AWS_CONNECT_API SearchTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API SearchTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the test cases.</p>
   */
  inline const Aws::Vector<TestCase>& GetTestCases() const { return m_testCases; }
  template <typename TestCasesT = Aws::Vector<TestCase>>
  void SetTestCases(TestCasesT&& value) {
    m_testCasesHasBeenSet = true;
    m_testCases = std::forward<TestCasesT>(value);
  }
  template <typename TestCasesT = Aws::Vector<TestCase>>
  SearchTestCasesResult& WithTestCases(TestCasesT&& value) {
    SetTestCases(std::forward<TestCasesT>(value));
    return *this;
  }
  template <typename TestCasesT = TestCase>
  SearchTestCasesResult& AddTestCases(TestCasesT&& value) {
    m_testCasesHasBeenSet = true;
    m_testCases.emplace_back(std::forward<TestCasesT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If there are additional results, this is the token for the next set of
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchTestCasesResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of test cases which matched your search query.</p>
   */
  inline long long GetApproximateTotalCount() const { return m_approximateTotalCount; }
  inline void SetApproximateTotalCount(long long value) {
    m_approximateTotalCountHasBeenSet = true;
    m_approximateTotalCount = value;
  }
  inline SearchTestCasesResult& WithApproximateTotalCount(long long value) {
    SetApproximateTotalCount(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  SearchTestCasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TestCase> m_testCases;

  Aws::String m_nextToken;

  long long m_approximateTotalCount{0};

  Aws::String m_requestId;
  bool m_testCasesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_approximateTotalCountHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
