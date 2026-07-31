/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/DestinationTable.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

DestinationTable::DestinationTable(JsonView jsonValue) { *this = jsonValue; }

DestinationTable& DestinationTable::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("destinationDatabaseName")) {
    m_destinationDatabaseName = jsonValue.GetString("destinationDatabaseName");
    m_destinationDatabaseNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("destinationTableName")) {
    m_destinationTableName = jsonValue.GetString("destinationTableName");
    m_destinationTableNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("partitionSpec")) {
    m_partitionSpec = jsonValue.GetObject("partitionSpec");
    m_partitionSpecHasBeenSet = true;
  }
  return *this;
}

JsonValue DestinationTable::Jsonize() const {
  JsonValue payload;

  if (m_destinationDatabaseNameHasBeenSet) {
    payload.WithString("destinationDatabaseName", m_destinationDatabaseName);
  }

  if (m_destinationTableNameHasBeenSet) {
    payload.WithString("destinationTableName", m_destinationTableName);
  }

  if (m_partitionSpecHasBeenSet) {
    payload.WithObject("partitionSpec", m_partitionSpec.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
