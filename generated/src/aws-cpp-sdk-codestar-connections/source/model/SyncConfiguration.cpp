/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/codestar-connections/model/SyncConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace CodeStarconnections
{
namespace Model
{

SyncConfiguration::SyncConfiguration() : 
    m_branchHasBeenSet(false),
    m_configFileHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_repositoryLinkIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
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

SyncConfiguration::SyncConfiguration(JsonView jsonValue) : 
    m_branchHasBeenSet(false),
    m_configFileHasBeenSet(false),
    m_ownerIdHasBeenSet(false),
    m_providerType(ProviderType::NOT_SET),
    m_providerTypeHasBeenSet(false),
    m_repositoryLinkIdHasBeenSet(false),
    m_repositoryNameHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_roleArnHasBeenSet(false),
    m_syncType(SyncConfigurationType::NOT_SET),
    m_syncTypeHasBeenSet(false),
    m_publishDeploymentStatus(PublishDeploymentStatus::NOT_SET),
    m_publishDeploymentStatusHasBeenSet(false),
    m_triggerResourceUpdateOn(TriggerResourceUpdateOn::NOT_SET),
    m_triggerResourceUpdateOnHasBeenSet(false)
{
  *this = jsonValue;
}

SyncConfiguration& SyncConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Branch"))
  {
    m_branch = jsonValue.GetString("Branch");

    m_branchHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ConfigFile"))
  {
    m_configFile = jsonValue.GetString("ConfigFile");

    m_configFileHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerId"))
  {
    m_ownerId = jsonValue.GetString("OwnerId");

    m_ownerIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ProviderType"))
  {
    m_providerType = ProviderTypeMapper::GetProviderTypeForName(jsonValue.GetString("ProviderType"));

    m_providerTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryLinkId"))
  {
    m_repositoryLinkId = jsonValue.GetString("RepositoryLinkId");

    m_repositoryLinkIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RepositoryName"))
  {
    m_repositoryName = jsonValue.GetString("RepositoryName");

    m_repositoryNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ResourceName"))
  {
    m_resourceName = jsonValue.GetString("ResourceName");

    m_resourceNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RoleArn"))
  {
    m_roleArn = jsonValue.GetString("RoleArn");

    m_roleArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SyncType"))
  {
    m_syncType = SyncConfigurationTypeMapper::GetSyncConfigurationTypeForName(jsonValue.GetString("SyncType"));

    m_syncTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PublishDeploymentStatus"))
  {
    m_publishDeploymentStatus = PublishDeploymentStatusMapper::GetPublishDeploymentStatusForName(jsonValue.GetString("PublishDeploymentStatus"));

    m_publishDeploymentStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TriggerResourceUpdateOn"))
  {
    m_triggerResourceUpdateOn = TriggerResourceUpdateOnMapper::GetTriggerResourceUpdateOnForName(jsonValue.GetString("TriggerResourceUpdateOn"));

    m_triggerResourceUpdateOnHasBeenSet = true;
  }

  return *this;
}

JsonValue SyncConfiguration::Jsonize() const
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

  if(m_ownerIdHasBeenSet)
  {
   payload.WithString("OwnerId", m_ownerId);

  }

  if(m_providerTypeHasBeenSet)
  {
   payload.WithString("ProviderType", ProviderTypeMapper::GetNameForProviderType(m_providerType));
  }

  if(m_repositoryLinkIdHasBeenSet)
  {
   payload.WithString("RepositoryLinkId", m_repositoryLinkId);

  }

  if(m_repositoryNameHasBeenSet)
  {
   payload.WithString("RepositoryName", m_repositoryName);

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

  return payload;
}

} // namespace Model
} // namespace CodeStarconnections
} // namespace Aws
