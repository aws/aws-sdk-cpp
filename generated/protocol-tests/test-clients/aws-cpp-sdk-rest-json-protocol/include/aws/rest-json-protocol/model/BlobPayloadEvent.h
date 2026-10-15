/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/rest-json-protocol/RestJsonProtocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace RestJsonProtocol {
namespace Model {
/**
 */
class BlobPayloadEvent {
 public:
  AWS_RESTJSONPROTOCOL_API BlobPayloadEvent() = default;
  AWS_RESTJSONPROTOCOL_API BlobPayloadEvent(Aws::Vector<unsigned char>&& value) { m_payload = std::move(value); }

  ///@{
  /**
   *
   */
  inline const Aws::Vector<unsigned char>& GetPayload() const { return m_payload; }
  inline Aws::Vector<unsigned char>&& GetPayloadWithOwnership() { return std::move(m_payload); }
  inline void SetPayload(const Aws::Vector<unsigned char>& value) {
    m_payloadHasBeenSet = true;
    m_payload = value;
  }
  inline void SetPayload(Aws::Vector<unsigned char>&& value) {
    m_payloadHasBeenSet = true;
    m_payload = std::move(value);
  }
  inline BlobPayloadEvent& WithPayload(const Aws::Vector<unsigned char>& value) {
    SetPayload(value);
    return *this;
  }
  inline BlobPayloadEvent& WithPayload(Aws::Vector<unsigned char>&& value) {
    SetPayload(std::move(value));
    return *this;
  }
  ///@}

 private:
  Aws::Vector<unsigned char> m_payload;
  bool m_payloadHasBeenSet = false;
};

}  // namespace Model
}  // namespace RestJsonProtocol
}  // namespace Aws
