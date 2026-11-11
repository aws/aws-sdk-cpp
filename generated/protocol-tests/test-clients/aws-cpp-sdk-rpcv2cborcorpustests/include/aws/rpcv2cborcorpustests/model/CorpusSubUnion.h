/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class CorpusSubUnion {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API CorpusSubUnion() = default;
  AWS_RPCV2CBORCORPUSTESTS_API CorpusSubUnion(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API CorpusSubUnion& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  CorpusSubUnion& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetIntegerValue() const { return m_integerValue; }
  inline bool IntegerValueHasBeenSet() const { return m_integerValueHasBeenSet; }
  inline void SetIntegerValue(int64_t value) {
    m_integerValueHasBeenSet = true;
    m_integerValue = value;
  }
  inline CorpusSubUnion& WithIntegerValue(int64_t value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;

  int64_t m_integerValue{0};
  bool m_stringValueHasBeenSet = false;
  bool m_integerValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
