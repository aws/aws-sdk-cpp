/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent-runtime/model/Metadata.h>
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

Metadata::Metadata() : 
    m_usageHasBeenSet(false)
{
}

Metadata::Metadata(JsonView jsonValue)
  : Metadata()
{
  *this = jsonValue;
}

Metadata& Metadata::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("usage"))
  {
    m_usage = jsonValue.GetObject("usage");

    m_usageHasBeenSet = true;
  }

  return *this;
}

JsonValue Metadata::Jsonize() const
{
  JsonValue payload;

  if(m_usageHasBeenSet)
  {
   payload.WithObject("usage", m_usage.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentRuntime
} // namespace Aws
