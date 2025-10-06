/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/FilterInput.h>
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

FilterInput::FilterInput(JsonView jsonValue)
{
  *this = jsonValue;
}

FilterInput& FilterInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("branch"))
  {
    m_branch = jsonValue.GetObject("branch");
    m_branchHasBeenSet = true;
  }
  if(jsonValue.ValueExists("eventMetadata"))
  {
    Aws::Utils::Array<JsonView> eventMetadataJsonList = jsonValue.GetArray("eventMetadata");
    for(unsigned eventMetadataIndex = 0; eventMetadataIndex < eventMetadataJsonList.GetLength(); ++eventMetadataIndex)
    {
      m_eventMetadata.push_back(eventMetadataJsonList[eventMetadataIndex].AsObject());
    }
    m_eventMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue FilterInput::Jsonize() const
{
  JsonValue payload;

  if(m_branchHasBeenSet)
  {
   payload.WithObject("branch", m_branch.Jsonize());

  }

  if(m_eventMetadataHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> eventMetadataJsonList(m_eventMetadata.size());
   for(unsigned eventMetadataIndex = 0; eventMetadataIndex < eventMetadataJsonList.GetLength(); ++eventMetadataIndex)
   {
     eventMetadataJsonList[eventMetadataIndex].AsObject(m_eventMetadata[eventMetadataIndex].Jsonize());
   }
   payload.WithArray("eventMetadata", std::move(eventMetadataJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
