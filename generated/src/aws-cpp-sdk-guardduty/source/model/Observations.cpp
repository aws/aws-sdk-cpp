/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/guardduty/model/Observations.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GuardDuty {
namespace Model {

Observations::Observations(JsonView jsonValue) { *this = jsonValue; }

Observations& Observations::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("text")) {
    Aws::Utils::Array<JsonView> textJsonList = jsonValue.GetArray("text");
    for (unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex) {
      m_text.push_back(textJsonList[textIndex].AsString());
    }
    m_textHasBeenSet = true;
  }
  if (jsonValue.ValueExists("number")) {
    Aws::Utils::Array<JsonView> numberJsonList = jsonValue.GetArray("number");
    for (unsigned numberIndex = 0; numberIndex < numberJsonList.GetLength(); ++numberIndex) {
      m_number.push_back(numberJsonList[numberIndex].AsInt64());
    }
    m_numberHasBeenSet = true;
  }
  return *this;
}

JsonValue Observations::Jsonize() const {
  JsonValue payload;

  if (m_textHasBeenSet) {
    Aws::Utils::Array<JsonValue> textJsonList(m_text.size());
    for (unsigned textIndex = 0; textIndex < textJsonList.GetLength(); ++textIndex) {
      textJsonList[textIndex].AsString(m_text[textIndex]);
    }
    payload.WithArray("text", std::move(textJsonList));
  }

  if (m_numberHasBeenSet) {
    Aws::Utils::Array<JsonValue> numberJsonList(m_number.size());
    for (unsigned numberIndex = 0; numberIndex < numberJsonList.GetLength(); ++numberIndex) {
      numberJsonList[numberIndex].AsInt64(m_number[numberIndex]);
    }
    payload.WithArray("number", std::move(numberJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace GuardDuty
}  // namespace Aws
