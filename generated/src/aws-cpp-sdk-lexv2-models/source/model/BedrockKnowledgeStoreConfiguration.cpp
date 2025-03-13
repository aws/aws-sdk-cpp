/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/lexv2-models/model/BedrockKnowledgeStoreConfiguration.h>
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

BedrockKnowledgeStoreConfiguration::BedrockKnowledgeStoreConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockKnowledgeStoreConfiguration& BedrockKnowledgeStoreConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("bedrockKnowledgeBaseArn"))
  {
    m_bedrockKnowledgeBaseArn = jsonValue.GetString("bedrockKnowledgeBaseArn");
    m_bedrockKnowledgeBaseArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exactResponse"))
  {
    m_exactResponse = jsonValue.GetBool("exactResponse");
    m_exactResponseHasBeenSet = true;
  }
  if(jsonValue.ValueExists("exactResponseFields"))
  {
    m_exactResponseFields = jsonValue.GetObject("exactResponseFields");
    m_exactResponseFieldsHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockKnowledgeStoreConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_bedrockKnowledgeBaseArnHasBeenSet)
  {
   payload.WithString("bedrockKnowledgeBaseArn", m_bedrockKnowledgeBaseArn);

  }

  if(m_exactResponseHasBeenSet)
  {
   payload.WithBool("exactResponse", m_exactResponse);

  }

  if(m_exactResponseFieldsHasBeenSet)
  {
   payload.WithObject("exactResponseFields", m_exactResponseFields.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace LexModelsV2
} // namespace Aws
