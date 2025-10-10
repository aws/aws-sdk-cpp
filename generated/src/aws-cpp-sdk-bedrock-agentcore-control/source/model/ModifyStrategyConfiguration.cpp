/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ModifyStrategyConfiguration.h>
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

ModifyStrategyConfiguration::ModifyStrategyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ModifyStrategyConfiguration& ModifyStrategyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("extraction"))
  {
    m_extraction = jsonValue.GetObject("extraction");
    m_extractionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("consolidation"))
  {
    m_consolidation = jsonValue.GetObject("consolidation");
    m_consolidationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("selfManagedConfiguration"))
  {
    m_selfManagedConfiguration = jsonValue.GetObject("selfManagedConfiguration");
    m_selfManagedConfigurationHasBeenSet = true;
  }
  return *this;
}

JsonValue ModifyStrategyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_extractionHasBeenSet)
  {
   payload.WithObject("extraction", m_extraction.Jsonize());

  }

  if(m_consolidationHasBeenSet)
  {
   payload.WithObject("consolidation", m_consolidation.Jsonize());

  }

  if(m_selfManagedConfigurationHasBeenSet)
  {
   payload.WithObject("selfManagedConfiguration", m_selfManagedConfiguration.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
