/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/UpdateStorageProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateStorageProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_osFamilyHasBeenSet)
  {
   payload.WithString("osFamily", StorageProfileOperatingSystemFamilyMapper::GetNameForStorageProfileOperatingSystemFamily(m_osFamily));
  }

  if(m_fileSystemLocationsToAddHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemLocationsToAddJsonList(m_fileSystemLocationsToAdd.size());
   for(unsigned fileSystemLocationsToAddIndex = 0; fileSystemLocationsToAddIndex < fileSystemLocationsToAddJsonList.GetLength(); ++fileSystemLocationsToAddIndex)
   {
     fileSystemLocationsToAddJsonList[fileSystemLocationsToAddIndex].AsObject(m_fileSystemLocationsToAdd[fileSystemLocationsToAddIndex].Jsonize());
   }
   payload.WithArray("fileSystemLocationsToAdd", std::move(fileSystemLocationsToAddJsonList));

  }

  if(m_fileSystemLocationsToRemoveHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemLocationsToRemoveJsonList(m_fileSystemLocationsToRemove.size());
   for(unsigned fileSystemLocationsToRemoveIndex = 0; fileSystemLocationsToRemoveIndex < fileSystemLocationsToRemoveJsonList.GetLength(); ++fileSystemLocationsToRemoveIndex)
   {
     fileSystemLocationsToRemoveJsonList[fileSystemLocationsToRemoveIndex].AsObject(m_fileSystemLocationsToRemove[fileSystemLocationsToRemoveIndex].Jsonize());
   }
   payload.WithArray("fileSystemLocationsToRemove", std::move(fileSystemLocationsToRemoveJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateStorageProfileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  Aws::StringStream ss;
  if(m_clientTokenHasBeenSet)
  {
    ss << m_clientToken;
    headers.emplace("x-amz-client-token",  ss.str());
    ss.str("");
  }

  return headers;

}




