/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Citation.h>
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

Citation::Citation() : 
    m_generatedResponsePartHasBeenSet(false),
    m_retrievedReferencesHasBeenSet(false)
{
}

Citation::Citation(JsonView jsonValue) : 
    m_generatedResponsePartHasBeenSet(false),
    m_retrievedReferencesHasBeenSet(false)
{
  *this = jsonValue;
}

Citation& Citation::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("generatedResponsePart"))
  {
    m_generatedResponsePart = jsonValue.GetObject("generatedResponsePart");

    m_generatedResponsePartHasBeenSet = true;
  }

  if(jsonValue.ValueExists("retrievedReferences"))
  {
    Aws::Utils::Array<JsonView> retrievedReferencesJsonList = jsonValue.GetArray("retrievedReferences");
    for(unsigned retrievedReferencesIndex = 0; retrievedReferencesIndex < retrievedReferencesJsonList.GetLength(); ++retrievedReferencesIndex)
    {
      m_retrievedReferences.push_back(retrievedReferencesJsonList[retrievedReferencesIndex].AsObject());
    }
    m_retrievedReferencesHasBeenSet = true;
  }

  return *this;
}

JsonValue Citation::Jsonize() const
{
  JsonValue payload;

  if(m_generatedResponsePartHasBeenSet)
  {
   payload.WithObject("generatedResponsePart", m_generatedResponsePart.Jsonize());

  }

  if(m_retrievedReferencesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> retrievedReferencesJsonList(m_retrievedReferences.size());
   for(unsigned retrievedReferencesIndex = 0; retrievedReferencesIndex < retrievedReferencesJsonList.GetLength(); ++retrievedReferencesIndex)
   {
     retrievedReferencesJsonList[retrievedReferencesIndex].AsObject(m_retrievedReferences[retrievedReferencesIndex].Jsonize());
   }
   payload.WithArray("retrievedReferences", std::move(retrievedReferencesJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
