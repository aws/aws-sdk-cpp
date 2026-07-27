/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/glue/model/CatalogTableConfigOptions.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Glue {
namespace Model {

CatalogTableConfigOptions::CatalogTableConfigOptions(JsonView jsonValue) { *this = jsonValue; }

CatalogTableConfigOptions& CatalogTableConfigOptions::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DatabaseName")) {
    m_databaseName = jsonValue.GetString("DatabaseName");
    m_databaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("S3Location")) {
    m_s3Location = jsonValue.GetString("S3Location");
    m_s3LocationHasBeenSet = true;
  }
  if (jsonValue.ValueExists("CatalogId")) {
    m_catalogId = jsonValue.GetString("CatalogId");
    m_catalogIdHasBeenSet = true;
  }
  return *this;
}

JsonValue CatalogTableConfigOptions::Jsonize() const {
  JsonValue payload;

  if (m_databaseNameHasBeenSet) {
    payload.WithString("DatabaseName", m_databaseName);
  }

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_s3LocationHasBeenSet) {
    payload.WithString("S3Location", m_s3Location);
  }

  if (m_catalogIdHasBeenSet) {
    payload.WithString("CatalogId", m_catalogId);
  }

  return payload;
}

}  // namespace Model
}  // namespace Glue
}  // namespace Aws
