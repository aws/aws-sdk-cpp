/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/KafkaCluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace KafkaConnect
{
namespace Model
{

KafkaCluster::KafkaCluster() : 
    m_apacheKafkaClusterHasBeenSet(false)
{
}

KafkaCluster::KafkaCluster(JsonView jsonValue) : 
    m_apacheKafkaClusterHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaCluster& KafkaCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("apacheKafkaCluster"))
  {
    m_apacheKafkaCluster = jsonValue.GetObject("apacheKafkaCluster");

    m_apacheKafkaClusterHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaCluster::Jsonize() const
{
  JsonValue payload;

  if(m_apacheKafkaClusterHasBeenSet)
  {
   payload.WithObject("apacheKafkaCluster", m_apacheKafkaCluster.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
