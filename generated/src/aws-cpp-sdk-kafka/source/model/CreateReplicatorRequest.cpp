/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/CreateReplicatorRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateReplicatorRequest::CreateReplicatorRequest() : 
    m_descriptionHasBeenSet(false),
    m_kafkaClustersHasBeenSet(false),
    m_replicationInfoListHasBeenSet(false),
    m_replicatorNameHasBeenSet(false),
    m_serviceExecutionRoleArnHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateReplicatorRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_kafkaClustersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> kafkaClustersJsonList(m_kafkaClusters.size());
   for(unsigned kafkaClustersIndex = 0; kafkaClustersIndex < kafkaClustersJsonList.GetLength(); ++kafkaClustersIndex)
   {
     kafkaClustersJsonList[kafkaClustersIndex].AsObject(m_kafkaClusters[kafkaClustersIndex].Jsonize());
   }
   payload.WithArray("kafkaClusters", std::move(kafkaClustersJsonList));

  }

  if(m_replicationInfoListHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationInfoListJsonList(m_replicationInfoList.size());
   for(unsigned replicationInfoListIndex = 0; replicationInfoListIndex < replicationInfoListJsonList.GetLength(); ++replicationInfoListIndex)
   {
     replicationInfoListJsonList[replicationInfoListIndex].AsObject(m_replicationInfoList[replicationInfoListIndex].Jsonize());
   }
   payload.WithArray("replicationInfoList", std::move(replicationInfoListJsonList));

  }

  if(m_replicatorNameHasBeenSet)
  {
   payload.WithString("replicatorName", m_replicatorName);

  }

  if(m_serviceExecutionRoleArnHasBeenSet)
  {
   payload.WithString("serviceExecutionRoleArn", m_serviceExecutionRoleArn);

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

  return payload.View().WriteReadable();
}




