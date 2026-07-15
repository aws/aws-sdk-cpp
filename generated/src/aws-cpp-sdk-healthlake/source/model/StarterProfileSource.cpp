/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/healthlake/model/StarterProfileSource.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace HealthLake {
namespace Model {

StarterProfileSource::StarterProfileSource(JsonView jsonValue) { *this = jsonValue; }

StarterProfileSource& StarterProfileSource::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("StarterProfileName")) {
    m_starterProfileName = jsonValue.GetString("StarterProfileName");
    m_starterProfileNameHasBeenSet = true;
  }
  return *this;
}

JsonValue StarterProfileSource::Jsonize() const {
  JsonValue payload;

  if (m_starterProfileNameHasBeenSet) {
    payload.WithString("StarterProfileName", m_starterProfileName);
  }

  return payload;
}

}  // namespace Model
}  // namespace HealthLake
}  // namespace Aws
