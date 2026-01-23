/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseSummary.h>
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
class ListTestCasesResult {
 public:
  AWS_CONNECT_API ListTestCasesResult() = default;
  AWS_CONNECT_API ListTestCasesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListTestCasesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>Information about the tests.</p>
   */
  inline const Aws::Vector<TestCaseSummary>& GetTestCaseSummaryList() const { return m_testCaseSummaryList; }
  template <typename TestCaseSummaryListT = Aws::Vector<TestCaseSummary>>
  void SetTestCaseSummaryList(TestCaseSummaryListT&& value) {
    m_testCaseSummaryListHasBeenSet = true;
    m_testCaseSummaryList = std::forward<TestCaseSummaryListT>(value);
  }
  template <typename TestCaseSummaryListT = Aws::Vector<TestCaseSummary>>
  ListTestCasesResult& WithTestCaseSummaryList(TestCaseSummaryListT&& value) {
    SetTestCaseSummaryList(std::forward<TestCaseSummaryListT>(value));
    return *this;
  }
  template <typename TestCaseSummaryListT = TestCaseSummary>
  ListTestCasesResult& AddTestCaseSummaryList(TestCaseSummaryListT&& value) {
    m_testCaseSummaryListHasBeenSet = true;
    m_testCaseSummaryList.emplace_back(std::forward<TestCaseSummaryListT>(value));
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
  ListTestCasesResult& WithNextToken(NextTokenT&& value) {
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
  ListTestCasesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<TestCaseSummary> m_testCaseSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_testCaseSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
