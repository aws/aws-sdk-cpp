/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/agent-registry-control/model/RecordTypeSchemaOverride.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace AgentRegistryControl {
namespace Model {

RecordTypeSchemaOverride::RecordTypeSchemaOverride(JsonView jsonValue) { *this = jsonValue; }

RecordTypeSchemaOverride& RecordTypeSchemaOverride::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("recordType")) {
    m_recordType = RecordTypeMapper::GetRecordTypeForName(jsonValue.GetString("recordType"));
    m_recordTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("schema")) {
    m_schema = jsonValue.GetString("schema");
    m_schemaHasBeenSet = true;
  }
  return *this;
}

JsonValue RecordTypeSchemaOverride::Jsonize() const {
  JsonValue payload;

  if (m_recordTypeHasBeenSet) {
    payload.WithString("recordType", RecordTypeMapper::GetNameForRecordType(m_recordType));
  }

  if (m_schemaHasBeenSet) {
    payload.WithString("schema", m_schema);
  }

  return payload;
}

}  // namespace Model
}  // namespace AgentRegistryControl
}  // namespace Aws
