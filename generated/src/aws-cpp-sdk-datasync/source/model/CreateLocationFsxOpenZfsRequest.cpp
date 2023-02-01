/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/datasync/model/CreateLocationFsxOpenZfsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DataSync::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateLocationFsxOpenZfsRequest::CreateLocationFsxOpenZfsRequest() : 
    m_fsxFilesystemArnHasBeenSet(false),
    m_protocolHasBeenSet(false),
    m_securityGroupArnsHasBeenSet(false),
    m_subdirectoryHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateLocationFsxOpenZfsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_fsxFilesystemArnHasBeenSet)
  {
   payload.WithString("FsxFilesystemArn", m_fsxFilesystemArn);

  }

  if(m_protocolHasBeenSet)
  {
   payload.WithObject("Protocol", m_protocol.Jsonize());

  }

  if(m_securityGroupArnsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> securityGroupArnsJsonList(m_securityGroupArns.size());
   for(unsigned securityGroupArnsIndex = 0; securityGroupArnsIndex < securityGroupArnsJsonList.GetLength(); ++securityGroupArnsIndex)
   {
     securityGroupArnsJsonList[securityGroupArnsIndex].AsString(m_securityGroupArns[securityGroupArnsIndex]);
   }
   payload.WithArray("SecurityGroupArns", std::move(securityGroupArnsJsonList));

  }

  if(m_subdirectoryHasBeenSet)
  {
   payload.WithString("Subdirectory", m_subdirectory);

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

Aws::Http::HeaderValueCollection CreateLocationFsxOpenZfsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "FmrsService.CreateLocationFsxOpenZfs"));
  return headers;

}




