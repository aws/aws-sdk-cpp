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

#include <aws/codecommit/model/GetFolderRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFolderRequest::GetFolderRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_commitSpecifierHasBeenSet(false),
    m_folderPathHasBeenSet(false)
{
}

Aws::String GetFolderRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_commitSpecifierHasBeenSet)
  {
   payload.WithString("commitSpecifier", m_commitSpecifier);

  }

  if(m_folderPathHasBeenSet)
  {
   payload.WithString("folderPath", m_folderPath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFolderRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetFolder"));
  return headers;

}




