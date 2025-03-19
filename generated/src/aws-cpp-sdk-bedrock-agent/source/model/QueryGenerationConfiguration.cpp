/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/QueryGenerationConfiguration.h>
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

QueryGenerationConfiguration::QueryGenerationConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

QueryGenerationConfiguration& QueryGenerationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("executionTimeoutSeconds"))
  {
    m_executionTimeoutSeconds = jsonValue.GetInteger("executionTimeoutSeconds");
    m_executionTimeoutSecondsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("generationContext"))
  {
    m_generationContext = jsonValue.GetObject("generationContext");
    m_generationContextHasBeenSet = true;
  }
  return *this;
}

JsonValue QueryGenerationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_executionTimeoutSecondsHasBeenSet)
  {
   payload.WithInteger("executionTimeoutSeconds", m_executionTimeoutSeconds);

  }

  if(m_generationContextHasBeenSet)
  {
   payload.WithObject("generationContext", m_generationContext.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
