/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/MemoryRecordOutput.h>
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

MemoryRecordOutput::MemoryRecordOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

MemoryRecordOutput& MemoryRecordOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("memoryRecordId"))
  {
    m_memoryRecordId = jsonValue.GetString("memoryRecordId");
    m_memoryRecordIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MemoryRecordStatusMapper::GetMemoryRecordStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("requestIdentifier"))
  {
    m_requestIdentifier = jsonValue.GetString("requestIdentifier");
    m_requestIdentifierHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorCode"))
  {
    m_errorCode = jsonValue.GetInteger("errorCode");
    m_errorCodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorMessage"))
  {
    m_errorMessage = jsonValue.GetString("errorMessage");
    m_errorMessageHasBeenSet = true;
  }
  return *this;
}

JsonValue MemoryRecordOutput::Jsonize() const
{
  JsonValue payload;

  if(m_memoryRecordIdHasBeenSet)
  {
   payload.WithString("memoryRecordId", m_memoryRecordId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", MemoryRecordStatusMapper::GetNameForMemoryRecordStatus(m_status));
  }

  if(m_requestIdentifierHasBeenSet)
  {
   payload.WithString("requestIdentifier", m_requestIdentifier);

  }

  if(m_errorCodeHasBeenSet)
  {
   payload.WithInteger("errorCode", m_errorCode);

  }

  if(m_errorMessageHasBeenSet)
  {
   payload.WithString("errorMessage", m_errorMessage);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
