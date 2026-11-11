/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2cborcorpustests/RpcV2CborCorpusTests_EXPORTS.h>
#include <aws/rpcv2cborcorpustests/model/CorpusStringEnum.h>
#include <aws/rpcv2cborcorpustests/model/CorpusSubUnion.h>
#include <aws/rpcv2cborcorpustests/model/SimpleStruct.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2CborCorpusTests {
namespace Model {

class CorpusUnion {
 public:
  AWS_RPCV2CBORCORPUSTESTS_API CorpusUnion() = default;
  AWS_RPCV2CBORCORPUSTESTS_API CorpusUnion(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API CorpusUnion& operator=(const std::shared_ptr<Aws::Crt::Cbor::CborDecoder>& decoder);
  AWS_RPCV2CBORCORPUSTESTS_API void CborEncode(Aws::Crt::Cbor::CborEncoder& encoder) const;

  ///@{

  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline CorpusUnion& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetByteValue() const { return m_byteValue; }
  inline bool ByteValueHasBeenSet() const { return m_byteValueHasBeenSet; }
  inline void SetByteValue(int64_t value) {
    m_byteValueHasBeenSet = true;
    m_byteValue = value;
  }
  inline CorpusUnion& WithByteValue(int64_t value) {
    SetByteValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetShortValue() const { return m_shortValue; }
  inline bool ShortValueHasBeenSet() const { return m_shortValueHasBeenSet; }
  inline void SetShortValue(int64_t value) {
    m_shortValueHasBeenSet = true;
    m_shortValue = value;
  }
  inline CorpusUnion& WithShortValue(int64_t value) {
    SetShortValue(value);
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
  inline CorpusUnion& WithIntegerValue(int64_t value) {
    SetIntegerValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline long long GetLongValue() const { return m_longValue; }
  inline bool LongValueHasBeenSet() const { return m_longValueHasBeenSet; }
  inline void SetLongValue(long long value) {
    m_longValueHasBeenSet = true;
    m_longValue = value;
  }
  inline CorpusUnion& WithLongValue(long long value) {
    SetLongValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetFloatValue() const { return m_floatValue; }
  inline bool FloatValueHasBeenSet() const { return m_floatValueHasBeenSet; }
  inline void SetFloatValue(double value) {
    m_floatValueHasBeenSet = true;
    m_floatValue = value;
  }
  inline CorpusUnion& WithFloatValue(double value) {
    SetFloatValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline double GetDoubleValue() const { return m_doubleValue; }
  inline bool DoubleValueHasBeenSet() const { return m_doubleValueHasBeenSet; }
  inline void SetDoubleValue(double value) {
    m_doubleValueHasBeenSet = true;
    m_doubleValue = value;
  }
  inline CorpusUnion& WithDoubleValue(double value) {
    SetDoubleValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  CorpusUnion& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::ByteBuffer& GetBlobValue() const { return m_blobValue; }
  inline bool BlobValueHasBeenSet() const { return m_blobValueHasBeenSet; }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  void SetBlobValue(BlobValueT&& value) {
    m_blobValueHasBeenSet = true;
    m_blobValue = std::forward<BlobValueT>(value);
  }
  template <typename BlobValueT = Aws::Utils::ByteBuffer>
  CorpusUnion& WithBlobValue(BlobValueT&& value) {
    SetBlobValue(std::forward<BlobValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Utils::DateTime& GetTimestampValue() const { return m_timestampValue; }
  inline bool TimestampValueHasBeenSet() const { return m_timestampValueHasBeenSet; }
  template <typename TimestampValueT = Aws::Utils::DateTime>
  void SetTimestampValue(TimestampValueT&& value) {
    m_timestampValueHasBeenSet = true;
    m_timestampValue = std::forward<TimestampValueT>(value);
  }
  template <typename TimestampValueT = Aws::Utils::DateTime>
  CorpusUnion& WithTimestampValue(TimestampValueT&& value) {
    SetTimestampValue(std::forward<TimestampValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline CorpusStringEnum GetEnumValue() const { return m_enumValue; }
  inline bool EnumValueHasBeenSet() const { return m_enumValueHasBeenSet; }
  inline void SetEnumValue(CorpusStringEnum value) {
    m_enumValueHasBeenSet = true;
    m_enumValue = value;
  }
  inline CorpusUnion& WithEnumValue(CorpusStringEnum value) {
    SetEnumValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int64_t GetIntEnumValue() const { return m_intEnumValue; }
  inline bool IntEnumValueHasBeenSet() const { return m_intEnumValueHasBeenSet; }
  inline void SetIntEnumValue(int64_t value) {
    m_intEnumValueHasBeenSet = true;
    m_intEnumValue = value;
  }
  inline CorpusUnion& WithIntEnumValue(int64_t value) {
    SetIntEnumValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetListValue() const { return m_listValue; }
  inline bool ListValueHasBeenSet() const { return m_listValueHasBeenSet; }
  template <typename ListValueT = Aws::Vector<Aws::String>>
  void SetListValue(ListValueT&& value) {
    m_listValueHasBeenSet = true;
    m_listValue = std::forward<ListValueT>(value);
  }
  template <typename ListValueT = Aws::Vector<Aws::String>>
  CorpusUnion& WithListValue(ListValueT&& value) {
    SetListValue(std::forward<ListValueT>(value));
    return *this;
  }
  template <typename ListValueT = Aws::String>
  CorpusUnion& AddListValue(ListValueT&& value) {
    m_listValueHasBeenSet = true;
    m_listValue.emplace_back(std::forward<ListValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapValue() const { return m_mapValue; }
  inline bool MapValueHasBeenSet() const { return m_mapValueHasBeenSet; }
  template <typename MapValueT = Aws::Map<Aws::String, Aws::String>>
  void SetMapValue(MapValueT&& value) {
    m_mapValueHasBeenSet = true;
    m_mapValue = std::forward<MapValueT>(value);
  }
  template <typename MapValueT = Aws::Map<Aws::String, Aws::String>>
  CorpusUnion& WithMapValue(MapValueT&& value) {
    SetMapValue(std::forward<MapValueT>(value));
    return *this;
  }
  template <typename MapValueKeyT = Aws::String, typename MapValueValueT = Aws::String>
  CorpusUnion& AddMapValue(MapValueKeyT&& key, MapValueValueT&& value) {
    m_mapValueHasBeenSet = true;
    m_mapValue.emplace(std::forward<MapValueKeyT>(key), std::forward<MapValueValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const SimpleStruct& GetStructValue() const { return m_structValue; }
  inline bool StructValueHasBeenSet() const { return m_structValueHasBeenSet; }
  template <typename StructValueT = SimpleStruct>
  void SetStructValue(StructValueT&& value) {
    m_structValueHasBeenSet = true;
    m_structValue = std::forward<StructValueT>(value);
  }
  template <typename StructValueT = SimpleStruct>
  CorpusUnion& WithStructValue(StructValueT&& value) {
    SetStructValue(std::forward<StructValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const CorpusSubUnion& GetUnionValue() const { return m_unionValue; }
  inline bool UnionValueHasBeenSet() const { return m_unionValueHasBeenSet; }
  template <typename UnionValueT = CorpusSubUnion>
  void SetUnionValue(UnionValueT&& value) {
    m_unionValueHasBeenSet = true;
    m_unionValue = std::forward<UnionValueT>(value);
  }
  template <typename UnionValueT = CorpusSubUnion>
  CorpusUnion& WithUnionValue(UnionValueT&& value) {
    SetUnionValue(std::forward<UnionValueT>(value));
    return *this;
  }
  ///@}
 private:
  bool m_booleanValue{false};

  int64_t m_byteValue{0};

  int64_t m_shortValue{0};

  int64_t m_integerValue{0};

  long long m_longValue{0};

  double m_floatValue{0.0};

  double m_doubleValue{0.0};

  Aws::String m_stringValue;

  Aws::Utils::ByteBuffer m_blobValue{};

  Aws::Utils::DateTime m_timestampValue{};

  CorpusStringEnum m_enumValue{CorpusStringEnum::NOT_SET};

  int64_t m_intEnumValue{0};

  Aws::Vector<Aws::String> m_listValue;

  Aws::Map<Aws::String, Aws::String> m_mapValue;

  SimpleStruct m_structValue;

  CorpusSubUnion m_unionValue;
  bool m_booleanValueHasBeenSet = false;
  bool m_byteValueHasBeenSet = false;
  bool m_shortValueHasBeenSet = false;
  bool m_integerValueHasBeenSet = false;
  bool m_longValueHasBeenSet = false;
  bool m_floatValueHasBeenSet = false;
  bool m_doubleValueHasBeenSet = false;
  bool m_stringValueHasBeenSet = false;
  bool m_blobValueHasBeenSet = false;
  bool m_timestampValueHasBeenSet = false;
  bool m_enumValueHasBeenSet = false;
  bool m_intEnumValueHasBeenSet = false;
  bool m_listValueHasBeenSet = false;
  bool m_mapValueHasBeenSet = false;
  bool m_structValueHasBeenSet = false;
  bool m_unionValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2CborCorpusTests
}  // namespace Aws
