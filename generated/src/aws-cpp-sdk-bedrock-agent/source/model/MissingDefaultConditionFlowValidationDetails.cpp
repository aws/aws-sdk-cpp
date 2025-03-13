/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MissingDefaultConditionFlowValidationDetails.h>
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

MissingDefaultConditionFlowValidationDetails::MissingDefaultConditionFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MissingDefaultConditionFlowValidationDetails& MissingDefaultConditionFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  return *this;
}

JsonValue MissingDefaultConditionFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
