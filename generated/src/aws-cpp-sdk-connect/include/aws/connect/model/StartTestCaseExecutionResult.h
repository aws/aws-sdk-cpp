/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCaseExecutionStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>

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
class StartTestCaseExecutionResult {
 public:
  AWS_CONNECT_API StartTestCaseExecutionResult() = default;
  AWS_CONNECT_API StartTestCaseExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API StartTestCaseExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the test case execution.</p>
   */
  inline const Aws::String& GetTestCaseExecutionId() const { return m_testCaseExecutionId; }
  template <typename TestCaseExecutionIdT = Aws::String>
  void SetTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    m_testCaseExecutionIdHasBeenSet = true;
    m_testCaseExecutionId = std::forward<TestCaseExecutionIdT>(value);
  }
  template <typename TestCaseExecutionIdT = Aws::String>
  StartTestCaseExecutionResult& WithTestCaseExecutionId(TestCaseExecutionIdT&& value) {
    SetTestCaseExecutionId(std::forward<TestCaseExecutionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The identifier of the test case resource that was executed.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  StartTestCaseExecutionResult& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline TestCaseExecutionStatus GetStatus() const { return m_status; }
  inline void SetStatus(TestCaseExecutionStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartTestCaseExecutionResult& WithStatus(TestCaseExecutionStatus value) {
    SetStatus(value);
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
  StartTestCaseExecutionResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testCaseExecutionId;

  Aws::String m_testCaseId;

  TestCaseExecutionStatus m_status{TestCaseExecutionStatus::NOT_SET};

  Aws::String m_requestId;
  bool m_testCaseExecutionIdHasBeenSet = false;
  bool m_testCaseIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
