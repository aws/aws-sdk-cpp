/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore/model/LiveViewStream.h>
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

LiveViewStream::LiveViewStream(JsonView jsonValue)
{
  *this = jsonValue;
}

LiveViewStream& LiveViewStream::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("streamEndpoint"))
  {
    m_streamEndpoint = jsonValue.GetString("streamEndpoint");
    m_streamEndpointHasBeenSet = true;
  }
  return *this;
}

JsonValue LiveViewStream::Jsonize() const
{
  JsonValue payload;

  if(m_streamEndpointHasBeenSet)
  {
   payload.WithString("streamEndpoint", m_streamEndpoint);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCore
} // namespace Aws
