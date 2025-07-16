/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/GithubOauth2ProviderConfigInput.h>
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

GithubOauth2ProviderConfigInput::GithubOauth2ProviderConfigInput(JsonView jsonValue)
{
  *this = jsonValue;
}

GithubOauth2ProviderConfigInput& GithubOauth2ProviderConfigInput::operator =(JsonView jsonValue)
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

JsonValue GithubOauth2ProviderConfigInput::Jsonize() const
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
