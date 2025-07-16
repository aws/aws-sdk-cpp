/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModifyExtractionConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

ModifyExtractionConfiguration::ModifyExtractionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ModifyExtractionConfiguration& ModifyExtractionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customExtractionConfiguration"))
  {
    m_customExtractionConfiguration = jsonValue.GetObject("customExtractionConfiguration");
    m_customExtractionConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyExtractionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_customExtractionConfigurationHasBeenSet)
  {
   payload.WithObject("customExtractionConfiguration", m_customExtractionConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
