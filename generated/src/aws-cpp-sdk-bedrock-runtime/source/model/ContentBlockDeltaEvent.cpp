/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-runtime/model/ContentBlockDeltaEvent.h>
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

ContentBlockDeltaEvent::ContentBlockDeltaEvent(JsonView jsonValue)
{
  *this = jsonValue;
}

ContentBlockDeltaEvent& ContentBlockDeltaEvent::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("delta"))
  {
    m_delta = jsonValue.GetObject("delta");
    m_deltaHasBeenSet = true;
  }
  if(jsonValue.ValueExists("contentBlockIndex"))
  {
    m_contentBlockIndex = jsonValue.GetInteger("contentBlockIndex");
    m_contentBlockIndexHasBeenSet = true;
  }
  return *this;
}

JsonValue ContentBlockDeltaEvent::Jsonize() const
{
  JsonValue payload;

  if(m_deltaHasBeenSet)
  {
   payload.WithObject("delta", m_delta.Jsonize());

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
