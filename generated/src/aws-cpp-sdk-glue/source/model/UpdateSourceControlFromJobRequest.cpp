/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/glue/model/UpdateSourceControlFromJobRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Glue::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateSourceControlFromJobRequest::UpdateSourceControlFromJobRequest() : 
    m_jobNameHasBeenSet(false),
    m_provider(SourceControlProvider::NOT_SET),
    m_providerHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_repositoryOwnerHasBeenSet(false),
    m_branchNameHasBeenSet(false),
    m_folderHasBeenSet(false),
    m_commitIdHasBeenSet(false),
    m_authStrategy(SourceControlAuthStrategy::NOT_SET),
    m_authStrategyHasBeenSet(false),
    m_authTokenHasBeenSet(false)
{
}

Aws::String UpdateSourceControlFromJobRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_jobNameHasBeenSet)
  {
   payload.WithString("JobName", m_jobName);

  }

  if(m_providerHasBeenSet)
  {
   payload.WithString("Provider", SourceControlProviderMapper::GetNameForSourceControlProvider(m_provider));
  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

  }

  if(m_repositoryOwnerHasBeenSet)
  {
   payload.WithString("RepositoryOwner", m_repositoryOwner);

  }

  if(m_branchNameHasBeenSet)
  {
   payload.WithString("BranchName", m_branchName);

  }

  if(m_folderHasBeenSet)
  {
   payload.WithString("Folder", m_folder);

  }

  if(m_commitIdHasBeenSet)
  {
   payload.WithString("CommitId", m_commitId);

  }

  if(m_authStrategyHasBeenSet)
  {
   payload.WithString("AuthStrategy", SourceControlAuthStrategyMapper::GetNameForSourceControlAuthStrategy(m_authStrategy));
  }

  if(m_authTokenHasBeenSet)
  {
   payload.WithString("AuthToken", m_authToken);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSourceControlFromJobRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AWSGlue.UpdateSourceControlFromJob"));
  return headers;

}




