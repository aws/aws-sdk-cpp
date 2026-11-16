/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/connecthealth/model/PeriodontalSite.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace ConnectHealth {
namespace Model {

PeriodontalSite::PeriodontalSite(JsonView jsonValue) { *this = jsonValue; }

PeriodontalSite& PeriodontalSite::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("site")) {
    m_site = PeriodontalSiteNameMapper::GetPeriodontalSiteNameForName(jsonValue.GetString("site"));
    m_siteHasBeenSet = true;
  }
  if (jsonValue.ValueExists("probingDepth")) {
    m_probingDepth = jsonValue.GetInteger("probingDepth");
    m_probingDepthHasBeenSet = true;
  }
  if (jsonValue.ValueExists("recession")) {
    m_recession = jsonValue.GetInteger("recession");
    m_recessionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("bleeding")) {
    m_bleeding = jsonValue.GetBool("bleeding");
    m_bleedingHasBeenSet = true;
  }
  if (jsonValue.ValueExists("suppuration")) {
    m_suppuration = jsonValue.GetBool("suppuration");
    m_suppurationHasBeenSet = true;
  }
  return *this;
}

JsonValue PeriodontalSite::Jsonize() const {
  JsonValue payload;

  if (m_siteHasBeenSet) {
    payload.WithString("site", PeriodontalSiteNameMapper::GetNameForPeriodontalSiteName(m_site));
  }

  if (m_probingDepthHasBeenSet) {
    payload.WithInteger("probingDepth", m_probingDepth);
  }

  if (m_recessionHasBeenSet) {
    payload.WithInteger("recession", m_recession);
  }

  if (m_bleedingHasBeenSet) {
    payload.WithBool("bleeding", m_bleeding);
  }

  if (m_suppurationHasBeenSet) {
    payload.WithBool("suppuration", m_suppuration);
  }

  return payload;
}

}  // namespace Model
}  // namespace ConnectHealth
}  // namespace Aws
