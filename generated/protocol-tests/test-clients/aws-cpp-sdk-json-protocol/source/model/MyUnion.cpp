/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/HashingUtils.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/json-protocol/model/MyUnion.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace JsonProtocol {
namespace Model {

MyUnion::MyUnion(JsonView jsonValue) { *this = jsonValue; }

MyUnion& MyUnion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("stringValue")) {
    m_stringValue = jsonValue.GetString("stringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("booleanValue")) {
    m_booleanValue = jsonValue.GetBool("booleanValue");
    m_booleanValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberValue")) {
    m_numberValue = jsonValue.GetInteger("numberValue");
    m_numberValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("blobValue")) {
    m_blobValue = HashingUtils::Base64Decode(jsonValue.GetString("blobValue"));
    m_blobValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("timestampValue")) {
    m_timestampValue = jsonValue.GetDouble("timestampValue");
    m_timestampValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("enumValue")) {
    m_enumValue = FooEnumMapper::GetFooEnumForName(jsonValue.GetString("enumValue"));
    m_enumValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("listValue")) {
    Aws::Utils::Array<JsonView> listValueJsonList = jsonValue.GetArray("listValue");
    for (unsigned listValueIndex = 0; listValueIndex < listValueJsonList.GetLength(); ++listValueIndex) {
      m_listValue.push_back(listValueJsonList[listValueIndex].AsString());
    }
    m_listValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("mapValue")) {
    Aws::Map<Aws::String, JsonView> mapValueJsonMap = jsonValue.GetObject("mapValue").GetAllObjects();
    for (auto& mapValueItem : mapValueJsonMap) {
      m_mapValue[mapValueItem.first] = mapValueItem.second.AsString();
    }
    m_mapValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("structureValue")) {
    m_structureValue = jsonValue.GetObject("structureValue");
    m_structureValueHasBeenSet = true;
  }
  return *this;
}

JsonValue MyUnion::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("stringValue", m_stringValue);
  }

  if (m_booleanValueHasBeenSet) {
    payload.WithBool("booleanValue", m_booleanValue);
  }

  if (m_numberValueHasBeenSet) {
    payload.WithInteger("numberValue", m_numberValue);
  }

  if (m_blobValueHasBeenSet) {
    payload.WithString("blobValue", HashingUtils::Base64Encode(m_blobValue));
  }

  if (m_timestampValueHasBeenSet) {
    payload.WithDouble("timestampValue", m_timestampValue.SecondsWithMSPrecision());
  }

  if (m_enumValueHasBeenSet) {
    payload.WithString("enumValue", FooEnumMapper::GetNameForFooEnum(m_enumValue));
  }

  if (m_listValueHasBeenSet) {
    Aws::Utils::Array<JsonValue> listValueJsonList(m_listValue.size());
    for (unsigned listValueIndex = 0; listValueIndex < listValueJsonList.GetLength(); ++listValueIndex) {
      listValueJsonList[listValueIndex].AsString(m_listValue[listValueIndex]);
    }
    payload.WithArray("listValue", std::move(listValueJsonList));
  }

  if (m_mapValueHasBeenSet) {
    JsonValue mapValueJsonMap;
    for (auto& mapValueItem : m_mapValue) {
      mapValueJsonMap.WithString(mapValueItem.first, mapValueItem.second);
    }
    payload.WithObject("mapValue", std::move(mapValueJsonMap));
  }

  if (m_structureValueHasBeenSet) {
    payload.WithObject("structureValue", m_structureValue.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace JsonProtocol
}  // namespace Aws
