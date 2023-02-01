/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Kafka
{
namespace Model
{

Cluster::Cluster() : 
    m_activeOperationArnHasBeenSet(false),
    m_clusterType(ClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_serverlessHasBeenSet(false)
{
}

Cluster::Cluster(JsonView jsonValue) : 
    m_activeOperationArnHasBeenSet(false),
    m_clusterType(ClusterType::NOT_SET),
    m_clusterTypeHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_provisionedHasBeenSet(false),
    m_serverlessHasBeenSet(false)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeOperationArn"))
  {
    m_activeOperationArn = jsonValue.GetString("activeOperationArn");

    m_activeOperationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterType"))
  {
    m_clusterType = ClusterTypeMapper::GetClusterTypeForName(jsonValue.GetString("clusterType"));

    m_clusterTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterArn"))
  {
    m_clusterArn = jsonValue.GetString("clusterArn");

    m_clusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clusterName"))
  {
    m_clusterName = jsonValue.GetString("clusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

    m_creationTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("state"))
  {
    m_state = ClusterStateMapper::GetClusterStateForName(jsonValue.GetString("state"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stateInfo"))
  {
    m_stateInfo = jsonValue.GetObject("stateInfo");

    m_stateInfoHasBeenSet = true;
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

  if(jsonValue.ValueExists("provisioned"))
  {
    m_provisioned = jsonValue.GetObject("provisioned");

    m_provisionedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("serverless"))
  {
    m_serverless = jsonValue.GetObject("serverless");

    m_serverlessHasBeenSet = true;
  }

  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_activeOperationArnHasBeenSet)
  {
   payload.WithString("activeOperationArn", m_activeOperationArn);

  }

  if(m_clusterTypeHasBeenSet)
  {
   payload.WithString("clusterType", ClusterTypeMapper::GetNameForClusterType(m_clusterType));
  }

  if(m_clusterArnHasBeenSet)
  {
   payload.WithString("clusterArn", m_clusterArn);

  }

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("clusterName", m_clusterName);

  }

  if(m_creationTimeHasBeenSet)
  {
   payload.WithString("creationTime", m_creationTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("state", ClusterStateMapper::GetNameForClusterState(m_state));
  }

  if(m_stateInfoHasBeenSet)
  {
   payload.WithObject("stateInfo", m_stateInfo.Jsonize());

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

  if(m_provisionedHasBeenSet)
  {
   payload.WithObject("provisioned", m_provisioned.Jsonize());

  }

  if(m_serverlessHasBeenSet)
  {
   payload.WithObject("serverless", m_serverless.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
