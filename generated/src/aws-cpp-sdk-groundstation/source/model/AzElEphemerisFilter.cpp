/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/AzElEphemerisFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

AzElEphemerisFilter::AzElEphemerisFilter(JsonView jsonValue) { *this = jsonValue; }

AzElEphemerisFilter& AzElEphemerisFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("id")) {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  return *this;
}

JsonValue AzElEphemerisFilter::Jsonize() const {
  JsonValue payload;

  if (m_idHasBeenSet) {
    payload.WithString("id", m_id);
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
