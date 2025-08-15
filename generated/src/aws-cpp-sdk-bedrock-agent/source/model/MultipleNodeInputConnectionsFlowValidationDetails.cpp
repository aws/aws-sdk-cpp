/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/MultipleNodeInputConnectionsFlowValidationDetails.h>
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

MultipleNodeInputConnectionsFlowValidationDetails::MultipleNodeInputConnectionsFlowValidationDetails(JsonView jsonValue)
{
  *this = jsonValue;
}

MultipleNodeInputConnectionsFlowValidationDetails& MultipleNodeInputConnectionsFlowValidationDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("node"))
  {
    m_node = jsonValue.GetString("node");
    m_nodeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("input"))
  {
    m_input = jsonValue.GetString("input");
    m_inputHasBeenSet = true;
  }
  return *this;
}

JsonValue MultipleNodeInputConnectionsFlowValidationDetails::Jsonize() const
{
  JsonValue payload;

  if(m_nodeHasBeenSet)
  {
   payload.WithString("node", m_node);

  }

  if(m_inputHasBeenSet)
  {
   payload.WithString("input", m_input);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
