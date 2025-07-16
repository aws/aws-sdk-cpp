/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeInterpreterSummary.h>
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

CodeInterpreterSummary::CodeInterpreterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeInterpreterSummary& CodeInterpreterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("codeInterpreterId"))
  {
    m_codeInterpreterId = jsonValue.GetString("codeInterpreterId");
    m_codeInterpreterIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("codeInterpreterArn"))
  {
    m_codeInterpreterArn = jsonValue.GetString("codeInterpreterArn");
    m_codeInterpreterArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("status"))
  {
    m_status = CodeInterpreterStatusMapper::GetCodeInterpreterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastUpdatedAt"))
  {
    m_lastUpdatedAt = jsonValue.GetString("lastUpdatedAt");
    m_lastUpdatedAtHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeInterpreterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_codeInterpreterIdHasBeenSet)
  {
   payload.WithString("codeInterpreterId", m_codeInterpreterId);

  }

  if(m_codeInterpreterArnHasBeenSet)
  {
   payload.WithString("codeInterpreterArn", m_codeInterpreterArn);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", CodeInterpreterStatusMapper::GetNameForCodeInterpreterStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_lastUpdatedAtHasBeenSet)
  {
   payload.WithString("lastUpdatedAt", m_lastUpdatedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
