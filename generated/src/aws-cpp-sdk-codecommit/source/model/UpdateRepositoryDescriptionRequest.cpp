/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateRepositoryDescriptionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRepositoryDescriptionRequest::UpdateRepositoryDescriptionRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_repositoryDescriptionHasBeenSet(false)
{
}

Aws::String UpdateRepositoryDescriptionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryDescriptionHasBeenSet)
  {
   payload.WithString("repositoryDescription", m_repositoryDescription);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRepositoryDescriptionRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateRepositoryDescription"));
  return headers;

}




