/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/backup/model/CreateBackupAccessPointRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Backup::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateBackupAccessPointRequest::SerializePayload() const {
  JsonValue payload;

  if (m_accessPointMetadataHasBeenSet) {
    JsonValue accessPointMetadataJsonMap;
    for (auto& accessPointMetadataItem : m_accessPointMetadata) {
      accessPointMetadataJsonMap.WithString(accessPointMetadataItem.first, accessPointMetadataItem.second);
    }
    payload.WithObject("AccessPointMetadata", std::move(accessPointMetadataJsonMap));
  }

  if (m_accessPointPolicyHasBeenSet) {
    payload.WithString("AccessPointPolicy", m_accessPointPolicy);
  }

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_recoveryPointArnHasBeenSet) {
    payload.WithString("RecoveryPointArn", m_recoveryPointArn);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  return payload.View().WriteReadable();
}
