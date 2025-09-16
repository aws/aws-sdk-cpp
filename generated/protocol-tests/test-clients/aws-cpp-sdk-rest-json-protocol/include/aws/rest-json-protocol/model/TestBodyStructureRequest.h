/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocolRequest.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/TestConfig.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {

/**
 */
class TestBodyStructureRequest : public RestJsonProtocolRequest {
 public:
  AWS_RESTJSONPROTOCOL_API TestBodyStructureRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "TestBodyStructure"; }

  AWS_RESTJSONPROTOCOL_API Aws::String SerializePayload() const override;

  AWS_RESTJSONPROTOCOL_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{

  inline const Aws::String& GetTestId() const { return m_testId; }
  inline bool TestIdHasBeenSet() const { return m_testIdHasBeenSet; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  TestBodyStructureRequest& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const TestConfig& GetTestConfig() const { return m_testConfig; }
  inline bool TestConfigHasBeenSet() const { return m_testConfigHasBeenSet; }
  template <typename TestConfigT = TestConfig>
  void SetTestConfig(TestConfigT&& value) {
    m_testConfigHasBeenSet = true;
    m_testConfig = std::forward<TestConfigT>(value);
  }
  template <typename TestConfigT = TestConfig>
  TestBodyStructureRequest& WithTestConfig(TestConfigT&& value) {
    SetTestConfig(std::forward<TestConfigT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  TestBodyStructureRequest& WithRequestId(RequestIdT&& value) {
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
