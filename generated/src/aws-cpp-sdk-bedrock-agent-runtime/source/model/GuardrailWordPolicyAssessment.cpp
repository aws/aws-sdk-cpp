/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/GuardrailWordPolicyAssessment.h>
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

GuardrailWordPolicyAssessment::GuardrailWordPolicyAssessment(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailWordPolicyAssessment& GuardrailWordPolicyAssessment::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customWords"))
  {
    Aws::Utils::Array<JsonView> customWordsJsonList = jsonValue.GetArray("customWords");
    for(unsigned customWordsIndex = 0; customWordsIndex < customWordsJsonList.GetLength(); ++customWordsIndex)
    {
      m_customWords.push_back(customWordsJsonList[customWordsIndex].AsObject());
    }
    m_customWordsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("managedWordLists"))
  {
    Aws::Utils::Array<JsonView> managedWordListsJsonList = jsonValue.GetArray("managedWordLists");
    for(unsigned managedWordListsIndex = 0; managedWordListsIndex < managedWordListsJsonList.GetLength(); ++managedWordListsIndex)
    {
      m_managedWordLists.push_back(managedWordListsJsonList[managedWordListsIndex].AsObject());
    }
    m_managedWordListsHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailWordPolicyAssessment::Jsonize() const
{
  JsonValue payload;

  if(m_customWordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> customWordsJsonList(m_customWords.size());
   for(unsigned customWordsIndex = 0; customWordsIndex < customWordsJsonList.GetLength(); ++customWordsIndex)
   {
     customWordsJsonList[customWordsIndex].AsObject(m_customWords[customWordsIndex].Jsonize());
   }
   payload.WithArray("customWords", std::move(customWordsJsonList));

  }

  if(m_managedWordListsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> managedWordListsJsonList(m_managedWordLists.size());
   for(unsigned managedWordListsIndex = 0; managedWordListsIndex < managedWordListsJsonList.GetLength(); ++managedWordListsIndex)
   {
     managedWordListsJsonList[managedWordListsIndex].AsObject(m_managedWordLists[managedWordListsIndex].Jsonize());
   }
   payload.WithArray("managedWordLists", std::move(managedWordListsJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
