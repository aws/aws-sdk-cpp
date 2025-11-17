/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/appstream/model/CreateExportImageTaskRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::AppStream::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateExportImageTaskRequest::SerializePayload() const {
  JsonValue payload;

  if (m_imageNameHasBeenSet) {
    payload.WithString("ImageName", m_imageName);
  }

  if (m_amiNameHasBeenSet) {
    payload.WithString("AmiName", m_amiName);
  }

  if (m_iamRoleArnHasBeenSet) {
    payload.WithString("IamRoleArn", m_iamRoleArn);
  }

  if (m_tagSpecificationsHasBeenSet) {
    JsonValue tagSpecificationsJsonMap;
    for (auto& tagSpecificationsItem : m_tagSpecifications) {
      tagSpecificationsJsonMap.WithString(tagSpecificationsItem.first, tagSpecificationsItem.second);
    }
    payload.WithObject("TagSpecifications", std::move(tagSpecificationsJsonMap));
  }

  if (m_amiDescriptionHasBeenSet) {
    payload.WithString("AmiDescription", m_amiDescription);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateExportImageTaskRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "PhotonAdminProxyService.CreateExportImageTask"));
  return headers;
}
