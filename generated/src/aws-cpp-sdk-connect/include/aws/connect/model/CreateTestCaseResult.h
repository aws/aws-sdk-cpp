/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
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
class CreateTestCaseResult {
 public:
  AWS_CONNECT_API CreateTestCaseResult() = default;
  AWS_CONNECT_API CreateTestCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API CreateTestCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The identifier of the test.</p>
   */
  inline const Aws::String& GetTestCaseId() const { return m_testCaseId; }
  template <typename TestCaseIdT = Aws::String>
  void SetTestCaseId(TestCaseIdT&& value) {
    m_testCaseIdHasBeenSet = true;
    m_testCaseId = std::forward<TestCaseIdT>(value);
  }
  template <typename TestCaseIdT = Aws::String>
  CreateTestCaseResult& WithTestCaseId(TestCaseIdT&& value) {
    SetTestCaseId(std::forward<TestCaseIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the test.</p>
   */
  inline const Aws::String& GetTestCaseArn() const { return m_testCaseArn; }
  template <typename TestCaseArnT = Aws::String>
  void SetTestCaseArn(TestCaseArnT&& value) {
    m_testCaseArnHasBeenSet = true;
    m_testCaseArn = std::forward<TestCaseArnT>(value);
  }
  template <typename TestCaseArnT = Aws::String>
  CreateTestCaseResult& WithTestCaseArn(TestCaseArnT&& value) {
    SetTestCaseArn(std::forward<TestCaseArnT>(value));
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
  CreateTestCaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testCaseId;

  Aws::String m_testCaseArn;

  Aws::String m_requestId;
  bool m_testCaseIdHasBeenSet = false;
  bool m_testCaseArnHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
