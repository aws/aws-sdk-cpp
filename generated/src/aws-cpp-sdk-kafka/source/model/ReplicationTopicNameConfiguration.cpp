/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ReplicationTopicNameConfiguration.h>
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

ReplicationTopicNameConfiguration::ReplicationTopicNameConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ReplicationTopicNameConfiguration& ReplicationTopicNameConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = ReplicationTopicNameConfigurationTypeMapper::GetReplicationTopicNameConfigurationTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
  return *this;
}

JsonValue ReplicationTopicNameConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", ReplicationTopicNameConfigurationTypeMapper::GetNameForReplicationTopicNameConfigurationType(m_type));
  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
