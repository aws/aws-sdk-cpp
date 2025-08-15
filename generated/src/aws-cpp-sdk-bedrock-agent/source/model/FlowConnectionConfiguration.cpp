/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowConnectionConfiguration.h>
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

FlowConnectionConfiguration::FlowConnectionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowConnectionConfiguration& FlowConnectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("data"))
  {
    m_data = jsonValue.GetObject("data");
    m_dataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("conditional"))
  {
    m_conditional = jsonValue.GetObject("conditional");
    m_conditionalHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowConnectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_dataHasBeenSet)
  {
   payload.WithObject("data", m_data.Jsonize());

  }

  if(m_conditionalHasBeenSet)
  {
   payload.WithObject("conditional", m_conditional.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
