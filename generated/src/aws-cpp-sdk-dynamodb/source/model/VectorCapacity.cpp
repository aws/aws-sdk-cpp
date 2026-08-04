/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/VectorCapacity.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

VectorCapacity::VectorCapacity(JsonView jsonValue) { *this = jsonValue; }

VectorCapacity& VectorCapacity::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("VectorSearchRequestBytes")) {
    m_vectorSearchRequestBytes = jsonValue.GetDouble("VectorSearchRequestBytes");
    m_vectorSearchRequestBytesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("VectorWriteRequestBytes")) {
    m_vectorWriteRequestBytes = jsonValue.GetDouble("VectorWriteRequestBytes");
    m_vectorWriteRequestBytesHasBeenSet = true;
  }
  return *this;
}

JsonValue VectorCapacity::Jsonize() const {
  JsonValue payload;

  if (m_vectorSearchRequestBytesHasBeenSet) {
    payload.WithDouble("VectorSearchRequestBytes", m_vectorSearchRequestBytes);
  }

  if (m_vectorWriteRequestBytesHasBeenSet) {
    payload.WithDouble("VectorWriteRequestBytes", m_vectorWriteRequestBytes);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
