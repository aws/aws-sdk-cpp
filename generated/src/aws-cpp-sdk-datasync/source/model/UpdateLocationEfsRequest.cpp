/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/UpdateLocationEfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateLocationEfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_locationArnHasBeenSet)
  {
   payload.WithString("LocationArn", m_locationArn);

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

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

Aws::Http::HeaderValueCollection UpdateLocationEfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.UpdateLocationEfs"));
  return headers;

}




