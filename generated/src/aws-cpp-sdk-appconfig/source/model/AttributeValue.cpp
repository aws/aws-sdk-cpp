/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appconfig/model/AttributeValue.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AppConfig {
namespace Model {

AttributeValue::AttributeValue(JsonView jsonValue) { *this = jsonValue; }

AttributeValue& AttributeValue::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StringValue")) {
    m_stringValue = jsonValue.GetString("StringValue");
    m_stringValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberValue")) {
    m_numberValue = jsonValue.GetDouble("NumberValue");
    m_numberValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("BooleanValue")) {
    m_booleanValue = jsonValue.GetBool("BooleanValue");
    m_booleanValueHasBeenSet = true;
  }
  if (jsonValue.ValueExists("StringArray")) {
    Aws::Utils::Array<JsonView> stringArrayJsonList = jsonValue.GetArray("StringArray");
    for (unsigned stringArrayIndex = 0; stringArrayIndex < stringArrayJsonList.GetLength(); ++stringArrayIndex) {
      m_stringArray.push_back(stringArrayJsonList[stringArrayIndex].AsString());
    }
    m_stringArrayHasBeenSet = true;
  }
  if (jsonValue.ValueExists("NumberArray")) {
    Aws::Utils::Array<JsonView> numberArrayJsonList = jsonValue.GetArray("NumberArray");
    for (unsigned numberArrayIndex = 0; numberArrayIndex < numberArrayJsonList.GetLength(); ++numberArrayIndex) {
      m_numberArray.push_back(numberArrayJsonList[numberArrayIndex].AsDouble());
    }
    m_numberArrayHasBeenSet = true;
  }
  return *this;
}

JsonValue AttributeValue::Jsonize() const {
  JsonValue payload;

  if (m_stringValueHasBeenSet) {
    payload.WithString("StringValue", m_stringValue);
  }

  if (m_numberValueHasBeenSet) {
    payload.WithDouble("NumberValue", m_numberValue);
  }

  if (m_booleanValueHasBeenSet) {
    payload.WithBool("BooleanValue", m_booleanValue);
  }

  if (m_stringArrayHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringArrayJsonList(m_stringArray.size());
    for (unsigned stringArrayIndex = 0; stringArrayIndex < stringArrayJsonList.GetLength(); ++stringArrayIndex) {
      stringArrayJsonList[stringArrayIndex].AsString(m_stringArray[stringArrayIndex]);
    }
    payload.WithArray("StringArray", std::move(stringArrayJsonList));
  }

  if (m_numberArrayHasBeenSet) {
    Aws::Utils::Array<JsonValue> numberArrayJsonList(m_numberArray.size());
    for (unsigned numberArrayIndex = 0; numberArrayIndex < numberArrayJsonList.GetLength(); ++numberArrayIndex) {
      numberArrayJsonList[numberArrayIndex].AsDouble(m_numberArray[numberArrayIndex]);
    }
    payload.WithArray("NumberArray", std::move(numberArrayJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace AppConfig
}  // namespace Aws
