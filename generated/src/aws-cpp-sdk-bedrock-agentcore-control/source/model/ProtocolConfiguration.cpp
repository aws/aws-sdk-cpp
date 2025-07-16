/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ProtocolConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgentCoreControl
{
namespace Model
{

ProtocolConfiguration::ProtocolConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ProtocolConfiguration& ProtocolConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("serverProtocol"))
  {
    m_serverProtocol = ServerProtocolMapper::GetServerProtocolForName(jsonValue.GetString("serverProtocol"));
    m_serverProtocolHasBeenSet = true;
  }
  return *this;
}

JsonValue ProtocolConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_serverProtocolHasBeenSet)
  {
   payload.WithString("serverProtocol", ServerProtocolMapper::GetNameForServerProtocol(m_serverProtocol));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
