/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/deadline/model/CreateStorageProfileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::deadline::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateStorageProfileRequest::CreateStorageProfileRequest() : 
    m_clientToken(Aws::Utils::UUID::PseudoRandomUUID()),
    m_clientTokenHasBeenSet(true),
    m_displayNameHasBeenSet(false),
    m_farmIdHasBeenSet(false),
    m_fileSystemLocationsHasBeenSet(false),
    m_osFamily(StorageProfileOperatingSystemFamily::NOT_SET),
    m_osFamilyHasBeenSet(false)
{
}

Aws::String CreateStorageProfileRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_displayNameHasBeenSet)
  {
   payload.WithString("displayName", m_displayName);

  }

  if(m_fileSystemLocationsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> fileSystemLocationsJsonList(m_fileSystemLocations.size());
   for(unsigned fileSystemLocationsIndex = 0; fileSystemLocationsIndex < fileSystemLocationsJsonList.GetLength(); ++fileSystemLocationsIndex)
   {
     fileSystemLocationsJsonList[fileSystemLocationsIndex].AsObject(m_fileSystemLocations[fileSystemLocationsIndex].Jsonize());
   }
   payload.WithArray("fileSystemLocations", std::move(fileSystemLocationsJsonList));

  }

  if(m_osFamilyHasBeenSet)
  {
   payload.WithString("osFamily", StorageProfileOperatingSystemFamilyMapper::GetNameForStorageProfileOperatingSystemFamily(m_osFamily));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateStorageProfileRequest::GetRequestSpecificHeaders() const
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




