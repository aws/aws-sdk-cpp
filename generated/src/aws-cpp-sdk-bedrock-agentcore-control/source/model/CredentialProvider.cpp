/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialProvider.h>
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

CredentialProvider::CredentialProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

CredentialProvider& CredentialProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("oauthCredentialProvider"))
  {
    m_oauthCredentialProvider = jsonValue.GetObject("oauthCredentialProvider");
    m_oauthCredentialProviderHasBeenSet = true;
  }
  if(jsonValue.ValueExists("apiKeyCredentialProvider"))
  {
    m_apiKeyCredentialProvider = jsonValue.GetObject("apiKeyCredentialProvider");
    m_apiKeyCredentialProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialProvider::Jsonize() const
{
  JsonValue payload;

  if(m_oauthCredentialProviderHasBeenSet)
  {
   payload.WithObject("oauthCredentialProvider", m_oauthCredentialProvider.Jsonize());

  }

  if(m_apiKeyCredentialProviderHasBeenSet)
  {
   payload.WithObject("apiKeyCredentialProvider", m_apiKeyCredentialProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
