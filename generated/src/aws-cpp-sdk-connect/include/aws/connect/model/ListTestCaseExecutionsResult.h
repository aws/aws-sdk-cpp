/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseExecution.h>
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
class ListTestCaseExecutionsResult {
 public:
  AWS_CONNECT_API ListTestCaseExecutionsResult() = default;
  AWS_CONNECT_API ListTestCaseExecutionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListTestCaseExecutionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of test case execution summary objects.</p>
   */
  inline const Aws::Vector<TestCaseExecution>& GetTestCaseExecutions() const { return m_testCaseExecutions; }
  template <typename TestCaseExecutionsT = Aws::Vector<TestCaseExecution>>
  void SetTestCaseExecutions(TestCaseExecutionsT&& value) {
    m_testCaseExecutionsHasBeenSet = true;
    m_testCaseExecutions = std::forward<TestCaseExecutionsT>(value);
  }
  template <typename TestCaseExecutionsT = Aws::Vector<TestCaseExecution>>
  ListTestCaseExecutionsResult& WithTestCaseExecutions(TestCaseExecutionsT&& value) {
    SetTestCaseExecutions(std::forward<TestCaseExecutionsT>(value));
    return *this;
  }
  template <typename TestCaseExecutionsT = TestCaseExecution>
  ListTestCaseExecutionsResult& AddTestCaseExecutions(TestCaseExecutionsT&& value) {
    m_testCaseExecutionsHasBeenSet = true;
    m_testCaseExecutions.emplace_back(std::forward<TestCaseExecutionsT>(value));
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
  ListTestCaseExecutionsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListTestCaseExecutionsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TestCaseExecution> m_testCaseExecutions;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_testCaseExecutionsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
