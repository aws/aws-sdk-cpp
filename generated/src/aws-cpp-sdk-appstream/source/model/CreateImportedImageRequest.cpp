/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateImportedImageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateImportedImageRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_sourceAmiIdHasBeenSet) {
    payload.WithString("SourceAmiId", m_sourceAmiId);
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("IamRoleArn", m_iamRoleArn);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_runtimeValidationConfigHasBeenSet) {
    payload.WithObject("RuntimeValidationConfig", m_runtimeValidationConfig.Jsonize());
  }

  if (m_agentSoftwareVersionHasBeenSet) {
    payload.WithString("AgentSoftwareVersion", AgentSoftwareVersionMapper::GetNameForAgentSoftwareVersion(m_agentSoftwareVersion));
  }

  if (m_appCatalogConfigHasBeenSet) {
    Aws::Utils::Array<JsonValue> appCatalogConfigJsonList(m_appCatalogConfig.size());
    for (unsigned appCatalogConfigIndex = 0; appCatalogConfigIndex < appCatalogConfigJsonList.GetLength(); ++appCatalogConfigIndex) {
      appCatalogConfigJsonList[appCatalogConfigIndex].AsObject(m_appCatalogConfig[appCatalogConfigIndex].Jsonize());
    }
    payload.WithArray("AppCatalogConfig", std::move(appCatalogConfigJsonList));
  }

  if (m_dryRunHasBeenSet) {
    payload.WithBool("DryRun", m_dryRun);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateImportedImageRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateImportedImage"));
  return headers;
}
