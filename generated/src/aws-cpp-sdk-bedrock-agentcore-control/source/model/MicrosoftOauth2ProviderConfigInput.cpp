/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/MicrosoftOauth2ProviderConfigInput.h>
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

MicrosoftOauth2ProviderConfigInput::MicrosoftOauth2ProviderConfigInput(JsonView jsonValue)
{
  *this = jsonValue;
}

MicrosoftOauth2ProviderConfigInput& MicrosoftOauth2ProviderConfigInput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientSecret"))
  {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  return *this;
}

JsonValue MicrosoftOauth2ProviderConfigInput::Jsonize() const
{
  JsonValue payload;

  if(m_clientIdHasBeenSet)
  {
   payload.WithString("clientId", m_clientId);

  }

  if(m_clientSecretHasBeenSet)
  {
   payload.WithString("clientSecret", m_clientSecret);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
