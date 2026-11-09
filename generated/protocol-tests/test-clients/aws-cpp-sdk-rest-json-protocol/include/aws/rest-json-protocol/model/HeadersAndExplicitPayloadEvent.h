/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/PayloadStructure.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace RestJsonProtocol {
namespace Model {

class HeadersAndExplicitPayloadEvent {
 public:
  AWS_RESTJSONPROTOCOL_API HeadersAndExplicitPayloadEvent() = default;
  AWS_RESTJSONPROTOCOL_API HeadersAndExplicitPayloadEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API HeadersAndExplicitPayloadEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetHeader() const { return m_header; }
  inline bool HeaderHasBeenSet() const { return m_headerHasBeenSet; }
  template <typename HeaderT = Aws::String>
  void SetHeader(HeaderT&& value) {
    m_headerHasBeenSet = true;
    m_header = std::forward<HeaderT>(value);
  }
  template <typename HeaderT = Aws::String>
  HeadersAndExplicitPayloadEvent& WithHeader(HeaderT&& value) {
    SetHeader(std::forward<HeaderT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const PayloadStructure& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = PayloadStructure>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = PayloadStructure>
  HeadersAndExplicitPayloadEvent& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_header;

  PayloadStructure m_payload;
  bool m_headerHasBeenSet = false;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
