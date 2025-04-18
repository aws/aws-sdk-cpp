﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/kafka/model/ConsumerGroupReplicationUpdate.h>
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

ConsumerGroupReplicationUpdate::ConsumerGroupReplicationUpdate(JsonView jsonValue)
{
  *this = jsonValue;
}

ConsumerGroupReplicationUpdate& ConsumerGroupReplicationUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("consumerGroupsToExclude"))
  {
    Aws::Utils::Array<JsonView> consumerGroupsToExcludeJsonList = jsonValue.GetArray("consumerGroupsToExclude");
    for(unsigned consumerGroupsToExcludeIndex = 0; consumerGroupsToExcludeIndex < consumerGroupsToExcludeJsonList.GetLength(); ++consumerGroupsToExcludeIndex)
    {
      m_consumerGroupsToExclude.push_back(consumerGroupsToExcludeJsonList[consumerGroupsToExcludeIndex].AsString());
    }
    m_consumerGroupsToExcludeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consumerGroupsToReplicate"))
  {
    Aws::Utils::Array<JsonView> consumerGroupsToReplicateJsonList = jsonValue.GetArray("consumerGroupsToReplicate");
    for(unsigned consumerGroupsToReplicateIndex = 0; consumerGroupsToReplicateIndex < consumerGroupsToReplicateJsonList.GetLength(); ++consumerGroupsToReplicateIndex)
    {
      m_consumerGroupsToReplicate.push_back(consumerGroupsToReplicateJsonList[consumerGroupsToReplicateIndex].AsString());
    }
    m_consumerGroupsToReplicateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("detectAndCopyNewConsumerGroups"))
  {
    m_detectAndCopyNewConsumerGroups = jsonValue.GetBool("detectAndCopyNewConsumerGroups");
    m_detectAndCopyNewConsumerGroupsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("synchroniseConsumerGroupOffsets"))
  {
    m_synchroniseConsumerGroupOffsets = jsonValue.GetBool("synchroniseConsumerGroupOffsets");
    m_synchroniseConsumerGroupOffsetsHasBeenSet = true;
  }
  return *this;
}

JsonValue ConsumerGroupReplicationUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_consumerGroupsToExcludeHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> consumerGroupsToExcludeJsonList(m_consumerGroupsToExclude.size());
   for(unsigned consumerGroupsToExcludeIndex = 0; consumerGroupsToExcludeIndex < consumerGroupsToExcludeJsonList.GetLength(); ++consumerGroupsToExcludeIndex)
   {
     consumerGroupsToExcludeJsonList[consumerGroupsToExcludeIndex].AsString(m_consumerGroupsToExclude[consumerGroupsToExcludeIndex]);
   }
   payload.WithArray("consumerGroupsToExclude", std::move(consumerGroupsToExcludeJsonList));

  }

  if(m_consumerGroupsToReplicateHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> consumerGroupsToReplicateJsonList(m_consumerGroupsToReplicate.size());
   for(unsigned consumerGroupsToReplicateIndex = 0; consumerGroupsToReplicateIndex < consumerGroupsToReplicateJsonList.GetLength(); ++consumerGroupsToReplicateIndex)
   {
     consumerGroupsToReplicateJsonList[consumerGroupsToReplicateIndex].AsString(m_consumerGroupsToReplicate[consumerGroupsToReplicateIndex]);
   }
   payload.WithArray("consumerGroupsToReplicate", std::move(consumerGroupsToReplicateJsonList));

  }

  if(m_detectAndCopyNewConsumerGroupsHasBeenSet)
  {
   payload.WithBool("detectAndCopyNewConsumerGroups", m_detectAndCopyNewConsumerGroups);

  }

  if(m_synchroniseConsumerGroupOffsetsHasBeenSet)
  {
   payload.WithBool("synchroniseConsumerGroupOffsets", m_synchroniseConsumerGroupOffsets);

  }

  return payload;
}

} // namespace Model
} // namespace Kafka
} // namespace Aws
