/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/IntermediateTableSchemaTypeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

IntermediateTableSchemaTypeProperties::IntermediateTableSchemaTypeProperties(JsonView jsonValue) { *this = jsonValue; }

IntermediateTableSchemaTypeProperties& IntermediateTableSchemaTypeProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("intermediateTableId")) {
    m_intermediateTableId = jsonValue.GetString("intermediateTableId");
    m_intermediateTableIdHasBeenSet = true;
  }
  return *this;
}

JsonValue IntermediateTableSchemaTypeProperties::Jsonize() const {
  JsonValue payload;

  if (m_intermediateTableIdHasBeenSet) {
    payload.WithString("intermediateTableId", m_intermediateTableId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
