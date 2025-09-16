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
#include <aws/json-rpc-10/JSONRPC10_EXPORTS.h>
#include <aws/json-rpc-10/model/FooEnum.h>
#include <aws/json-rpc-10/model/GreetingStruct.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JSONRPC10 {
namespace Model {

/**
 * <p>A union with a representative set of types for members.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/json-rpc-10-2020-07-14/MyUnion">AWS
 * API Reference</a></p>
 */
class MyUnion {
 public:
  AWS_JSONRPC10_API MyUnion() = default;
  AWS_JSONRPC10_API MyUnion(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONRPC10_API MyUnion& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONRPC10_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetStringValue() const { return m_stringValue; }
  inline bool StringValueHasBeenSet() const { return m_stringValueHasBeenSet; }
  template <typename StringValueT = Aws::String>
  void SetStringValue(StringValueT&& value) {
    m_stringValueHasBeenSet = true;
    m_stringValue = std::forward<StringValueT>(value);
  }
  template <typename StringValueT = Aws::String>
  MyUnion& WithStringValue(StringValueT&& value) {
    SetStringValue(std::forward<StringValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline bool GetBooleanValue() const { return m_booleanValue; }
  inline bool BooleanValueHasBeenSet() const { return m_booleanValueHasBeenSet; }
  inline void SetBooleanValue(bool value) {
    m_booleanValueHasBeenSet = true;
    m_booleanValue = value;
  }
  inline MyUnion& WithBooleanValue(bool value) {
    SetBooleanValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetNumberValue() const { return m_numberValue; }
  inline bool NumberValueHasBeenSet() const { return m_numberValueHasBeenSet; }
  inline void SetNumberValue(int value) {
    m_numberValueHasBeenSet = true;
    m_numberValue = value;
  }
  inline MyUnion& WithNumberValue(int value) {
    SetNumberValue(value);
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
  MyUnion& WithBlobValue(BlobValueT&& value) {
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
  MyUnion& WithTimestampValue(TimestampValueT&& value) {
    SetTimestampValue(std::forward<TimestampValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline FooEnum GetEnumValue() const { return m_enumValue; }
  inline bool EnumValueHasBeenSet() const { return m_enumValueHasBeenSet; }
  inline void SetEnumValue(FooEnum value) {
    m_enumValueHasBeenSet = true;
    m_enumValue = value;
  }
  inline MyUnion& WithEnumValue(FooEnum value) {
    SetEnumValue(value);
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntEnumValue() const { return m_intEnumValue; }
  inline bool IntEnumValueHasBeenSet() const { return m_intEnumValueHasBeenSet; }
  inline void SetIntEnumValue(int value) {
    m_intEnumValueHasBeenSet = true;
    m_intEnumValue = value;
  }
  inline MyUnion& WithIntEnumValue(int value) {
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
  MyUnion& WithListValue(ListValueT&& value) {
    SetListValue(std::forward<ListValueT>(value));
    return *this;
  }
  template <typename ListValueT = Aws::String>
  MyUnion& AddListValue(ListValueT&& value) {
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
  MyUnion& WithMapValue(MapValueT&& value) {
    SetMapValue(std::forward<MapValueT>(value));
    return *this;
  }
  template <typename MapValueKeyT = Aws::String, typename MapValueValueT = Aws::String>
  MyUnion& AddMapValue(MapValueKeyT&& key, MapValueValueT&& value) {
    m_mapValueHasBeenSet = true;
    m_mapValue.emplace(std::forward<MapValueKeyT>(key), std::forward<MapValueValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const GreetingStruct& GetStructureValue() const { return m_structureValue; }
  inline bool StructureValueHasBeenSet() const { return m_structureValueHasBeenSet; }
  template <typename StructureValueT = GreetingStruct>
  void SetStructureValue(StructureValueT&& value) {
    m_structureValueHasBeenSet = true;
    m_structureValue = std::forward<StructureValueT>(value);
  }
  template <typename StructureValueT = GreetingStruct>
  MyUnion& WithStructureValue(StructureValueT&& value) {
    SetStructureValue(std::forward<StructureValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_stringValue;
  bool m_stringValueHasBeenSet = false;

  bool m_booleanValue{false};
  bool m_booleanValueHasBeenSet = false;

  int m_numberValue{0};
  bool m_numberValueHasBeenSet = false;

  Aws::Utils::ByteBuffer m_blobValue{};
  bool m_blobValueHasBeenSet = false;

  Aws::Utils::DateTime m_timestampValue{};
  bool m_timestampValueHasBeenSet = false;

  FooEnum m_enumValue{FooEnum::NOT_SET};
  bool m_enumValueHasBeenSet = false;

  int m_intEnumValue{0};
  bool m_intEnumValueHasBeenSet = false;

  Aws::Vector<Aws::String> m_listValue;
  bool m_listValueHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_mapValue;
  bool m_mapValueHasBeenSet = false;

  GreetingStruct m_structureValue;
  bool m_structureValueHasBeenSet = false;
};

}  // namespace Model
}  // namespace JSONRPC10
}  // namespace Aws
