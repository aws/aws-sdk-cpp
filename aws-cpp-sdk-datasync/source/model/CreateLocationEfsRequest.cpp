/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationEfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationEfsRequest::CreateLocationEfsRequest() : 
    m_subdirectoryHasBeenSet(false),
    m_efsFilesystemArnHasBeenSet(false),
    m_ec2ConfigHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_accessPointArnHasBeenSet(false),
    m_fileSystemAccessRoleArnHasBeenSet(false),
    m_inTransitEncryption(EfsInTransitEncryption::NOT_SET),
    m_inTransitEncryptionHasBeenSet(false)
{
}

Aws::String CreateLocationEfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

  }

  if(m_efsFilesystemArnHasBeenSet)
  {
   payload.WithString("EfsFilesystemArn", m_efsFilesystemArn);

  }

  if(m_ec2ConfigHasBeenSet)
  {
   payload.WithObject("Ec2Config", m_ec2Config.Jsonize());

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

  if(m_accessPointArnHasBeenSet)
  {
   payload.WithString("AccessPointArn", m_accessPointArn);

  }

  if(m_fileSystemAccessRoleArnHasBeenSet)
  {
   payload.WithString("FileSystemAccessRoleArn", m_fileSystemAccessRoleArn);

  }

  if(m_inTransitEncryptionHasBeenSet)
  {
   payload.WithString("InTransitEncryption", EfsInTransitEncryptionMapper::GetNameForEfsInTransitEncryption(m_inTransitEncryption));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateLocationEfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationEfs"));
  return headers;

}




