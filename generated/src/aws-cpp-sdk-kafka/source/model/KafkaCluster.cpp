/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/KafkaCluster.h>
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

KafkaCluster::KafkaCluster() : 
    m_amazonMskClusterHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
}

KafkaCluster::KafkaCluster(JsonView jsonValue) : 
    m_amazonMskClusterHasBeenSet(false),
    m_vpcConfigHasBeenSet(false)
{
  *this = jsonValue;
}

KafkaCluster& KafkaCluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("amazonMskCluster"))
  {
    m_amazonMskCluster = jsonValue.GetObject("amazonMskCluster");

    m_amazonMskClusterHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");

    m_vpcConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue KafkaCluster::Jsonize() const
{
  JsonValue payload;

  if(m_amazonMskClusterHasBeenSet)
  {
   payload.WithObject("amazonMskCluster", m_amazonMskCluster.Jsonize());

  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
