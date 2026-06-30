/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/cleanrooms/model/SchemaTypeProperties.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace CleanRooms {
namespace Model {

SchemaTypeProperties::SchemaTypeProperties(JsonView jsonValue) { *this = jsonValue; }

SchemaTypeProperties& SchemaTypeProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("idMappingTable")) {
    m_idMappingTable = jsonValue.GetObject("idMappingTable");
    m_idMappingTableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("intermediateTable")) {
    m_intermediateTable = jsonValue.GetObject("intermediateTable");
    m_intermediateTableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("configuredTableAssociation")) {
    m_configuredTableAssociation = jsonValue.GetObject("configuredTableAssociation");
    m_configuredTableAssociationHasBeenSet = true;
  }
  return *this;
}

JsonValue SchemaTypeProperties::Jsonize() const {
  JsonValue payload;

  if (m_idMappingTableHasBeenSet) {
    payload.WithObject("idMappingTable", m_idMappingTable.Jsonize());
  }

  if (m_intermediateTableHasBeenSet) {
    payload.WithObject("intermediateTable", m_intermediateTable.Jsonize());
  }

  if (m_configuredTableAssociationHasBeenSet) {
    payload.WithObject("configuredTableAssociation", m_configuredTableAssociation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace CleanRooms
}  // namespace Aws
