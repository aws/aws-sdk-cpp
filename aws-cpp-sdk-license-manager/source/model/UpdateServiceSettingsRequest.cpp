/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/UpdateServiceSettingsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateServiceSettingsRequest::UpdateServiceSettingsRequest() : 
    m_s3BucketArnHasBeenSet(false),
    m_snsTopicArnHasBeenSet(false),
    m_organizationConfigurationHasBeenSet(false),
    m_enableCrossAccountsDiscovery(false),
    m_enableCrossAccountsDiscoveryHasBeenSet(false)
{
}

Aws::String UpdateServiceSettingsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_s3BucketArnHasBeenSet)
  {
   payload.WithString("S3BucketArn", m_s3BucketArn);

  }

  if(m_snsTopicArnHasBeenSet)
  {
   payload.WithString("SnsTopicArn", m_snsTopicArn);

  }

  if(m_organizationConfigurationHasBeenSet)
  {
   payload.WithObject("OrganizationConfiguration", m_organizationConfiguration.Jsonize());

  }

  if(m_enableCrossAccountsDiscoveryHasBeenSet)
  {
   payload.WithBool("EnableCrossAccountsDiscovery", m_enableCrossAccountsDiscovery);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateServiceSettingsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateServiceSettings"));
  return headers;

}




