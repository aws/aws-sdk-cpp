/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafkaconnect/model/ApacheKafkaClusterDescription.h>
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

ApacheKafkaClusterDescription::ApacheKafkaClusterDescription() : 
    m_bootstrapServersHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
}

ApacheKafkaClusterDescription::ApacheKafkaClusterDescription(JsonView jsonValue) : 
    m_bootstrapServersHasBeenSet(false),
    m_vpcHasBeenSet(false)
{
  *this = jsonValue;
}

ApacheKafkaClusterDescription& ApacheKafkaClusterDescription::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bootstrapServers"))
  {
    m_bootstrapServers = jsonValue.GetString("bootstrapServers");

    m_bootstrapServersHasBeenSet = true;
  }

  if(jsonValue.ValueExists("vpc"))
  {
    m_vpc = jsonValue.GetObject("vpc");

    m_vpcHasBeenSet = true;
  }

  return *this;
}

JsonValue ApacheKafkaClusterDescription::Jsonize() const
{
  JsonValue payload;

  if(m_bootstrapServersHasBeenSet)
  {
   payload.WithString("bootstrapServers", m_bootstrapServers);

  }

  if(m_vpcHasBeenSet)
  {
   payload.WithObject("vpc", m_vpc.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace KafkaConnect
} // namespace Aws
