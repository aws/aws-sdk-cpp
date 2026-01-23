/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/connect/Connect_EXPORTS.h>
#include <aws/connect/model/TestCase.h>
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
class DescribeTestCaseResult {
 public:
  AWS_CONNECT_API DescribeTestCaseResult() = default;
  AWS_CONNECT_API DescribeTestCaseResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_CONNECT_API DescribeTestCaseResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The test case object containing all test case information.</p>
   */
  inline const TestCase& GetTestCase() const { return m_testCase; }
  template <typename TestCaseT = TestCase>
  void SetTestCase(TestCaseT&& value) {
    m_testCaseHasBeenSet = true;
    m_testCase = std::forward<TestCaseT>(value);
  }
  template <typename TestCaseT = TestCase>
  DescribeTestCaseResult& WithTestCase(TestCaseT&& value) {
    SetTestCase(std::forward<TestCaseT>(value));
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
  DescribeTestCaseResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  TestCase m_testCase;

  Aws::String m_requestId;
  bool m_testCaseHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
