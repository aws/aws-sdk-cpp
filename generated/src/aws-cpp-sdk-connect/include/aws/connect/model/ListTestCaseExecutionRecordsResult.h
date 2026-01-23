/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/ExecutionRecord.h>
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
class ListTestCaseExecutionRecordsResult {
 public:
  AWS_CONNECT_API ListTestCaseExecutionRecordsResult() = default;
  AWS_CONNECT_API ListTestCaseExecutionRecordsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API ListTestCaseExecutionRecordsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of test case execution record objects.</p>
   */
  inline const Aws::Vector<ExecutionRecord>& GetExecutionRecords() const { return m_executionRecords; }
  template <typename ExecutionRecordsT = Aws::Vector<ExecutionRecord>>
  void SetExecutionRecords(ExecutionRecordsT&& value) {
    m_executionRecordsHasBeenSet = true;
    m_executionRecords = std::forward<ExecutionRecordsT>(value);
  }
  template <typename ExecutionRecordsT = Aws::Vector<ExecutionRecord>>
  ListTestCaseExecutionRecordsResult& WithExecutionRecords(ExecutionRecordsT&& value) {
    SetExecutionRecords(std::forward<ExecutionRecordsT>(value));
    return *this;
  }
  template <typename ExecutionRecordsT = ExecutionRecord>
  ListTestCaseExecutionRecordsResult& AddExecutionRecords(ExecutionRecordsT&& value) {
    m_executionRecordsHasBeenSet = true;
    m_executionRecords.emplace_back(std::forward<ExecutionRecordsT>(value));
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
  ListTestCaseExecutionRecordsResult& WithNextToken(NextTokenT&& value) {
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
  ListTestCaseExecutionRecordsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<ExecutionRecord> m_executionRecords;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  bool m_executionRecordsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
