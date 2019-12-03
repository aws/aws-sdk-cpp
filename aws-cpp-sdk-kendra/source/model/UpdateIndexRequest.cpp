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

#include <aws/kendra/model/UpdateIndexRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::kendra::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateIndexRequest::UpdateIndexRequest() : 
    m_idHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_documentMetadataConfigurationUpdatesHasBeenSet(false)
{
}

Aws::String UpdateIndexRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("Id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_documentMetadataConfigurationUpdatesHasBeenSet)
  {
   Array<JsonValue> documentMetadataConfigurationUpdatesJsonList(m_documentMetadataConfigurationUpdates.size());
   for(unsigned documentMetadataConfigurationUpdatesIndex = 0; documentMetadataConfigurationUpdatesIndex < documentMetadataConfigurationUpdatesJsonList.GetLength(); ++documentMetadataConfigurationUpdatesIndex)
   {
     documentMetadataConfigurationUpdatesJsonList[documentMetadataConfigurationUpdatesIndex].AsObject(m_documentMetadataConfigurationUpdates[documentMetadataConfigurationUpdatesIndex].Jsonize());
   }
   payload.WithArray("DocumentMetadataConfigurationUpdates", std::move(documentMetadataConfigurationUpdatesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateIndexRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSKendraFrontendService.UpdateIndex"));
  return headers;

}




