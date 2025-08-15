/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/BedrockFoundationModelConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

BedrockFoundationModelConfiguration::BedrockFoundationModelConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockFoundationModelConfiguration& BedrockFoundationModelConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("modelArn"))
  {
    m_modelArn = jsonValue.GetString("modelArn");
    m_modelArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsingPrompt"))
  {
    m_parsingPrompt = jsonValue.GetObject("parsingPrompt");
    m_parsingPromptHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parsingModality"))
  {
    m_parsingModality = ParsingModalityMapper::GetParsingModalityForName(jsonValue.GetString("parsingModality"));
    m_parsingModalityHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockFoundationModelConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_modelArnHasBeenSet)
  {
   payload.WithString("modelArn", m_modelArn);

  }

  if(m_parsingPromptHasBeenSet)
  {
   payload.WithObject("parsingPrompt", m_parsingPrompt.Jsonize());

  }

  if(m_parsingModalityHasBeenSet)
  {
   payload.WithString("parsingModality", ParsingModalityMapper::GetNameForParsingModality(m_parsingModality));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
