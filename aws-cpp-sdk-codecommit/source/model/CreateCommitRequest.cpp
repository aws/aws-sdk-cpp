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

#include <aws/codecommit/model/CreateCommitRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateCommitRequest::CreateCommitRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_parentCommitIdHasBeenSet(false),
    m_authorNameHasBeenSet(false),
    m_emailHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_keepEmptyFolders(false),
    m_keepEmptyFoldersHasBeenSet(false),
    m_putFilesHasBeenSet(false),
    m_deleteFilesHasBeenSet(false),
    m_setFileModesHasBeenSet(false)
{
}

Aws::String CreateCommitRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("branchName", m_branchName);

  }

  if(m_parentCommitIdHasBeenSet)
  {
   payload.WithString("parentCommitId", m_parentCommitId);

  }

  if(m_authorNameHasBeenSet)
  {
   payload.WithString("authorName", m_authorName);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

  }

  if(m_keepEmptyFoldersHasBeenSet)
  {
   payload.WithBool("keepEmptyFolders", m_keepEmptyFolders);

  }

  if(m_putFilesHasBeenSet)
  {
   Array<JsonValue> putFilesJsonList(m_putFiles.size());
   for(unsigned putFilesIndex = 0; putFilesIndex < putFilesJsonList.GetLength(); ++putFilesIndex)
   {
     putFilesJsonList[putFilesIndex].AsObject(m_putFiles[putFilesIndex].Jsonize());
   }
   payload.WithArray("putFiles", std::move(putFilesJsonList));

  }

  if(m_deleteFilesHasBeenSet)
  {
   Array<JsonValue> deleteFilesJsonList(m_deleteFiles.size());
   for(unsigned deleteFilesIndex = 0; deleteFilesIndex < deleteFilesJsonList.GetLength(); ++deleteFilesIndex)
   {
     deleteFilesJsonList[deleteFilesIndex].AsObject(m_deleteFiles[deleteFilesIndex].Jsonize());
   }
   payload.WithArray("deleteFiles", std::move(deleteFilesJsonList));

  }

  if(m_setFileModesHasBeenSet)
  {
   Array<JsonValue> setFileModesJsonList(m_setFileModes.size());
   for(unsigned setFileModesIndex = 0; setFileModesIndex < setFileModesJsonList.GetLength(); ++setFileModesIndex)
   {
     setFileModesJsonList[setFileModesIndex].AsObject(m_setFileModes[setFileModesIndex].Jsonize());
   }
   payload.WithArray("setFileModes", std::move(setFileModesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateCommitRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.CreateCommit"));
  return headers;

}




