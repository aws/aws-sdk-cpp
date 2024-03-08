/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationInfo.h>
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

ReplicationInfo::ReplicationInfo() : 
    m_consumerGroupReplicationHasBeenSet(false),
    m_sourceKafkaClusterArnHasBeenSet(false),
    m_targetCompressionType(TargetCompressionType::NOT_SET),
    m_targetCompressionTypeHasBeenSet(false),
    m_targetKafkaClusterArnHasBeenSet(false),
    m_topicReplicationHasBeenSet(false)
{
}

ReplicationInfo::ReplicationInfo(JsonView jsonValue) : 
    m_consumerGroupReplicationHasBeenSet(false),
    m_sourceKafkaClusterArnHasBeenSet(false),
    m_targetCompressionType(TargetCompressionType::NOT_SET),
    m_targetCompressionTypeHasBeenSet(false),
    m_targetKafkaClusterArnHasBeenSet(false),
    m_topicReplicationHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInfo& ReplicationInfo::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumerGroupReplication"))
  {
    m_consumerGroupReplication = jsonValue.GetObject("consumerGroupReplication");

    m_consumerGroupReplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceKafkaClusterArn"))
  {
    m_sourceKafkaClusterArn = jsonValue.GetString("sourceKafkaClusterArn");

    m_sourceKafkaClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetCompressionType"))
  {
    m_targetCompressionType = TargetCompressionTypeMapper::GetTargetCompressionTypeForName(jsonValue.GetString("targetCompressionType"));

    m_targetCompressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetKafkaClusterArn"))
  {
    m_targetKafkaClusterArn = jsonValue.GetString("targetKafkaClusterArn");

    m_targetKafkaClusterArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicReplication"))
  {
    m_topicReplication = jsonValue.GetObject("topicReplication");

    m_topicReplicationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationInfo::Jsonize() const
{
  JsonValue payload;

  if(m_consumerGroupReplicationHasBeenSet)
  {
   payload.WithObject("consumerGroupReplication", m_consumerGroupReplication.Jsonize());

  }

  if(m_sourceKafkaClusterArnHasBeenSet)
  {
   payload.WithString("sourceKafkaClusterArn", m_sourceKafkaClusterArn);

  }

  if(m_targetCompressionTypeHasBeenSet)
  {
   payload.WithString("targetCompressionType", TargetCompressionTypeMapper::GetNameForTargetCompressionType(m_targetCompressionType));
  }

  if(m_targetKafkaClusterArnHasBeenSet)
  {
   payload.WithString("targetKafkaClusterArn", m_targetKafkaClusterArn);

  }

  if(m_topicReplicationHasBeenSet)
  {
   payload.WithObject("topicReplication", m_topicReplication.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
