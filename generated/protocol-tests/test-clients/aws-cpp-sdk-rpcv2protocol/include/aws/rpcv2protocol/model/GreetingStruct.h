/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {

class GreetingStruct {
 public:
  AWS_RPCV2PROTOCOL_API GreetingStruct() = default;
  AWS_RPCV2PROTOCOL_API GreetingStruct(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API GreetingStruct& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetHi() const { return m_hi; }
  inline bool HiHasBeenSet() const { return m_hiHasBeenSet; }
  template <typename HiT = Aws::String>
  void SetHi(HiT&& value) {
    m_hiHasBeenSet = true;
    m_hi = std::forward<HiT>(value);
  }
  template <typename HiT = Aws::String>
  GreetingStruct& WithHi(HiT&& value) {
    SetHi(std::forward<HiT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_hi;
  bool m_hiHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
