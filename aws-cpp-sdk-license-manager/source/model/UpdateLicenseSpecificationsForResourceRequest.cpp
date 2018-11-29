/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
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
   Array<JsonValue> addLicenseSpecificationsJsonList(m_addLicenseSpecifications.size());
   for(unsigned addLicenseSpecificationsIndex = 0; addLicenseSpecificationsIndex < addLicenseSpecificationsJsonList.GetLength(); ++addLicenseSpecificationsIndex)
   {
     addLicenseSpecificationsJsonList[addLicenseSpecificationsIndex].AsObject(m_addLicenseSpecifications[addLicenseSpecificationsIndex].Jsonize());
   }
   payload.WithArray("AddLicenseSpecifications", std::move(addLicenseSpecificationsJsonList));

  }

  if(m_removeLicenseSpecificationsHasBeenSet)
  {
   Array<JsonValue> removeLicenseSpecificationsJsonList(m_removeLicenseSpecifications.size());
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




