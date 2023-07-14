/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/proton/model/ListRepositorySyncDefinitionsRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Proton::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

ListRepositorySyncDefinitionsRequest::ListRepositorySyncDefinitionsRequest() : 
    m_nextTokenHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryProvider(RepositoryProvider::NOT_SET),
    m_repositoryProviderHasBeenSet(false),
    m_syncType(SyncType::NOT_SET),
    m_syncTypeHasBeenSet(false)
{
}

Aws::String ListRepositorySyncDefinitionsRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nextTokenHasBeenSet)
  {
   payload.WithString("nextToken", m_nextToken);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("repositoryName", m_repositoryName);

  }

  if(m_repositoryProviderHasBeenSet)
  {
   payload.WithString("repositoryProvider", RepositoryProviderMapper::GetNameForRepositoryProvider(m_repositoryProvider));
  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("syncType", SyncTypeMapper::GetNameForSyncType(m_syncType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection ListRepositorySyncDefinitionsRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AwsProton20200720.ListRepositorySyncDefinitions"));
  return headers;

}




