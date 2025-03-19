/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/BedrockDataAutomationConfiguration.h>
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

BedrockDataAutomationConfiguration::BedrockDataAutomationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockDataAutomationConfiguration& BedrockDataAutomationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("parsingModality"))
  {
    m_parsingModality = ParsingModalityMapper::GetParsingModalityForName(jsonValue.GetString("parsingModality"));
    m_parsingModalityHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockDataAutomationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_parsingModalityHasBeenSet)
  {
   payload.WithString("parsingModality", ParsingModalityMapper::GetNameForParsingModality(m_parsingModality));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
