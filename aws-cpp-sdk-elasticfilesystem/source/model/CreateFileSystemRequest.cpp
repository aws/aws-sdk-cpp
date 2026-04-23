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

#include <aws/elasticfilesystem/model/CreateFileSystemRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::EFS::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateFileSystemRequest::CreateFileSystemRequest() : 
    m_creationTokenHasBeenSet(false),
    m_performanceMode(PerformanceMode::NOT_SET),
    m_performanceModeHasBeenSet(false),
    m_encrypted(false),
    m_encryptedHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_throughputMode(ThroughputMode::NOT_SET),
    m_throughputModeHasBeenSet(false),
    m_provisionedThroughputInMibps(0.0),
    m_provisionedThroughputInMibpsHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateFileSystemRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_creationTokenHasBeenSet)
  {
   payload.WithString("CreationToken", m_creationToken);

  }

  if(m_performanceModeHasBeenSet)
  {
   payload.WithString("PerformanceMode", PerformanceModeMapper::GetNameForPerformanceMode(m_performanceMode));
  }

  if(m_encryptedHasBeenSet)
  {
   payload.WithBool("Encrypted", m_encrypted);

  }

  if(m_kmsKeyIdHasBeenSet)
  {
   payload.WithString("KmsKeyId", m_kmsKeyId);

  }

  if(m_throughputModeHasBeenSet)
  {
   payload.WithString("ThroughputMode", ThroughputModeMapper::GetNameForThroughputMode(m_throughputMode));
  }

  if(m_provisionedThroughputInMibpsHasBeenSet)
  {
   payload.WithDouble("ProvisionedThroughputInMibps", m_provisionedThroughputInMibps);

  }

  if(m_tagsHasBeenSet)
  {
   Array<JsonValue> tagsJsonList(m_tags.size());
   for(unsigned tagsIndex = 0; tagsIndex < tagsJsonList.GetLength(); ++tagsIndex)
   {
     tagsJsonList[tagsIndex].AsObject(m_tags[tagsIndex].Jsonize());
   }
   payload.WithArray("Tags", std::move(tagsJsonList));

  }

  return payload.View().WriteReadable();
}




