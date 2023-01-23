/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateRepositoryNameRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateRepositoryNameRequest::UpdateRepositoryNameRequest() : 
    m_oldNameHasBeenSet(false),
    m_newNameHasBeenSet(false)
{
}

Aws::String UpdateRepositoryNameRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_oldNameHasBeenSet)
  {
   payload.WithString("oldName", m_oldName);

  }

  if(m_newNameHasBeenSet)
  {
   payload.WithString("newName", m_newName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateRepositoryNameRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateRepositoryName"));
  return headers;

}




