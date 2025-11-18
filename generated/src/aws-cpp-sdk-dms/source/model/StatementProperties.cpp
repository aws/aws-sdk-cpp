/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/StatementProperties.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

StatementProperties::StatementProperties(JsonView jsonValue) { *this = jsonValue; }

StatementProperties& StatementProperties::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Definition")) {
    m_definition = jsonValue.GetString("Definition");
    m_definitionHasBeenSet = true;
  }
  return *this;
}

JsonValue StatementProperties::Jsonize() const {
  JsonValue payload;

  if (m_definitionHasBeenSet) {
    payload.WithString("Definition", m_definition);
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
