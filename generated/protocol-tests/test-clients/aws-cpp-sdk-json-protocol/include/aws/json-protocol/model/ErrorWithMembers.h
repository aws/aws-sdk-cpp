/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/json-protocol/JsonProtocol_EXPORTS.h>
#include <aws/json-protocol/model/KitchenSink.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace JsonProtocol {
namespace Model {

class ErrorWithMembers {
 public:
  AWS_JSONPROTOCOL_API ErrorWithMembers() = default;
  AWS_JSONPROTOCOL_API ErrorWithMembers(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API ErrorWithMembers& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_JSONPROTOCOL_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{

  inline const Aws::String& GetCode() const { return m_code; }
  inline bool CodeHasBeenSet() const { return m_codeHasBeenSet; }
  template <typename CodeT = Aws::String>
  void SetCode(CodeT&& value) {
    m_codeHasBeenSet = true;
    m_code = std::forward<CodeT>(value);
  }
  template <typename CodeT = Aws::String>
  ErrorWithMembers& WithCode(CodeT&& value) {
    SetCode(std::forward<CodeT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const KitchenSink& GetComplexData() const { return m_complexData; }
  inline bool ComplexDataHasBeenSet() const { return m_complexDataHasBeenSet; }
  template <typename ComplexDataT = KitchenSink>
  void SetComplexData(ComplexDataT&& value) {
    m_complexDataHasBeenSet = true;
    m_complexData = std::forward<ComplexDataT>(value);
  }
  template <typename ComplexDataT = KitchenSink>
  ErrorWithMembers& WithComplexData(ComplexDataT&& value) {
    SetComplexData(std::forward<ComplexDataT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline int GetIntegerField() const { return m_integerField; }
  inline bool IntegerFieldHasBeenSet() const { return m_integerFieldHasBeenSet; }
  inline void SetIntegerField(int value) {
    m_integerFieldHasBeenSet = true;
    m_integerField = value;
  }
  inline ErrorWithMembers& WithIntegerField(int value) {
    SetIntegerField(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Vector<Aws::String>& GetListField() const { return m_listField; }
  inline bool ListFieldHasBeenSet() const { return m_listFieldHasBeenSet; }
  template <typename ListFieldT = Aws::Vector<Aws::String>>
  void SetListField(ListFieldT&& value) {
    m_listFieldHasBeenSet = true;
    m_listField = std::forward<ListFieldT>(value);
  }
  template <typename ListFieldT = Aws::Vector<Aws::String>>
  ErrorWithMembers& WithListField(ListFieldT&& value) {
    SetListField(std::forward<ListFieldT>(value));
    return *this;
  }
  template <typename ListFieldT = Aws::String>
  ErrorWithMembers& AddListField(ListFieldT&& value) {
    m_listFieldHasBeenSet = true;
    m_listField.emplace_back(std::forward<ListFieldT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::Map<Aws::String, Aws::String>& GetMapField() const { return m_mapField; }
  inline bool MapFieldHasBeenSet() const { return m_mapFieldHasBeenSet; }
  template <typename MapFieldT = Aws::Map<Aws::String, Aws::String>>
  void SetMapField(MapFieldT&& value) {
    m_mapFieldHasBeenSet = true;
    m_mapField = std::forward<MapFieldT>(value);
  }
  template <typename MapFieldT = Aws::Map<Aws::String, Aws::String>>
  ErrorWithMembers& WithMapField(MapFieldT&& value) {
    SetMapField(std::forward<MapFieldT>(value));
    return *this;
  }
  template <typename MapFieldKeyT = Aws::String, typename MapFieldValueT = Aws::String>
  ErrorWithMembers& AddMapField(MapFieldKeyT&& key, MapFieldValueT&& value) {
    m_mapFieldHasBeenSet = true;
    m_mapField.emplace(std::forward<MapFieldKeyT>(key), std::forward<MapFieldValueT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  ErrorWithMembers& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>abc</p>
   */
  inline const Aws::String& GetStringField() const { return m_stringField; }
  inline bool StringFieldHasBeenSet() const { return m_stringFieldHasBeenSet; }
  template <typename StringFieldT = Aws::String>
  void SetStringField(StringFieldT&& value) {
    m_stringFieldHasBeenSet = true;
    m_stringField = std::forward<StringFieldT>(value);
  }
  template <typename StringFieldT = Aws::String>
  ErrorWithMembers& WithStringField(StringFieldT&& value) {
    SetStringField(std::forward<StringFieldT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_code;
  bool m_codeHasBeenSet = false;

  KitchenSink m_complexData;
  bool m_complexDataHasBeenSet = false;

  int m_integerField{0};
  bool m_integerFieldHasBeenSet = false;

  Aws::Vector<Aws::String> m_listField;
  bool m_listFieldHasBeenSet = false;

  Aws::Map<Aws::String, Aws::String> m_mapField;
  bool m_mapFieldHasBeenSet = false;

  Aws::String m_message;
  bool m_messageHasBeenSet = false;

  Aws::String m_stringField;
  bool m_stringFieldHasBeenSet = false;
};

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
