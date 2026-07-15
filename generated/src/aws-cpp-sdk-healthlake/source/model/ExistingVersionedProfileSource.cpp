/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/ExistingVersionedProfileSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

ExistingVersionedProfileSource::ExistingVersionedProfileSource(JsonView jsonValue) { *this = jsonValue; }

ExistingVersionedProfileSource& ExistingVersionedProfileSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("ProfileId")) {
    m_profileId = jsonValue.GetString("ProfileId");
    m_profileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Version")) {
    m_version = jsonValue.GetInteger("Version");
    m_versionHasBeenSet = true;
  }
  return *this;
}

JsonValue ExistingVersionedProfileSource::Jsonize() const {
  JsonValue payload;

  if (m_profileIdHasBeenSet) {
    payload.WithString("ProfileId", m_profileId);
  }

  if (m_versionHasBeenSet) {
    payload.WithInteger("Version", m_version);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
