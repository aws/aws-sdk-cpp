/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ProvisionedRequest.h>
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

ProvisionedRequest::ProvisionedRequest() : 
    m_brokerNodeGroupInfoHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_configurationInfoHasBeenSet(false),
    m_encryptionInfoHasBeenSet(false),
    m_enhancedMonitoring(EnhancedMonitoring::NOT_SET),
    m_enhancedMonitoringHasBeenSet(false),
    m_openMonitoringHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_storageMode(StorageMode::NOT_SET),
    m_storageModeHasBeenSet(false)
{
}

ProvisionedRequest::ProvisionedRequest(JsonView jsonValue) : 
    m_brokerNodeGroupInfoHasBeenSet(false),
    m_clientAuthenticationHasBeenSet(false),
    m_configurationInfoHasBeenSet(false),
    m_encryptionInfoHasBeenSet(false),
    m_enhancedMonitoring(EnhancedMonitoring::NOT_SET),
    m_enhancedMonitoringHasBeenSet(false),
    m_openMonitoringHasBeenSet(false),
    m_kafkaVersionHasBeenSet(false),
    m_loggingInfoHasBeenSet(false),
    m_numberOfBrokerNodes(0),
    m_numberOfBrokerNodesHasBeenSet(false),
    m_storageMode(StorageMode::NOT_SET),
    m_storageModeHasBeenSet(false)
{
  *this = jsonValue;
}

ProvisionedRequest& ProvisionedRequest::operator =(JsonView jsonValue)
{
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

  if(jsonValue.ValueExists("configurationInfo"))
  {
    m_configurationInfo = jsonValue.GetObject("configurationInfo");

    m_configurationInfoHasBeenSet = true;
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

  if(jsonValue.ValueExists("kafkaVersion"))
  {
    m_kafkaVersion = jsonValue.GetString("kafkaVersion");

    m_kafkaVersionHasBeenSet = true;
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

  if(jsonValue.ValueExists("storageMode"))
  {
    m_storageMode = StorageModeMapper::GetStorageModeForName(jsonValue.GetString("storageMode"));

    m_storageModeHasBeenSet = true;
  }

  return *this;
}

JsonValue ProvisionedRequest::Jsonize() const
{
  JsonValue payload;

  if(m_brokerNodeGroupInfoHasBeenSet)
  {
   payload.WithObject("brokerNodeGroupInfo", m_brokerNodeGroupInfo.Jsonize());

  }

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());

  }

  if(m_configurationInfoHasBeenSet)
  {
   payload.WithObject("configurationInfo", m_configurationInfo.Jsonize());

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

  if(m_kafkaVersionHasBeenSet)
  {
   payload.WithString("kafkaVersion", m_kafkaVersion);

  }

  if(m_loggingInfoHasBeenSet)
  {
   payload.WithObject("loggingInfo", m_loggingInfo.Jsonize());

  }

  if(m_numberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("numberOfBrokerNodes", m_numberOfBrokerNodes);

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
