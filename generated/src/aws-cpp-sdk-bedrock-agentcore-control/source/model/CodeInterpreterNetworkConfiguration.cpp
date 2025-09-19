/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CodeInterpreterNetworkConfiguration.h>
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

CodeInterpreterNetworkConfiguration::CodeInterpreterNetworkConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CodeInterpreterNetworkConfiguration& CodeInterpreterNetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkMode"))
  {
    m_networkMode = CodeInterpreterNetworkModeMapper::GetCodeInterpreterNetworkModeForName(jsonValue.GetString("networkMode"));
    m_networkModeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vpcConfig"))
  {
    m_vpcConfig = jsonValue.GetObject("vpcConfig");
    m_vpcConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue CodeInterpreterNetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_networkModeHasBeenSet)
  {
   payload.WithString("networkMode", CodeInterpreterNetworkModeMapper::GetNameForCodeInterpreterNetworkMode(m_networkMode));
  }

  if(m_vpcConfigHasBeenSet)
  {
   payload.WithObject("vpcConfig", m_vpcConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
