/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/NetworkConfiguration.h>
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

NetworkConfiguration::NetworkConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

NetworkConfiguration& NetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkMode"))
  {
    m_networkMode = NetworkModeMapper::GetNetworkModeForName(jsonValue.GetString("networkMode"));
    m_networkModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkModeConfig"))
  {
    m_networkModeConfig = jsonValue.GetObject("networkModeConfig");
    m_networkModeConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue NetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_networkModeHasBeenSet)
  {
   payload.WithString("networkMode", NetworkModeMapper::GetNameForNetworkMode(m_networkMode));
  }

  if(m_networkModeConfigHasBeenSet)
  {
   payload.WithObject("networkModeConfig", m_networkModeConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
