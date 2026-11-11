/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>
#include <aws/rpcv2cborcorpustests/model/CorpusStringEnum.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class ScalarsEvent {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API ScalarsEvent() = default;
  AWS_RPCV2CBORCORPUSTESTS_API ScalarsEvent(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API ScalarsEvent& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline bool GetBooleanMember() const { return m_booleanMember; }
  inline bool BooleanMemberHasBeenSet() const { return m_booleanMemberHasBeenSet; }
  inline void SetBooleanMember(bool value) {
    m_booleanMemberHasBeenSet = true;
    m_booleanMember = value;
  }
  inline ScalarsEvent& WithBooleanMember(bool value) {
    SetBooleanMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetByteMember() const { return m_byteMember; }
  inline bool ByteMemberHasBeenSet() const { return m_byteMemberHasBeenSet; }
  inline void SetByteMember(int64_t value) {
    m_byteMemberHasBeenSet = true;
    m_byteMember = value;
  }
  inline ScalarsEvent& WithByteMember(int64_t value) {
    SetByteMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetShortMember() const { return m_shortMember; }
  inline bool ShortMemberHasBeenSet() const { return m_shortMemberHasBeenSet; }
  inline void SetShortMember(int64_t value) {
    m_shortMemberHasBeenSet = true;
    m_shortMember = value;
  }
  inline ScalarsEvent& WithShortMember(int64_t value) {
    SetShortMember(value);
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
  inline ScalarsEvent& WithIntegerMember(int64_t value) {
    SetIntegerMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongMember() const { return m_longMember; }
  inline bool LongMemberHasBeenSet() const { return m_longMemberHasBeenSet; }
  inline void SetLongMember(long long value) {
    m_longMemberHasBeenSet = true;
    m_longMember = value;
  }
  inline ScalarsEvent& WithLongMember(long long value) {
    SetLongMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatMember() const { return m_floatMember; }
  inline bool FloatMemberHasBeenSet() const { return m_floatMemberHasBeenSet; }
  inline void SetFloatMember(double value) {
    m_floatMemberHasBeenSet = true;
    m_floatMember = value;
  }
  inline ScalarsEvent& WithFloatMember(double value) {
    SetFloatMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleMember() const { return m_doubleMember; }
  inline bool DoubleMemberHasBeenSet() const { return m_doubleMemberHasBeenSet; }
  inline void SetDoubleMember(double value) {
    m_doubleMemberHasBeenSet = true;
    m_doubleMember = value;
  }
  inline ScalarsEvent& WithDoubleMember(double value) {
    SetDoubleMember(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringMember() const { return m_stringMember; }
  inline bool StringMemberHasBeenSet() const { return m_stringMemberHasBeenSet; }
  template <typename StringMemberT = Aws::String>
  void SetStringMember(StringMemberT&& value) {
    m_stringMemberHasBeenSet = true;
    m_stringMember = std::forward<StringMemberT>(value);
  }
  template <typename StringMemberT = Aws::String>
  ScalarsEvent& WithStringMember(StringMemberT&& value) {
    SetStringMember(std::forward<StringMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlobMember() const { return m_blobMember; }
  inline bool BlobMemberHasBeenSet() const { return m_blobMemberHasBeenSet; }
  template <typename BlobMemberT = Aws::Utils::ByteBuffer>
  void SetBlobMember(BlobMemberT&& value) {
    m_blobMemberHasBeenSet = true;
    m_blobMember = std::forward<BlobMemberT>(value);
  }
  template <typename BlobMemberT = Aws::Utils::ByteBuffer>
  ScalarsEvent& WithBlobMember(BlobMemberT&& value) {
    SetBlobMember(std::forward<BlobMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTimestampMember() const { return m_timestampMember; }
  inline bool TimestampMemberHasBeenSet() const { return m_timestampMemberHasBeenSet; }
  template <typename TimestampMemberT = Aws::Utils::DateTime>
  void SetTimestampMember(TimestampMemberT&& value) {
    m_timestampMemberHasBeenSet = true;
    m_timestampMember = std::forward<TimestampMemberT>(value);
  }
  template <typename TimestampMemberT = Aws::Utils::DateTime>
  ScalarsEvent& WithTimestampMember(TimestampMemberT&& value) {
    SetTimestampMember(std::forward<TimestampMemberT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline CorpusStringEnum GetStringEnum() const { return m_stringEnum; }
  inline bool StringEnumHasBeenSet() const { return m_stringEnumHasBeenSet; }
  inline void SetStringEnum(CorpusStringEnum value) {
    m_stringEnumHasBeenSet = true;
    m_stringEnum = value;
  }
  inline ScalarsEvent& WithStringEnum(CorpusStringEnum value) {
    SetStringEnum(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetIntEnum() const { return m_intEnum; }
  inline bool IntEnumHasBeenSet() const { return m_intEnumHasBeenSet; }
  inline void SetIntEnum(int64_t value) {
    m_intEnumHasBeenSet = true;
    m_intEnum = value;
  }
  inline ScalarsEvent& WithIntEnum(int64_t value) {
    SetIntEnum(value);
    return *this;
  }
  ///@}
 private:
  bool m_booleanMember{false};

  int64_t m_byteMember{0};

  int64_t m_shortMember{0};

  int64_t m_integerMember{0};

  long long m_longMember{0};

  double m_floatMember{0.0};

  double m_doubleMember{0.0};

  Aws::String m_stringMember;

  Aws::Utils::ByteBuffer m_blobMember{};

  Aws::Utils::DateTime m_timestampMember{};

  CorpusStringEnum m_stringEnum{CorpusStringEnum::NOT_SET};

  int64_t m_intEnum{0};
  bool m_booleanMemberHasBeenSet = false;
  bool m_byteMemberHasBeenSet = false;
  bool m_shortMemberHasBeenSet = false;
  bool m_integerMemberHasBeenSet = false;
  bool m_longMemberHasBeenSet = false;
  bool m_floatMemberHasBeenSet = false;
  bool m_doubleMemberHasBeenSet = false;
  bool m_stringMemberHasBeenSet = false;
  bool m_blobMemberHasBeenSet = false;
  bool m_timestampMemberHasBeenSet = false;
  bool m_stringEnumHasBeenSet = false;
  bool m_intEnumHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
