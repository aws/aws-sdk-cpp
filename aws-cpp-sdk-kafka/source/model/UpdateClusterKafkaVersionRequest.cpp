/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateClusterKafkaVersionRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateClusterKafkaVersionRequest::UpdateClusterKafkaVersionRequest() : 
    m_clusterArnHasBeenSet(false),
    m_configurationInfoHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_targetKafkaVersionHasBeenSet(false)
{
}

Aws::String UpdateClusterKafkaVersionRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_configurationInfoHasBeenSet)
  {
   payload.WithObject("configurationInfo", m_configurationInfo.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_targetKafkaVersionHasBeenSet)
  {
   payload.WithString("targetKafkaVersion", m_targetKafkaVersion);

  }

  return payload.View().WriteReadable();
}




