/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agentcore-control/model/Oauth2Discovery.h>
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

Oauth2Discovery::Oauth2Discovery(JsonView jsonValue)
{
  *this = jsonValue;
}

Oauth2Discovery& Oauth2Discovery::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("discoveryUrl"))
  {
    m_discoveryUrl = jsonValue.GetString("discoveryUrl");
    m_discoveryUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationServerMetadata"))
  {
    m_authorizationServerMetadata = jsonValue.GetObject("authorizationServerMetadata");
    m_authorizationServerMetadataHasBeenSet = true;
  }
  return *this;
}

JsonValue Oauth2Discovery::Jsonize() const
{
  JsonValue payload;

  if(m_discoveryUrlHasBeenSet)
  {
   payload.WithString("discoveryUrl", m_discoveryUrl);

  }

  if(m_authorizationServerMetadataHasBeenSet)
  {
   payload.WithObject("authorizationServerMetadata", m_authorizationServerMetadata.Jsonize());

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgentCoreControl
} // namespace Aws
