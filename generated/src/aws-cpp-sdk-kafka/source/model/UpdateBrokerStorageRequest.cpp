/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateBrokerStorageRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateBrokerStorageRequest::UpdateBrokerStorageRequest() : 
    m_clusterArnHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetBrokerEBSVolumeInfoHasBeenSet(false)
{
}

Aws::String UpdateBrokerStorageRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_targetBrokerEBSVolumeInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> targetBrokerEBSVolumeInfoJsonList(m_targetBrokerEBSVolumeInfo.size());
   for(unsigned targetBrokerEBSVolumeInfoIndex = 0; targetBrokerEBSVolumeInfoIndex < targetBrokerEBSVolumeInfoJsonList.GetLength(); ++targetBrokerEBSVolumeInfoIndex)
   {
     targetBrokerEBSVolumeInfoJsonList[targetBrokerEBSVolumeInfoIndex].AsObject(m_targetBrokerEBSVolumeInfo[targetBrokerEBSVolumeInfoIndex].Jsonize());
   }
   payload.WithArray("targetBrokerEBSVolumeInfo", std::move(targetBrokerEBSVolumeInfoJsonList));

  }

  return payload.View().WriteReadable();
}




