/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationTableDetail.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationTableDetail::BulkOperationTableDetail(JsonView jsonValue) { *this = jsonValue; }

BulkOperationTableDetail& BulkOperationTableDetail::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("TableName")) {
    m_tableName = jsonValue.GetString("TableName");
    m_tableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("TableId")) {
    m_tableId = jsonValue.GetString("TableId");
    m_tableIdHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationTableDetail::Jsonize() const {
  JsonValue payload;

  if (m_tableNameHasBeenSet) {
    payload.WithString("TableName", m_tableName);
  }

  if (m_tableIdHasBeenSet) {
    payload.WithString("TableId", m_tableId);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
