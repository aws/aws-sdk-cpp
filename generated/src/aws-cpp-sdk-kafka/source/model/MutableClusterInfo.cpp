/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/MutableClusterInfo.h>
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

MutableClusterInfo::MutableClusterInfo(JsonView jsonValue)
{
  *this = jsonValue;
}

MutableClusterInfo& MutableClusterInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("brokerEBSVolumeInfo"))
  {
    Aws::Utils::Array<JsonView> brokerEBSVolumeInfoJsonList = jsonValue.GetArray("brokerEBSVolumeInfo");
    for(unsigned brokerEBSVolumeInfoIndex = 0; brokerEBSVolumeInfoIndex < brokerEBSVolumeInfoJsonList.GetLength(); ++brokerEBSVolumeInfoIndex)
    {
      m_brokerEBSVolumeInfo.push_back(brokerEBSVolumeInfoJsonList[brokerEBSVolumeInfoIndex].AsObject());
    }
    m_brokerEBSVolumeInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("configurationInfo"))
  {
    m_configurationInfo = jsonValue.GetObject("configurationInfo");
    m_configurationInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numberOfBrokerNodes"))
  {
    m_numberOfBrokerNodes = jsonValue.GetInteger("numberOfBrokerNodes");
    m_numberOfBrokerNodesHasBeenSet = true;
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
  if(jsonValue.ValueExists("instanceType"))
  {
    m_instanceType = jsonValue.GetString("instanceType");
    m_instanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientAuthentication"))
  {
    m_clientAuthentication = jsonValue.GetObject("clientAuthentication");
    m_clientAuthenticationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionInfo"))
  {
    m_encryptionInfo = jsonValue.GetObject("encryptionInfo");
    m_encryptionInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectivityInfo"))
  {
    m_connectivityInfo = jsonValue.GetObject("connectivityInfo");
    m_connectivityInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageMode"))
  {
    m_storageMode = StorageModeMapper::GetStorageModeForName(jsonValue.GetString("storageMode"));
    m_storageModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("brokerCountUpdateInfo"))
  {
    m_brokerCountUpdateInfo = jsonValue.GetObject("brokerCountUpdateInfo");
    m_brokerCountUpdateInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue MutableClusterInfo::Jsonize() const
{
  JsonValue payload;

  if(m_brokerEBSVolumeInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> brokerEBSVolumeInfoJsonList(m_brokerEBSVolumeInfo.size());
   for(unsigned brokerEBSVolumeInfoIndex = 0; brokerEBSVolumeInfoIndex < brokerEBSVolumeInfoJsonList.GetLength(); ++brokerEBSVolumeInfoIndex)
   {
     brokerEBSVolumeInfoJsonList[brokerEBSVolumeInfoIndex].AsObject(m_brokerEBSVolumeInfo[brokerEBSVolumeInfoIndex].Jsonize());
   }
   payload.WithArray("brokerEBSVolumeInfo", std::move(brokerEBSVolumeInfoJsonList));

  }

  if(m_configurationInfoHasBeenSet)
  {
   payload.WithObject("configurationInfo", m_configurationInfo.Jsonize());

  }

  if(m_numberOfBrokerNodesHasBeenSet)
  {
   payload.WithInteger("numberOfBrokerNodes", m_numberOfBrokerNodes);

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

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("instanceType", m_instanceType);

  }

  if(m_clientAuthenticationHasBeenSet)
  {
   payload.WithObject("clientAuthentication", m_clientAuthentication.Jsonize());

  }

  if(m_encryptionInfoHasBeenSet)
  {
   payload.WithObject("encryptionInfo", m_encryptionInfo.Jsonize());

  }

  if(m_connectivityInfoHasBeenSet)
  {
   payload.WithObject("connectivityInfo", m_connectivityInfo.Jsonize());

  }

  if(m_storageModeHasBeenSet)
  {
   payload.WithString("storageMode", StorageModeMapper::GetNameForStorageMode(m_storageMode));
  }

  if(m_brokerCountUpdateInfoHasBeenSet)
  {
   payload.WithObject("brokerCountUpdateInfo", m_brokerCountUpdateInfo.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
