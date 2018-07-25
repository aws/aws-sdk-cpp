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

#include <aws/macie/model/UpdateS3ResourcesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Macie::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateS3ResourcesRequest::UpdateS3ResourcesRequest() : 
    m_memberAccountIdHasBeenSet(false),
    m_s3ResourcesUpdateHasBeenSet(false)
{
}

Aws::String UpdateS3ResourcesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_memberAccountIdHasBeenSet)
  {
   payload.WithString("memberAccountId", m_memberAccountId);

  }

  if(m_s3ResourcesUpdateHasBeenSet)
  {
   Array<JsonValue> s3ResourcesUpdateJsonList(m_s3ResourcesUpdate.size());
   for(unsigned s3ResourcesUpdateIndex = 0; s3ResourcesUpdateIndex < s3ResourcesUpdateJsonList.GetLength(); ++s3ResourcesUpdateIndex)
   {
     s3ResourcesUpdateJsonList[s3ResourcesUpdateIndex].AsObject(m_s3ResourcesUpdate[s3ResourcesUpdateIndex].Jsonize());
   }
   payload.WithArray("s3ResourcesUpdate", std::move(s3ResourcesUpdateJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateS3ResourcesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "MacieService.UpdateS3Resources"));
  return headers;

}




