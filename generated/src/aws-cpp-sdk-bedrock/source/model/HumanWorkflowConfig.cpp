/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock/model/HumanWorkflowConfig.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace Bedrock
{
namespace Model
{

HumanWorkflowConfig::HumanWorkflowConfig(JsonView jsonValue)
{
  *this = jsonValue;
}

HumanWorkflowConfig& HumanWorkflowConfig::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("flowDefinitionArn"))
  {
    m_flowDefinitionArn = jsonValue.GetString("flowDefinitionArn");
    m_flowDefinitionArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("instructions"))
  {
    m_instructions = jsonValue.GetString("instructions");
    m_instructionsHasBeenSet = true;
  }
  return *this;
}

JsonValue HumanWorkflowConfig::Jsonize() const
{
  JsonValue payload;

  if(m_flowDefinitionArnHasBeenSet)
  {
   payload.WithString("flowDefinitionArn", m_flowDefinitionArn);

  }

  if(m_instructionsHasBeenSet)
  {
   payload.WithString("instructions", m_instructions);

  }

  return payload;
}

} // namespace Model
} // namespace Bedrock
} // namespace Aws
