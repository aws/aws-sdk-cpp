/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ColumnLineageEntry.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ColumnLineageEntry::ColumnLineageEntry(JsonView jsonValue) { *this = jsonValue; }

ColumnLineageEntry& ColumnLineageEntry::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("column")) {
    m_column = jsonValue.GetString("column");
    m_columnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceColumn")) {
    m_sourceColumn = jsonValue.GetString("sourceColumn");
    m_sourceColumnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceName")) {
    m_sourceName = jsonValue.GetString("sourceName");
    m_sourceNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceId")) {
    m_sourceId = jsonValue.GetString("sourceId");
    m_sourceIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceType")) {
    m_sourceType = BaseTableDependencyTypeMapper::GetBaseTableDependencyTypeForName(jsonValue.GetString("sourceType"));
    m_sourceTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sourceAccountId")) {
    m_sourceAccountId = jsonValue.GetString("sourceAccountId");
    m_sourceAccountIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ColumnLineageEntry::Jsonize() const {
  JsonValue payload;

  if (m_columnHasBeenSet) {
    payload.WithString("column", m_column);
  }

  if (m_sourceColumnHasBeenSet) {
    payload.WithString("sourceColumn", m_sourceColumn);
  }

  if (m_sourceNameHasBeenSet) {
    payload.WithString("sourceName", m_sourceName);
  }

  if (m_sourceIdHasBeenSet) {
    payload.WithString("sourceId", m_sourceId);
  }

  if (m_sourceTypeHasBeenSet) {
    payload.WithString("sourceType", BaseTableDependencyTypeMapper::GetNameForBaseTableDependencyType(m_sourceType));
  }

  if (m_sourceAccountIdHasBeenSet) {
    payload.WithString("sourceAccountId", m_sourceAccountId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
