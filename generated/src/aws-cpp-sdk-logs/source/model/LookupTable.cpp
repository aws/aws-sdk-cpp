/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/logs/model/LookupTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CloudWatchLogs {
namespace Model {

LookupTable::LookupTable(JsonView jsonValue) { *this = jsonValue; }

LookupTable& LookupTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("lookupTableArn")) {
    m_lookupTableArn = jsonValue.GetString("lookupTableArn");
    m_lookupTableArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lookupTableName")) {
    m_lookupTableName = jsonValue.GetString("lookupTableName");
    m_lookupTableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("description")) {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tableFields")) {
    Aws::Utils::Array<JsonView> tableFieldsJsonList = jsonValue.GetArray("tableFields");
    for (unsigned tableFieldsIndex = 0; tableFieldsIndex < tableFieldsJsonList.GetLength(); ++tableFieldsIndex) {
      m_tableFields.push_back(tableFieldsJsonList[tableFieldsIndex].AsString());
    }
    m_tableFieldsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recordsCount")) {
    m_recordsCount = jsonValue.GetInt64("recordsCount");
    m_recordsCountHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sizeBytes")) {
    m_sizeBytes = jsonValue.GetInt64("sizeBytes");
    m_sizeBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("lastUpdatedTime")) {
    m_lastUpdatedTime = jsonValue.GetInt64("lastUpdatedTime");
    m_lastUpdatedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("kmsKeyId")) {
    m_kmsKeyId = jsonValue.GetString("kmsKeyId");
    m_kmsKeyIdHasBeenSet = true;
  }
  return *this;
}

JsonValue LookupTable::Jsonize() const {
  JsonValue payload;

  if (m_lookupTableArnHasBeenSet) {
    payload.WithString("lookupTableArn", m_lookupTableArn);
  }

  if (m_lookupTableNameHasBeenSet) {
    payload.WithString("lookupTableName", m_lookupTableName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("description", m_description);
  }

  if (m_tableFieldsHasBeenSet) {
    Aws::Utils::Array<JsonValue> tableFieldsJsonList(m_tableFields.size());
    for (unsigned tableFieldsIndex = 0; tableFieldsIndex < tableFieldsJsonList.GetLength(); ++tableFieldsIndex) {
      tableFieldsJsonList[tableFieldsIndex].AsString(m_tableFields[tableFieldsIndex]);
    }
    payload.WithArray("tableFields", std::move(tableFieldsJsonList));
  }

  if (m_recordsCountHasBeenSet) {
    payload.WithInt64("recordsCount", m_recordsCount);
  }

  if (m_sizeBytesHasBeenSet) {
    payload.WithInt64("sizeBytes", m_sizeBytes);
  }

  if (m_lastUpdatedTimeHasBeenSet) {
    payload.WithInt64("lastUpdatedTime", m_lastUpdatedTime);
  }

  if (m_kmsKeyIdHasBeenSet) {
    payload.WithString("kmsKeyId", m_kmsKeyId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CloudWatchLogs
}  // namespace Aws
