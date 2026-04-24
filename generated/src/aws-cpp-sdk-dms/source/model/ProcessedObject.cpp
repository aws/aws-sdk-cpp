/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/ProcessedObject.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

ProcessedObject::ProcessedObject(JsonView jsonValue) { *this = jsonValue; }

ProcessedObject& ProcessedObject::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Type")) {
    m_type = jsonValue.GetString("Type");
    m_typeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("EndpointType")) {
    m_endpointType = jsonValue.GetString("EndpointType");
    m_endpointTypeHasBeenSet = true;
  }
  return *this;
}

JsonValue ProcessedObject::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_typeHasBeenSet) {
    payload.WithString("Type", m_type);
  }

  if (m_endpointTypeHasBeenSet) {
    payload.WithString("EndpointType", m_endpointType);
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
