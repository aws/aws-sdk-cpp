/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/CreateSyncConfigurationRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::CodeStarconnections::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateSyncConfigurationRequest::CreateSyncConfigurationRequest() : 
    m_branchHasBeenSet(false),
    m_configFileHasBeenSet(false),
    m_repositoryLinkIdHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_syncType(SyncConfigurationType::NOT_SET),
    m_syncTypeHasBeenSet(false),
    m_publishDeploymentStatus(PublishDeploymentStatus::NOT_SET),
    m_publishDeploymentStatusHasBeenSet(false),
    m_triggerResourceUpdateOn(TriggerResourceUpdateOn::NOT_SET),
    m_triggerResourceUpdateOnHasBeenSet(false)
{
}

Aws::String CreateSyncConfigurationRequest::SerializePayload() const
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

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateSyncConfigurationRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "com.amazonaws.codestar.connections.CodeStar_connections_20191201.CreateSyncConfiguration"));
  return headers;

}




