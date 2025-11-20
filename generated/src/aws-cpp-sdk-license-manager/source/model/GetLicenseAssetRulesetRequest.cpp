/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/GetLicenseAssetRulesetRequest.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String GetLicenseAssetRulesetRequest::SerializePayload() const {
  JsonValue payload;

  if (m_licenseAssetRulesetArnHasBeenSet) {
    payload.WithString("LicenseAssetRulesetArn", m_licenseAssetRulesetArn);
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetLicenseAssetRulesetRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.GetLicenseAssetRuleset"));
  return headers;
}
