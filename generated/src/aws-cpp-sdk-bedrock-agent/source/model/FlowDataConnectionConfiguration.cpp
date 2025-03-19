/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/FlowDataConnectionConfiguration.h>
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

FlowDataConnectionConfiguration::FlowDataConnectionConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

FlowDataConnectionConfiguration& FlowDataConnectionConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("sourceOutput"))
  {
    m_sourceOutput = jsonValue.GetString("sourceOutput");
    m_sourceOutputHasBeenSet = true;
  }
  if(jsonValue.ValueExists("targetInput"))
  {
    m_targetInput = jsonValue.GetString("targetInput");
    m_targetInputHasBeenSet = true;
  }
  return *this;
}

JsonValue FlowDataConnectionConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_sourceOutputHasBeenSet)
  {
   payload.WithString("sourceOutput", m_sourceOutput);

  }

  if(m_targetInputHasBeenSet)
  {
   payload.WithString("targetInput", m_targetInput);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
