/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ToolInputSchema.h>
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

ToolInputSchema::ToolInputSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolInputSchema& ToolInputSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("json"))
  {
    m_json = jsonValue.GetObject("json");
    m_jsonHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolInputSchema::Jsonize() const
{
  JsonValue payload;

  if(m_jsonHasBeenSet)
  {
    if(!m_json.View().IsNull())
    {
       payload.WithObject("json", JsonValue(m_json.View()));
    }
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
