/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/lightsail/model/PartnerInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace Lightsail {
namespace Model {

PartnerInfo::PartnerInfo(JsonView jsonValue) { *this = jsonValue; }

PartnerInfo& PartnerInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("enrolledAt")) {
    m_enrolledAt = jsonValue.GetDouble("enrolledAt");
    m_enrolledAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tierName")) {
    m_tierName = TierNameMapper::GetTierNameForName(jsonValue.GetString("tierName"));
    m_tierNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = PartnerStatusMapper::GetPartnerStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  return *this;
}

JsonValue PartnerInfo::Jsonize() const {
  JsonValue payload;

  if (m_enrolledAtHasBeenSet) {
    payload.WithDouble("enrolledAt", m_enrolledAt.SecondsWithMSPrecision());
  }

  if (m_tierNameHasBeenSet) {
    payload.WithString("tierName", TierNameMapper::GetNameForTierName(m_tierName));
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", PartnerStatusMapper::GetNameForPartnerStatus(m_status));
  }

  return payload;
}

}  // namespace Model
}  // namespace Lightsail
}  // namespace Aws
