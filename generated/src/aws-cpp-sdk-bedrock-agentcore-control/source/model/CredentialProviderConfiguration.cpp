/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/CredentialProviderConfiguration.h>
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

CredentialProviderConfiguration::CredentialProviderConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

CredentialProviderConfiguration& CredentialProviderConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("credentialProviderType"))
  {
    m_credentialProviderType = CredentialProviderTypeMapper::GetCredentialProviderTypeForName(jsonValue.GetString("credentialProviderType"));
    m_credentialProviderTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialProvider"))
  {
    m_credentialProvider = jsonValue.GetObject("credentialProvider");
    m_credentialProviderHasBeenSet = true;
  }
  return *this;
}

JsonValue CredentialProviderConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_credentialProviderTypeHasBeenSet)
  {
   payload.WithString("credentialProviderType", CredentialProviderTypeMapper::GetNameForCredentialProviderType(m_credentialProviderType));
  }

  if(m_credentialProviderHasBeenSet)
  {
   payload.WithObject("credentialProvider", m_credentialProvider.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
