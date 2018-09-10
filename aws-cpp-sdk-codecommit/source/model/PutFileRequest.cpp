﻿/*
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

#include <aws/codecommit/model/PutFileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/HashingUtils.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

PutFileRequest::PutFileRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_fileContentHasBeenSet(false),
    m_filePathHasBeenSet(false),
    m_fileMode(FileModeTypeEnum::NOT_SET),
    m_fileModeHasBeenSet(false),
    m_parentCommitIdHasBeenSet(false),
    m_commitMessageHasBeenSet(false),
    m_nameHasBeenSet(false),
    m_emailHasBeenSet(false)
{
}

Aws::String PutFileRequest::SerializePayload() const
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

  if(m_fileContentHasBeenSet)
  {
   payload.WithString("fileContent", HashingUtils::Base64Encode(m_fileContent));
  }

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  if(m_fileModeHasBeenSet)
  {
   payload.WithString("fileMode", FileModeTypeEnumMapper::GetNameForFileModeTypeEnum(m_fileMode));
  }

  if(m_parentCommitIdHasBeenSet)
  {
   payload.WithString("parentCommitId", m_parentCommitId);

  }

  if(m_commitMessageHasBeenSet)
  {
   payload.WithString("commitMessage", m_commitMessage);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_emailHasBeenSet)
  {
   payload.WithString("email", m_email);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection PutFileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.PutFile"));
  return headers;

}




