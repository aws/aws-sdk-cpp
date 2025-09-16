/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/PayloadConfig.h>

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
class TestPayloadStructureResult {
 public:
  AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult() = default;
  AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESTJSONPROTOCOL_API TestPayloadStructureResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{

  inline const Aws::String& GetTestId() const { return m_testId; }
  template <typename TestIdT = Aws::String>
  void SetTestId(TestIdT&& value) {
    m_testIdHasBeenSet = true;
    m_testId = std::forward<TestIdT>(value);
  }
  template <typename TestIdT = Aws::String>
  TestPayloadStructureResult& WithTestId(TestIdT&& value) {
    SetTestId(std::forward<TestIdT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PayloadConfig& GetPayloadConfig() const { return m_payloadConfig; }
  template <typename PayloadConfigT = PayloadConfig>
  void SetPayloadConfig(PayloadConfigT&& value) {
    m_payloadConfigHasBeenSet = true;
    m_payloadConfig = std::forward<PayloadConfigT>(value);
  }
  template <typename PayloadConfigT = PayloadConfig>
  TestPayloadStructureResult& WithPayloadConfig(PayloadConfigT&& value) {
    SetPayloadConfig(std::forward<PayloadConfigT>(value));
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
  TestPayloadStructureResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_testId;
  bool m_testIdHasBeenSet = false;

  PayloadConfig m_payloadConfig;
  bool m_payloadConfigHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
