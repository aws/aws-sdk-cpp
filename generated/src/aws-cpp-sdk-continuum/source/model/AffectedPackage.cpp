/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/continuum/model/AffectedPackage.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Continuum {
namespace Model {

AffectedPackage::AffectedPackage(JsonView jsonValue) { *this = jsonValue; }

AffectedPackage& AffectedPackage::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("name")) {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("version")) {
    m_version = jsonValue.GetString("version");
    m_versionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("fixedInVersion")) {
    m_fixedInVersion = jsonValue.GetString("fixedInVersion");
    m_fixedInVersionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("packageManager")) {
    m_packageManager = jsonValue.GetString("packageManager");
    m_packageManagerHasBeenSet = true;
  }
  return *this;
}

JsonValue AffectedPackage::Jsonize() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("name", m_name);
  }

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_fixedInVersionHasBeenSet) {
    payload.WithString("fixedInVersion", m_fixedInVersion);
  }

  if (m_packageManagerHasBeenSet) {
    payload.WithString("packageManager", m_packageManager);
  }

  return payload;
}

}  // namespace Model
}  // namespace Continuum
}  // namespace Aws
