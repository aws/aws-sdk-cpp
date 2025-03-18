/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codeconnections/model/UpdateSyncConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeConnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

Aws::String UpdateSyncConfigurationRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithString("Branch", m_branch);

  }

  if(m_configFileHasBeenSet)
  {
   payload.WithString("ConfigFile", m_configFile);

  }

  if(m_repositoryLinkIdHasBeenSet)
  {
   payload.WithString("RepositoryLinkId", m_repositoryLinkId);

  }

  if(m_resourceNameHasBeenSet)
  {
   payload.WithString("ResourceName", m_resourceName);

  }

  if(m_roleArnHasBeenSet)
  {
   payload.WithString("RoleArn", m_roleArn);

  }

  if(m_syncTypeHasBeenSet)
  {
   payload.WithString("SyncType", SyncConfigurationTypeMapper::GetNameForSyncConfigurationType(m_syncType));
  }

  if(m_publishDeploymentStatusHasBeenSet)
  {
   payload.WithString("PublishDeploymentStatus", PublishDeploymentStatusMapper::GetNameForPublishDeploymentStatus(m_publishDeploymentStatus));
  }

  if(m_triggerResourceUpdateOnHasBeenSet)
  {
   payload.WithString("TriggerResourceUpdateOn", TriggerResourceUpdateOnMapper::GetNameForTriggerResourceUpdateOn(m_triggerResourceUpdateOn));
  }

  if(m_pullRequestCommentHasBeenSet)
  {
   payload.WithString("PullRequestComment", PullRequestCommentMapper::GetNameForPullRequestComment(m_pullRequestComment));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateSyncConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codeconnections.CodeConnections_20231201.UpdateSyncConfiguration"));
  return headers;

}




