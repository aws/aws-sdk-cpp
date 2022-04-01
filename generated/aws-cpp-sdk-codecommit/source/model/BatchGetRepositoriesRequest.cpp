﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/BatchGetRepositoriesRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

BatchGetRepositoriesRequest::BatchGetRepositoriesRequest() : 
    m_repositoryNamesHasBeenSet(false)
{
}

Aws::String BatchGetRepositoriesRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNamesHasBeenSet)
  {
   Array<JsonValue> repositoryNamesJsonList(m_repositoryNames.size());
   for(unsigned repositoryNamesIndex = 0; repositoryNamesIndex < repositoryNamesJsonList.GetLength(); ++repositoryNamesIndex)
   {
     repositoryNamesJsonList[repositoryNamesIndex].AsString(m_repositoryNames[repositoryNamesIndex]);
   }
   payload.WithArray("repositoryNames", std::move(repositoryNamesJsonList));

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection BatchGetRepositoriesRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.BatchGetRepositories"));
  return headers;

}




