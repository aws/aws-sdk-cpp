/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/GuardrailTextBlock.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

GuardrailTextBlock::GuardrailTextBlock(JsonView jsonValue)
{
  *this = jsonValue;
}

GuardrailTextBlock& GuardrailTextBlock::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("text"))
  {
    m_text = jsonValue.GetString("text");
    m_textHasBeenSet = true;
  }
  if(jsonValue.ValueExists("qualifiers"))
  {
    Aws::Utils::Array<JsonView> qualifiersJsonList = jsonValue.GetArray("qualifiers");
    for(unsigned qualifiersIndex = 0; qualifiersIndex < qualifiersJsonList.GetLength(); ++qualifiersIndex)
    {
      m_qualifiers.push_back(GuardrailContentQualifierMapper::GetGuardrailContentQualifierForName(qualifiersJsonList[qualifiersIndex].AsString()));
    }
    m_qualifiersHasBeenSet = true;
  }
  return *this;
}

JsonValue GuardrailTextBlock::Jsonize() const
{
  JsonValue payload;

  if(m_textHasBeenSet)
  {
   payload.WithString("text", m_text);

  }

  if(m_qualifiersHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> qualifiersJsonList(m_qualifiers.size());
   for(unsigned qualifiersIndex = 0; qualifiersIndex < qualifiersJsonList.GetLength(); ++qualifiersIndex)
   {
     qualifiersJsonList[qualifiersIndex].AsString(GuardrailContentQualifierMapper::GetNameForGuardrailContentQualifier(m_qualifiers[qualifiersIndex]));
   }
   payload.WithArray("qualifiers", std::move(qualifiersJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
