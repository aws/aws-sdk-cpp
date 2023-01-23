/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/AWSMigrationHub/model/PutResourceAttributesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::MigrationHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutResourceAttributesRequest::PutResourceAttributesRequest() : 
    m_progressUpdateStreamHasBeenSet(false),
    m_migrationTaskNameHasBeenSet(false),
    m_resourceAttributeListHasBeenSet(false),
    m_dryRun(false),
    m_dryRunHasBeenSet(false)
{
}

Aws::String PutResourceAttributesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_progressUpdateStreamHasBeenSet)
  {
   payload.WithString("ProgressUpdateStream", m_progressUpdateStream);

  }

  if(m_migrationTaskNameHasBeenSet)
  {
   payload.WithString("MigrationTaskName", m_migrationTaskName);

  }

  if(m_resourceAttributeListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> resourceAttributeListJsonList(m_resourceAttributeList.size());
   for(unsigned resourceAttributeListIndex = 0; resourceAttributeListIndex < resourceAttributeListJsonList.GetLength(); ++resourceAttributeListIndex)
   {
     resourceAttributeListJsonList[resourceAttributeListIndex].AsObject(m_resourceAttributeList[resourceAttributeListIndex].Jsonize());
   }
   payload.WithArray("ResourceAttributeList", std::move(resourceAttributeListJsonList));

  }

  if(m_dryRunHasBeenSet)
  {
   payload.WithBool("DryRun", m_dryRun);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutResourceAttributesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSMigrationHub.PutResourceAttributes"));
  return headers;

}




