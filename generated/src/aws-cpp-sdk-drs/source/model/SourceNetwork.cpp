/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/drs/model/SourceNetwork.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace drs
{
namespace Model
{

SourceNetwork::SourceNetwork() : 
    m_arnHasBeenSet(false),
    m_cfnStackNameHasBeenSet(false),
    m_lastRecoveryHasBeenSet(false),
    m_launchedVpcIDHasBeenSet(false),
    m_replicationStatus(ReplicationStatus::NOT_SET),
    m_replicationStatusHasBeenSet(false),
    m_replicationStatusDetailsHasBeenSet(false),
    m_sourceAccountIDHasBeenSet(false),
    m_sourceNetworkIDHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceVpcIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

SourceNetwork::SourceNetwork(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_cfnStackNameHasBeenSet(false),
    m_lastRecoveryHasBeenSet(false),
    m_launchedVpcIDHasBeenSet(false),
    m_replicationStatus(ReplicationStatus::NOT_SET),
    m_replicationStatusHasBeenSet(false),
    m_replicationStatusDetailsHasBeenSet(false),
    m_sourceAccountIDHasBeenSet(false),
    m_sourceNetworkIDHasBeenSet(false),
    m_sourceRegionHasBeenSet(false),
    m_sourceVpcIDHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

SourceNetwork& SourceNetwork::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("cfnStackName"))
  {
    m_cfnStackName = jsonValue.GetString("cfnStackName");

    m_cfnStackNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("lastRecovery"))
  {
    m_lastRecovery = jsonValue.GetObject("lastRecovery");

    m_lastRecoveryHasBeenSet = true;
  }

  if(jsonValue.ValueExists("launchedVpcID"))
  {
    m_launchedVpcID = jsonValue.GetString("launchedVpcID");

    m_launchedVpcIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStatus"))
  {
    m_replicationStatus = ReplicationStatusMapper::GetReplicationStatusForName(jsonValue.GetString("replicationStatus"));

    m_replicationStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationStatusDetails"))
  {
    m_replicationStatusDetails = jsonValue.GetString("replicationStatusDetails");

    m_replicationStatusDetailsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceAccountID"))
  {
    m_sourceAccountID = jsonValue.GetString("sourceAccountID");

    m_sourceAccountIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceNetworkID"))
  {
    m_sourceNetworkID = jsonValue.GetString("sourceNetworkID");

    m_sourceNetworkIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceRegion"))
  {
    m_sourceRegion = jsonValue.GetString("sourceRegion");

    m_sourceRegionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceVpcID"))
  {
    m_sourceVpcID = jsonValue.GetString("sourceVpcID");

    m_sourceVpcIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue SourceNetwork::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_cfnStackNameHasBeenSet)
  {
   payload.WithString("cfnStackName", m_cfnStackName);

  }

  if(m_lastRecoveryHasBeenSet)
  {
   payload.WithObject("lastRecovery", m_lastRecovery.Jsonize());

  }

  if(m_launchedVpcIDHasBeenSet)
  {
   payload.WithString("launchedVpcID", m_launchedVpcID);

  }

  if(m_replicationStatusHasBeenSet)
  {
   payload.WithString("replicationStatus", ReplicationStatusMapper::GetNameForReplicationStatus(m_replicationStatus));
  }

  if(m_replicationStatusDetailsHasBeenSet)
  {
   payload.WithString("replicationStatusDetails", m_replicationStatusDetails);

  }

  if(m_sourceAccountIDHasBeenSet)
  {
   payload.WithString("sourceAccountID", m_sourceAccountID);

  }

  if(m_sourceNetworkIDHasBeenSet)
  {
   payload.WithString("sourceNetworkID", m_sourceNetworkID);

  }

  if(m_sourceRegionHasBeenSet)
  {
   payload.WithString("sourceRegion", m_sourceRegion);

  }

  if(m_sourceVpcIDHasBeenSet)
  {
   payload.WithString("sourceVpcID", m_sourceVpcID);

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace drs
} // namespace Aws
