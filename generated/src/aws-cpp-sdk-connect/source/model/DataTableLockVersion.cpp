/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connect/model/DataTableLockVersion.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Connect {
namespace Model {

DataTableLockVersion::DataTableLockVersion(JsonView jsonValue) { *this = jsonValue; }

DataTableLockVersion& DataTableLockVersion::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DataTable")) {
    m_dataTable = jsonValue.GetString("DataTable");
    m_dataTableHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Attribute")) {
    m_attribute = jsonValue.GetString("Attribute");
    m_attributeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PrimaryValues")) {
    m_primaryValues = jsonValue.GetString("PrimaryValues");
    m_primaryValuesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Value")) {
    m_value = jsonValue.GetString("Value");
    m_valueHasBeenSet = true;
  }
  return *this;
}

JsonValue DataTableLockVersion::Jsonize() const {
  JsonValue payload;

  if (m_dataTableHasBeenSet) {
    payload.WithString("DataTable", m_dataTable);
  }

  if (m_attributeHasBeenSet) {
    payload.WithString("Attribute", m_attribute);
  }

  if (m_primaryValuesHasBeenSet) {
    payload.WithString("PrimaryValues", m_primaryValues);
  }

  if (m_valueHasBeenSet) {
    payload.WithString("Value", m_value);
  }

  return payload;
}

}  // namespace Model
}  // namespace Connect
}  // namespace Aws
