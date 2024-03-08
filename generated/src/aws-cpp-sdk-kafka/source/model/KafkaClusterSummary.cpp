/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/KafkaClusterSummary.h>
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

KafkaClusterSummary::KafkaClusterSummary() : 
    m_amazonMskClusterHasBeenSet(false),
    m_kafkaClusterAliasHasBeenSet(false)
{
}

KafkaClusterSummary::KafkaClusterSummary(JsonView jsonValue) : 
    m_amazonMskClusterHasBeenSet(false),
    m_kafkaClusterAliasHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaClusterSummary& KafkaClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amazonMskCluster"))
  {
    m_amazonMskCluster = jsonValue.GetObject("amazonMskCluster");

    m_amazonMskClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("kafkaClusterAlias"))
  {
    m_kafkaClusterAlias = jsonValue.GetString("kafkaClusterAlias");

    m_kafkaClusterAliasHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_amazonMskClusterHasBeenSet)
  {
   payload.WithObject("amazonMskCluster", m_amazonMskCluster.Jsonize());

  }

  if(m_kafkaClusterAliasHasBeenSet)
  {
   payload.WithString("kafkaClusterAlias", m_kafkaClusterAlias);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
