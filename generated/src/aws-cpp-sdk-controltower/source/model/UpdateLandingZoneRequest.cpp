/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/controltower/model/UpdateLandingZoneRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::ControlTower::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLandingZoneRequest::SerializePayload() const {
  JsonValue payload;

  if (m_versionHasBeenSet) {
    payload.WithString("version", m_version);
  }

  if (m_manifestHasBeenSet) {
    if (!m_manifest.View().IsNull()) {
      payload.WithObject("manifest", JsonValue(m_manifest.View()));
    }
  }

  if (m_remediationTypesHasBeenSet) {
    Aws::Utils::Array<JsonValue> remediationTypesJsonList(m_remediationTypes.size());
    for (unsigned remediationTypesIndex = 0; remediationTypesIndex < remediationTypesJsonList.GetLength(); ++remediationTypesIndex) {
      remediationTypesJsonList[remediationTypesIndex].AsString(
          RemediationTypeMapper::GetNameForRemediationType(m_remediationTypes[remediationTypesIndex]));
    }
    payload.WithArray("remediationTypes", std::move(remediationTypesJsonList));
  }

  if (m_landingZoneIdentifierHasBeenSet) {
    payload.WithString("landingZoneIdentifier", m_landingZoneIdentifier);
  }

  return payload.View().WriteReadable();
}
