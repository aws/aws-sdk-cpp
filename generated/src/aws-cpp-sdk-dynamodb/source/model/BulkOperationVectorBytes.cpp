/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationVectorBytes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationVectorBytes::BulkOperationVectorBytes(JsonView jsonValue) { *this = jsonValue; }

BulkOperationVectorBytes& BulkOperationVectorBytes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BulkPutVectorBytes")) {
    m_bulkPutVectorBytes = jsonValue.GetInt64("BulkPutVectorBytes");
    m_bulkPutVectorBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationVectorBytes::Jsonize() const {
  JsonValue payload;

  if (m_bulkPutVectorBytesHasBeenSet) {
    payload.WithInt64("BulkPutVectorBytes", m_bulkPutVectorBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
