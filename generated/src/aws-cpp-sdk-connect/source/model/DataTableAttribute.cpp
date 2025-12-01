/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableAttribute.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableAttribute::DataTableAttribute(JsonView jsonValue) { *this = jsonValue; }

DataTableAttribute& DataTableAttribute::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("AttributeId")) {
    m_attributeId = jsonValue.GetString("AttributeId");
    m_attributeIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Name")) {
    m_name = jsonValue.GetString("Name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ValueType")) {
    m_valueType = DataTableAttributeValueTypeMapper::GetDataTableAttributeValueTypeForName(jsonValue.GetString("ValueType"));
    m_valueTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataTableId")) {
    m_dataTableId = jsonValue.GetString("DataTableId");
    m_dataTableIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("DataTableArn")) {
    m_dataTableArn = jsonValue.GetString("DataTableArn");
    m_dataTableArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Primary")) {
    m_primary = jsonValue.GetBool("Primary");
    m_primaryHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetString("Version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LockVersion")) {
    m_lockVersion = jsonValue.GetObject("LockVersion");
    m_lockVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedTime")) {
    m_lastModifiedTime = jsonValue.GetDouble("LastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LastModifiedRegion")) {
    m_lastModifiedRegion = jsonValue.GetString("LastModifiedRegion");
    m_lastModifiedRegionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Validation")) {
    m_validation = jsonValue.GetObject("Validation");
    m_validationHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTableAttribute::Jsonize() const {
  JsonValue payload;

  if (m_attributeIdHasBeenSet) {
    payload.WithString("AttributeId", m_attributeId);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_valueTypeHasBeenSet) {
    payload.WithString("ValueType", DataTableAttributeValueTypeMapper::GetNameForDataTableAttributeValueType(m_valueType));
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_dataTableIdHasBeenSet) {
    payload.WithString("DataTableId", m_dataTableId);
  }

  if (m_dataTableArnHasBeenSet) {
    payload.WithString("DataTableArn", m_dataTableArn);
  }

  if (m_primaryHasBeenSet) {
    payload.WithBool("Primary", m_primary);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("Version", m_version);
  }

  if (m_lockVersionHasBeenSet) {
    payload.WithObject("LockVersion", m_lockVersion.Jsonize());
  }

  if (m_lastModifiedTimeHasBeenSet) {
    payload.WithDouble("LastModifiedTime", m_lastModifiedTime.SecondsWithMSPrecision());
  }

  if (m_lastModifiedRegionHasBeenSet) {
    payload.WithString("LastModifiedRegion", m_lastModifiedRegion);
  }

  if (m_validationHasBeenSet) {
    payload.WithObject("Validation", m_validation.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
