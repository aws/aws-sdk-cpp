/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/DeleteLicenseAssetGroupRequest.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String DeleteLicenseAssetGroupRequest::SerializePayload() const {
  JsonValue payload;

  if (m_licenseAssetGroupArnHasBeenSet) {
    payload.WithString("LicenseAssetGroupArn", m_licenseAssetGroupArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection DeleteLicenseAssetGroupRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.DeleteLicenseAssetGroup"));
  return headers;
}
