/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/BedrockRerankingConfiguration.h>
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

BedrockRerankingConfiguration::BedrockRerankingConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BedrockRerankingConfiguration& BedrockRerankingConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("numberOfResults"))
  {
    m_numberOfResults = jsonValue.GetInteger("numberOfResults");
    m_numberOfResultsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modelConfiguration"))
  {
    m_modelConfiguration = jsonValue.GetObject("modelConfiguration");
    m_modelConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue BedrockRerankingConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_numberOfResultsHasBeenSet)
  {
   payload.WithInteger("numberOfResults", m_numberOfResults);

  }

  if(m_modelConfigurationHasBeenSet)
  {
   payload.WithObject("modelConfiguration", m_modelConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
