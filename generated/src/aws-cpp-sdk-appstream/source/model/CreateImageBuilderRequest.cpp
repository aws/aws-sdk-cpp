/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateImageBuilderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateImageBuilderRequest::SerializePayload() const {
  JsonValue payload;

  if (m_nameHasBeenSet) {
    payload.WithString("Name", m_name);
  }

  if (m_imageNameHasBeenSet) {
    payload.WithString("ImageName", m_imageName);
  }

  if (m_imageArnHasBeenSet) {
    payload.WithString("ImageArn", m_imageArn);
  }

  if (m_instanceTypeHasBeenSet) {
    payload.WithString("InstanceType", m_instanceType);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_vpcConfigHasBeenSet) {
    payload.WithObject("VpcConfig", m_vpcConfig.Jsonize());
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("IamRoleArn", m_iamRoleArn);
  }

  if (m_enableDefaultInternetAccessHasBeenSet) {
    payload.WithBool("EnableDefaultInternetAccess", m_enableDefaultInternetAccess);
  }

  if (m_domainJoinInfoHasBeenSet) {
    payload.WithObject("DomainJoinInfo", m_domainJoinInfo.Jsonize());
  }

  if (m_appstreamAgentVersionHasBeenSet) {
    payload.WithString("AppstreamAgentVersion", m_appstreamAgentVersion);
  }

  if (m_tagsHasBeenSet) {
    JsonValue tagsJsonMap;
    for (auto& tagsItem : m_tags) {
      tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
    }
    payload.WithObject("Tags", std::move(tagsJsonMap));
  }

  if (m_accessEndpointsHasBeenSet) {
    Aws::Utils::Array<JsonValue> accessEndpointsJsonList(m_accessEndpoints.size());
    for (unsigned accessEndpointsIndex = 0; accessEndpointsIndex < accessEndpointsJsonList.GetLength(); ++accessEndpointsIndex) {
      accessEndpointsJsonList[accessEndpointsIndex].AsObject(m_accessEndpoints[accessEndpointsIndex].Jsonize());
    }
    payload.WithArray("AccessEndpoints", std::move(accessEndpointsJsonList));
  }

  if (m_rootVolumeConfigHasBeenSet) {
    payload.WithObject("RootVolumeConfig", m_rootVolumeConfig.Jsonize());
  }

  if (m_softwaresToInstallHasBeenSet) {
    Aws::Utils::Array<JsonValue> softwaresToInstallJsonList(m_softwaresToInstall.size());
    for (unsigned softwaresToInstallIndex = 0; softwaresToInstallIndex < softwaresToInstallJsonList.GetLength();
         ++softwaresToInstallIndex) {
      softwaresToInstallJsonList[softwaresToInstallIndex].AsString(m_softwaresToInstall[softwaresToInstallIndex]);
    }
    payload.WithArray("SoftwaresToInstall", std::move(softwaresToInstallJsonList));
  }

  if (m_softwaresToUninstallHasBeenSet) {
    Aws::Utils::Array<JsonValue> softwaresToUninstallJsonList(m_softwaresToUninstall.size());
    for (unsigned softwaresToUninstallIndex = 0; softwaresToUninstallIndex < softwaresToUninstallJsonList.GetLength();
         ++softwaresToUninstallIndex) {
      softwaresToUninstallJsonList[softwaresToUninstallIndex].AsString(m_softwaresToUninstall[softwaresToUninstallIndex]);
    }
    payload.WithArray("SoftwaresToUninstall", std::move(softwaresToUninstallJsonList));
  }

  if (m_disableIMDSV1HasBeenSet) {
    payload.WithBool("DisableIMDSV1", m_disableIMDSV1);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateImageBuilderRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateImageBuilder"));
  return headers;
}
