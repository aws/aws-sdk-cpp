/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dynamodb/model/DeleteVectorIndexAction.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DynamoDB {
namespace Model {

DeleteVectorIndexAction::DeleteVectorIndexAction(JsonView jsonValue) { *this = jsonValue; }

DeleteVectorIndexAction& DeleteVectorIndexAction::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("IndexName")) {
    m_indexName = jsonValue.GetString("IndexName");
    m_indexNameHasBeenSet = true;
  }
  return *this;
}

JsonValue DeleteVectorIndexAction::Jsonize() const {
  JsonValue payload;

  if (m_indexNameHasBeenSet) {
    payload.WithString("IndexName", m_indexName);
  }

  return payload;
}

}  // namespace Model
}  // namespace DynamoDB
}  // namespace Aws
