/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/StrategyConfiguration.h>
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

StrategyConfiguration::StrategyConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

StrategyConfiguration& StrategyConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("type"))
  {
    m_type = OverrideTypeMapper::GetOverrideTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
  }
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
  return *this;
}

JsonValue StrategyConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_typeHasBeenSet)
  {
   payload.WithString("type", OverrideTypeMapper::GetNameForOverrideType(m_type));
  }

  if(m_extractionHasBeenSet)
  {
   payload.WithObject("extraction", m_extraction.Jsonize());

  }

  if(m_consolidationHasBeenSet)
  {
   payload.WithObject("consolidation", m_consolidation.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
