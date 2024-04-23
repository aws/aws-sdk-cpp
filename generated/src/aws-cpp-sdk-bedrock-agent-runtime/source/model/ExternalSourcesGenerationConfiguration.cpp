/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ExternalSourcesGenerationConfiguration.h>
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

ExternalSourcesGenerationConfiguration::ExternalSourcesGenerationConfiguration() : 
    m_promptTemplateHasBeenSet(false)
{
}

ExternalSourcesGenerationConfiguration::ExternalSourcesGenerationConfiguration(JsonView jsonValue) : 
    m_promptTemplateHasBeenSet(false)
{
  *this = jsonValue;
}

ExternalSourcesGenerationConfiguration& ExternalSourcesGenerationConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("promptTemplate"))
  {
    m_promptTemplate = jsonValue.GetObject("promptTemplate");

    m_promptTemplateHasBeenSet = true;
  }

  return *this;
}

JsonValue ExternalSourcesGenerationConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_promptTemplateHasBeenSet)
  {
   payload.WithObject("promptTemplate", m_promptTemplate.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
