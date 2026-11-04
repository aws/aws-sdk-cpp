/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/BulkOperationBytes.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

BulkOperationBytes::BulkOperationBytes(JsonView jsonValue) { *this = jsonValue; }

BulkOperationBytes& BulkOperationBytes::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("BulkPutBytes")) {
    m_bulkPutBytes = jsonValue.GetInt64("BulkPutBytes");
    m_bulkPutBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue BulkOperationBytes::Jsonize() const {
  JsonValue payload;

  if (m_bulkPutBytesHasBeenSet) {
    payload.WithInt64("BulkPutBytes", m_bulkPutBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
