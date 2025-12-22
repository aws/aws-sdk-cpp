/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/iot/model/CommandParameterValueComparisonOperand.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace IoT {
namespace Model {

CommandParameterValueComparisonOperand::CommandParameterValueComparisonOperand(JsonView jsonValue) { *this = jsonValue; }

CommandParameterValueComparisonOperand& CommandParameterValueComparisonOperand::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("number")) {
    m_number = jsonValue.GetString("number");
    m_numberHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numbers")) {
    Aws::Utils::Array<JsonView> numbersJsonList = jsonValue.GetArray("numbers");
    for (unsigned numbersIndex = 0; numbersIndex < numbersJsonList.GetLength(); ++numbersIndex) {
      m_numbers.push_back(numbersJsonList[numbersIndex].AsString());
    }
    m_numbersHasBeenSet = true;
  }
  if (jsonValue.ValueExists("string")) {
    m_string = jsonValue.GetString("string");
    m_stringHasBeenSet = true;
  }
  if (jsonValue.ValueExists("strings")) {
    Aws::Utils::Array<JsonView> stringsJsonList = jsonValue.GetArray("strings");
    for (unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex) {
      m_strings.push_back(stringsJsonList[stringsIndex].AsString());
    }
    m_stringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("numberRange")) {
    m_numberRange = jsonValue.GetObject("numberRange");
    m_numberRangeHasBeenSet = true;
  }
  return *this;
}

JsonValue CommandParameterValueComparisonOperand::Jsonize() const {
  JsonValue payload;

  if (m_numberHasBeenSet) {
    payload.WithString("number", m_number);
  }

  if (m_numbersHasBeenSet) {
    Aws::Utils::Array<JsonValue> numbersJsonList(m_numbers.size());
    for (unsigned numbersIndex = 0; numbersIndex < numbersJsonList.GetLength(); ++numbersIndex) {
      numbersJsonList[numbersIndex].AsString(m_numbers[numbersIndex]);
    }
    payload.WithArray("numbers", std::move(numbersJsonList));
  }

  if (m_stringHasBeenSet) {
    payload.WithString("string", m_string);
  }

  if (m_stringsHasBeenSet) {
    Aws::Utils::Array<JsonValue> stringsJsonList(m_strings.size());
    for (unsigned stringsIndex = 0; stringsIndex < stringsJsonList.GetLength(); ++stringsIndex) {
      stringsJsonList[stringsIndex].AsString(m_strings[stringsIndex]);
    }
    payload.WithArray("strings", std::move(stringsJsonList));
  }

  if (m_numberRangeHasBeenSet) {
    payload.WithObject("numberRange", m_numberRange.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace IoT
}  // namespace Aws
