/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/query-compatible-rpcv2-protocol/QueryCompatibleRpcV2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace QueryCompatibleRpcV2Protocol {
namespace Model {

class ResponseMetadata {
 public:
  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API ResponseMetadata() = default;
  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API ResponseMetadata(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API ResponseMetadata& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_QUERYCOMPATIBLERPCV2PROTOCOL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  inline bool RequestIdHasBeenSet() const { return m_requestIdHasBeenSet; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  ResponseMetadata& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace QueryCompatibleRpcV2Protocol
}  // namespace Aws
