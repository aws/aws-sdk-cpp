/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/BrowserNetworkConfiguration.h>
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

BrowserNetworkConfiguration::BrowserNetworkConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

BrowserNetworkConfiguration& BrowserNetworkConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("networkMode"))
  {
    m_networkMode = BrowserNetworkModeMapper::GetBrowserNetworkModeForName(jsonValue.GetString("networkMode"));
    m_networkModeHasBeenSet = true;
  }
  return *this;
}

JsonValue BrowserNetworkConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_networkModeHasBeenSet)
  {
   payload.WithString("networkMode", BrowserNetworkModeMapper::GetNameForBrowserNetworkMode(m_networkMode));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
