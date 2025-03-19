/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BedrockKnowledgeStoreExactResponseFields.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace LexModelsV2
{
namespace Model
{

BedrockKnowledgeStoreExactResponseFields::BedrockKnowledgeStoreExactResponseFields(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockKnowledgeStoreExactResponseFields& BedrockKnowledgeStoreExactResponseFields::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("answerField"))
  {
    m_answerField = jsonValue.GetString("answerField");
    m_answerFieldHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockKnowledgeStoreExactResponseFields::Jsonize() const
{
  JsonValue payload;

  if(m_answerFieldHasBeenSet)
  {
   payload.WithString("answerField", m_answerField);

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
