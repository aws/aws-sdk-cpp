/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/crt/cbor/Cbor.h>
#include <aws/rpcv2protocol/RpcV2Protocol_EXPORTS.h>
#include <aws/rpcv2protocol/model/FooEnum.h>
#include <aws/rpcv2protocol/model/StructureListMember.h>

#include <utility>
namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Cbor {
class CborValue;
}  // namespace Cbor
}  // namespace Utils
namespace RpcV2Protocol {
namespace Model {
class RpcV2CborListsResult {
 public:
  AWS_RPCV2PROTOCOL_API RpcV2CborListsResult() = default;
  AWS_RPCV2PROTOCOL_API RpcV2CborListsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);
  AWS_RPCV2PROTOCOL_API RpcV2CborListsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Cbor::CborValue>& result);

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringList() const { return m_stringList; }
  template <typename StringListT = Aws::Vector<Aws::String>>
  void SetStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList = std::forward<StringListT>(value);
  }
  template <typename StringListT = Aws::Vector<Aws::String>>
  RpcV2CborListsResult& WithStringList(StringListT&& value) {
    SetStringList(std::forward<StringListT>(value));
    return *this;
  }
  template <typename StringListT = Aws::String>
  RpcV2CborListsResult& AddStringList(StringListT&& value) {
    m_stringListHasBeenSet = true;
    m_stringList.emplace_back(std::forward<StringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetStringSet() const { return m_stringSet; }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  void SetStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet = std::forward<StringSetT>(value);
  }
  template <typename StringSetT = Aws::Vector<Aws::String>>
  RpcV2CborListsResult& WithStringSet(StringSetT&& value) {
    SetStringSet(std::forward<StringSetT>(value));
    return *this;
  }
  template <typename StringSetT = Aws::String>
  RpcV2CborListsResult& AddStringSet(StringSetT&& value) {
    m_stringSetHasBeenSet = true;
    m_stringSet.emplace_back(std::forward<StringSetT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int64_t>& GetIntegerList() const { return m_integerList; }
  template <typename IntegerListT = Aws::Vector<int64_t>>
  void SetIntegerList(IntegerListT&& value) {
    m_integerListHasBeenSet = true;
    m_integerList = std::forward<IntegerListT>(value);
  }
  template <typename IntegerListT = Aws::Vector<int64_t>>
  RpcV2CborListsResult& WithIntegerList(IntegerListT&& value) {
    SetIntegerList(std::forward<IntegerListT>(value));
    return *this;
  }
  inline RpcV2CborListsResult& AddIntegerList(int64_t value) {
    m_integerListHasBeenSet = true;
    m_integerList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<bool>& GetBooleanList() const { return m_booleanList; }
  template <typename BooleanListT = Aws::Vector<bool>>
  void SetBooleanList(BooleanListT&& value) {
    m_booleanListHasBeenSet = true;
    m_booleanList = std::forward<BooleanListT>(value);
  }
  template <typename BooleanListT = Aws::Vector<bool>>
  RpcV2CborListsResult& WithBooleanList(BooleanListT&& value) {
    SetBooleanList(std::forward<BooleanListT>(value));
    return *this;
  }
  inline RpcV2CborListsResult& AddBooleanList(bool value) {
    m_booleanListHasBeenSet = true;
    m_booleanList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::DateTime>& GetTimestampList() const { return m_timestampList; }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  void SetTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList = std::forward<TimestampListT>(value);
  }
  template <typename TimestampListT = Aws::Vector<Aws::Utils::DateTime>>
  RpcV2CborListsResult& WithTimestampList(TimestampListT&& value) {
    SetTimestampList(std::forward<TimestampListT>(value));
    return *this;
  }
  template <typename TimestampListT = Aws::Utils::DateTime>
  RpcV2CborListsResult& AddTimestampList(TimestampListT&& value) {
    m_timestampListHasBeenSet = true;
    m_timestampList.emplace_back(std::forward<TimestampListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<FooEnum>& GetEnumList() const { return m_enumList; }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  void SetEnumList(EnumListT&& value) {
    m_enumListHasBeenSet = true;
    m_enumList = std::forward<EnumListT>(value);
  }
  template <typename EnumListT = Aws::Vector<FooEnum>>
  RpcV2CborListsResult& WithEnumList(EnumListT&& value) {
    SetEnumList(std::forward<EnumListT>(value));
    return *this;
  }
  inline RpcV2CborListsResult& AddEnumList(FooEnum value) {
    m_enumListHasBeenSet = true;
    m_enumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<int64_t>& GetIntEnumList() const { return m_intEnumList; }
  template <typename IntEnumListT = Aws::Vector<int64_t>>
  void SetIntEnumList(IntEnumListT&& value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList = std::forward<IntEnumListT>(value);
  }
  template <typename IntEnumListT = Aws::Vector<int64_t>>
  RpcV2CborListsResult& WithIntEnumList(IntEnumListT&& value) {
    SetIntEnumList(std::forward<IntEnumListT>(value));
    return *this;
  }
  inline RpcV2CborListsResult& AddIntEnumList(int64_t value) {
    m_intEnumListHasBeenSet = true;
    m_intEnumList.push_back(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Vector<Aws::String>>& GetNestedStringList() const { return m_nestedStringList; }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  void SetNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList = std::forward<NestedStringListT>(value);
  }
  template <typename NestedStringListT = Aws::Vector<Aws::Vector<Aws::String>>>
  RpcV2CborListsResult& WithNestedStringList(NestedStringListT&& value) {
    SetNestedStringList(std::forward<NestedStringListT>(value));
    return *this;
  }
  template <typename NestedStringListT = Aws::Vector<Aws::String>>
  RpcV2CborListsResult& AddNestedStringList(NestedStringListT&& value) {
    m_nestedStringListHasBeenSet = true;
    m_nestedStringList.emplace_back(std::forward<NestedStringListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<StructureListMember>& GetStructureList() const { return m_structureList; }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  void SetStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList = std::forward<StructureListT>(value);
  }
  template <typename StructureListT = Aws::Vector<StructureListMember>>
  RpcV2CborListsResult& WithStructureList(StructureListT&& value) {
    SetStructureList(std::forward<StructureListT>(value));
    return *this;
  }
  template <typename StructureListT = StructureListMember>
  RpcV2CborListsResult& AddStructureList(StructureListT&& value) {
    m_structureListHasBeenSet = true;
    m_structureList.emplace_back(std::forward<StructureListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::Utils::ByteBuffer>& GetBlobList() const { return m_blobList; }
  template <typename BlobListT = Aws::Vector<Aws::Utils::ByteBuffer>>
  void SetBlobList(BlobListT&& value) {
    m_blobListHasBeenSet = true;
    m_blobList = std::forward<BlobListT>(value);
  }
  template <typename BlobListT = Aws::Vector<Aws::Utils::ByteBuffer>>
  RpcV2CborListsResult& WithBlobList(BlobListT&& value) {
    SetBlobList(std::forward<BlobListT>(value));
    return *this;
  }
  template <typename BlobListT = Aws::Utils::ByteBuffer>
  RpcV2CborListsResult& AddBlobList(BlobListT&& value) {
    m_blobListHasBeenSet = true;
    m_blobList.emplace_back(std::forward<BlobListT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  RpcV2CborListsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<Aws::String> m_stringList;
  bool m_stringListHasBeenSet = false;

  Aws::Vector<Aws::String> m_stringSet;
  bool m_stringSetHasBeenSet = false;

  Aws::Vector<int64_t> m_integerList;
  bool m_integerListHasBeenSet = false;

  Aws::Vector<bool> m_booleanList;
  bool m_booleanListHasBeenSet = false;

  Aws::Vector<Aws::Utils::DateTime> m_timestampList;
  bool m_timestampListHasBeenSet = false;

  Aws::Vector<FooEnum> m_enumList;
  bool m_enumListHasBeenSet = false;

  Aws::Vector<int64_t> m_intEnumList;
  bool m_intEnumListHasBeenSet = false;

  Aws::Vector<Aws::Vector<Aws::String>> m_nestedStringList;
  bool m_nestedStringListHasBeenSet = false;

  Aws::Vector<StructureListMember> m_structureList;
  bool m_structureListHasBeenSet = false;

  Aws::Vector<Aws::Utils::ByteBuffer> m_blobList;
  bool m_blobListHasBeenSet = false;

  Aws::String m_requestId;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace RpcV2Protocol
}  // namespace Aws
