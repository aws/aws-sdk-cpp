/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/RequestBody.h>
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

RequestBody::RequestBody() : 
    m_contentHasBeenSet(false)
{
}

RequestBody::RequestBody(JsonView jsonValue) : 
    m_contentHasBeenSet(false)
{
  *this = jsonValue;
}

RequestBody& RequestBody::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("content"))
  {
    Aws::Map<Aws::String, JsonView> contentJsonMap = jsonValue.GetObject("content").GetAllObjects();
    for(auto& contentItem : contentJsonMap)
    {
      Aws::Utils::Array<JsonView> parametersJsonList = contentItem.second.AsArray();
      Aws::Vector<Parameter> parametersList;
      parametersList.reserve((size_t)parametersJsonList.GetLength());
      for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
      {
        parametersList.push_back(parametersJsonList[parametersIndex].AsObject());
      }
      m_content[contentItem.first] = std::move(parametersList);
    }
    m_contentHasBeenSet = true;
  }

  return *this;
}

JsonValue RequestBody::Jsonize() const
{
  JsonValue payload;

  if(m_contentHasBeenSet)
  {
   JsonValue contentJsonMap;
   for(auto& contentItem : m_content)
   {
     Aws::Utils::Array<JsonValue> parametersJsonList(contentItem.second.size());
     for(unsigned parametersIndex = 0; parametersIndex < parametersJsonList.GetLength(); ++parametersIndex)
     {
       parametersJsonList[parametersIndex].AsObject(contentItem.second[parametersIndex].Jsonize());
     }
     contentJsonMap.WithArray(contentItem.first, std::move(parametersJsonList));
   }
   payload.WithObject("content", std::move(contentJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
