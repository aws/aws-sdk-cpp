/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/DataQualityEvaluationConfigListGlueTables.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

DataQualityEvaluationConfigListGlueTables::DataQualityEvaluationConfigListGlueTables(JsonView jsonValue) { *this = jsonValue; }

DataQualityEvaluationConfigListGlueTables& DataQualityEvaluationConfigListGlueTables::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DatabaseName")) {
    m_databaseName = jsonValue.GetString("DatabaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableNamePattern")) {
    m_tableNamePattern = jsonValue.GetString("TableNamePattern");
    m_tableNamePatternHasBeenSet = true;
  }
  return *this;
}

JsonValue DataQualityEvaluationConfigListGlueTables::Jsonize() const {
  JsonValue payload;

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  if (m_databaseNameHasBeenSet) {
    payload.WithString("DatabaseName", m_databaseName);
  }

  if (m_tableNamePatternHasBeenSet) {
    payload.WithString("TableNamePattern", m_tableNamePattern);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
