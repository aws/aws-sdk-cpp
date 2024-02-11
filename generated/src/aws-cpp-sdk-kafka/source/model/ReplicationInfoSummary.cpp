/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationInfoSummary.h>
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

ReplicationInfoSummary::ReplicationInfoSummary() : 
    m_sourceKafkaClusterAliasHasBeenSet(false),
    m_targetKafkaClusterAliasHasBeenSet(false)
{
}

ReplicationInfoSummary::ReplicationInfoSummary(JsonView jsonValue) : 
    m_sourceKafkaClusterAliasHasBeenSet(false),
    m_targetKafkaClusterAliasHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationInfoSummary& ReplicationInfoSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceKafkaClusterAlias"))
  {
    m_sourceKafkaClusterAlias = jsonValue.GetString("sourceKafkaClusterAlias");

    m_sourceKafkaClusterAliasHasBeenSet = true;
  }

  if(jsonValue.ValueExists("targetKafkaClusterAlias"))
  {
    m_targetKafkaClusterAlias = jsonValue.GetString("targetKafkaClusterAlias");

    m_targetKafkaClusterAliasHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationInfoSummary::Jsonize() const
{
  JsonValue payload;

  if(m_sourceKafkaClusterAliasHasBeenSet)
  {
   payload.WithString("sourceKafkaClusterAlias", m_sourceKafkaClusterAlias);

  }

  if(m_targetKafkaClusterAliasHasBeenSet)
  {
   payload.WithString("targetKafkaClusterAlias", m_targetKafkaClusterAlias);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
