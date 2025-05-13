/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/CreateGrantRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String CreateGrantRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_clientTokenHasBeenSet)
  {
   payload.WithString("ClientToken", m_clientToken);

  }

  if(m_grantNameHasBeenSet)
  {
   payload.WithString("GrantName", m_grantName);

  }

  if(m_licenseArnHasBeenSet)
  {
   payload.WithString("LicenseArn", m_licenseArn);

  }

  if(m_principalsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> principalsJsonList(m_principals.size());
   for(unsigned principalsIndex = 0; principalsIndex < principalsJsonList.GetLength(); ++principalsIndex)
   {
     principalsJsonList[principalsIndex].AsString(m_principals[principalsIndex]);
   }
   payload.WithArray("Principals", std::move(principalsJsonList));

  }

  if(m_homeRegionHasBeenSet)
  {
   payload.WithString("HomeRegion", m_homeRegion);

  }

  if(m_allowedOperationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> allowedOperationsJsonList(m_allowedOperations.size());
   for(unsigned allowedOperationsIndex = 0; allowedOperationsIndex < allowedOperationsJsonList.GetLength(); ++allowedOperationsIndex)
   {
     allowedOperationsJsonList[allowedOperationsIndex].AsString(AllowedOperationMapper::GetNameForAllowedOperation(m_allowedOperations[allowedOperationsIndex]));
   }
   payload.WithArray("AllowedOperations", std::move(allowedOperationsJsonList));

  }

  if(m_tagsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateGrantRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.CreateGrant"));
  return headers;

}




