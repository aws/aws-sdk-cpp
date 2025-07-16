/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Memory.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

Memory::Memory(JsonView jsonValue)
{
  *this = jsonValue;
}

Memory& Memory::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("encryptionKeyArn"))
  {
    m_encryptionKeyArn = jsonValue.GetString("encryptionKeyArn");
    m_encryptionKeyArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("memoryExecutionRoleArn"))
  {
    m_memoryExecutionRoleArn = jsonValue.GetString("memoryExecutionRoleArn");
    m_memoryExecutionRoleArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventExpiryDuration"))
  {
    m_eventExpiryDuration = jsonValue.GetInteger("eventExpiryDuration");
    m_eventExpiryDurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MemoryStatusMapper::GetMemoryStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("failureReason"))
  {
    m_failureReason = jsonValue.GetString("failureReason");
    m_failureReasonHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetDouble("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("updatedAt");
    m_updatedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("strategies"))
  {
    Aws::Utils::Array<JsonView> strategiesJsonList = jsonValue.GetArray("strategies");
    for(unsigned strategiesIndex = 0; strategiesIndex < strategiesJsonList.GetLength(); ++strategiesIndex)
    {
      m_strategies.push_back(strategiesJsonList[strategiesIndex].AsObject());
    }
    m_strategiesHasBeenSet = true;
  }
  return *this;
}

JsonValue Memory::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_encryptionKeyArnHasBeenSet)
  {
   payload.WithString("encryptionKeyArn", m_encryptionKeyArn);

  }

  if(m_memoryExecutionRoleArnHasBeenSet)
  {
   payload.WithString("memoryExecutionRoleArn", m_memoryExecutionRoleArn);

  }

  if(m_eventExpiryDurationHasBeenSet)
  {
   payload.WithInteger("eventExpiryDuration", m_eventExpiryDuration);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MemoryStatusMapper::GetNameForMemoryStatus(m_status));
  }

  if(m_failureReasonHasBeenSet)
  {
   payload.WithString("failureReason", m_failureReason);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("createdAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("updatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  if(m_strategiesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> strategiesJsonList(m_strategies.size());
   for(unsigned strategiesIndex = 0; strategiesIndex < strategiesJsonList.GetLength(); ++strategiesIndex)
   {
     strategiesJsonList[strategiesIndex].AsObject(m_strategies[strategiesIndex].Jsonize());
   }
   payload.WithArray("strategies", std::move(strategiesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
