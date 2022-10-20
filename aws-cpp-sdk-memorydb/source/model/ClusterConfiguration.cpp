/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ClusterConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ClusterConfiguration::ClusterConfiguration() : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_numShards(0),
    m_numShardsHasBeenSet(false),
    m_shardsHasBeenSet(false)
{
}

ClusterConfiguration::ClusterConfiguration(JsonView jsonValue) : 
    m_nameHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_nodeTypeHasBeenSet(false),
    m_engineVersionHasBeenSet(false),
    m_maintenanceWindowHasBeenSet(false),
    m_topicArnHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_parameterGroupNameHasBeenSet(false),
    m_subnetGroupNameHasBeenSet(false),
    m_vpcIdHasBeenSet(false),
    m_snapshotRetentionLimit(0),
    m_snapshotRetentionLimitHasBeenSet(false),
    m_snapshotWindowHasBeenSet(false),
    m_numShards(0),
    m_numShardsHasBeenSet(false),
    m_shardsHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterConfiguration& ClusterConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("Name"))
  {
    m_name = jsonValue.GetString("Name");

    m_nameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = jsonValue.GetString("NodeType");

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EngineVersion"))
  {
    m_engineVersion = jsonValue.GetString("EngineVersion");

    m_engineVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("MaintenanceWindow"))
  {
    m_maintenanceWindow = jsonValue.GetString("MaintenanceWindow");

    m_maintenanceWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("TopicArn"))
  {
    m_topicArn = jsonValue.GetString("TopicArn");

    m_topicArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Port"))
  {
    m_port = jsonValue.GetInteger("Port");

    m_portHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParameterGroupName"))
  {
    m_parameterGroupName = jsonValue.GetString("ParameterGroupName");

    m_parameterGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SubnetGroupName"))
  {
    m_subnetGroupName = jsonValue.GetString("SubnetGroupName");

    m_subnetGroupNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("VpcId"))
  {
    m_vpcId = jsonValue.GetString("VpcId");

    m_vpcIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotRetentionLimit"))
  {
    m_snapshotRetentionLimit = jsonValue.GetInteger("SnapshotRetentionLimit");

    m_snapshotRetentionLimitHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SnapshotWindow"))
  {
    m_snapshotWindow = jsonValue.GetString("SnapshotWindow");

    m_snapshotWindowHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NumShards"))
  {
    m_numShards = jsonValue.GetInteger("NumShards");

    m_numShardsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Shards"))
  {
    Aws::Utils::Array<JsonView> shardsJsonList = jsonValue.GetArray("Shards");
    for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
    {
      m_shards.push_back(shardsJsonList[shardsIndex].AsObject());
    }
    m_shardsHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("Name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", m_nodeType);

  }

  if(m_engineVersionHasBeenSet)
  {
   payload.WithString("EngineVersion", m_engineVersion);

  }

  if(m_maintenanceWindowHasBeenSet)
  {
   payload.WithString("MaintenanceWindow", m_maintenanceWindow);

  }

  if(m_topicArnHasBeenSet)
  {
   payload.WithString("TopicArn", m_topicArn);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("Port", m_port);

  }

  if(m_parameterGroupNameHasBeenSet)
  {
   payload.WithString("ParameterGroupName", m_parameterGroupName);

  }

  if(m_subnetGroupNameHasBeenSet)
  {
   payload.WithString("SubnetGroupName", m_subnetGroupName);

  }

  if(m_vpcIdHasBeenSet)
  {
   payload.WithString("VpcId", m_vpcId);

  }

  if(m_snapshotRetentionLimitHasBeenSet)
  {
   payload.WithInteger("SnapshotRetentionLimit", m_snapshotRetentionLimit);

  }

  if(m_snapshotWindowHasBeenSet)
  {
   payload.WithString("SnapshotWindow", m_snapshotWindow);

  }

  if(m_numShardsHasBeenSet)
  {
   payload.WithInteger("NumShards", m_numShards);

  }

  if(m_shardsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> shardsJsonList(m_shards.size());
   for(unsigned shardsIndex = 0; shardsIndex < shardsJsonList.GetLength(); ++shardsIndex)
   {
     shardsJsonList[shardsIndex].AsObject(m_shards[shardsIndex].Jsonize());
   }
   payload.WithArray("Shards", std::move(shardsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
