/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/ConfiguredTableAssociationSchemaTypeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

ConfiguredTableAssociationSchemaTypeProperties::ConfiguredTableAssociationSchemaTypeProperties(JsonView jsonValue) { *this = jsonValue; }

ConfiguredTableAssociationSchemaTypeProperties& ConfiguredTableAssociationSchemaTypeProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("configuredTableAssociationId")) {
    m_configuredTableAssociationId = jsonValue.GetString("configuredTableAssociationId");
    m_configuredTableAssociationIdHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfiguredTableAssociationSchemaTypeProperties::Jsonize() const {
  JsonValue payload;

  if (m_configuredTableAssociationIdHasBeenSet) {
    payload.WithString("configuredTableAssociationId", m_configuredTableAssociationId);
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
