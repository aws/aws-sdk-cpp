/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/TestConfig.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {
class TestBodyStructureResult {
 public:
  AWS_RESTJSONPROTOCOL_API TestBodyStructureResult() = default;
  AWS_RESTJSONPROTOCOL_API TestBodyStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API TestBodyStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetTestId() const { return m_testId; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  TestBodyStructureResult& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const TestConfig& GetTestConfig() const { return m_testConfig; }
  template <typename TestConfigT = TestConfig>
  void SetTestConfig(TestConfigT&& value) {
    m_testConfigHasBeenSet = true;
    m_testConfig = std::forward<TestConfigT>(value);
  }
  template <typename TestConfigT = TestConfig>
  TestBodyStructureResult& WithTestConfig(TestConfigT&& value) {
    SetTestConfig(std::forward<TestConfigT>(value));
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
  TestBodyStructureResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testId;
  bool m_testIdHasBeenSet = false;

  TestConfig m_testConfig;
  bool m_testConfigHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
