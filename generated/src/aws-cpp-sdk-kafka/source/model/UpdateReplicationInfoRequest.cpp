/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/UpdateReplicationInfoRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Kafka::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateReplicationInfoRequest::UpdateReplicationInfoRequest() : 
    m_consumerGroupReplicationHasBeenSet(false),
    m_currentVersionHasBeenSet(false),
    m_replicatorArnHasBeenSet(false),
    m_sourceKafkaClusterArnHasBeenSet(false),
    m_targetKafkaClusterArnHasBeenSet(false),
    m_topicReplicationHasBeenSet(false)
{
}

Aws::String UpdateReplicationInfoRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_consumerGroupReplicationHasBeenSet)
  {
   payload.WithObject("consumerGroupReplication", m_consumerGroupReplication.Jsonize());

  }

  if(m_currentVersionHasBeenSet)
  {
   payload.WithString("currentVersion", m_currentVersion);

  }

  if(m_sourceKafkaClusterArnHasBeenSet)
  {
   payload.WithString("sourceKafkaClusterArn", m_sourceKafkaClusterArn);

  }

  if(m_targetKafkaClusterArnHasBeenSet)
  {
   payload.WithString("targetKafkaClusterArn", m_targetKafkaClusterArn);

  }

  if(m_topicReplicationHasBeenSet)
  {
   payload.WithObject("topicReplication", m_topicReplication.Jsonize());

  }

  return payload.View().WriteReadable();
}




