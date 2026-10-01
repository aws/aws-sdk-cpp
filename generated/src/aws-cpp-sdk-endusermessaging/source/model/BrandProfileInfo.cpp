/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/endusermessaging/model/BrandProfileInfo.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace EndUserMessaging {
namespace Model {

BrandProfileInfo::BrandProfileInfo(JsonView jsonValue) { *this = jsonValue; }

BrandProfileInfo& BrandProfileInfo::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("brandProfileId")) {
    m_brandProfileId = jsonValue.GetString("brandProfileId");
    m_brandProfileIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("brandProfileArn")) {
    m_brandProfileArn = jsonValue.GetString("brandProfileArn");
    m_brandProfileArnHasBeenSet = true;
  }
  if (jsonValue.ValueExists("brandProfileName")) {
    m_brandProfileName = jsonValue.GetString("brandProfileName");
    m_brandProfileNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("status")) {
    m_status = StatusMapper::GetStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if (jsonValue.ValueExists("deletionProtectionEnabled")) {
    m_deletionProtectionEnabled = jsonValue.GetBool("deletionProtectionEnabled");
    m_deletionProtectionEnabledHasBeenSet = true;
  }
  if (jsonValue.ValueExists("createdAt")) {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if (jsonValue.ValueExists("updatedAt")) {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandProfileInfo::Jsonize() const {
  JsonValue payload;

  if (m_brandProfileIdHasBeenSet) {
    payload.WithString("brandProfileId", m_brandProfileId);
  }

  if (m_brandProfileArnHasBeenSet) {
    payload.WithString("brandProfileArn", m_brandProfileArn);
  }

  if (m_brandProfileNameHasBeenSet) {
    payload.WithString("brandProfileName", m_brandProfileName);
  }

  if (m_statusHasBeenSet) {
    payload.WithString("status", StatusMapper::GetNameForStatus(m_status));
  }

  if (m_deletionProtectionEnabledHasBeenSet) {
    payload.WithBool("deletionProtectionEnabled", m_deletionProtectionEnabled);
  }

  if (m_createdAtHasBeenSet) {
    payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if (m_updatedAtHasBeenSet) {
    payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

}  // namespace Model
}  // namespace EndUserMessaging
}  // namespace Aws
