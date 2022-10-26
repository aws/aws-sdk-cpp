/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ClusterInfo.h>
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

ClusterInfo::ClusterInfo() : 
    m_activeOperationArnHasBeenSet(false),
    m_brokerNodeGroupInfoHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentBrokerSoftwareInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_encryptionInfoHasBeenSet(false),
    m_enhancedMonitoring(EnhancedMonitoring::NOT_SET),
    m_enhancedMonitoringHasBeenSet(false),
    m_openMonitoringHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_zookeeperConnectStringHasBeenSet(false),
    m_zookeeperConnectStringTlsHasBeenSet(false),
    m_storageMode(StorageMode::NOT_SET),
    m_storageModeHasBeenSet(false)
{
}

ClusterInfo::ClusterInfo(JsonView jsonValue) : 
    m_activeOperationArnHasBeenSet(false),
    m_brokerNodeGroupInfoHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_clusterArnHasBeenSet(false),
    m_clusterNameHasBeenSet(false),
    m_creationTimeHasBeenSet(false),
    m_currentBrokerSoftwareInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_encryptionInfoHasBeenSet(false),
    m_enhancedMonitoring(EnhancedMonitoring::NOT_SET),
    m_enhancedMonitoringHasBeenSet(false),
    m_openMonitoringHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_state(ClusterState::NOT_SET),
    m_stateHasBeenSet(false),
    m_stateInfoHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_zookeeperConnectStringHasBeenSet(false),
    m_zookeeperConnectStringTlsHasBeenSet(false),
    m_storageMode(StorageMode::NOT_SET),
    m_storageModeHasBeenSet(false)
{
  *this = jsonValue;
}

ClusterInfo& ClusterInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("activeOperationArn"))
  {
    m_activeOperationArn = jsonValue.GetString("activeOperationArn");

    m_activeOperationArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("brokerNodeGroupInfo"))
  {
    m_brokerNodeGroupInfo = jsonValue.GetObject("brokerNodeGroupInfo");

    m_brokerNodeGroupInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("clientAuthentication"))
  {
    m_clientAuthentication = jsonValue.GetObject("clientAuthentication");

    m_clientAuthenticationHasBeenSet = true;
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

  if(jsonValue.ValueExists("currentBrokerSoftwareInfo"))
  {
    m_currentBrokerSoftwareInfo = jsonValue.GetObject("currentBrokerSoftwareInfo");

    m_currentBrokerSoftwareInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("currentVersion"))
  {
    m_currentVersion = jsonValue.GetString("currentVersion");

    m_currentVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("encryptionInfo"))
  {
    m_encryptionInfo = jsonValue.GetObject("encryptionInfo");

    m_encryptionInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("enhancedMonitoring"))
  {
    m_enhancedMonitoring = EnhancedMonitoringMapper::GetEnhancedMonitoringForName(jsonValue.GetString("enhancedMonitoring"));

    m_enhancedMonitoringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("openMonitoring"))
  {
    m_openMonitoring = jsonValue.GetObject("openMonitoring");

    m_openMonitoringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("loggingInfo"))
  {
    m_loggingInfo = jsonValue.GetObject("loggingInfo");

    m_loggingInfoHasBeenSet = true;
  }

  if(jsonValue.ValueExists("numberOfBrokerNodes"))
  {
    m_numberOfBrokerNodes = jsonValue.GetInteger("numberOfBrokerNodes");

    m_numberOfBrokerNodesHasBeenSet = true;
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

  if(jsonValue.ValueExists("zookeeperConnectString"))
  {
    m_zookeeperConnectString = jsonValue.GetString("zookeeperConnectString");

    m_zookeeperConnectStringHasBeenSet = true;
  }

  if(jsonValue.ValueExists("zookeeperConnectStringTls"))
  {
    m_zookeeperConnectStringTls = jsonValue.GetString("zookeeperConnectStringTls");

    m_zookeeperConnectStringTlsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("storageMode"))
  {
    m_storageMode = StorageModeMapper::GetStorageModeForName(jsonValue.GetString("storageMode"));

    m_storageModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ClusterInfo::Jsonize() const
{
  JsonValue payload;

  if(m_activeOperationArnHasBeenSet)
  {
   payload.WithString("activeOperationArn", m_activeOperationArn);

  }

  if(m_brokerNodeGroupInfoHasBeenSet)
  {
   payload.WithObject("brokerNodeGroupInfo", m_brokerNodeGroupInfo.Jsonize());

  }

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());

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

  if(m_currentBrokerSoftwareInfoHasBeenSet)
  {
   payload.WithObject("currentBrokerSoftwareInfo", m_currentBrokerSoftwareInfo.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_encryptionInfoHasBeenSet)
  {
   payload.WithObject("encryptionInfo", m_encryptionInfo.Jsonize());

  }

  if(m_enhancedMonitoringHasBeenSet)
  {
   payload.WithString("enhancedMonitoring", EnhancedMonitoringMapper::GetNameForEnhancedMonitoring(m_enhancedMonitoring));
  }

  if(m_openMonitoringHasBeenSet)
  {
   payload.WithObject("openMonitoring", m_openMonitoring.Jsonize());

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("loggingInfo", m_loggingInfo.Jsonize());

  }

  if(m_numberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("numberOfBrokerNodes", m_numberOfBrokerNodes);

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

  if(m_zookeeperConnectStringHasBeenSet)
  {
   payload.WithString("zookeeperConnectString", m_zookeeperConnectString);

  }

  if(m_zookeeperConnectStringTlsHasBeenSet)
  {
   payload.WithString("zookeeperConnectStringTls", m_zookeeperConnectStringTls);

  }

  if(m_storageModeHasBeenSet)
  {
   payload.WithString("storageMode", StorageModeMapper::GetNameForStorageMode(m_storageMode));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
