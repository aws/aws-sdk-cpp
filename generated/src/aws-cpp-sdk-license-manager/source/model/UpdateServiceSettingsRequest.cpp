/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateServiceSettingsRequest::SerializePayload() const {
  JsonValue payload;

  if (m_s3BucketArnHasBeenSet) {
    payload.WithString("S3BucketArn", m_s3BucketArn);
  }

  if (m_snsTopicArnHasBeenSet) {
    payload.WithString("SnsTopicArn", m_snsTopicArn);
  }

  if (m_organizationConfigurationHasBeenSet) {
    payload.WithObject("OrganizationConfiguration", m_organizationConfiguration.Jsonize());
  }

  if (m_enableCrossAccountsDiscoveryHasBeenSet) {
    payload.WithBool("EnableCrossAccountsDiscovery", m_enableCrossAccountsDiscovery);
  }

  if (m_enabledDiscoverySourceRegionsHasBeenSet) {
    Aws::Utils::Array<JsonValue> enabledDiscoverySourceRegionsJsonList(m_enabledDiscoverySourceRegions.size());
    for (unsigned enabledDiscoverySourceRegionsIndex = 0;
         enabledDiscoverySourceRegionsIndex < enabledDiscoverySourceRegionsJsonList.GetLength(); ++enabledDiscoverySourceRegionsIndex) {
      enabledDiscoverySourceRegionsJsonList[enabledDiscoverySourceRegionsIndex].AsString(
          m_enabledDiscoverySourceRegions[enabledDiscoverySourceRegionsIndex]);
    }
    payload.WithArray("EnabledDiscoverySourceRegions", std::move(enabledDiscoverySourceRegionsJsonList));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceSettingsRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateServiceSettings"));
  return headers;
}
