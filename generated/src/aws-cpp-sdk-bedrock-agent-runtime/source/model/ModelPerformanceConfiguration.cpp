/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/ModelPerformanceConfiguration.h>
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

ModelPerformanceConfiguration::ModelPerformanceConfiguration() : 
    m_performanceConfigHasBeenSet(false)
{
}

ModelPerformanceConfiguration::ModelPerformanceConfiguration(JsonView jsonValue)
  : ModelPerformanceConfiguration()
{
  *this = jsonValue;
}

ModelPerformanceConfiguration& ModelPerformanceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("performanceConfig"))
  {
    m_performanceConfig = jsonValue.GetObject("performanceConfig");

    m_performanceConfigHasBeenSet = true;
  }

  return *this;
}

JsonValue ModelPerformanceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_performanceConfigHasBeenSet)
  {
   payload.WithObject("performanceConfig", m_performanceConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
