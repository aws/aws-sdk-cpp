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

class SimpleStruct {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API SimpleStruct() = default;
  AWS_RPCV2CBORCORPUSTESTS_API SimpleStruct(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API SimpleStruct& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline const Aws::String& GetStringMember() const { return m_stringMember; }
  inline bool StringMemberHasBeenSet() const { return m_stringMemberHasBeenSet; }
  template <typename StringMemberT = Aws::String>
  void SetStringMember(StringMemberT&& value) {
    m_stringMemberHasBeenSet = true;
    m_stringMember = std::forward<StringMemberT>(value);
  }
  template <typename StringMemberT = Aws::String>
  SimpleStruct& WithStringMember(StringMemberT&& value) {
    SetStringMember(std::forward<StringMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetIntegerMember() const { return m_integerMember; }
  inline bool IntegerMemberHasBeenSet() const { return m_integerMemberHasBeenSet; }
  inline void SetIntegerMember(int64_t value) {
    m_integerMemberHasBeenSet = true;
    m_integerMember = value;
  }
  inline SimpleStruct& WithIntegerMember(int64_t value) {
    SetIntegerMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline bool GetBooleanMember() const { return m_booleanMember; }
  inline bool BooleanMemberHasBeenSet() const { return m_booleanMemberHasBeenSet; }
  inline void SetBooleanMember(bool value) {
    m_booleanMemberHasBeenSet = true;
    m_booleanMember = value;
  }
  inline SimpleStruct& WithBooleanMember(bool value) {
    SetBooleanMember(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringMember;

  int64_t m_integerMember{0};

  bool m_booleanMember{false};
  bool m_stringMemberHasBeenSet = false;
  bool m_integerMemberHasBeenSet = false;
  bool m_booleanMemberHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
