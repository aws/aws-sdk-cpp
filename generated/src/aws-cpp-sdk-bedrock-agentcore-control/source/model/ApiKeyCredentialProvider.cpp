/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/ApiKeyCredentialProvider.h>
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

ApiKeyCredentialProvider::ApiKeyCredentialProvider(JsonView jsonValue)
{
  *this = jsonValue;
}

ApiKeyCredentialProvider& ApiKeyCredentialProvider::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("providerArn"))
  {
    m_providerArn = jsonValue.GetString("providerArn");
    m_providerArnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialParameterName"))
  {
    m_credentialParameterName = jsonValue.GetString("credentialParameterName");
    m_credentialParameterNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialPrefix"))
  {
    m_credentialPrefix = jsonValue.GetString("credentialPrefix");
    m_credentialPrefixHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialLocation"))
  {
    m_credentialLocation = ApiKeyCredentialLocationMapper::GetApiKeyCredentialLocationForName(jsonValue.GetString("credentialLocation"));
    m_credentialLocationHasBeenSet = true;
  }
  return *this;
}

JsonValue ApiKeyCredentialProvider::Jsonize() const
{
  JsonValue payload;

  if(m_providerArnHasBeenSet)
  {
   payload.WithString("providerArn", m_providerArn);

  }

  if(m_credentialParameterNameHasBeenSet)
  {
   payload.WithString("credentialParameterName", m_credentialParameterName);

  }

  if(m_credentialPrefixHasBeenSet)
  {
   payload.WithString("credentialPrefix", m_credentialPrefix);

  }

  if(m_credentialLocationHasBeenSet)
  {
   payload.WithString("credentialLocation", ApiKeyCredentialLocationMapper::GetNameForApiKeyCredentialLocation(m_credentialLocation));
  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
