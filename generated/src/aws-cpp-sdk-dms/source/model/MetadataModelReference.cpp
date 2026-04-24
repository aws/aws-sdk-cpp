/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/MetadataModelReference.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

MetadataModelReference::MetadataModelReference(JsonView jsonValue) { *this = jsonValue; }

MetadataModelReference& MetadataModelReference::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("MetadataModelName")) {
    m_metadataModelName = jsonValue.GetString("MetadataModelName");
    m_metadataModelNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("SelectionRules")) {
    m_selectionRules = jsonValue.GetString("SelectionRules");
    m_selectionRulesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataModelReference::Jsonize() const {
  JsonValue payload;

  if (m_metadataModelNameHasBeenSet) {
    payload.WithString("MetadataModelName", m_metadataModelName);
  }

  if (m_selectionRulesHasBeenSet) {
    payload.WithString("SelectionRules", m_selectionRules);
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
