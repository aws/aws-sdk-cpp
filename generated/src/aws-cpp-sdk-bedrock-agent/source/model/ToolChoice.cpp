/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ToolChoice.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ToolChoice::ToolChoice(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolChoice& ToolChoice::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("auto"))
  {
    m_auto = jsonValue.GetObject("auto");
    m_autoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("any"))
  {
    m_any = jsonValue.GetObject("any");
    m_anyHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tool"))
  {
    m_tool = jsonValue.GetObject("tool");
    m_toolHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolChoice::Jsonize() const
{
  JsonValue payload;

  if(m_autoHasBeenSet)
  {
   payload.WithObject("auto", m_auto.Jsonize());

  }

  if(m_anyHasBeenSet)
  {
   payload.WithObject("any", m_any.Jsonize());

  }

  if(m_toolHasBeenSet)
  {
   payload.WithObject("tool", m_tool.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
