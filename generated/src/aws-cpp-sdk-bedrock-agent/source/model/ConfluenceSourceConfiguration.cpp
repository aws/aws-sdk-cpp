/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/bedrock-agent/model/ConfluenceSourceConfiguration.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace BedrockAgent
{
namespace Model
{

ConfluenceSourceConfiguration::ConfluenceSourceConfiguration(JsonView jsonValue)
{
  *this = jsonValue;
}

ConfluenceSourceConfiguration& ConfluenceSourceConfiguration::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("hostUrl"))
  {
    m_hostUrl = jsonValue.GetString("hostUrl");
    m_hostUrlHasBeenSet = true;
  }
  if(jsonValue.ValueExists("hostType"))
  {
    m_hostType = ConfluenceHostTypeMapper::GetConfluenceHostTypeForName(jsonValue.GetString("hostType"));
    m_hostTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authType"))
  {
    m_authType = ConfluenceAuthTypeMapper::GetConfluenceAuthTypeForName(jsonValue.GetString("authType"));
    m_authTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("credentialsSecretArn"))
  {
    m_credentialsSecretArn = jsonValue.GetString("credentialsSecretArn");
    m_credentialsSecretArnHasBeenSet = true;
  }
  return *this;
}

JsonValue ConfluenceSourceConfiguration::Jsonize() const
{
  JsonValue payload;

  if(m_hostUrlHasBeenSet)
  {
   payload.WithString("hostUrl", m_hostUrl);

  }

  if(m_hostTypeHasBeenSet)
  {
   payload.WithString("hostType", ConfluenceHostTypeMapper::GetNameForConfluenceHostType(m_hostType));
  }

  if(m_authTypeHasBeenSet)
  {
   payload.WithString("authType", ConfluenceAuthTypeMapper::GetNameForConfluenceAuthType(m_authType));
  }

  if(m_credentialsSecretArnHasBeenSet)
  {
   payload.WithString("credentialsSecretArn", m_credentialsSecretArn);

  }

  return payload;
}

} // namespace Model
} // namespace BedrockAgent
} // namespace Aws
