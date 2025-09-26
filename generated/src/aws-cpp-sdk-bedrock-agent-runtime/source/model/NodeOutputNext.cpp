/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/NodeOutputNext.h>
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

NodeOutputNext::NodeOutputNext(JsonView jsonValue)
{
  *this = jsonValue;
}

NodeOutputNext& NodeOutputNext::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("nodeName"))
  {
    m_nodeName = jsonValue.GetString("nodeName");
    m_nodeNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("inputFieldName"))
  {
    m_inputFieldName = jsonValue.GetString("inputFieldName");
    m_inputFieldNameHasBeenSet = true;
  }
  return *this;
}

JsonValue NodeOutputNext::Jsonize() const
{
  JsonValue payload;

  if(m_nodeNameHasBeenSet)
  {
   payload.WithString("nodeName", m_nodeName);

  }

  if(m_inputFieldNameHasBeenSet)
  {
   payload.WithString("inputFieldName", m_inputFieldName);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
