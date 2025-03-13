/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ApiRequestBody.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentRuntime
{
namespace Model
{

ApiRequestBody::ApiRequestBody(JsonView jsonValue)
{
  *this = jsonValue;
}

ApiRequestBody& ApiRequestBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    Aws::Map<Aws::String, JsonView> contentJsonMap = jsonValue.GetObject("content").GetAllObjects();
    for(auto& contentItem : contentJsonMap)
    {
      m_content[contentItem.first] = contentItem.second.AsObject();
    }
    m_contentHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiRequestBody::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   JsonValue contentJsonMap;
   for(auto& contentItem : m_content)
   {
     contentJsonMap.WithObject(contentItem.first, contentItem.second.Jsonize());
   }
   payload.WithObject("content", std::move(contentJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
