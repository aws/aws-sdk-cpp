/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/dms/model/LakehouseSettings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace DatabaseMigrationService {
namespace Model {

LakehouseSettings::LakehouseSettings(JsonView jsonValue) { *this = jsonValue; }

LakehouseSettings& LakehouseSettings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("Arn")) {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  return *this;
}

JsonValue LakehouseSettings::Jsonize() const {
  JsonValue payload;

  if (m_arnHasBeenSet) {
    payload.WithString("Arn", m_arn);
  }

  return payload;
}

}  // namespace Model
}  // namespace DatabaseMigrationService
}  // namespace Aws
