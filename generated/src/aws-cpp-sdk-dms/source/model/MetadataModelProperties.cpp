/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/MetadataModelProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

MetadataModelProperties::MetadataModelProperties(JsonView jsonValue) { *this = jsonValue; }

MetadataModelProperties& MetadataModelProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StatementProperties")) {
    m_statementProperties = jsonValue.GetObject("StatementProperties");
    m_statementPropertiesHasBeenSet = true;
  }
  return *this;
}

JsonValue MetadataModelProperties::Jsonize() const {
  JsonValue payload;

  if (m_statementPropertiesHasBeenSet) {
    payload.WithObject("StatementProperties", m_statementProperties.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
