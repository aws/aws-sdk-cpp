/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/license-manager/model/UpdateLicenseSpecificationsForResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::LicenseManager::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateLicenseSpecificationsForResourceRequest::UpdateLicenseSpecificationsForResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_addLicenseSpecificationsHasBeenSet(false),
    m_removeLicenseSpecificationsHasBeenSet(false)
{
}

Aws::String UpdateLicenseSpecificationsForResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_addLicenseSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> addLicenseSpecificationsJsonList(m_addLicenseSpecifications.size());
   for(unsigned addLicenseSpecificationsIndex = 0; addLicenseSpecificationsIndex < addLicenseSpecificationsJsonList.GetLength(); ++addLicenseSpecificationsIndex)
   {
     addLicenseSpecificationsJsonList[addLicenseSpecificationsIndex].AsObject(m_addLicenseSpecifications[addLicenseSpecificationsIndex].Jsonize());
   }
   payload.WithArray("AddLicenseSpecifications", std::move(addLicenseSpecificationsJsonList));

  }

  if(m_removeLicenseSpecificationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> removeLicenseSpecificationsJsonList(m_removeLicenseSpecifications.size());
   for(unsigned removeLicenseSpecificationsIndex = 0; removeLicenseSpecificationsIndex < removeLicenseSpecificationsJsonList.GetLength(); ++removeLicenseSpecificationsIndex)
   {
     removeLicenseSpecificationsJsonList[removeLicenseSpecificationsIndex].AsObject(m_removeLicenseSpecifications[removeLicenseSpecificationsIndex].Jsonize());
   }
   payload.WithArray("RemoveLicenseSpecifications", std::move(removeLicenseSpecificationsJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateLicenseSpecificationsForResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSLicenseManager.UpdateLicenseSpecificationsForResource"));
  return headers;

}




