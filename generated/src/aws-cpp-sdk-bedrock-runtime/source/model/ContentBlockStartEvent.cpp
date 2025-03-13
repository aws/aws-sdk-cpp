/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ContentBlockStartEvent.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockRuntime
{
namespace Model
{

ContentBlockStartEvent::ContentBlockStartEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlockStartEvent& ContentBlockStartEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("start"))
  {
    m_start = jsonValue.GetObject("start");
    m_startHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentBlockIndex"))
  {
    m_contentBlockIndex = jsonValue.GetInteger("contentBlockIndex");
    m_contentBlockIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlockStartEvent::Jsonize() const
{
  JsonValue payload;

  if(m_startHasBeenSet)
  {
   payload.WithObject("start", m_start.Jsonize());

  }

  if(m_contentBlockIndexHasBeenSet)
  {
   payload.WithInteger("contentBlockIndex", m_contentBlockIndex);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockRuntime
} // namespace Aws
