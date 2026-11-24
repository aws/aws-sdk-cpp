/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/apiportal/model/Section.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace APIPortal {
namespace Model {

Section::Section(JsonView jsonValue) { *this = jsonValue; }

Section& Section::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("sectionName")) {
    m_sectionName = jsonValue.GetString("sectionName");
    m_sectionNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("productApiPageArns")) {
    Aws::Utils::Array<JsonView> productApiPageArnsJsonList = jsonValue.GetArray("productApiPageArns");
    for (unsigned productApiPageArnsIndex = 0; productApiPageArnsIndex < productApiPageArnsJsonList.GetLength();
         ++productApiPageArnsIndex) {
      m_productApiPageArns.push_back(productApiPageArnsJsonList[productApiPageArnsIndex].AsString());
    }
    m_productApiPageArnsHasBeenSet = true;
  }
  return *this;
}

JsonValue Section::Jsonize() const {
  JsonValue payload;

  if (m_sectionNameHasBeenSet) {
    payload.WithString("sectionName", m_sectionName);
  }

  if (m_productApiPageArnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> productApiPageArnsJsonList(m_productApiPageArns.size());
    for (unsigned productApiPageArnsIndex = 0; productApiPageArnsIndex < productApiPageArnsJsonList.GetLength();
         ++productApiPageArnsIndex) {
      productApiPageArnsJsonList[productApiPageArnsIndex].AsString(m_productApiPageArns[productApiPageArnsIndex]);
    }
    payload.WithArray("productApiPageArns", std::move(productApiPageArnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace APIPortal
}  // namespace Aws
