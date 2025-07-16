/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ToolSchema.h>
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

ToolSchema::ToolSchema(JsonView jsonValue)
{
  *this = jsonValue;
}

ToolSchema& ToolSchema::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("s3"))
  {
    m_s3 = jsonValue.GetObject("s3");
    m_s3HasBeenSet = true;
  }
  if(jsonValue.ValueExists("inlinePayload"))
  {
    Aws::Utils::Array<JsonView> inlinePayloadJsonList = jsonValue.GetArray("inlinePayload");
    for(unsigned inlinePayloadIndex = 0; inlinePayloadIndex < inlinePayloadJsonList.GetLength(); ++inlinePayloadIndex)
    {
      m_inlinePayload.push_back(inlinePayloadJsonList[inlinePayloadIndex].AsObject());
    }
    m_inlinePayloadHasBeenSet = true;
  }
  return *this;
}

JsonValue ToolSchema::Jsonize() const
{
  JsonValue payload;

  if(m_s3HasBeenSet)
  {
   payload.WithObject("s3", m_s3.Jsonize());

  }

  if(m_inlinePayloadHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> inlinePayloadJsonList(m_inlinePayload.size());
   for(unsigned inlinePayloadIndex = 0; inlinePayloadIndex < inlinePayloadJsonList.GetLength(); ++inlinePayloadIndex)
   {
     inlinePayloadJsonList[inlinePayloadIndex].AsObject(m_inlinePayload[inlinePayloadIndex].Jsonize());
   }
   payload.WithArray("inlinePayload", std::move(inlinePayloadJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
