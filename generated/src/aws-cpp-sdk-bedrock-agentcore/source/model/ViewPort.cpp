/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/ViewPort.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCore
{
namespace Model
{

ViewPort::ViewPort(JsonView jsonValue)
{
  *this = jsonValue;
}

ViewPort& ViewPort::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("width"))
  {
    m_width = jsonValue.GetInteger("width");
    m_widthHasBeenSet = true;
  }
  if(jsonValue.ValueExists("height"))
  {
    m_height = jsonValue.GetInteger("height");
    m_heightHasBeenSet = true;
  }
  return *this;
}

JsonValue ViewPort::Jsonize() const
{
  JsonValue payload;

  if(m_widthHasBeenSet)
  {
   payload.WithInteger("width", m_width);

  }

  if(m_heightHasBeenSet)
  {
   payload.WithInteger("height", m_height);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
