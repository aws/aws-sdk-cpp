/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codecommit/model/UpdateDefaultBranchRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeCommit::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDefaultBranchRequest::UpdateDefaultBranchRequest() : 
    m_repositoryNameHasBeenSet(false),
    m_defaultBranchNameHasBeenSet(false)
{
}

Aws::String UpdateDefaultBranchRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_defaultBranchNameHasBeenSet)
  {
   payload.WithString("defaultBranchName", m_defaultBranchName);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDefaultBranchRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "CodeCommit_20150413.UpdateDefaultBranch"));
  return headers;

}




