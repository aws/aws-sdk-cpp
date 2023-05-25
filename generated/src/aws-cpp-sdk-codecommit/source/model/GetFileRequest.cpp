/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/GetFileRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

GetFileRequest::GetFileRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_commitSpecifierHasBeenSet(false),
    m_filePathHasBeenSet(false)
{
}

Aws::String GetFileRequest::SerializePayload() const
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

  if(m_filePathHasBeenSet)
  {
   payload.WithString("filePath", m_filePath);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection GetFileRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.GetFile"));
  return headers;

}




