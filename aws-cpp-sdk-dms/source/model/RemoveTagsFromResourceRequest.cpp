﻿/*
* Copyright 2010-2016 Amazon.com, Inc. or its affiliates. All Rights Reserved.
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
#include <aws/dms/model/RemoveTagsFromResourceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::DatabaseMigrationService::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

RemoveTagsFromResourceRequest::RemoveTagsFromResourceRequest() : 
    m_resourceArnHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String RemoveTagsFromResourceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_resourceArnHasBeenSet)
  {
   payload.WithString("ResourceArn", m_resourceArn);

  }

  if(m_tagKeysHasBeenSet)
  {
   Array<JsonValue> tagKeysJsonList(m_tagKeys.size());
   for(unsigned tagKeysIndex = 0; tagKeysIndex < tagKeysJsonList.GetLength(); ++tagKeysIndex)
   {
     tagKeysJsonList[tagKeysIndex].AsString(m_tagKeys[tagKeysIndex]);
   }
   payload.WithArray("TagKeys", std::move(tagKeysJsonList));

  }

  return payload.WriteReadable();
}

Aws::Http::HeaderValueCollection RemoveTagsFromResourceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonDMSv20160101.RemoveTagsFromResource"));
  return headers;

}



