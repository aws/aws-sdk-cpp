/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/kafka/model/SchemaEvolution.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Kafka {
namespace Model {

SchemaEvolution::SchemaEvolution(JsonView jsonValue) { *this = jsonValue; }

SchemaEvolution& SchemaEvolution::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enableSchemaEvolution")) {
    m_enableSchemaEvolution = jsonValue.GetBool("enableSchemaEvolution");
    m_enableSchemaEvolutionHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaEvolution::Jsonize() const {
  JsonValue payload;

  if (m_enableSchemaEvolutionHasBeenSet) {
    payload.WithBool("enableSchemaEvolution", m_enableSchemaEvolution);
  }

  return payload;
}

}  // namespace Model
}  // namespace Kafka
}  // namespace Aws
