/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/WafResponseInspection.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

WafResponseInspection::WafResponseInspection(JsonView jsonValue) { *this = jsonValue; }

WafResponseInspection& WafResponseInspection::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("successCodes")) {
    Aws::Utils::Array<JsonView> successCodesJsonList = jsonValue.GetArray("successCodes");
    for (unsigned successCodesIndex = 0; successCodesIndex < successCodesJsonList.GetLength(); ++successCodesIndex) {
      m_successCodes.push_back(successCodesJsonList[successCodesIndex].AsInteger());
    }
    m_successCodesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("failureCodes")) {
    Aws::Utils::Array<JsonView> failureCodesJsonList = jsonValue.GetArray("failureCodes");
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      m_failureCodes.push_back(failureCodesJsonList[failureCodesIndex].AsInteger());
    }
    m_failureCodesHasBeenSet = true;
  }
  return *this;
}

JsonValue WafResponseInspection::Jsonize() const {
  JsonValue payload;

  if (m_successCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> successCodesJsonList(m_successCodes.size());
    for (unsigned successCodesIndex = 0; successCodesIndex < successCodesJsonList.GetLength(); ++successCodesIndex) {
      successCodesJsonList[successCodesIndex].AsInteger(m_successCodes[successCodesIndex]);
    }
    payload.WithArray("successCodes", std::move(successCodesJsonList));
  }

  if (m_failureCodesHasBeenSet) {
    Aws::Utils::Array<JsonValue> failureCodesJsonList(m_failureCodes.size());
    for (unsigned failureCodesIndex = 0; failureCodesIndex < failureCodesJsonList.GetLength(); ++failureCodesIndex) {
      failureCodesJsonList[failureCodesIndex].AsInteger(m_failureCodes[failureCodesIndex]);
    }
    payload.WithArray("failureCodes", std::move(failureCodesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
