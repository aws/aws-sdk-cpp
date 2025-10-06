/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordDeleteInput.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

MemoryRecordDeleteInput::MemoryRecordDeleteInput(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryRecordDeleteInput& MemoryRecordDeleteInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryRecordId"))
  {
    m_memoryRecordId = jsonValue.GetString("memoryRecordId");
    m_memoryRecordIdHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordDeleteInput::Jsonize() const
{
  JsonValue payload;

  if(m_memoryRecordIdHasBeenSet)
  {
   payload.WithString("memoryRecordId", m_memoryRecordId);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
