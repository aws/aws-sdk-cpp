/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/ErrorWithMembers.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

ErrorWithMembers::ErrorWithMembers(JsonView jsonValue) { *this = jsonValue; }

ErrorWithMembers& ErrorWithMembers::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Code")) {
    m_code = jsonValue.GetString("Code");
    m_codeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ComplexData")) {
    m_complexData = jsonValue.GetObject("ComplexData");
    m_complexDataHasBeenSet = true;
  }
  if (jsonValue.ValueExists("IntegerField")) {
    m_integerField = jsonValue.GetInteger("IntegerField");
    m_integerFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ListField")) {
    Aws::Utils::Array<JsonView> listFieldJsonList = jsonValue.GetArray("ListField");
    for (unsigned listFieldIndex = 0; listFieldIndex < listFieldJsonList.GetLength(); ++listFieldIndex) {
      m_listField.push_back(listFieldJsonList[listFieldIndex].AsString());
    }
    m_listFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("MapField")) {
    Aws::Map<Aws::String, JsonView> mapFieldJsonMap = jsonValue.GetObject("MapField").GetAllObjects();
    for (auto& mapFieldItem : mapFieldJsonMap) {
      m_mapField[mapFieldItem.first] = mapFieldItem.second.AsString();
    }
    m_mapFieldHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Message")) {
    m_message = jsonValue.GetString("Message");
    m_messageHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringField")) {
    m_stringField = jsonValue.GetString("StringField");
    m_stringFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue ErrorWithMembers::Jsonize() const {
  JsonValue payload;

  if (m_codeHasBeenSet) {
    payload.WithString("Code", m_code);
  }

  if (m_complexDataHasBeenSet) {
    payload.WithObject("ComplexData", m_complexData.Jsonize());
  }

  if (m_integerFieldHasBeenSet) {
    payload.WithInteger("IntegerField", m_integerField);
  }

  if (m_listFieldHasBeenSet) {
    Aws::Utils::Array<JsonValue> listFieldJsonList(m_listField.size());
    for (unsigned listFieldIndex = 0; listFieldIndex < listFieldJsonList.GetLength(); ++listFieldIndex) {
      listFieldJsonList[listFieldIndex].AsString(m_listField[listFieldIndex]);
    }
    payload.WithArray("ListField", std::move(listFieldJsonList));
  }

  if (m_mapFieldHasBeenSet) {
    JsonValue mapFieldJsonMap;
    for (auto& mapFieldItem : m_mapField) {
      mapFieldJsonMap.WithString(mapFieldItem.first, mapFieldItem.second);
    }
    payload.WithObject("MapField", std::move(mapFieldJsonMap));
  }

  if (m_messageHasBeenSet) {
    payload.WithString("Message", m_message);
  }

  if (m_stringFieldHasBeenSet) {
    payload.WithString("StringField", m_stringField);
  }

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
