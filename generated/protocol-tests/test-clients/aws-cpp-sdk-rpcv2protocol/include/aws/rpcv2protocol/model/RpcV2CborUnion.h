/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/RpcV2CborNestedUnion.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {

class RpcV2CborUnion {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborUnion() = default;
  AWS_RPCV2PROTOCOL_API RpcV2CborUnion(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API RpcV2CborUnion& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2PROTOCOL_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  RpcV2CborUnion& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const RpcV2CborNestedUnion& GetUnionValue() const { return m_unionValue; }
  inline bool UnionValueHasBeenSet() const { return m_unionValueHasBeenSet; }
  template <typename UnionValueT = RpcV2CborNestedUnion>
  void SetUnionValue(UnionValueT&& value) {
    m_unionValueHasBeenSet = true;
    m_unionValue = std::forward<UnionValueT>(value);
  }
  template <typename UnionValueT = RpcV2CborNestedUnion>
  RpcV2CborUnion& WithUnionValue(UnionValueT&& value) {
    SetUnionValue(std::forward<UnionValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  RpcV2CborNestedUnion m_unionValue;
  bool m_stringValueHasBeenSet = false;
  bool m_unionValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
