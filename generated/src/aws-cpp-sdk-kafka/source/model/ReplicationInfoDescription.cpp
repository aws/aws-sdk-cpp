/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationInfoDescription.h>
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

ReplicationInfoDescription::ReplicationInfoDescription() : 
    m_consumerGroupReplicationHasBeenSet(false),
    m_sourceKafkaClusterAliasHasBeenSet(false),
    m_targetCompressionType(TargetCompressionType::NOT_SET),
    m_targetCompressionTypeHasBeenSet(false),
    m_targetKafkaClusterAliasHasBeenSet(false),
    m_topicReplicationHasBeenSet(false)
{
}

ReplicationInfoDescription::ReplicationInfoDescription(JsonView jsonValue) : 
    m_consumerGroupReplicationHasBeenSet(false),
    m_sourceKafkaClusterAliasHasBeenSet(false),
    m_targetCompressionType(TargetCompressionType::NOT_SET),
    m_targetCompressionTypeHasBeenSet(false),
    m_targetKafkaClusterAliasHasBeenSet(false),
    m_topicReplicationHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInfoDescription& ReplicationInfoDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumerGroupReplication"))
  {
    m_consumerGroupReplication = jsonValue.GetObject("consumerGroupReplication");

    m_consumerGroupReplicationHasBeenSet = true;
  }

  if(jsonValue.ValueExists("sourceKafkaClusterAlias"))
  {
    m_sourceKafkaClusterAlias = jsonValue.GetString("sourceKafkaClusterAlias");

    m_sourceKafkaClusterAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetCompressionType"))
  {
    m_targetCompressionType = TargetCompressionTypeMapper::GetTargetCompressionTypeForName(jsonValue.GetString("targetCompressionType"));

    m_targetCompressionTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetKafkaClusterAlias"))
  {
    m_targetKafkaClusterAlias = jsonValue.GetString("targetKafkaClusterAlias");

    m_targetKafkaClusterAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("topicReplication"))
  {
    m_topicReplication = jsonValue.GetObject("topicReplication");

    m_topicReplicationHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationInfoDescription::Jsonize() const
{
  JsonValue payload;

  if(m_consumerGroupReplicationHasBeenSet)
  {
   payload.WithObject("consumerGroupReplication", m_consumerGroupReplication.Jsonize());

  }

  if(m_sourceKafkaClusterAliasHasBeenSet)
  {
   payload.WithString("sourceKafkaClusterAlias", m_sourceKafkaClusterAlias);

  }

  if(m_targetCompressionTypeHasBeenSet)
  {
   payload.WithString("targetCompressionType", TargetCompressionTypeMapper::GetNameForTargetCompressionType(m_targetCompressionType));
  }

  if(m_targetKafkaClusterAliasHasBeenSet)
  {
   payload.WithString("targetKafkaClusterAlias", m_targetKafkaClusterAlias);

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
