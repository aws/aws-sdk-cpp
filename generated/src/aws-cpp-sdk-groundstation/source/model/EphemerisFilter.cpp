/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/groundstation/model/EphemerisFilter.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace GroundStation {
namespace Model {

EphemerisFilter::EphemerisFilter(JsonView jsonValue) { *this = jsonValue; }

EphemerisFilter& EphemerisFilter::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("azEl")) {
    m_azEl = jsonValue.GetObject("azEl");
    m_azElHasBeenSet = true;
  }
  return *this;
}

JsonValue EphemerisFilter::Jsonize() const {
  JsonValue payload;

  if (m_azElHasBeenSet) {
    payload.WithObject("azEl", m_azEl.Jsonize());
  }

  return payload;
}

}  // namespace Model
}  // namespace GroundStation
}  // namespace Aws
