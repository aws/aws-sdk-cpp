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

#include <aws/codecommit/model/BatchGetCommitsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetCommitsRequest::BatchGetCommitsRequest() : 
    m_commitIdsHasBeenSet(false),
    m_repositoryNameHasBeenSet(false)
{
}

Aws::String BatchGetCommitsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_commitIdsHasBeenSet)
  {
   Array<JsonValue> commitIdsJsonList(m_commitIds.size());
   for(unsigned commitIdsIndex = 0; commitIdsIndex < commitIdsJsonList.GetLength(); ++commitIdsIndex)
   {
     commitIdsJsonList[commitIdsIndex].AsString(m_commitIds[commitIdsIndex]);
   }
   payload.WithArray("commitIds", std::move(commitIdsJsonList));

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetCommitsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.BatchGetCommits"));
  return headers;

}




