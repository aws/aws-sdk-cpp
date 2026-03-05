/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/datazone/model/AdditionalAttributes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DataZone {
namespace Model {

AdditionalAttributes::AdditionalAttributes(JsonView jsonValue) { *this = jsonValue; }

AdditionalAttributes& AdditionalAttributes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("formNames")) {
    Aws::Utils::Array<JsonView> formNamesJsonList = jsonValue.GetArray("formNames");
    for (unsigned formNamesIndex = 0; formNamesIndex < formNamesJsonList.GetLength(); ++formNamesIndex) {
      m_formNames.push_back(formNamesJsonList[formNamesIndex].AsString());
    }
    m_formNamesHasBeenSet = true;
  }
  return *this;
}

JsonValue AdditionalAttributes::Jsonize() const {
  JsonValue payload;

  if (m_formNamesHasBeenSet) {
    Aws::Utils::Array<JsonValue> formNamesJsonList(m_formNames.size());
    for (unsigned formNamesIndex = 0; formNamesIndex < formNamesJsonList.GetLength(); ++formNamesIndex) {
      formNamesJsonList[formNamesIndex].AsString(m_formNames[formNamesIndex]);
    }
    payload.WithArray("formNames", std::move(formNamesJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace DataZone
}  // namespace Aws
