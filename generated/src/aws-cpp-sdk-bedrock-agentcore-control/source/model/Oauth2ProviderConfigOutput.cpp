/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Oauth2ProviderConfigOutput.h>
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

Oauth2ProviderConfigOutput::Oauth2ProviderConfigOutput(JsonView jsonValue)
{
  *this = jsonValue;
}

Oauth2ProviderConfigOutput& Oauth2ProviderConfigOutput::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("customOauth2ProviderConfig"))
  {
    m_customOauth2ProviderConfig = jsonValue.GetObject("customOauth2ProviderConfig");
    m_customOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("googleOauth2ProviderConfig"))
  {
    m_googleOauth2ProviderConfig = jsonValue.GetObject("googleOauth2ProviderConfig");
    m_googleOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("githubOauth2ProviderConfig"))
  {
    m_githubOauth2ProviderConfig = jsonValue.GetObject("githubOauth2ProviderConfig");
    m_githubOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slackOauth2ProviderConfig"))
  {
    m_slackOauth2ProviderConfig = jsonValue.GetObject("slackOauth2ProviderConfig");
    m_slackOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("salesforceOauth2ProviderConfig"))
  {
    m_salesforceOauth2ProviderConfig = jsonValue.GetObject("salesforceOauth2ProviderConfig");
    m_salesforceOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("microsoftOauth2ProviderConfig"))
  {
    m_microsoftOauth2ProviderConfig = jsonValue.GetObject("microsoftOauth2ProviderConfig");
    m_microsoftOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("atlassianOauth2ProviderConfig"))
  {
    m_atlassianOauth2ProviderConfig = jsonValue.GetObject("atlassianOauth2ProviderConfig");
    m_atlassianOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("linkedinOauth2ProviderConfig"))
  {
    m_linkedinOauth2ProviderConfig = jsonValue.GetObject("linkedinOauth2ProviderConfig");
    m_linkedinOauth2ProviderConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("includedOauth2ProviderConfig"))
  {
    m_includedOauth2ProviderConfig = jsonValue.GetObject("includedOauth2ProviderConfig");
    m_includedOauth2ProviderConfigHasBeenSet = true;
  }
  return *this;
}

JsonValue Oauth2ProviderConfigOutput::Jsonize() const
{
  JsonValue payload;

  if(m_customOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("customOauth2ProviderConfig", m_customOauth2ProviderConfig.Jsonize());

  }

  if(m_googleOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("googleOauth2ProviderConfig", m_googleOauth2ProviderConfig.Jsonize());

  }

  if(m_githubOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("githubOauth2ProviderConfig", m_githubOauth2ProviderConfig.Jsonize());

  }

  if(m_slackOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("slackOauth2ProviderConfig", m_slackOauth2ProviderConfig.Jsonize());

  }

  if(m_salesforceOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("salesforceOauth2ProviderConfig", m_salesforceOauth2ProviderConfig.Jsonize());

  }

  if(m_microsoftOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("microsoftOauth2ProviderConfig", m_microsoftOauth2ProviderConfig.Jsonize());

  }

  if(m_atlassianOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("atlassianOauth2ProviderConfig", m_atlassianOauth2ProviderConfig.Jsonize());

  }

  if(m_linkedinOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("linkedinOauth2ProviderConfig", m_linkedinOauth2ProviderConfig.Jsonize());

  }

  if(m_includedOauth2ProviderConfigHasBeenSet)
  {
   payload.WithObject("includedOauth2ProviderConfig", m_includedOauth2ProviderConfig.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
