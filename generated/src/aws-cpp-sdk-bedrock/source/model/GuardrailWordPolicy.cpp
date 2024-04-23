/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/GuardrailWordPolicy.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

GuardrailWordPolicy::GuardrailWordPolicy() : 
    m_wordsHasBeenSet(false),
    m_managedWordListsHasBeenSet(false)
{
}

GuardrailWordPolicy::GuardrailWordPolicy(JsonView jsonValue) : 
    m_wordsHasBeenSet(false),
    m_managedWordListsHasBeenSet(false)
{
  *this = jsonValue;
}

GuardrailWordPolicy& GuardrailWordPolicy::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("words"))
  {
    Aws::Utils::Array<JsonView> wordsJsonList = jsonValue.GetArray("words");
    for(unsigned wordsIndex = 0; wordsIndex < wordsJsonList.GetLength(); ++wordsIndex)
    {
      m_words.push_back(wordsJsonList[wordsIndex].AsObject());
    }
    m_wordsHasBeenSet = true;
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

JsonValue GuardrailWordPolicy::Jsonize() const
{
  JsonValue payload;

  if(m_wordsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> wordsJsonList(m_words.size());
   for(unsigned wordsIndex = 0; wordsIndex < wordsJsonList.GetLength(); ++wordsIndex)
   {
     wordsJsonList[wordsIndex].AsObject(m_words[wordsIndex].Jsonize());
   }
   payload.WithArray("words", std::move(wordsJsonList));

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
} // namespace Bedrock
} // namespace Aws
