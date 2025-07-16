/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/SalesforceOauth2ProviderConfigOutput.h>
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

SalesforceOauth2ProviderConfigOutput::SalesforceOauth2ProviderConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

SalesforceOauth2ProviderConfigOutput& SalesforceOauth2ProviderConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oauthDiscovery"))
  {
    m_oauthDiscovery = jsonValue.GetObject("oauthDiscovery");
    m_oauthDiscoveryHasBeenSet = true;
  }
  return *this;
}

JsonValue SalesforceOauth2ProviderConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_oauthDiscoveryHasBeenSet)
  {
   payload.WithObject("oauthDiscovery", m_oauthDiscovery.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
