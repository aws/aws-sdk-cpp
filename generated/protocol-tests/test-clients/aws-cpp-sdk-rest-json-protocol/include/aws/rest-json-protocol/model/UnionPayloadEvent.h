/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>
#include <aws/rest-json-protocol/model/PayloadUnion.h>

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

/**
 */
class UnionPayloadEvent {
 public:
  AWS_RESTJSONPROTOCOL_API UnionPayloadEvent() = default;
  AWS_RESTJSONPROTOCOL_API UnionPayloadEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API UnionPayloadEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESTJSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const PayloadUnion& GetPayload() const { return m_payload; }
  inline bool PayloadHasBeenSet() const { return m_payloadHasBeenSet; }
  template <typename PayloadT = PayloadUnion>
  void SetPayload(PayloadT&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::forward<PayloadT>(value);
  }
  template <typename PayloadT = PayloadUnion>
  UnionPayloadEvent& WithPayload(PayloadT&& value) {
    SetPayload(std::forward<PayloadT>(value));
    return *this;
  }
  ///@}
 private:
  PayloadUnion m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
