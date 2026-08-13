/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ComparisonControls.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ComparisonControls::ComparisonControls(JsonView jsonValue) { *this = jsonValue; }

ComparisonControls& ComparisonControls::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("allowedLiteralComparisonColumns")) {
    Aws::Utils::Array<JsonView> allowedLiteralComparisonColumnsJsonList = jsonValue.GetArray("allowedLiteralComparisonColumns");
    for (unsigned allowedLiteralComparisonColumnsIndex = 0;
         allowedLiteralComparisonColumnsIndex < allowedLiteralComparisonColumnsJsonList.GetLength();
         ++allowedLiteralComparisonColumnsIndex) {
      m_allowedLiteralComparisonColumns.push_back(allowedLiteralComparisonColumnsJsonList[allowedLiteralComparisonColumnsIndex].AsString());
    }
    m_allowedLiteralComparisonColumnsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("allowedColumnComparisonColumns")) {
    Aws::Utils::Array<JsonView> allowedColumnComparisonColumnsJsonList = jsonValue.GetArray("allowedColumnComparisonColumns");
    for (unsigned allowedColumnComparisonColumnsIndex = 0;
         allowedColumnComparisonColumnsIndex < allowedColumnComparisonColumnsJsonList.GetLength(); ++allowedColumnComparisonColumnsIndex) {
      m_allowedColumnComparisonColumns.push_back(allowedColumnComparisonColumnsJsonList[allowedColumnComparisonColumnsIndex].AsString());
    }
    m_allowedColumnComparisonColumnsHasBeenSet = true;
  }
  return *this;
}

JsonValue ComparisonControls::Jsonize() const {
  JsonValue payload;

  if (m_allowedLiteralComparisonColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedLiteralComparisonColumnsJsonList(m_allowedLiteralComparisonColumns.size());
    for (unsigned allowedLiteralComparisonColumnsIndex = 0;
         allowedLiteralComparisonColumnsIndex < allowedLiteralComparisonColumnsJsonList.GetLength();
         ++allowedLiteralComparisonColumnsIndex) {
      allowedLiteralComparisonColumnsJsonList[allowedLiteralComparisonColumnsIndex].AsString(
          m_allowedLiteralComparisonColumns[allowedLiteralComparisonColumnsIndex]);
    }
    payload.WithArray("allowedLiteralComparisonColumns", std::move(allowedLiteralComparisonColumnsJsonList));
  }

  if (m_allowedColumnComparisonColumnsHasBeenSet) {
    Aws::Utils::Array<JsonValue> allowedColumnComparisonColumnsJsonList(m_allowedColumnComparisonColumns.size());
    for (unsigned allowedColumnComparisonColumnsIndex = 0;
         allowedColumnComparisonColumnsIndex < allowedColumnComparisonColumnsJsonList.GetLength(); ++allowedColumnComparisonColumnsIndex) {
      allowedColumnComparisonColumnsJsonList[allowedColumnComparisonColumnsIndex].AsString(
          m_allowedColumnComparisonColumns[allowedColumnComparisonColumnsIndex]);
    }
    payload.WithArray("allowedColumnComparisonColumns", std::move(allowedColumnComparisonColumnsJsonList));
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
